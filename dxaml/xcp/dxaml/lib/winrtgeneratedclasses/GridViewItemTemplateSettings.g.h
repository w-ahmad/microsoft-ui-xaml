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

#include "ListViewBaseItemTemplateSettings.g.h"

#define __GridViewItemTemplateSettings_GUID "c0222939-04c4-42f4-bed4-bb6b83a10fff"

namespace DirectUI
{
    class GridViewItemTemplateSettings;

    class __declspec(novtable) __declspec(uuid(__GridViewItemTemplateSettings_GUID)) GridViewItemTemplateSettings:
        public DirectUI::ListViewBaseItemTemplateSettings
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings");

        BEGIN_INTERFACE_MAP(GridViewItemTemplateSettings, DirectUI::ListViewBaseItemTemplateSettings)
            INTERFACE_ENTRY(GridViewItemTemplateSettings, ABI::Microsoft::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings)
        END_INTERFACE_MAP(GridViewItemTemplateSettings, DirectUI::ListViewBaseItemTemplateSettings)

    public:
        GridViewItemTemplateSettings();
        ~GridViewItemTemplateSettings() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewItemTemplateSettings;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::GridViewItemTemplateSettings;
        }

        // Properties.
        IFACEMETHOD(get_DragItemsCount)(_Out_ INT* pValue) override;
        _Check_return_ HRESULT put_DragItemsCount(_In_ INT value);

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


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) GridViewItemTemplateSettingsFactory:
       public ctl::AbstractActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewItemTemplateSettings;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
