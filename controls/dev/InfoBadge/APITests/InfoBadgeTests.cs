﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using System;
using Common;
using System.Collections.Generic;
using Windows.Foundation;
using Microsoft.UI.Xaml.Controls;
using MUXControlsTestApp.Utilities;
using Microsoft.UI.Xaml.Controls;
using SymbolIconSource = Microsoft.UI.Xaml.Controls.SymbolIconSource;
using PathIconSource = Microsoft.UI.Xaml.Controls.PathIconSource;
using BitmapIconSource = Microsoft.UI.Xaml.Controls.BitmapIconSource;
using FontIconSource = Microsoft.UI.Xaml.Controls.FontIconSource;
using Microsoft.UI.Xaml.Media;
using Microsoft.UI.Xaml.Media.Imaging;
using Microsoft.UI.Xaml.Controls.AnimatedVisuals;
using System.Runtime.InteropServices;

using WEX.TestExecution;
using WEX.TestExecution.Markup;
using WEX.Logging.Interop;

namespace Microsoft.UI.Xaml.Tests.MUXControls.ApiTests
{

    [TestClass]
    public class InfoBadgeTests : ApiTestBase
    {
        [TestMethod]
        public void InfoBadgeDisplayKindTest()
        {
            InfoBadge infoBadge = null;
            SymbolIconSource symbolIconSource = null;
            RunOnUIThread.Execute(() =>
            {
                infoBadge = new InfoBadge();
                symbolIconSource = new SymbolIconSource();
                symbolIconSource.Symbol = Symbol.Setting;

                Content = infoBadge;
                Content.UpdateLayout();
            });

            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                FrameworkElement textBlock = infoBadge.FindVisualChildByName("ValueTextBlock");
                Verify.IsNotNull(textBlock, "The underlying value text block could not be retrieved");

                FrameworkElement iconViewBox = infoBadge.FindVisualChildByName("IconPresenter");
                Verify.IsNotNull(textBlock, "The underlying icon presenter view box could not be retrieved");

                Verify.AreEqual(Visibility.Collapsed, textBlock.Visibility, "The value text block should be initally collapsed since the default value is -1");
                Verify.AreEqual(Visibility.Collapsed, iconViewBox.Visibility, "The icon presenter should be initally collapsed since the default value is null");

                infoBadge.IconSource = symbolIconSource;
                Content.UpdateLayout();

                Verify.AreEqual(Visibility.Collapsed, textBlock.Visibility, "The value text block should be initally collapsed since the default value is -1");
                Verify.AreEqual(Visibility.Visible, iconViewBox.Visibility, "The icon presenter should be visible since we've set the icon source property and value is -1");

                infoBadge.Value = 10;
                Content.UpdateLayout();

                Verify.AreEqual(Visibility.Visible, textBlock.Visibility, "The value text block should be visible since the value is set to 10");
                Verify.AreEqual(Visibility.Collapsed, iconViewBox.Visibility, "The icon presenter should be collapsed since we've set the icon source property but value is not -1");

                infoBadge.IconSource = null;
                Content.UpdateLayout();

                Verify.AreEqual(Visibility.Visible, textBlock.Visibility, "The value text block should be visible since the value is set to 10");
                Verify.AreEqual(Visibility.Collapsed, iconViewBox.Visibility, "The icon presenter should be collapsed since the icon source property is null");

                infoBadge.Value = -1;
                Content.UpdateLayout();

                Verify.AreEqual(Visibility.Collapsed, textBlock.Visibility, "The value text block should be collapsed since the value is set to -1");
                Verify.AreEqual(Visibility.Collapsed, iconViewBox.Visibility, "The icon presenter should be collapsed since the value is set to null");
            });
        }

        [TestMethod]
        public void InfoBadgeSupportsAllIconTypes()
        {
            InfoBadge infoBadge = null;
            SymbolIconSource symbolIconSource = null;
            PathIconSource pathIconSource = null;
            AnimatedIconSource animatedIconSource = null;
            BitmapIconSource bitmapIconSource = null;
            ImageIconSource imageIconSource = null;
            FontIconSource fontIconSource = null;

            RunOnUIThread.Execute(() =>
            {
                infoBadge = new InfoBadge();
                symbolIconSource = new SymbolIconSource();
                symbolIconSource.Symbol = Symbol.Setting;

                fontIconSource = new FontIconSource();
                fontIconSource.Glyph = "99+";
                fontIconSource.FontFamily = new FontFamily("XamlAutoFontFamily");

                bitmapIconSource = new BitmapIconSource();
                bitmapIconSource.ShowAsMonochrome = false;
                Uri bitmapUri = new Uri("ms-appx:/Assets/ingredient1.png");
                bitmapIconSource.UriSource = bitmapUri;

                imageIconSource = new ImageIconSource();
                var imageUri = new Uri("https://raw.githubusercontent.com/DiemenDesign/LibreICONS/master/svg-color/libre-camera-panorama.svg");
                imageIconSource.ImageSource = new SvgImageSource(imageUri);

                pathIconSource = new PathIconSource();
                var geometry = new RectangleGeometry();
                geometry.Rect = new Rect { Width = 5, Height = 2, X = 0, Y = 0 };
                pathIconSource.Data = geometry;

                animatedIconSource = new AnimatedIconSource();
                animatedIconSource.Source = new AnimatedSettingsVisualSource();

                Content = infoBadge;
                Content.UpdateLayout();
            });

            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                Log.Comment("Switch to Symbol Icon");
                infoBadge.IconSource = symbolIconSource;
                Content.UpdateLayout();

                Log.Comment("Switch to Path Icon");
                infoBadge.IconSource = pathIconSource;
                Content.UpdateLayout();

                Log.Comment("Switch to Font Icon");
                infoBadge.IconSource = fontIconSource;
                Content.UpdateLayout();

                Log.Comment("Switch to bitmap Icon");
                infoBadge.IconSource = bitmapIconSource;
                Content.UpdateLayout();

                Log.Comment("Switch to Image Icon");
                infoBadge.IconSource = imageIconSource;
                Content.UpdateLayout();

                Log.Comment("Switch to Animated Icon");
                infoBadge.IconSource = animatedIconSource;
                Content.UpdateLayout();
            });
        }

        [TestMethod]
        public void InfoBadgeValueLessThanNegativeOneCrashes()
        {
            InfoBadge infoBadge = null;
            RunOnUIThread.Execute(() =>
            {
                infoBadge = new InfoBadge();
                Content = infoBadge;
                Content.UpdateLayout();
            });

            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                Verify.Throws<Exception>(() => { infoBadge.Value = -10; });
            });
        }
    }
}
