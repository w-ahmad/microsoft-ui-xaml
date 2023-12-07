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

#include "CalendarViewDayItem.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::CalendarViewDayItemGenerated::CalendarViewDayItemGenerated()
{
}

DirectUI::CalendarViewDayItemGenerated::~CalendarViewDayItemGenerated()
{
}

HRESULT DirectUI::CalendarViewDayItemGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarViewDayItem)))
    {
        *ppObject = static_cast<DirectUI::CalendarViewDayItem*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItem)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItem*>(this);
    }
    else
    {
        RRETURN(DirectUI::CalendarViewBaseItem::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::CalendarViewDayItemGenerated::get_Date(_Out_ ABI::Windows::Foundation::DateTime* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarViewDayItem_Date, pValue));
}
_Check_return_ HRESULT DirectUI::CalendarViewDayItemGenerated::put_Date(_In_ ABI::Windows::Foundation::DateTime value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarViewDayItem_Date, value));
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemGenerated::get_IsBlackout(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarViewDayItem_IsBlackout, pValue));
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemGenerated::put_IsBlackout(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarViewDayItem_IsBlackout, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::CalendarViewDayItemGenerated::SetDensityColors(_In_opt_ ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Color>* pColors)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarViewDayItem_SetDensityColors", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarViewDayItem*>(this)->SetDensityColorsImpl(pColors));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarViewDayItem_SetDensityColors", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::CalendarViewDayItemFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::CalendarViewDayItemFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItem** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItem);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::CalendarViewDayItemFactory::get_IsBlackoutProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarViewDayItem_IsBlackout, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarViewDayItemFactory::get_DateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarViewDayItem_Date, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_CalendarViewDayItem()
    {
        RRETURN(ctl::ActivationFactoryCreator<CalendarViewDayItemFactory>::CreateActivationFactory());
    }
}
