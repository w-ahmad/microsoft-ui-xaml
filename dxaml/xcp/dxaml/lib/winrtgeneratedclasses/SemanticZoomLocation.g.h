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


#define __SemanticZoomLocation_GUID "0c15333e-3fb2-4a64-8511-2a225f0fcca7"

namespace DirectUI
{
    class SemanticZoomLocation;

    class __declspec(novtable) SemanticZoomLocationGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation
    {
        friend class DirectUI::SemanticZoomLocation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.SemanticZoomLocation");

        BEGIN_INTERFACE_MAP(SemanticZoomLocationGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(SemanticZoomLocationGenerated, ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation)
        END_INTERFACE_MAP(SemanticZoomLocationGenerated, ctl::WeakReferenceSource)

    public:
        SemanticZoomLocationGenerated();
        ~SemanticZoomLocationGenerated() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_Bounds)(_Out_ ABI::Windows::Foundation::Rect* pValue) override;
        IFACEMETHOD(put_Bounds)(_In_ ABI::Windows::Foundation::Rect value) override;
        IFACEMETHOD(get_Item)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Item)(_In_opt_ IInspectable* pValue) override;
        _Check_return_ HRESULT get_Remainder(_Out_ ABI::Windows::Foundation::Rect* pValue);
        _Check_return_ HRESULT put_Remainder(_In_ ABI::Windows::Foundation::Rect value);
        _Check_return_ HRESULT get_ZoomPoint(_Out_ ABI::Windows::Foundation::Point* pValue);
        _Check_return_ HRESULT put_ZoomPoint(_In_ ABI::Windows::Foundation::Point value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
        ABI::Windows::Foundation::Rect m_bounds;
        TrackerPtr<IInspectable> m_pItem;
        ABI::Windows::Foundation::Rect m_remainder;
        ABI::Windows::Foundation::Point m_zoomPoint;
    };
}

#include "SemanticZoomLocation_Partial.h"

