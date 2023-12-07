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

#include "Matrix3DProjection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Matrix3DProjection::Matrix3DProjection()
{
}

DirectUI::Matrix3DProjection::~Matrix3DProjection()
{
}

HRESULT DirectUI::Matrix3DProjection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Matrix3DProjection)))
    {
        *ppObject = static_cast<DirectUI::Matrix3DProjection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IMatrix3DProjection)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IMatrix3DProjection*>(this);
    }
    else
    {
        RRETURN(DirectUI::Projection::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Matrix3DProjection::get_ProjectionMatrix(_Out_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Matrix3DProjection_ProjectionMatrix, pValue));
}
IFACEMETHODIMP DirectUI::Matrix3DProjection::put_ProjectionMatrix(_In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Matrix3DProjection_ProjectionMatrix, value));
}

// Events.

// Methods.

HRESULT DirectUI::Matrix3DProjectionFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IMatrix3DProjectionStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IMatrix3DProjectionStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::Matrix3DProjectionFactory::get_ProjectionMatrixProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Matrix3DProjection_ProjectionMatrix, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Matrix3DProjection()
    {
        RRETURN(ctl::ActivationFactoryCreator<Matrix3DProjectionFactory>::CreateActivationFactory());
    }
}
