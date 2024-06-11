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

#include "DragUIOverride.g.h"
#include "BitmapImage.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::DragUIOverrideGenerated::DragUIOverrideGenerated()
{
}

DirectUI::DragUIOverrideGenerated::~DragUIOverrideGenerated()
{
}

HRESULT DirectUI::DragUIOverrideGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DragUIOverride)))
    {
        *ppObject = static_cast<DirectUI::DragUIOverride*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDragUIOverride)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IDragUIOverride*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::get_Caption(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->get_CaptionImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::put_Caption(_In_opt_ HSTRING value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->put_CaptionImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::get_IsCaptionVisible(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->get_IsCaptionVisibleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::put_IsCaptionVisible(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->put_IsCaptionVisibleImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::get_IsContentVisible(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->get_IsContentVisibleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::put_IsContentVisible(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->put_IsContentVisibleImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::get_IsGlyphVisible(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->get_IsGlyphVisibleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::put_IsGlyphVisible(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->put_IsGlyphVisibleImpl(value));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::Clear()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DragUIOverride_Clear", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->ClearImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DragUIOverride_Clear", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::SetContentFromBitmapImage(_In_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage* pBitmapImage)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromBitmapImage", 0);
    }
    ARG_NOTNULL(pBitmapImage, "bitmapImage");
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->SetContentFromBitmapImageImpl(pBitmapImage));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromBitmapImage", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::SetContentFromBitmapImageWithAnchorPoint(_In_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapImage* pBitmapImage, _In_ ABI::Windows::Foundation::Point anchorPoint)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromBitmapImageWithAnchorPoint", 0);
    }
    ARG_NOTNULL(pBitmapImage, "bitmapImage");
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->SetContentFromBitmapImageWithAnchorPointImpl(pBitmapImage, anchorPoint));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromBitmapImageWithAnchorPoint", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::SetContentFromSoftwareBitmap(_In_ ABI::Windows::Graphics::Imaging::ISoftwareBitmap* pSoftwareBitmap)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromSoftwareBitmap", 0);
    }
    ARG_NOTNULL(pSoftwareBitmap, "softwareBitmap");
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->SetContentFromSoftwareBitmapImpl(pSoftwareBitmap));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromSoftwareBitmap", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DragUIOverrideGenerated::SetContentFromSoftwareBitmapWithAnchorPoint(_In_ ABI::Windows::Graphics::Imaging::ISoftwareBitmap* pSoftwareBitmap, _In_ ABI::Windows::Foundation::Point anchorPoint)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromSoftwareBitmapWithAnchorPoint", 0);
    }
    ARG_NOTNULL(pSoftwareBitmap, "softwareBitmap");
    IFC(CheckThread());
    IFC(static_cast<DragUIOverride*>(this)->SetContentFromSoftwareBitmapWithAnchorPointImpl(pSoftwareBitmap, anchorPoint));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "DragUIOverride_SetContentFromSoftwareBitmapWithAnchorPoint", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DragUIOverride()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}