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


#define __StateTriggerCollection_GUID "a14b144f-848c-4e71-a8e8-56d64b7890e8"

namespace DirectUI
{
    class StateTriggerCollection;

    class __declspec(novtable) __declspec(uuid(__StateTriggerCollection_GUID)) StateTriggerCollection:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::StateTriggerBase*>
    {



    public:
        StateTriggerCollection();
        ~StateTriggerCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::StateTriggerCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::StateTriggerCollection;
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


