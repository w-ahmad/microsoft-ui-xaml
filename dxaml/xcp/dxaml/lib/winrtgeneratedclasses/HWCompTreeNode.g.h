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

#include "HWCompNode.g.h"

#define __HWCompTreeNode_GUID "e916aff9-4c5c-462d-a2da-c75ac32db838"

namespace DirectUI
{
    class HWCompTreeNode;

    class __declspec(novtable) __declspec(uuid(__HWCompTreeNode_GUID)) HWCompTreeNode:
        public DirectUI::HWCompNode
    {



    public:
        HWCompTreeNode();
        ~HWCompTreeNode() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HWCompTreeNode;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HWCompTreeNode;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


