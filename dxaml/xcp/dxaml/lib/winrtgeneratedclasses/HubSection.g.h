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

#include "Control.g.h"

#define __HubSection_GUID "f5a5728f-e2e8-42e4-9490-2f5df7dc6235"

namespace DirectUI
{
    class HubSection;
    class DataTemplate;

    class __declspec(novtable) HubSectionGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IHubSection
    {
        friend class DirectUI::HubSection;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.HubSection");

        BEGIN_INTERFACE_MAP(HubSectionGenerated, DirectUI::Control)
            INTERFACE_ENTRY(HubSectionGenerated, ABI::Microsoft::UI::Xaml::Controls::IHubSection)
        END_INTERFACE_MAP(HubSectionGenerated, DirectUI::Control)

    public:
        HubSectionGenerated();
        ~HubSectionGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HubSection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HubSection;
        }

        // Properties.
        IFACEMETHOD(get_ContentTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_ContentTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_IsHeaderInteractive)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsHeaderInteractive)(_In_ BOOLEAN value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "HubSection_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) HubSectionFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IHubSectionFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IHubSectionStatics
    {
        BEGIN_INTERFACE_MAP(HubSectionFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(HubSectionFactory, ABI::Microsoft::UI::Xaml::Controls::IHubSectionFactory)
            INTERFACE_ENTRY(HubSectionFactory, ABI::Microsoft::UI::Xaml::Controls::IHubSectionStatics)
        END_INTERFACE_MAP(HubSectionFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IHubSection** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ContentTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsHeaderInteractiveProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HubSection;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
