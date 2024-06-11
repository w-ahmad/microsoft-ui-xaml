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


#define __MediaTransportControlsThumbnailRequestedEventArgs_GUID "86b3a048-0b08-43e6-877f-c58a29ba7d30"

namespace DirectUI
{
    class MediaTransportControlsThumbnailRequestedEventArgs;

    class __declspec(novtable) MediaTransportControlsThumbnailRequestedEventArgsGenerated :
        public ABI::Microsoft::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs,
        public DirectUI::EventArgs
    {
        friend class DirectUI::MediaTransportControlsThumbnailRequestedEventArgs;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.MediaTransportControlsThumbnailRequestedEventArgs");

        BEGIN_INTERFACE_MAP(MediaTransportControlsThumbnailRequestedEventArgsGenerated, DirectUI::EventArgs)
            INTERFACE_ENTRY(MediaTransportControlsThumbnailRequestedEventArgsGenerated, ABI::Microsoft::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)
        END_INTERFACE_MAP(MediaTransportControlsThumbnailRequestedEventArgsGenerated, DirectUI::EventArgs)

    public:
        MediaTransportControlsThumbnailRequestedEventArgsGenerated();
        ~MediaTransportControlsThumbnailRequestedEventArgsGenerated() override;

        // Properties.

        // Methods.
        IFACEMETHOD(SetThumbnailImage)(_In_ ABI::Windows::Storage::Streams::IInputStream* pSource) override;
        IFACEMETHOD(GetDeferral)(_Outptr_ ABI::Windows::Foundation::IDeferral** ppResult) override;

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "MediaTransportControlsThumbnailRequestedEventArgs_Partial.h"
