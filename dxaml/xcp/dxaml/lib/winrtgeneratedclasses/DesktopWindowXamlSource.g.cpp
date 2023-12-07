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

#include "DesktopWindowXamlSource.g.h"
#include "SystemBackdrop.g.h"
#include "UIElement.g.h"
#include "XamlSourceFocusNavigationRequest.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::DesktopWindowXamlSourceGenerated::DesktopWindowXamlSourceGenerated()
{
}

DirectUI::DesktopWindowXamlSourceGenerated::~DesktopWindowXamlSourceGenerated()
{
}

HRESULT DirectUI::DesktopWindowXamlSourceGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DesktopWindowXamlSource)))
    {
        *ppObject = static_cast<DirectUI::DesktopWindowXamlSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::IClosable)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::IClosable*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::get_Content(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->get_ContentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::put_Content(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->put_ContentImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::get_HasFocus(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->get_HasFocusImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::get_SiteBridge(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IDesktopChildSiteBridge** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->get_SiteBridgeImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::get_SystemBackdrop(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->get_SystemBackdropImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::put_SystemBackdrop(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->put_SystemBackdropImpl(pValue));
Cleanup:
    RRETURN(hr);
}

HRESULT DirectUI::DesktopWindowXamlSourceGenerated::EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const
{
    HRESULT hr = S_OK;

    ARG_VALIDRETURNPOINTER(ptToken);
    ARG_NOTNULL(pValue, "value");
    IFC(CheckThread());

Cleanup:
    return S_OK;
}
// Events.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::add_GotFocus(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    GotFocusEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));

    IFC(GetGotFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::remove_GotFocus(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    GotFocusEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*>*)tToken.value;

    
    IFC(GetGotFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));


Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::add_TakeFocusRequested(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    TakeFocusRequestedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));

    IFC(GetTakeFocusRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::remove_TakeFocusRequested(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    TakeFocusRequestedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*>*)tToken.value;

    
    IFC(GetTakeFocusRequestedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));


Cleanup:
    RRETURN(hr);
}

// Methods.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::Initialize(_In_ ABI::Microsoft::UI::WindowId parentWindowId)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DesktopWindowXamlSource_Initialize", 0);
    }
    
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->InitializeImpl(parentWindowId));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DesktopWindowXamlSource_Initialize", hr);
    }
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::DesktopWindowXamlSourceGenerated::NavigateFocus(_In_ ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest* pRequest, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DesktopWindowXamlSource_NavigateFocus", 0);
    }
    ARG_NOTNULL(pRequest, "request");
    ARG_VALIDRETURNPOINTER(ppResult);
    
    IFC(static_cast<DesktopWindowXamlSource*>(this)->NavigateFocusImpl(pRequest, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DesktopWindowXamlSource_NavigateFocus", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::DesktopWindowXamlSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::DesktopWindowXamlSource>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::DesktopWindowXamlSourceFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.
IFACEMETHODIMP DirectUI::DesktopWindowXamlSourceFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource** ppInstance)
{


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::DesktopWindowXamlSource,ABI::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), true /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DesktopWindowXamlSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<DesktopWindowXamlSourceFactory>::CreateActivationFactory());
    }
}
