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

#include "CommandBar.g.h"
#include "CommandBarTemplateSettings.g.h"
#include "Style.g.h"
#include "XamlRoot.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::CommandBarGenerated::CommandBarGenerated()
{
}

DirectUI::CommandBarGenerated::~CommandBarGenerated()
{
}

HRESULT DirectUI::CommandBarGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CommandBar)))
    {
        *ppObject = static_cast<DirectUI::CommandBar*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBar)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBar*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenu)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenu*>(this);
    }
    else
    {
        RRETURN(DirectUI::AppBar::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_CommandBarOverflowPresenterStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_CommandBarOverflowPresenterStyle, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::put_CommandBarOverflowPresenterStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CommandBar_CommandBarOverflowPresenterStyle, pValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_CommandBarTemplateSettings(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_CommandBarTemplateSettings, ppValue));
}
_Check_return_ HRESULT DirectUI::CommandBarGenerated::put_CommandBarTemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CommandBar_CommandBarTemplateSettings, pValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_DefaultLabelPosition(_Out_ ABI::Microsoft::UI::Xaml::Controls::CommandBarDefaultLabelPosition* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_DefaultLabelPosition, pValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::put_DefaultLabelPosition(_In_ ABI::Microsoft::UI::Xaml::Controls::CommandBarDefaultLabelPosition value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CommandBar_DefaultLabelPosition, value));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_IsDynamicOverflowEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_IsDynamicOverflowEnabled, pValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::put_IsDynamicOverflowEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CommandBar_IsDynamicOverflowEnabled, value));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_OverflowButtonVisibility(_Out_ ABI::Microsoft::UI::Xaml::Controls::CommandBarOverflowButtonVisibility* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_OverflowButtonVisibility, pValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::put_OverflowButtonVisibility(_In_ ABI::Microsoft::UI::Xaml::Controls::CommandBarOverflowButtonVisibility value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CommandBar_OverflowButtonVisibility, value));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_ParentMenu(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IMenu** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<CommandBar*>(this)->get_ParentMenuImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::put_ParentMenu(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IMenu* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CommandBar*>(this)->put_ParentMenuImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_PrimaryCommands(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_PrimaryCommands, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::get_SecondaryCommands(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CommandBar_SecondaryCommands, ppValue));
}

// Events.
_Check_return_ HRESULT DirectUI::CommandBarGenerated::GetDynamicOverflowItemsChangingEventSourceNoRef(_Outptr_ DynamicOverflowItemsChangingEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::CommandBar_DynamicOverflowItemsChanging, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<DynamicOverflowItemsChangingEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::CommandBar_DynamicOverflowItemsChanging, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::CommandBar_DynamicOverflowItemsChanging, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CommandBarGenerated::add_DynamicOverflowItemsChanging(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CommandBar*, ABI::Microsoft::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    DynamicOverflowItemsChangingEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetDynamicOverflowItemsChangingEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CommandBarGenerated::remove_DynamicOverflowItemsChanging(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    DynamicOverflowItemsChangingEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CommandBar*, ABI::Microsoft::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CommandBar*, ABI::Microsoft::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetDynamicOverflowItemsChangingEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::CommandBar_DynamicOverflowItemsChanging));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::CommandBarGenerated::OnApplyTemplate()
{
    HRESULT hr = S_OK;
    ctl::ComPtr<ABI::Microsoft::UI::Xaml::IDependencyObject> pPrimaryItemsControlPart;
    ctl::ComPtr<ABI::Microsoft::UI::Xaml::IDependencyObject> pSecondaryItemsControlPart;

    IFC(DirectUI::AppBar::OnApplyTemplate());

    // First try to resolve all parts.
    IFC(GetTemplateChild(Microsoft::WRL::Wrappers::HStringReference(L"PrimaryItemsControl").Get(), &pPrimaryItemsControlPart));
    IFC(GetTemplateChild(Microsoft::WRL::Wrappers::HStringReference(L"SecondaryItemsControl").Get(), &pSecondaryItemsControlPart));

    // If everything succeeded, store the references.
    SetPtrValueWithQIOrNull(m_tpPrimaryItemsControlPart, pPrimaryItemsControlPart.Get());
    SetPtrValueWithQIOrNull(m_tpSecondaryItemsControlPart, pSecondaryItemsControlPart.Get());

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CommandBarGenerated::Close()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CommandBar_Close", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CommandBar*>(this)->CloseImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CommandBar_Close", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::CommandBarGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::CommandBar_DynamicOverflowItemsChanging:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CommandBar*, ABI::Microsoft::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                DynamicOverflowItemsChangingEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetDynamicOverflowItemsChangingEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::AppBarGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::CommandBarGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::CommandBar_DynamicOverflowItemsChanging:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CommandBar*, ABI::Microsoft::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                DynamicOverflowItemsChangingEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetDynamicOverflowItemsChangingEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::AppBarGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::CommandBarFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBarFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBarFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBarStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBarStatics*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBarStaticsPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBarStaticsPrivate*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::CommandBarFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ICommandBar** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBar);
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
IFACEMETHODIMP DirectUI::CommandBarFactory::get_PrimaryCommandsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_PrimaryCommands, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarFactory::get_SecondaryCommandsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_SecondaryCommands, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarFactory::get_CommandBarOverflowPresenterStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_CommandBarOverflowPresenterStyle, ppValue));
}

IFACEMETHODIMP DirectUI::CommandBarFactory::get_DefaultLabelPositionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_DefaultLabelPosition, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarFactory::get_OverflowButtonVisibilityProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_OverflowButtonVisibility, ppValue));
}
IFACEMETHODIMP DirectUI::CommandBarFactory::get_IsDynamicOverflowEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CommandBar_IsDynamicOverflowEnabled, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::CommandBarFactory::GetCurrentBottomCommandBar(_In_ ABI::Microsoft::UI::Xaml::IXamlRoot* pXamlRoot, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ICommandBar** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "CommandBar_GetCurrentBottomCommandBar", 0);
    }
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    ARG_VALIDRETURNPOINTER(ppResult);
    IFC(CheckActivationAllowed());
    IFC(GetCurrentBottomCommandBarImpl(pXamlRoot, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "CommandBar_GetCurrentBottomCommandBar", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_CommandBar()
    {
        RRETURN(ctl::ActivationFactoryCreator<CommandBarFactory>::CreateActivationFactory());
    }
}
