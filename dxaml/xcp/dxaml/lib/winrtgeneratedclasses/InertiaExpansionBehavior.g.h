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


#define __InertiaExpansionBehavior_GUID "db2325f4-7e34-46b9-9bf7-59ae4ee4a9e1"

namespace DirectUI
{
    class InertiaExpansionBehavior;

    class __declspec(novtable) __declspec(uuid(__InertiaExpansionBehavior_GUID)) InertiaExpansionBehavior:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Input.InertiaExpansionBehavior");

        BEGIN_INTERFACE_MAP(InertiaExpansionBehavior, DirectUI::DependencyObject)
            INTERFACE_ENTRY(InertiaExpansionBehavior, ABI::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior)
        END_INTERFACE_MAP(InertiaExpansionBehavior, DirectUI::DependencyObject)

    public:
        InertiaExpansionBehavior();
        ~InertiaExpansionBehavior() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::InertiaExpansionBehavior;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::InertiaExpansionBehavior;
        }

        // Properties.
        IFACEMETHOD(get_DesiredDeceleration)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DesiredDeceleration)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_DesiredExpansion)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DesiredExpansion)(_In_ DOUBLE value) override;

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
    class __declspec(novtable) InertiaExpansionBehaviorFactory:
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
            return KnownTypeIndex::InertiaExpansionBehavior;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}