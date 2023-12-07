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

#include "ContentPresenter.g.h"
#include "Brush.g.h"
#include "BrushTransition.g.h"
#include "DataTemplate.g.h"
#include "DataTemplateSelector.g.h"
#include "FontFamily.g.h"
#include "TransitionCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ContentPresenterGenerated::ContentPresenterGenerated()
{
}

DirectUI::ContentPresenterGenerated::~ContentPresenterGenerated()
{
}

HRESULT DirectUI::ContentPresenterGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ContentPresenter)))
    {
        *ppObject = static_cast<DirectUI::ContentPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentPresenter)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_Background(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Background, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_Background(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Background, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_BackgroundSizing(_Out_ ABI::Microsoft::UI::Xaml::Controls::BackgroundSizing* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BackgroundSizing, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_BackgroundSizing(_In_ ABI::Microsoft::UI::Xaml::Controls::BackgroundSizing value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BackgroundSizing, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_BackgroundTransition(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IBrushTransition** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BackgroundTransition, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_BackgroundTransition(_In_opt_ ABI::Microsoft::UI::Xaml::IBrushTransition* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BackgroundTransition, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_BorderBrush(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BorderBrush, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_BorderBrush(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BorderBrush, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_BorderThickness(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BorderThickness, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_BorderThickness(_In_ ABI::Microsoft::UI::Xaml::Thickness value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_BorderThickness, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_CharacterSpacing(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_CharacterSpacing, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_CharacterSpacing(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_CharacterSpacing, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_Content(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Content, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_Content(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Content, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_ContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_ContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTemplate, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_ContentTemplateSelector(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTemplateSelector, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_ContentTemplateSelector(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTemplateSelector, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_ContentTransitions(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTransitions, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_ContentTransitions(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_ContentTransitions, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_CornerRadius(_Out_ ABI::Microsoft::UI::Xaml::CornerRadius* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_CornerRadius, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_CornerRadius(_In_ ABI::Microsoft::UI::Xaml::CornerRadius value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_CornerRadius, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_FontFamily(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_FontFamily(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontFamily, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_FontSize(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontSize, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_FontSize(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontSize, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_FontStretch(_Out_ ABI::Windows::UI::Text::FontStretch* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontStretch, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_FontStretch(_In_ ABI::Windows::UI::Text::FontStretch value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontStretch, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_FontStyle(_Out_ ABI::Windows::UI::Text::FontStyle* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontStyle, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_FontStyle(_In_ ABI::Windows::UI::Text::FontStyle value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontStyle, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_FontWeight(_Out_ ABI::Windows::UI::Text::FontWeight* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontWeight, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_FontWeight(_In_ ABI::Windows::UI::Text::FontWeight value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_FontWeight, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_Foreground(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_Foreground(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Foreground, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_HorizontalContentAlignment(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_HorizontalContentAlignment, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_HorizontalContentAlignment(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_HorizontalContentAlignment, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_IsTextScaleFactorEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_IsTextScaleFactorEnabled, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_IsTextScaleFactorEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_IsTextScaleFactorEnabled, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_LineHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_LineHeight, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_LineHeight(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_LineHeight, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_LineStackingStrategy(_Out_ ABI::Microsoft::UI::Xaml::LineStackingStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_LineStackingStrategy, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_LineStackingStrategy(_In_ ABI::Microsoft::UI::Xaml::LineStackingStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_LineStackingStrategy, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_MaxLines(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_MaxLines, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_MaxLines(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_MaxLines, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_OpticalMarginAlignment(_Out_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_OpticalMarginAlignment, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_OpticalMarginAlignment(_In_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_OpticalMarginAlignment, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_Padding(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Padding, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_Padding(_In_ ABI::Microsoft::UI::Xaml::Thickness value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_Padding, value));
}
_Check_return_ HRESULT DirectUI::ContentPresenterGenerated::get_SelectedContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_SelectedContentTemplate, ppValue));
}
_Check_return_ HRESULT DirectUI::ContentPresenterGenerated::put_SelectedContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_SelectedContentTemplate, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_TextLineBounds(_Out_ ABI::Microsoft::UI::Xaml::TextLineBounds* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_TextLineBounds, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_TextLineBounds(_In_ ABI::Microsoft::UI::Xaml::TextLineBounds value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_TextLineBounds, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_TextWrapping(_Out_ ABI::Microsoft::UI::Xaml::TextWrapping* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_TextWrapping, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_TextWrapping(_In_ ABI::Microsoft::UI::Xaml::TextWrapping value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_TextWrapping, value));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::get_VerticalContentAlignment(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_VerticalContentAlignment, pValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::put_VerticalContentAlignment(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentPresenter_VerticalContentAlignment, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::OnContentTemplateChanged(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentPresenter_OnContentTemplateChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentPresenter*>(this)->OnContentTemplateChangedImpl(pOldContentTemplate, pNewContentTemplate));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentPresenter_OnContentTemplateChanged", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ContentPresenterGenerated::OnContentTemplateChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnContentTemplateChanged(pOldContentTemplate, pNewContentTemplate));
    }
    else
    {
        IFC(OnContentTemplateChanged(pOldContentTemplate, pNewContentTemplate));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentPresenterGenerated::OnContentTemplateSelectorChanged(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentPresenter_OnContentTemplateSelectorChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentPresenter*>(this)->OnContentTemplateSelectorChangedImpl(pOldContentTemplateSelector, pNewContentTemplateSelector));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentPresenter_OnContentTemplateSelectorChanged", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ContentPresenterGenerated::OnContentTemplateSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnContentTemplateSelectorChanged(pOldContentTemplateSelector, pNewContentTemplateSelector));
    }
    else
    {
        IFC(OnContentTemplateSelectorChanged(pOldContentTemplateSelector, pNewContentTemplateSelector));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::ContentPresenterFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentPresenterFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentPresenterFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentPresenterStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentPresenterStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ContentPresenterFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IContentPresenter** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentPresenter);
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
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_ContentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_Content, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_ContentTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_ContentTemplateSelectorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_ContentTemplateSelector, ppValue));
}

IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_ContentTransitionsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_ContentTransitions, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_FontSizeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_FontSize, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_FontFamilyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_FontWeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_FontWeight, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_FontStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_FontStyle, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_FontStretchProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_FontStretch, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_CharacterSpacingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_CharacterSpacing, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_ForegroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_OpticalMarginAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_OpticalMarginAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_TextLineBoundsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_TextLineBounds, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_IsTextScaleFactorEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_IsTextScaleFactorEnabled, ppValue));
}

IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_TextWrappingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_TextWrapping, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_MaxLinesProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_MaxLines, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_LineStackingStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_LineStackingStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_LineHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_LineHeight, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_BorderBrushProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_BorderBrush, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_BorderThicknessProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_BorderThickness, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_CornerRadiusProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_CornerRadius, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_PaddingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_Padding, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_BackgroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_Background, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_BackgroundSizingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_BackgroundSizing, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_HorizontalContentAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_HorizontalContentAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::ContentPresenterFactory::get_VerticalContentAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentPresenter_VerticalContentAlignment, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ContentPresenter()
    {
        RRETURN(ctl::ActivationFactoryCreator<ContentPresenterFactory>::CreateActivationFactory());
    }
}
