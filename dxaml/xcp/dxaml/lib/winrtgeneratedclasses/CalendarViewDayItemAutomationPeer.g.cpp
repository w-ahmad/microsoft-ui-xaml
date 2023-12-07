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

#include "CalendarViewDayItemAutomationPeer.g.h"
#include "IRawElementProviderSimple.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::CalendarViewDayItemAutomationPeerGenerated::CalendarViewDayItemAutomationPeerGenerated()
{
}

DirectUI::CalendarViewDayItemAutomationPeerGenerated::~CalendarViewDayItemAutomationPeerGenerated()
{
}

HRESULT DirectUI::CalendarViewDayItemAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarViewDayItemAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::CalendarViewDayItemAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionItemProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionItemProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ITableItemProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ITableItemProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::CalendarViewBaseItemAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::get_IsSelected(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->get_IsSelectedImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::get_SelectionContainer(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->get_SelectionContainerImpl(ppValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::AddToSelection()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_AddToSelection", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->AddToSelectionImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_AddToSelection", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::GetColumnHeaderItems(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_GetColumnHeaderItems", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->GetColumnHeaderItemsImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_GetColumnHeaderItems", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::GetRowHeaderItems(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_GetRowHeaderItems", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->GetRowHeaderItemsImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_GetRowHeaderItems", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::RemoveFromSelection()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_RemoveFromSelection", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->RemoveFromSelectionImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_RemoveFromSelection", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemAutomationPeerGenerated::Select()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_Select", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItemAutomationPeer*>(this)->SelectImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItemAutomationPeer_Select", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}
