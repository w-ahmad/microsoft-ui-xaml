// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "IsPropertyPresent.g.h"

namespace DirectUI
{
    PARTIAL_CLASS(IsPropertyPresent)
    {
    public:
        _Check_return_ HRESULT STDMETHODCALLTYPE EvaluateImpl(_In_ wfc::IVectorView<HSTRING>* pArguments, _Out_ BOOLEAN* pReturnValue);

    };
}