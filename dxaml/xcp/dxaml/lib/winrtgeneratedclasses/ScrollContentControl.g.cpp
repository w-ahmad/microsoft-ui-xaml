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

#include "ScrollContentControl.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ScrollContentControl::ScrollContentControl()
{
}

DirectUI::ScrollContentControl::~ScrollContentControl()
{
}

HRESULT DirectUI::ScrollContentControl::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ScrollContentControl)))
    {
        *ppObject = static_cast<DirectUI::ScrollContentControl*>(this);
    }
    else
    {
        RRETURN(DirectUI::ContentControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
}
