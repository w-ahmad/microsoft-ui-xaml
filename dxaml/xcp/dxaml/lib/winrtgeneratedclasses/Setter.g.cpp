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

#include "Setter.g.h"
#include "TargetPropertyPath.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Setter::Setter()
{
}

DirectUI::Setter::~Setter()
{
}

HRESULT DirectUI::Setter::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Setter)))
    {
        *ppObject = static_cast<DirectUI::Setter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::ISetter)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::ISetter*>(this);
    }
    else
    {
        RRETURN(DirectUI::SetterBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Setter::get_Property(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<Setter*>(this)->get_PropertyImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::Setter::put_Property(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Setter*>(this)->put_PropertyImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::Setter::get_Target(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::ITargetPropertyPath** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Setter_Target, ppValue));
}
IFACEMETHODIMP DirectUI::Setter::put_Target(_In_opt_ ABI::Microsoft::UI::Xaml::ITargetPropertyPath* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Setter_Target, pValue));
}
IFACEMETHODIMP DirectUI::Setter::get_Value(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Setter_Value, ppValue));
}
IFACEMETHODIMP DirectUI::Setter::put_Value(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Setter_Value, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::SetterFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::ISetterFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::ISetterFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::SetterFactory::CreateInstance(_In_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pTargetProperty, _In_ IInspectable* pValue, _Outptr_ ABI::Microsoft::UI::Xaml::ISetter** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pTargetProperty, "targetProperty");
    ARG_NOTNULL(pValue, "value");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceImpl(pTargetProperty, pValue, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.




// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Setter()
    {
        RRETURN(ctl::ActivationFactoryCreator<SetterFactory>::CreateActivationFactory());
    }
}
