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

#include "AutomationPeer.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CCalendarViewHeaderAutomationPeer : public CAutomationPeer
{
protected:
    CCalendarViewHeaderAutomationPeer(_In_ CCoreServices *pCore, _In_ CValue &value)
        : CAutomationPeer(pCore, value)
    {
        SetIsCustomType();
    }

    ~CCalendarViewHeaderAutomationPeer() override = default;

public:
    DECLARE_CREATE_AP(CCalendarViewHeaderAutomationPeer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::CalendarViewHeaderAutomationPeer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
