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


#define __FocusedElementRemovedEventArgs_GUID "b70caa88-e72a-4cba-ad3d-aa79d0cada3e"

namespace DirectUI
{
    class FocusedElementRemovedEventArgs;

    class __declspec(novtable) __declspec(uuid(__FocusedElementRemovedEventArgs_GUID)) FocusedElementRemovedEventArgs :
        public ABI::Microsoft::UI::Xaml::Input::IFocusedElementRemovedEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Input.FocusedElementRemovedEventArgs");

        BEGIN_INTERFACE_MAP(FocusedElementRemovedEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(FocusedElementRemovedEventArgs, ABI::Microsoft::UI::Xaml::Input::IFocusedElementRemovedEventArgs)
        END_INTERFACE_MAP(FocusedElementRemovedEventArgs, DirectUI::EventArgs)

    public:
        FocusedElementRemovedEventArgs();
        ~FocusedElementRemovedEventArgs() override;

        // Properties.
        IFACEMETHOD(get_OldFocusedElement)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) override;
        IFACEMETHOD(get_NewFocusedElement)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) override;
        IFACEMETHOD(put_NewFocusedElement)(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue) override;

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}

