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


#define __DatePickerSelectedValueChangedEventArgs_GUID "53a9634e-0f76-462b-87da-bfc35469e4e8"

namespace DirectUI
{
    class DatePickerSelectedValueChangedEventArgs;

    class __declspec(novtable) __declspec(uuid(__DatePickerSelectedValueChangedEventArgs_GUID)) DatePickerSelectedValueChangedEventArgs :
        public ABI::Microsoft::UI::Xaml::Controls::IDatePickerSelectedValueChangedEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.DatePickerSelectedValueChangedEventArgs");

        BEGIN_INTERFACE_MAP(DatePickerSelectedValueChangedEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(DatePickerSelectedValueChangedEventArgs, ABI::Microsoft::UI::Xaml::Controls::IDatePickerSelectedValueChangedEventArgs)
        END_INTERFACE_MAP(DatePickerSelectedValueChangedEventArgs, DirectUI::EventArgs)

    public:
        DatePickerSelectedValueChangedEventArgs();
        ~DatePickerSelectedValueChangedEventArgs() override;

        // Properties.
        IFACEMETHOD(get_OldDate)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue) override;
        _Check_return_ HRESULT put_OldDate(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue);
        IFACEMETHOD(get_NewDate)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue) override;
        _Check_return_ HRESULT put_NewDate(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        TrackerPtr<ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>> m_oldDate;
        TrackerPtr<ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>> m_newDate;
    };
}

