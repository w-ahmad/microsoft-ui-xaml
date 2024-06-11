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

#include "ColumnDefinitionCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ColumnDefinitionCollection::ColumnDefinitionCollection()
{
}

DirectUI::ColumnDefinitionCollection::~ColumnDefinitionCollection()
{
}

HRESULT DirectUI::ColumnDefinitionCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ColumnDefinitionCollection)))
    {
        *ppObject = static_cast<DirectUI::ColumnDefinitionCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::ColumnDefinition*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::ColumnDefinition*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Controls::ColumnDefinition*>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ColumnDefinitionCollection()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::ColumnDefinitionCollection));
    }
}