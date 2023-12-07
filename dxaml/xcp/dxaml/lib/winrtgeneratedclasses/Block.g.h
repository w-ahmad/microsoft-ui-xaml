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

#include "TextElement.g.h"
#include "Thickness.g.h"

#define __Block_GUID "23b8c620-2419-40a2-859b-5e3422b45c5d"

namespace DirectUI
{
    class Block;

    class __declspec(novtable) __declspec(uuid(__Block_GUID)) Block:
        public DirectUI::TextElement
        , public ABI::Microsoft::UI::Xaml::Documents::IBlock
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Documents.Block");

        BEGIN_INTERFACE_MAP(Block, DirectUI::TextElement)
            INTERFACE_ENTRY(Block, ABI::Microsoft::UI::Xaml::Documents::IBlock)
        END_INTERFACE_MAP(Block, DirectUI::TextElement)

    public:
        Block();
        ~Block() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Block;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Block;
        }

        // Properties.
        IFACEMETHOD(get_HorizontalTextAlignment)(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue) override;
        IFACEMETHOD(put_HorizontalTextAlignment)(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value) override;
        IFACEMETHOD(get_LineHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_LineHeight)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_LineStackingStrategy)(_Out_ ABI::Microsoft::UI::Xaml::LineStackingStrategy* pValue) override;
        IFACEMETHOD(put_LineStackingStrategy)(_In_ ABI::Microsoft::UI::Xaml::LineStackingStrategy value) override;
        IFACEMETHOD(get_Margin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_Margin)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_TextAlignment)(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue) override;
        IFACEMETHOD(put_TextAlignment)(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value) override;

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
    class __declspec(novtable) BlockFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Documents::IBlockFactory
        , public ABI::Microsoft::UI::Xaml::Documents::IBlockStatics
    {
        BEGIN_INTERFACE_MAP(BlockFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(BlockFactory, ABI::Microsoft::UI::Xaml::Documents::IBlockFactory)
            INTERFACE_ENTRY(BlockFactory, ABI::Microsoft::UI::Xaml::Documents::IBlockStatics)
        END_INTERFACE_MAP(BlockFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Documents::IBlock** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_TextAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalTextAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LineHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LineStackingStrategyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MarginProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Block;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
