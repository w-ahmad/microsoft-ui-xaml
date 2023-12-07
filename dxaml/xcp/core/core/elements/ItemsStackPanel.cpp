// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "precomp.h"
#include "ItemsStackPanel.h"

HRESULT OnCoreCreateItemsStackPanel(_Outptr_ CDependencyObject **ppObject, _In_ CREATEPARAMETERS *pCreate)
{
    RRETURN(CItemsStackPanel::Create(ppObject, pCreate));
}
