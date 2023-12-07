// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "BitmapSource.g.h"

#define __BitmapImage_GUID "f9c9e87b-9ff5-47b3-b83d-f4248628a819"

namespace DirectUI
{
    class BitmapImage;

    class __declspec(novtable) BitmapImageGenerated:
        public DirectUI::BitmapSource
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage
    {
        friend class DirectUI::BitmapImage;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Imaging.BitmapImage");

        BEGIN_INTERFACE_MAP(BitmapImageGenerated, DirectUI::BitmapSource)
            INTERFACE_ENTRY(BitmapImageGenerated, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage)
        END_INTERFACE_MAP(BitmapImageGenerated, DirectUI::BitmapSource)

    public:
        BitmapImageGenerated();
        ~BitmapImageGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Microsoft::UI::Xaml::Media::Imaging::IDownloadProgressEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> DownloadProgressEventSourceType;
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IRoutedEventArgs> ImageOpenedEventSourceType;
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IExceptionRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IExceptionRoutedEventArgs> ImageFailedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapImage;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::BitmapImage;
        }

        // Properties.
        IFACEMETHOD(get_AutoPlay)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_AutoPlay)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_CreateOptions)(_Out_ ABI::Microsoft::UI::Xaml::Media::Imaging::BitmapCreateOptions* pValue) override;
        IFACEMETHOD(put_CreateOptions)(_In_ ABI::Microsoft::UI::Xaml::Media::Imaging::BitmapCreateOptions value) override;
        IFACEMETHOD(get_DecodePixelHeight)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DecodePixelHeight)(_In_ INT value) override;
        IFACEMETHOD(get_DecodePixelType)(_Out_ ABI::Microsoft::UI::Xaml::Media::Imaging::DecodePixelType* pValue) override;
        IFACEMETHOD(put_DecodePixelType)(_In_ ABI::Microsoft::UI::Xaml::Media::Imaging::DecodePixelType value) override;
        IFACEMETHOD(get_DecodePixelWidth)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DecodePixelWidth)(_In_ INT value) override;
        IFACEMETHOD(get_IsAnimatedBitmap)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_IsPlaying)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_UriSource)(_Outptr_result_maybenull_ ABI::Windows::Foundation::IUriRuntimeClass** ppValue) override;
        IFACEMETHOD(put_UriSource)(_In_opt_ ABI::Windows::Foundation::IUriRuntimeClass* pValue) override;

        // Events.
        _Check_return_ HRESULT GetDownloadProgressEventSourceNoRef(_Outptr_ DownloadProgressEventSourceType** ppEventSource);
        IFACEMETHOD(add_DownloadProgress)(_In_ ABI::Microsoft::UI::Xaml::Media::Imaging::IDownloadProgressEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_DownloadProgress)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetImageFailedEventSourceNoRef(_Outptr_ ImageFailedEventSourceType** ppEventSource);
        IFACEMETHOD(add_ImageFailed)(_In_ ABI::Microsoft::UI::Xaml::IExceptionRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_ImageFailed)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetImageOpenedEventSourceNoRef(_Outptr_ ImageOpenedEventSourceType** ppEventSource);
        IFACEMETHOD(add_ImageOpened)(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_ImageOpened)(_In_ EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(Play)() override;
        IFACEMETHOD(Stop)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "BitmapImage_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) BitmapImageFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImageFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImageStatics
    {
        BEGIN_INTERFACE_MAP(BitmapImageFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(BitmapImageFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImageFactory)
            INTERFACE_ENTRY(BitmapImageFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImageStatics)
        END_INTERFACE_MAP(BitmapImageFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithUriSource)(_In_ ABI::Windows::Foundation::IUriRuntimeClass* pUriSource, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_CreateOptionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_UriSourceProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DecodePixelWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DecodePixelHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DecodePixelTypeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsAnimatedBitmapProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsPlayingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_AutoPlayProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapImage;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithUriSourceImpl(_In_ ABI::Windows::Foundation::IUriRuntimeClass* pUriSource, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
