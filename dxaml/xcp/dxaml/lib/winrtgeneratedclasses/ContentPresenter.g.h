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

#pragma once

#include "FrameworkElement.g.h"
#include "CornerRadius.g.h"
#include "Thickness.g.h"

#define __ContentPresenter_GUID "bf8bb5e1-5ff4-437b-a2a3-8bdc6a64544b"

namespace DirectUI
{
    class ContentPresenter;
    class Brush;
    class BrushTransition;
    class DataTemplate;
    class DataTemplateSelector;
    class FontFamily;
    class TransitionCollection;

    class __declspec(novtable) ContentPresenterGenerated:
        public DirectUI::FrameworkElement
        , public ABI::Microsoft::UI::Xaml::Controls::IContentPresenter
        , public ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides
    {
        friend class DirectUI::ContentPresenter;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ContentPresenter");

        BEGIN_INTERFACE_MAP(ContentPresenterGenerated, DirectUI::FrameworkElement)
            INTERFACE_ENTRY(ContentPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IContentPresenter)
            INTERFACE_ENTRY(ContentPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IContentPresenterOverrides)
        END_INTERFACE_MAP(ContentPresenterGenerated, DirectUI::FrameworkElement)

    public:
        ContentPresenterGenerated();
        ~ContentPresenterGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ContentPresenter;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ContentPresenter;
        }

        // Properties.
        IFACEMETHOD(get_Background)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_Background)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_BackgroundSizing)(_Out_ ABI::Microsoft::UI::Xaml::Controls::BackgroundSizing* pValue) override;
        IFACEMETHOD(put_BackgroundSizing)(_In_ ABI::Microsoft::UI::Xaml::Controls::BackgroundSizing value) override;
        IFACEMETHOD(get_BackgroundTransition)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IBrushTransition** ppValue) override;
        IFACEMETHOD(put_BackgroundTransition)(_In_opt_ ABI::Microsoft::UI::Xaml::IBrushTransition* pValue) override;
        IFACEMETHOD(get_BorderBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_BorderBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_BorderThickness)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_BorderThickness)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_CharacterSpacing)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_CharacterSpacing)(_In_ INT value) override;
        IFACEMETHOD(get_Content)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Content)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_ContentTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_ContentTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_ContentTemplateSelector)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppValue) override;
        IFACEMETHOD(put_ContentTemplateSelector)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pValue) override;
        IFACEMETHOD(get_ContentTransitions)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue) override;
        IFACEMETHOD(put_ContentTransitions)(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue) override;
        IFACEMETHOD(get_CornerRadius)(_Out_ ABI::Microsoft::UI::Xaml::CornerRadius* pValue) override;
        IFACEMETHOD(put_CornerRadius)(_In_ ABI::Microsoft::UI::Xaml::CornerRadius value) override;
        IFACEMETHOD(get_FontFamily)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue) override;
        IFACEMETHOD(put_FontFamily)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue) override;
        IFACEMETHOD(get_FontSize)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_FontSize)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_FontStretch)(_Out_ ABI::Windows::UI::Text::FontStretch* pValue) override;
        IFACEMETHOD(put_FontStretch)(_In_ ABI::Windows::UI::Text::FontStretch value) override;
        IFACEMETHOD(get_FontStyle)(_Out_ ABI::Windows::UI::Text::FontStyle* pValue) override;
        IFACEMETHOD(put_FontStyle)(_In_ ABI::Windows::UI::Text::FontStyle value) override;
        IFACEMETHOD(get_FontWeight)(_Out_ ABI::Windows::UI::Text::FontWeight* pValue) override;
        IFACEMETHOD(put_FontWeight)(_In_ ABI::Windows::UI::Text::FontWeight value) override;
        IFACEMETHOD(get_Foreground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_Foreground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_HorizontalContentAlignment)(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue) override;
        IFACEMETHOD(put_HorizontalContentAlignment)(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value) override;
        IFACEMETHOD(get_IsTextScaleFactorEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsTextScaleFactorEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_LineHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_LineHeight)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_LineStackingStrategy)(_Out_ ABI::Microsoft::UI::Xaml::LineStackingStrategy* pValue) override;
        IFACEMETHOD(put_LineStackingStrategy)(_In_ ABI::Microsoft::UI::Xaml::LineStackingStrategy value) override;
        IFACEMETHOD(get_MaxLines)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_MaxLines)(_In_ INT value) override;
        IFACEMETHOD(get_OpticalMarginAlignment)(_Out_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment* pValue) override;
        IFACEMETHOD(put_OpticalMarginAlignment)(_In_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment value) override;
        IFACEMETHOD(get_Padding)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_Padding)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        _Check_return_ HRESULT get_SelectedContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue);
        _Check_return_ HRESULT put_SelectedContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue);
        IFACEMETHOD(get_TextLineBounds)(_Out_ ABI::Microsoft::UI::Xaml::TextLineBounds* pValue) override;
        IFACEMETHOD(put_TextLineBounds)(_In_ ABI::Microsoft::UI::Xaml::TextLineBounds value) override;
        IFACEMETHOD(get_TextWrapping)(_Out_ ABI::Microsoft::UI::Xaml::TextWrapping* pValue) override;
        IFACEMETHOD(put_TextWrapping)(_In_ ABI::Microsoft::UI::Xaml::TextWrapping value) override;
        IFACEMETHOD(get_VerticalContentAlignment)(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue) override;
        IFACEMETHOD(put_VerticalContentAlignment)(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value) override;

        // Events.

        // Methods.
        IFACEMETHOD(OnContentTemplateChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate) override;
        _Check_return_ HRESULT OnContentTemplateChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate);
        IFACEMETHOD(OnContentTemplateSelectorChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector) override;
        _Check_return_ HRESULT OnContentTemplateSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector);


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ContentPresenter_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ContentPresenterFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IContentPresenterFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IContentPresenterStatics
    {
        BEGIN_INTERFACE_MAP(ContentPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ContentPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IContentPresenterFactory)
            INTERFACE_ENTRY(ContentPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IContentPresenterStatics)
        END_INTERFACE_MAP(ContentPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IContentPresenter** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ContentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ContentTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ContentTemplateSelectorProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_ContentTransitionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontSizeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontFamilyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontWeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontStyleProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontStretchProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CharacterSpacingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ForegroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OpticalMarginAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TextLineBoundsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsTextScaleFactorEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_TextWrappingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaxLinesProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LineStackingStrategyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LineHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_BorderBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_BorderThicknessProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CornerRadiusProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PaddingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_BackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_BackgroundSizingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalContentAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_VerticalContentAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ContentPresenter;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
