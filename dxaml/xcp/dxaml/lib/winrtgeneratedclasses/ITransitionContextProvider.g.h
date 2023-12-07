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

namespace DirectUI
{
    interface __declspec(uuid("fede5b34-83bd-4bd7-9930-02e6a9f48cff")) ITransitionContextProvider : public IInspectable
    {
        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(GetCurrentTransitionContext)(_In_ INT LayoutTickId, _Out_ DirectUI::ThemeTransitionContext* pReturnValue) = 0;
        IFACEMETHOD(GetDropOffsetToRoot)(_Out_ ABI::Windows::Foundation::Point* pReturnValue) = 0;
        IFACEMETHOD(IsCollectionMutatingFast)(_Out_ BOOLEAN* pReturnValue) = 0;
    };
}
