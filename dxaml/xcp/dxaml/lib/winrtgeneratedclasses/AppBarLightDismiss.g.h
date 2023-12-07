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

#include "Grid.g.h"

#define __AppBarLightDismiss_GUID "4558ca3d-5b46-42e6-a285-cc070d1b0aca"

namespace DirectUI
{
    class AppBarLightDismiss;

    class __declspec(novtable) AppBarLightDismissGenerated:
        public DirectUI::Grid
    {
        friend class DirectUI::AppBarLightDismiss;



    public:
        AppBarLightDismissGenerated();
        ~AppBarLightDismissGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarLightDismiss;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarLightDismiss;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "AppBarLightDismiss_Partial.h"

