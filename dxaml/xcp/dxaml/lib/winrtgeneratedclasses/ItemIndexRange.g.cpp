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

#include "ItemIndexRange.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ItemIndexRangeGenerated::ItemIndexRangeGenerated(): m_firstIndex(), m_length()
{
}

DirectUI::ItemIndexRangeGenerated::~ItemIndexRangeGenerated()
{
}

HRESULT DirectUI::ItemIndexRangeGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ItemIndexRange)))
    {
        *ppObject = static_cast<DirectUI::ItemIndexRange*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IItemIndexRange)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IItemIndexRange*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ItemIndexRangeGenerated::get_FirstIndex(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(CValueBoxer::CopyValue(m_firstIndex, pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ItemIndexRangeGenerated::put_FirstIndex(_In_ INT value)
{
    HRESULT hr = S_OK;
    
    IFC(CValueBoxer::CopyValue(value, &m_firstIndex));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ItemIndexRangeGenerated::get_LastIndex(_Out_ INT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<ItemIndexRange*>(this)->get_LastIndexImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ItemIndexRangeGenerated::get_Length(_Out_ UINT* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(CValueBoxer::CopyValue(m_length, pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ItemIndexRangeGenerated::put_Length(_In_ UINT value)
{
    HRESULT hr = S_OK;
    
    IFC(CValueBoxer::CopyValue(value, &m_length));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.

HRESULT DirectUI::ItemIndexRangeFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::IItemIndexRangeFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::IItemIndexRangeFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::ItemIndexRange>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::ItemIndexRangeFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.
IFACEMETHODIMP DirectUI::ItemIndexRangeFactory::CreateInstance(_In_ INT firstIndex, _In_ UINT length, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::IItemIndexRange** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceImpl(firstIndex, length, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ItemIndexRange()
    {
        RRETURN(ctl::ActivationFactoryCreator<ItemIndexRangeFactory>::CreateActivationFactory());
    }
}
