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

#include "Line.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Line::Line()
{
}

DirectUI::Line::~Line()
{
}

HRESULT DirectUI::Line::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Line)))
    {
        *ppObject = static_cast<DirectUI::Line*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Shapes::ILine)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Shapes::ILine*>(this);
    }
    else
    {
        RRETURN(DirectUI::Shape::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Line::get_X1(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Line_X1, pValue));
}
IFACEMETHODIMP DirectUI::Line::put_X1(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Line_X1, value));
}
IFACEMETHODIMP DirectUI::Line::get_X2(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Line_X2, pValue));
}
IFACEMETHODIMP DirectUI::Line::put_X2(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Line_X2, value));
}
IFACEMETHODIMP DirectUI::Line::get_Y1(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Line_Y1, pValue));
}
IFACEMETHODIMP DirectUI::Line::put_Y1(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Line_Y1, value));
}
IFACEMETHODIMP DirectUI::Line::get_Y2(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Line_Y2, pValue));
}
IFACEMETHODIMP DirectUI::Line::put_Y2(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Line_Y2, value));
}

// Events.

// Methods.

HRESULT DirectUI::LineFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Shapes::ILineStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Shapes::ILineStatics*>(this);
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
IFACEMETHODIMP DirectUI::LineFactory::get_X1Property(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Line_X1, ppValue));
}
IFACEMETHODIMP DirectUI::LineFactory::get_Y1Property(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Line_Y1, ppValue));
}
IFACEMETHODIMP DirectUI::LineFactory::get_X2Property(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Line_X2, ppValue));
}
IFACEMETHODIMP DirectUI::LineFactory::get_Y2Property(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Line_Y2, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Line()
    {
        RRETURN(ctl::ActivationFactoryCreator<LineFactory>::CreateActivationFactory());
    }
}
