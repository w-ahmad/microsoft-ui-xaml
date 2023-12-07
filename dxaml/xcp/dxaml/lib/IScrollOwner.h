// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

namespace DirectUI
{
    // Represents the zoom action that will be generated by an input event.
    // Used to selectively ignore pure inertia zoom related input events to allow zoom chaining
    // (which DM unfortunately doesn't implement with pure inertia manipulations - i.e., Ctrl-+,
    // as opposed to non-inertia manipulations which are chained for us).
    enum ZoomDirection
    {
        ZoomDirection_None,
        ZoomDirection_In,
        ZoomDirection_Out,
    };

    /// <summary>
    ///     Interface through which a panel
    ///     communicates with its scrolling owner.
    /// </summary>
    MIDL_INTERFACE("ddcb1fc7-9b74-4248-be57-ed76f0fd8ad0")
    IScrollOwner : public IInspectable
    {
        // This function is called by an IScrollInfo attached to this
        // scrolling owner when any values of scrolling properties (Offset, Extent,
        // and ViewportSize) change.  The function schedules invalidation of
        // other elements like ScrollBars that are dependant on these
        // properties.
        virtual _Check_return_ HRESULT InvalidateScrollInfoImpl() = 0;

        // Called to notify the scroll owner that the first ArrangeOverride occurred after a 
        // IManipulationDataProvider::UpdateInManipulation(...) call.
        // Marks the transition into or out of the 'manipulation arrangement' mode.
        virtual _Check_return_ HRESULT NotifyLayoutRefreshed() = 0;

        // Called to notify the scroll owner of a new horizontal offset request
        virtual _Check_return_ HRESULT NotifyHorizontalOffsetChanging(
            _In_ DOUBLE targetHorizontalOffset, 
            _In_ DOUBLE targetVerticalOffset) = 0;

        // Called to notify the scroll owner of a new vertical offset request
        virtual _Check_return_ HRESULT NotifyVerticalOffsetChanging(
            _In_ DOUBLE targetHorizontalOffset,
            _In_ DOUBLE targetVerticalOffset) = 0;

        // Scrolls the content within the scroll owner to the specified
        // horizontal offset position.
        virtual _Check_return_ HRESULT ScrollToHorizontalOffsetImpl(
            _In_ DOUBLE offset) = 0;

        // Scrolls the content within the scroll owner to the specified vertical
        // offset position.
        virtual _Check_return_ HRESULT ScrollToVerticalOffsetImpl(
            _In_ DOUBLE offset) = 0;

        // Sets reference to the IScrollInfo implementation 
        virtual _Check_return_ HRESULT put_ScrollInfo(
            _In_opt_ IScrollInfo* pValue) = 0;
        
        // Returns reference to the IScrollInfo implementation
        virtual _Check_return_ HRESULT get_ScrollInfo(
            _Outptr_result_maybenull_ IScrollInfo** ppValue) = 0;

        // Returns zoom factor
        // this API API will go away late as we finish discovering all scenarios where we need to propagate new zoom factor.
        // deprecated.
        virtual _Check_return_ HRESULT get_ZoomFactorImpl(
            _Out_ FLOAT* pValue) = 0;

        // Called when this DM container wants the DM handler to process the current
        // pure inertia input message, by forwarding it to DirectManipulation.
        virtual _Check_return_ HRESULT ProcessPureInertiaInputMessage(
            _In_ ZoomDirection zoomDirection) = 0;

        // Returns true if currently in DM zooming
        virtual _Check_return_ HRESULT IsInDirectManipulationZoom(
            _Out_ BOOLEAN& bIsInDirectManipulationZoom) = 0;

        // We cannot invalidate the grandchild directly. So this property is
        // informing that we are invalidating the child so the grandchild can
        // use it.
        virtual _Check_return_ HRESULT IsInChildInvalidateMeasure(
            _Out_ BOOLEAN& bIsInChildInvalidateMeasure) = 0;

    };
}


