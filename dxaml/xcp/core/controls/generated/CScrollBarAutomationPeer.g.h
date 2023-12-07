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

#include "CRangeBaseAutomationPeer.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CScrollBarAutomationPeer : public CRangeBaseAutomationPeer
{
protected:
    CScrollBarAutomationPeer(_In_ CCoreServices *pCore, _In_ CValue &value)
        : CRangeBaseAutomationPeer(pCore, value)
    {
        SetIsCustomType();
    }

    ~CScrollBarAutomationPeer() override = default;

public:
    DECLARE_CREATE_AP(CScrollBarAutomationPeer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::ScrollBarAutomationPeer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
