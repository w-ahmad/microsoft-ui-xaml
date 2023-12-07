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

#include "BitmapSource.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::BitmapSourceGenerated::BitmapSourceGenerated()
{
}

DirectUI::BitmapSourceGenerated::~BitmapSourceGenerated()
{
}

HRESULT DirectUI::BitmapSourceGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::BitmapSource)))
    {
        *ppObject = static_cast<DirectUI::BitmapSource*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource*>(this);
    }
    else
    {
        RRETURN(DirectUI::ImageSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::BitmapSourceGenerated::get_PixelHeight(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::BitmapSource_PixelHeight, pValue));
}
IFACEMETHODIMP DirectUI::BitmapSourceGenerated::get_PixelWidth(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::BitmapSource_PixelWidth, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::BitmapSourceGenerated::SetSource(_In_ ABI::Windows::Storage::Streams::IRandomAccessStream* pStreamSource)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "BitmapSource_SetSource", 0);
    }
    ARG_NOTNULL(pStreamSource, "streamSource");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<BitmapSource*>(this)->SetSourceImpl(pStreamSource));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "BitmapSource_SetSource", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::BitmapSourceGenerated::SetSourceAsync(_In_ ABI::Windows::Storage::Streams::IRandomAccessStream* pStreamSource, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "BitmapSource_SetSourceAsync", 0);
    }
    ARG_NOTNULL(pStreamSource, "streamSource");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<BitmapSource*>(this)->SetSourceAsyncImpl(pStreamSource, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "BitmapSource_SetSourceAsync", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::BitmapSourceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::BitmapSourceFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource);
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
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::BitmapSourceFactory::get_PixelWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::BitmapSource_PixelWidth, ppValue));
}
IFACEMETHODIMP DirectUI::BitmapSourceFactory::get_PixelHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::BitmapSource_PixelHeight, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_BitmapSource()
    {
        RRETURN(ctl::ActivationFactoryCreator<BitmapSourceFactory>::CreateActivationFactory());
    }
}
