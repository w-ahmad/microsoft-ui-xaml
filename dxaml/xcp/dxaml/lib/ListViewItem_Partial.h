// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ListViewItem.g.h"

namespace DirectUI
{
    PARTIAL_CLASS(ListViewItem)
    {
        protected:
            // Sets up instances that are expected on this type.
            _Check_return_ HRESULT PrepareState()
                override;

            // Override OnCreateAutomationPeer()
            IFACEMETHOD(OnCreateAutomationPeer)(_Outptr_ xaml_automation_peers::IAutomationPeer** returnValue) override;
            
        public:
            // Sets the value to display as the dragged item count.
            _Check_return_ HRESULT SetDragItemsCountDisplay(
                _In_ UINT dragItemsCount) override;
    };
}
