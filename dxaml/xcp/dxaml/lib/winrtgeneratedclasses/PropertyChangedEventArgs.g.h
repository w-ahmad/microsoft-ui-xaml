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


#define __PropertyChangedEventArgs_GUID "9ce9134c-3878-4a0f-9346-044b7c15e3a8"

namespace DirectUI
{
    class PropertyChangedEventArgs;

    class __declspec(novtable) __declspec(uuid(__PropertyChangedEventArgs_GUID)) PropertyChangedEventArgs:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Data.PropertyChangedEventArgs");

        BEGIN_INTERFACE_MAP(PropertyChangedEventArgs, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(PropertyChangedEventArgs, ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgs)
        END_INTERFACE_MAP(PropertyChangedEventArgs, ctl::WeakReferenceSource)

    public:
        PropertyChangedEventArgs();
        ~PropertyChangedEventArgs() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_PropertyName)(_Out_ HSTRING* pValue) override;
        _Check_return_ HRESULT put_PropertyName(_In_opt_ HSTRING value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        Microsoft::WRL::Wrappers::HString m_propertyName;
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
    class __declspec(novtable) PropertyChangedEventArgsFactory:
       public ctl::AggregableActivationFactory<DirectUI::PropertyChangedEventArgs>
        , public ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgsFactory
    {
        BEGIN_INTERFACE_MAP(PropertyChangedEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::PropertyChangedEventArgs>)
            INTERFACE_ENTRY(PropertyChangedEventArgsFactory, ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgsFactory)
        END_INTERFACE_MAP(PropertyChangedEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::PropertyChangedEventArgs>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ HSTRING name, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgs** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:
        _Check_return_ HRESULT CreateInstanceImpl(_In_opt_ HSTRING name, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventArgs** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}