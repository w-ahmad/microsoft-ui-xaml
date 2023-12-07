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

#include "HubSection.g.h"
#include "DataTemplate.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::HubSectionGenerated::HubSectionGenerated()
{
}

DirectUI::HubSectionGenerated::~HubSectionGenerated()
{
}

HRESULT DirectUI::HubSectionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::HubSection)))
    {
        *ppObject = static_cast<DirectUI::HubSection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IHubSection)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IHubSection*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::HubSectionGenerated::get_ContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::HubSection_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::put_ContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::HubSection_ContentTemplate, pValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::get_Header(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::HubSection_Header, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::put_Header(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::HubSection_Header, pValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::get_HeaderTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::HubSection_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::put_HeaderTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::HubSection_HeaderTemplate, pValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::get_IsHeaderInteractive(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::HubSection_IsHeaderInteractive, pValue));
}
IFACEMETHODIMP DirectUI::HubSectionGenerated::put_IsHeaderInteractive(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::HubSection_IsHeaderInteractive, value));
}

// Events.

// Methods.

HRESULT DirectUI::HubSectionFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IHubSectionFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IHubSectionFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IHubSectionStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IHubSectionStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::HubSectionFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IHubSection** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IHubSection);
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
IFACEMETHODIMP DirectUI::HubSectionFactory::get_HeaderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::HubSection_Header, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionFactory::get_HeaderTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::HubSection_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionFactory::get_ContentTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::HubSection_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::HubSectionFactory::get_IsHeaderInteractiveProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::HubSection_IsHeaderInteractive, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_HubSection()
    {
        RRETURN(ctl::ActivationFactoryCreator<HubSectionFactory>::CreateActivationFactory());
    }
}
