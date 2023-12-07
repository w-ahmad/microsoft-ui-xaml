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


#define __ContentDialogButtonClickDeferral_GUID "82669f0c-6c28-4bb4-98b5-34b4f9e15bde"

namespace DirectUI
{
    class ContentDialogButtonClickDeferral;

    class __declspec(novtable) ContentDialogButtonClickDeferralGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Controls::IContentDialogButtonClickDeferral
    {
        friend class DirectUI::ContentDialogButtonClickDeferral;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ContentDialogButtonClickDeferral");

        BEGIN_INTERFACE_MAP(ContentDialogButtonClickDeferralGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(ContentDialogButtonClickDeferralGenerated, ABI::Microsoft::UI::Xaml::Controls::IContentDialogButtonClickDeferral)
        END_INTERFACE_MAP(ContentDialogButtonClickDeferralGenerated, ctl::WeakReferenceSource)

    public:
        ContentDialogButtonClickDeferralGenerated();
        ~ContentDialogButtonClickDeferralGenerated() override;

        // Event source typedefs.


        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Complete)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ContentDialogButtonClickDeferral_Partial.h"

