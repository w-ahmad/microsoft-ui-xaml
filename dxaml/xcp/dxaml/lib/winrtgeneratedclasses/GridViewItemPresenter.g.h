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

#include "ListViewBaseItemPresenter.g.h"
#include "Thickness.g.h"

#define __GridViewItemPresenter_GUID "60d77662-f823-4524-9433-7e49c6d21a1c"

namespace DirectUI
{
    class GridViewItemPresenter;
    class Brush;

    class __declspec(novtable) GridViewItemPresenterGenerated:
        public DirectUI::ListViewBaseItemPresenter
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenter
    {
        friend class DirectUI::GridViewItemPresenter;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.GridViewItemPresenter");

        BEGIN_INTERFACE_MAP(GridViewItemPresenterGenerated, DirectUI::ListViewBaseItemPresenter)
            INTERFACE_ENTRY(GridViewItemPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)
        END_INTERFACE_MAP(GridViewItemPresenterGenerated, DirectUI::ListViewBaseItemPresenter)

    public:
        GridViewItemPresenterGenerated();
        ~GridViewItemPresenterGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewItemPresenter;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::GridViewItemPresenter;
        }

        // Properties.
        IFACEMETHOD(get_CheckBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_CheckBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_CheckHintBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_CheckHintBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_CheckSelectingBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_CheckSelectingBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_ContentMargin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_ContentMargin)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_DisabledOpacity)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DisabledOpacity)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_DragBackground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_DragBackground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_DragForeground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_DragForeground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_DragOpacity)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DragOpacity)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_FocusBorderBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_FocusBorderBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_GridViewItemPresenterHorizontalContentAlignment)(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue) override;
        IFACEMETHOD(put_GridViewItemPresenterHorizontalContentAlignment)(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value) override;
        IFACEMETHOD(get_GridViewItemPresenterPadding)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_GridViewItemPresenterPadding)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_GridViewItemPresenterVerticalContentAlignment)(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue) override;
        IFACEMETHOD(put_GridViewItemPresenterVerticalContentAlignment)(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value) override;
        IFACEMETHOD(get_PlaceholderBackground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_PlaceholderBackground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_PointerOverBackground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_PointerOverBackground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_PointerOverBackgroundMargin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_PointerOverBackgroundMargin)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_ReorderHintOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ReorderHintOffset)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_SelectedBackground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_SelectedBackground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_SelectedBorderThickness)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_SelectedBorderThickness)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_SelectedForeground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_SelectedForeground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_SelectedPointerOverBackground)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_SelectedPointerOverBackground)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_SelectedPointerOverBorderBrush)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue) override;
        IFACEMETHOD(put_SelectedPointerOverBorderBrush)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue) override;
        IFACEMETHOD(get_SelectionCheckMarkVisualEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_SelectionCheckMarkVisualEnabled)(_In_ BOOLEAN value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "GridViewItemPresenter_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) GridViewItemPresenterFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics
    {
        BEGIN_INTERFACE_MAP(GridViewItemPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(GridViewItemPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory)
            INTERFACE_ENTRY(GridViewItemPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)
        END_INTERFACE_MAP(GridViewItemPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemPresenter** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_SelectionCheckMarkVisualEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CheckHintBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CheckSelectingBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CheckBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DragBackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DragForegroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FocusBorderBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PlaceholderBackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PointerOverBackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectedBackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectedForegroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectedPointerOverBackgroundProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectedPointerOverBorderBrushProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectedBorderThicknessProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DisabledOpacityProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DragOpacityProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ReorderHintOffsetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_GridViewItemPresenterHorizontalContentAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_GridViewItemPresenterVerticalContentAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_GridViewItemPresenterPaddingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PointerOverBackgroundMarginProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ContentMarginProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewItemPresenter;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}