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

#include "Shape.g.h"

#define __Path_GUID "c60b2ff5-9a62-49e4-9012-3d2752ff3c3e"

namespace DirectUI
{
    class Path;
    class Geometry;

    class __declspec(novtable) __declspec(uuid(__Path_GUID)) Path:
        public DirectUI::Shape
        , public ABI::Microsoft::UI::Xaml::Shapes::IPath
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Shapes.Path");

        BEGIN_INTERFACE_MAP(Path, DirectUI::Shape)
            INTERFACE_ENTRY(Path, ABI::Microsoft::UI::Xaml::Shapes::IPath)
        END_INTERFACE_MAP(Path, DirectUI::Shape)

    public:
        Path();
        ~Path() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Path;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Path;
        }

        // Properties.
        IFACEMETHOD(get_Data)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IGeometry** ppValue) override;
        IFACEMETHOD(put_Data)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IGeometry* pValue) override;

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
    class __declspec(novtable) PathFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Shapes::IPathFactory
        , public ABI::Microsoft::UI::Xaml::Shapes::IPathStatics
    {
        BEGIN_INTERFACE_MAP(PathFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(PathFactory, ABI::Microsoft::UI::Xaml::Shapes::IPathFactory)
            INTERFACE_ENTRY(PathFactory, ABI::Microsoft::UI::Xaml::Shapes::IPathStatics)
        END_INTERFACE_MAP(PathFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Shapes::IPath** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_DataProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Path;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
