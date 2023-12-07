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

#include "Geometry.g.h"
#include "Transform.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Geometry::Geometry()
{
}

DirectUI::Geometry::~Geometry()
{
}

HRESULT DirectUI::Geometry::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Geometry)))
    {
        *ppObject = static_cast<DirectUI::Geometry*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IGeometry)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IGeometry*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Geometry::get_Bounds(_Out_ ABI::Windows::Foundation::Rect* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Geometry_Bounds, pValue));
}
IFACEMETHODIMP DirectUI::Geometry::get_Transform(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ITransform** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Geometry_Transform, ppValue));
}
IFACEMETHODIMP DirectUI::Geometry::put_Transform(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ITransform* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Geometry_Transform, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::GeometryFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IGeometryFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IGeometryFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IGeometryStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IGeometryStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::GeometryFactory::get_TransformProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Geometry_Transform, ppValue));
}


// Attached properties.

// Static properties.
IFACEMETHODIMP DirectUI::GeometryFactory::get_Empty(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IGeometry** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckActivationAllowed());
    IFC(get_EmptyImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::GeometryFactory::get_StandardFlatteningTolerance(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(get_StandardFlatteningToleranceImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Geometry()
    {
        RRETURN(ctl::ActivationFactoryCreator<GeometryFactory>::CreateActivationFactory());
    }
}
