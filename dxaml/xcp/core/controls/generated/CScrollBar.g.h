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

#include "RangeBase.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CScrollBar : public CRangeBase
{
protected:
    CScrollBar(_In_ CCoreServices *pCore)
        : CRangeBase(pCore), m_orientation(), m_viewportSize()
    {
        InitializeDefaults();
        SetIsCustomType();
    }

    ~CScrollBar() override = default;

public:
    DECLARE_CREATE(CScrollBar);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::ScrollBar;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
    DirectUI::Orientation m_orientation;
    DOUBLE m_viewportSize;
private:
    void InitializeDefaults();
};
