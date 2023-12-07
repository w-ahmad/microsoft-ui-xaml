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

#include "RadioButtonAutomationPeer.g.h"
#include "IRawElementProviderSimple.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::RadioButtonAutomationPeerGenerated::RadioButtonAutomationPeerGenerated()
{
}

DirectUI::RadioButtonAutomationPeerGenerated::~RadioButtonAutomationPeerGenerated()
{
}

HRESULT DirectUI::RadioButtonAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RadioButtonAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::RadioButtonAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionItemProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionItemProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::ToggleButtonAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerGenerated::get_IsSelected(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<RadioButtonAutomationPeer*>(this)->get_IsSelectedImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerGenerated::get_SelectionContainer(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<RadioButtonAutomationPeer*>(this)->get_SelectionContainerImpl(ppValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerGenerated::AddToSelection()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_AddToSelection", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RadioButtonAutomationPeer*>(this)->AddToSelectionImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_AddToSelection", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerGenerated::RemoveFromSelection()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_RemoveFromSelection", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RadioButtonAutomationPeer*>(this)->RemoveFromSelectionImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_RemoveFromSelection", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerGenerated::Select()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_Select", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RadioButtonAutomationPeer*>(this)->SelectImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RadioButtonAutomationPeer_Select", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::RadioButtonAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::RadioButtonAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::IRadioButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithOwnerImpl(pOwner, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RadioButtonAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<RadioButtonAutomationPeerFactory>::CreateActivationFactory());
    }
}
