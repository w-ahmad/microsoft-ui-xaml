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

#include "StackingLayoutStrategy.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::StackingLayoutStrategyGenerated::StackingLayoutStrategyGenerated()
{
}

DirectUI::StackingLayoutStrategyGenerated::~StackingLayoutStrategyGenerated()
{
}

HRESULT DirectUI::StackingLayoutStrategyGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::StackingLayoutStrategy)))
    {
        *ppObject = static_cast<DirectUI::StackingLayoutStrategy*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ILayoutStrategy)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ILayoutStrategy*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::BeginMeasure()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_BeginMeasure", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->BeginMeasureImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_BeginMeasure", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::EndMeasure()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EndMeasure", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->EndMeasureImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EndMeasure", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::EstimateElementBounds(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference headerReference, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference containerReference, _In_ ABI::Windows::Foundation::Rect window, _Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateElementBounds", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->EstimateElementBoundsImpl(elementType, elementIndex, headerReference, containerReference, window, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateElementBounds", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::EstimateElementIndex(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference headerReference, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference containerReference, _In_ ABI::Windows::Foundation::Rect window, _Out_ ABI::Windows::Foundation::Rect* pTargetRect, _Out_ INT* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateElementIndex", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->EstimateElementIndexImpl(elementType, headerReference, containerReference, window, pTargetRect, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateElementIndex", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::EstimateIndexFromPoint(_In_ BOOLEAN requestingInsertionIndex, _In_ ABI::Windows::Foundation::Point point, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference reference, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ ABI::Microsoft::UI::Xaml::Controls::IndexSearchHint* pSearchHint, _Out_ ABI::Microsoft::UI::Xaml::Controls::ElementType* pElementType, _Out_ INT* pElementIndex)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateIndexFromPoint", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->EstimateIndexFromPointImpl(requestingInsertionIndex, point, reference, windowConstraint, pSearchHint, pElementType, pElementIndex));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimateIndexFromPoint", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::EstimatePanelExtent(_In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference lastHeaderReference, _In_ ABI::Microsoft::UI::Xaml::Controls::EstimationReference lastContainerReference, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ ABI::Windows::Foundation::Size* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimatePanelExtent", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->EstimatePanelExtentImpl(lastHeaderReference, lastContainerReference, windowConstraint, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_EstimatePanelExtent", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetElementArrangeBounds(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Windows::Foundation::Rect containerBounds, _In_ ABI::Windows::Foundation::Rect windowConstraint, _In_ ABI::Windows::Foundation::Size finalSize, _Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementArrangeBounds", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetElementArrangeBoundsImpl(elementType, elementIndex, containerBounds, windowConstraint, finalSize, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementArrangeBounds", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetElementBounds(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Windows::Foundation::Size containerDesiredSize, _In_ ABI::Microsoft::UI::Xaml::Controls::LayoutReference referenceInformation, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementBounds", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetElementBoundsImpl(elementType, elementIndex, containerDesiredSize, referenceInformation, windowConstraint, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementBounds", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetElementMeasureSize(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ ABI::Windows::Foundation::Size* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementMeasureSize", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetElementMeasureSizeImpl(elementType, elementIndex, windowConstraint, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementMeasureSize", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetElementTransitionsBounds(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementTransitionsBounds", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetElementTransitionsBoundsImpl(elementType, elementIndex, windowConstraint, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetElementTransitionsBounds", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetIsWrappingStrategy(_Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetIsWrappingStrategy", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetIsWrappingStrategyImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetIsWrappingStrategy", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetPositionOfFirstElement(_Out_ ABI::Windows::Foundation::Point* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetPositionOfFirstElement", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetPositionOfFirstElementImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetPositionOfFirstElement", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetRegularSnapPoints(_Out_ FLOAT* pNearOffset, _Out_ FLOAT* pFarOffset, _Out_ FLOAT* pSpacing, _Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetRegularSnapPoints", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetRegularSnapPointsImpl(pNearOffset, pFarOffset, pSpacing, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetRegularSnapPoints", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetTargetIndexFromNavigationAction(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _In_ ABI::Windows::Foundation::Rect windowConstraint, _In_ INT itemIndexHintForHeaderNavigation, _Out_ ABI::Microsoft::UI::Xaml::Controls::ElementType* pTargetElementType, _Out_ INT* pTargetElementIndex)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetTargetIndexFromNavigationAction", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetTargetIndexFromNavigationActionImpl(elementType, elementIndex, action, windowConstraint, itemIndexHintForHeaderNavigation, pTargetElementType, pTargetElementIndex));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetTargetIndexFromNavigationAction", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::GetVirtualizationDirection(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetVirtualizationDirection", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->GetVirtualizationDirectionImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_GetVirtualizationDirection", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::HasIrregularSnapPoints(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_HasIrregularSnapPoints", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->HasIrregularSnapPointsImpl(elementType, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_HasIrregularSnapPoints", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::HasSnapPointOnElement(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_HasSnapPointOnElement", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->HasSnapPointOnElementImpl(elementType, elementIndex, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_HasSnapPointOnElement", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::IsIndexLayoutBoundary(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Windows::Foundation::Rect windowConstraint, _Out_ BOOLEAN* pIsLeftBoundary, _Out_ BOOLEAN* pIsTopBoundary, _Out_ BOOLEAN* pIsRightBoundary, _Out_ BOOLEAN* pIsBottomBoundary)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_IsIndexLayoutBoundary", 0);
    }
    
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->IsIndexLayoutBoundaryImpl(elementType, elementIndex, windowConstraint, pIsLeftBoundary, pIsTopBoundary, pIsRightBoundary, pIsBottomBoundary));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_IsIndexLayoutBoundary", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::SetLayoutDataInfoProvider(_In_ ABI::Microsoft::UI::Xaml::Controls::ILayoutDataInfoProvider* pProvider)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_SetLayoutDataInfoProvider", 0);
    }
    ARG_NOTNULL(pProvider, "provider");
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->SetLayoutDataInfoProviderImpl(pProvider));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_SetLayoutDataInfoProvider", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::StackingLayoutStrategyGenerated::ShouldContinueFillingUpSpace(_In_ ABI::Microsoft::UI::Xaml::Controls::ElementType elementType, _In_ INT elementIndex, _In_ ABI::Microsoft::UI::Xaml::Controls::LayoutReference referenceInformation, _In_ ABI::Windows::Foundation::Rect windowToFill, _Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_ShouldContinueFillingUpSpace", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(static_cast<StackingLayoutStrategy*>(this)->ShouldContinueFillingUpSpaceImpl(elementType, elementIndex, referenceInformation, windowToFill, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "StackingLayoutStrategy_ShouldContinueFillingUpSpace", hr);
    }
    RRETURN(hr);
}


