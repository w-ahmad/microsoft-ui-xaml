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

#include "ConnectedAnimationService.g.h"
#include "ConnectedAnimation.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ConnectedAnimationServiceGenerated::ConnectedAnimationServiceGenerated()
{
}

DirectUI::ConnectedAnimationServiceGenerated::~ConnectedAnimationServiceGenerated()
{
}

HRESULT DirectUI::ConnectedAnimationServiceGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ConnectedAnimationService)))
    {
        *ppObject = static_cast<DirectUI::ConnectedAnimationService*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationService)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationService*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::get_DefaultDuration(_Out_ ABI::Windows::Foundation::TimeSpan* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ConnectedAnimationService*>(this)->get_DefaultDurationImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::put_DefaultDuration(_In_ ABI::Windows::Foundation::TimeSpan value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimationService*>(this)->put_DefaultDurationImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::get_DefaultEasingFunction(_Outptr_result_maybenull_ ABI::Microsoft::UI::Composition::ICompositionEasingFunction** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<ConnectedAnimationService*>(this)->get_DefaultEasingFunctionImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::put_DefaultEasingFunction(_In_opt_ ABI::Microsoft::UI::Composition::ICompositionEasingFunction* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimationService*>(this)->put_DefaultEasingFunctionImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::GetAnimation(_In_ HSTRING key, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimation** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimationService_GetAnimation", 0);
    }
    ARG_NOTNULL(key, "key");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimationService*>(this)->GetAnimationImpl(key, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimationService_GetAnimation", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceGenerated::PrepareToAnimate(_In_ HSTRING key, _In_ ABI::Microsoft::UI::Xaml::IUIElement* pSource, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimation** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimationService_PrepareToAnimate", 0);
    }
    ARG_NOTNULL(key, "key");
    ARG_NOTNULL(pSource, "source");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimationService*>(this)->PrepareToAnimateImpl(key, pSource, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimationService_PrepareToAnimate", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::ConnectedAnimationServiceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::ConnectedAnimationServiceFactory::GetForCurrentView(_Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationService** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ConnectedAnimationService_GetForCurrentView", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckActivationAllowed());
    IFC(GetForCurrentViewImpl(ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ConnectedAnimationService_GetForCurrentView", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ConnectedAnimationService()
    {
        RRETURN(ctl::ActivationFactoryCreator<ConnectedAnimationServiceFactory>::CreateActivationFactory());
    }
}