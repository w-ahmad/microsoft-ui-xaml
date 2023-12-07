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

#include "CVirtualizingPanel.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CCarouselPanel : public CVirtualizingPanel
{
protected:
    CCarouselPanel(_In_ CCoreServices *pCore)
        : CVirtualizingPanel(pCore)
    {
        SetIsCustomType();
    }

    ~CCarouselPanel() override = default;

public:
    DECLARE_CREATE(CCarouselPanel);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::CarouselPanel;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
