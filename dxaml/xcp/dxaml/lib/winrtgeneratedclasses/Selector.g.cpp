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

#include "Selector.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SelectorGenerated::SelectorGenerated()
{
}

DirectUI::SelectorGenerated::~SelectorGenerated()
{
}

HRESULT DirectUI::SelectorGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Selector)))
    {
        *ppObject = static_cast<DirectUI::Selector*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelector)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelector*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ISupportInitialize)))
    {
        *ppObject = static_cast<DirectUI::ISupportInitialize*>(this);
    }
    else
    {
        RRETURN(DirectUI::ItemsControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::SelectorGenerated::get_IsSelectionActive(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_IsSelectionActive, pValue));
}
_Check_return_ HRESULT DirectUI::SelectorGenerated::put_IsSelectionActive(_In_ BOOLEAN value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_IsSelectionActive, value));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::get_IsSynchronizedWithCurrentItem(_Out_ ABI::Windows::Foundation::IReference<bool>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_IsSynchronizedWithCurrentItem, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::put_IsSynchronizedWithCurrentItem(_In_ ABI::Windows::Foundation::IReference<bool>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_IsSynchronizedWithCurrentItem, pValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::get_SelectedIndex(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedIndex, pValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::put_SelectedIndex(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedIndex, value));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::get_SelectedItem(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedItem, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::put_SelectedItem(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedItem, pValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::get_SelectedValue(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedValue, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::put_SelectedValue(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedValue, pValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::get_SelectedValuePath(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedValuePath, pValue));
}
IFACEMETHODIMP DirectUI::SelectorGenerated::put_SelectedValuePath(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Selector_SelectedValuePath, value));
}

// Events.
_Check_return_ HRESULT DirectUI::SelectorGenerated::GetSelectionChangedEventSourceNoRef(_Outptr_ SelectionChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::Selector_SelectionChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<SelectionChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::Selector_SelectionChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::Selector_SelectionChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SelectorGenerated::add_SelectionChanged(_In_ ABI::Microsoft::UI::Xaml::Controls::ISelectionChangedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    SelectionChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectionChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SelectorGenerated::remove_SelectionChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    SelectionChangedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Controls::ISelectionChangedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Controls::ISelectionChangedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectionChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::Selector_SelectionChanged));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::SelectorGenerated::BeginInit()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Selector_BeginInit", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Selector*>(this)->BeginInitImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Selector_BeginInit", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SelectorGenerated::EndInit(_In_opt_ DirectUI::XamlServiceProviderContext* pContext)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Selector_EndInit", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Selector*>(this)->EndInitImpl(pContext));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Selector_EndInit", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::SelectorGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::Selector_SelectionChanged:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISelectionChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                SelectionChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSelectionChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ItemsControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::SelectorGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::Selector_SelectionChanged:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISelectionChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                SelectionChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSelectionChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ItemsControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::SelectorFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelectorFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelectorFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelectorStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelectorStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::SelectorFactory::get_SelectedIndexProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Selector_SelectedIndex, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorFactory::get_SelectedItemProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Selector_SelectedItem, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorFactory::get_SelectedValueProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Selector_SelectedValue, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorFactory::get_SelectedValuePathProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Selector_SelectedValuePath, ppValue));
}
IFACEMETHODIMP DirectUI::SelectorFactory::get_IsSynchronizedWithCurrentItemProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Selector_IsSynchronizedWithCurrentItem, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::SelectorFactory::GetIsSelectionActive(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "Selector_GetIsSelectionActive", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(GetIsSelectionActiveImpl(pElement, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "Selector_GetIsSelectionActive", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Selector()
    {
        RRETURN(ctl::ActivationFactoryCreator<SelectorFactory>::CreateActivationFactory());
    }
}
