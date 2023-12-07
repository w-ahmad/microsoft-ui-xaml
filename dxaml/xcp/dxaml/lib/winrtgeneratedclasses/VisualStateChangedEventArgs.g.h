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

#include "VisualState.g.h"
#include "Control.g.h"

#define __VisualStateChangedEventArgs_GUID "c6885eb2-9995-40e7-b323-8c9422f8a52c"

namespace DirectUI
{
    class VisualStateChangedEventArgs;

    class __declspec(novtable) __declspec(uuid(__VisualStateChangedEventArgs_GUID)) VisualStateChangedEventArgs :
        public ABI::Microsoft::UI::Xaml::IVisualStateChangedEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.VisualStateChangedEventArgs");

        BEGIN_INTERFACE_MAP(VisualStateChangedEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(VisualStateChangedEventArgs, ABI::Microsoft::UI::Xaml::IVisualStateChangedEventArgs)
        END_INTERFACE_MAP(VisualStateChangedEventArgs, DirectUI::EventArgs)

    public:
        VisualStateChangedEventArgs();
        ~VisualStateChangedEventArgs() override;

        // Properties.
        IFACEMETHOD(get_OldState)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IVisualState** ppValue) override;
        IFACEMETHOD(put_OldState)(_In_opt_ ABI::Microsoft::UI::Xaml::IVisualState* pValue) override;
        IFACEMETHOD(get_NewState)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IVisualState** ppValue) override;
        IFACEMETHOD(put_NewState)(_In_opt_ ABI::Microsoft::UI::Xaml::IVisualState* pValue) override;
        IFACEMETHOD(get_Control)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IControl** ppValue) override;
        IFACEMETHOD(put_Control)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IControl* pValue) override;

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        CEventArgs* CreateCorePeer() override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


