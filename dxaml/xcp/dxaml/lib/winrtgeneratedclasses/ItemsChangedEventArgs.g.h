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

#include "GeneratorPosition.g.h"

#define __ItemsChangedEventArgs_GUID "d64e4fc4-086a-44e3-a6a6-e6cd7cdcd07b"

namespace DirectUI
{
    class ItemsChangedEventArgs;

    class __declspec(novtable) __declspec(uuid(__ItemsChangedEventArgs_GUID)) ItemsChangedEventArgs:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs");

        BEGIN_INTERFACE_MAP(ItemsChangedEventArgs, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(ItemsChangedEventArgs, ABI::Microsoft::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)
        END_INTERFACE_MAP(ItemsChangedEventArgs, ctl::WeakReferenceSource)

    public:
        ItemsChangedEventArgs();
        ~ItemsChangedEventArgs() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_Action)(_Out_ INT* pValue) override;
        _Check_return_ HRESULT put_Action(_In_ INT value);
        IFACEMETHOD(get_ItemCount)(_Out_ INT* pValue) override;
        _Check_return_ HRESULT put_ItemCount(_In_ INT value);
        IFACEMETHOD(get_ItemUICount)(_Out_ INT* pValue) override;
        _Check_return_ HRESULT put_ItemUICount(_In_ INT value);
        IFACEMETHOD(get_OldPosition)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition* pValue) override;
        _Check_return_ HRESULT put_OldPosition(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition value);
        IFACEMETHOD(get_Position)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition* pValue) override;
        _Check_return_ HRESULT put_Position(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        INT m_action;
        INT m_itemCount;
        INT m_itemUICount;
        ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition m_oldPosition;
        ABI::Microsoft::UI::Xaml::Controls::Primitives::GeneratorPosition m_position;
    };
}


