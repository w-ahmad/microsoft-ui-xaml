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

#include "FrameworkElement.g.h"

#define __Popup_GUID "ab84a122-f289-4c08-9c1b-6589d5189a29"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup2, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup2, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_ActualPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode* pValue) override { return This()->get_ActualPlacement(pValue); }
        IFACEMETHOD(get_DesiredPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode* pValue) override { return This()->get_DesiredPlacement(pValue); }
        IFACEMETHOD(put_DesiredPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode value) override { return This()->put_DesiredPlacement(value); }
        IFACEMETHOD(get_PlacementTarget)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IFrameworkElement** ppValue) override { return This()->get_PlacementTarget(ppValue); }
        IFACEMETHOD(put_PlacementTarget)(_In_opt_ ABI::Microsoft::UI::Xaml::IFrameworkElement* pValue) override { return This()->put_PlacementTarget(pValue); }
        IFACEMETHOD(add_ActualPlacementChanged)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override { return This()->add_ActualPlacementChanged(pValue, pToken); }
        IFACEMETHOD(remove_ActualPlacementChanged)(_In_ EventRegistrationToken token) override { return This()->remove_ActualPlacementChanged(token); }
    };
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup3, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup3, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_SystemBackdrop)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue) override { return This()->get_SystemBackdrop(ppValue); }
        IFACEMETHOD(put_SystemBackdrop)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue) override { return This()->put_SystemBackdrop(pValue); }
    };
}
#pragma endregion

namespace DirectUI
{
    class Popup;
    class FlyoutBase;
    class SystemBackdrop;
    class TransitionCollection;
    class UIElement;

    class __declspec(novtable) PopupGenerated:
        public DirectUI::FrameworkElement
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup
        , public ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup2, PopupGenerated >
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup3, PopupGenerated >
        , public ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop
    {
        friend class DirectUI::Popup;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.Popup");

        BEGIN_INTERFACE_MAP(PopupGenerated, DirectUI::FrameworkElement)
            INTERFACE_ENTRY(PopupGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup)
            INTERFACE_ENTRY(PopupGenerated, ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener)
            INTERFACE_ENTRY(PopupGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup2)
            INTERFACE_ENTRY(PopupGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopup3)
            INTERFACE_ENTRY(PopupGenerated, ABI::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop)
        END_INTERFACE_MAP(PopupGenerated, DirectUI::FrameworkElement)

    public:
        PopupGenerated();
        ~PopupGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> OpenedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> ClosedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> ActualPlacementChangedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Popup;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Popup;
        }

        // Properties.
        _Check_return_ HRESULT STDMETHODCALLTYPE get_ActualPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode* pValue);
        _Check_return_ HRESULT get_AssociatedFlyout(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase** ppValue);
        _Check_return_ HRESULT put_AssociatedFlyout(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase* pValue);
        IFACEMETHOD(get_Child)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        IFACEMETHOD(put_Child)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue) override;
        IFACEMETHOD(get_ChildTransitions)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue) override;
        IFACEMETHOD(put_ChildTransitions)(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue) override;
        _Check_return_ HRESULT STDMETHODCALLTYPE get_DesiredPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_DesiredPlacement(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PopupPlacementMode value);
        _Check_return_ HRESULT get_DisableOverlayIsLightDismissCheck(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT put_DisableOverlayIsLightDismissCheck(_In_ BOOLEAN value);
        IFACEMETHOD(get_HorizontalOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_HorizontalOffset)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_IsApplicationBarService(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT put_IsApplicationBarService(_In_ BOOLEAN value);
        IFACEMETHOD(get_IsConstrainedToRootBounds)(_Out_ BOOLEAN* pValue) override;
        _Check_return_ HRESULT get_IsContentDialog(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT put_IsContentDialog(_In_ BOOLEAN value);
        IFACEMETHOD(get_IsLightDismissEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsLightDismissEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsOpen)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsOpen)(_In_ BOOLEAN value) override;
        _Check_return_ HRESULT get_IsSubMenu(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT put_IsSubMenu(_In_ BOOLEAN value);
        IFACEMETHOD(get_LightDismissOverlayMode)(_Out_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode* pValue) override;
        IFACEMETHOD(put_LightDismissOverlayMode)(_In_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode value) override;
        _Check_return_ HRESULT get_OverlayElement(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IFrameworkElement** ppValue);
        _Check_return_ HRESULT put_OverlayElement(_In_opt_ ABI::Microsoft::UI::Xaml::IFrameworkElement* pValue);
        _Check_return_ HRESULT get_OverlayInputPassThroughElement(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue);
        _Check_return_ HRESULT put_OverlayInputPassThroughElement(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_PlacementTarget(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IFrameworkElement** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_PlacementTarget(_In_opt_ ABI::Microsoft::UI::Xaml::IFrameworkElement* pValue);
        IFACEMETHOD(get_ShouldConstrainToRootBounds)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_ShouldConstrainToRootBounds)(_In_ BOOLEAN value) override;
        _Check_return_ HRESULT STDMETHODCALLTYPE get_SystemBackdrop(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_SystemBackdrop(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue);
        IFACEMETHOD(get_VerticalOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_VerticalOffset)(_In_ DOUBLE value) override;

        // Events.
        _Check_return_ HRESULT GetActualPlacementChangedEventSourceNoRef(_Outptr_ ActualPlacementChangedEventSourceType** ppEventSource);
        _Check_return_ HRESULT STDMETHODCALLTYPE add_ActualPlacementChanged(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken);
        _Check_return_ HRESULT STDMETHODCALLTYPE remove_ActualPlacementChanged(_In_ EventRegistrationToken token);
        _Check_return_ HRESULT GetClosedEventSourceNoRef(_Outptr_ ClosedEventSourceType** ppEventSource);
        IFACEMETHOD(add_Closed)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Closed)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetOpenedEventSourceNoRef(_Outptr_ OpenedEventSourceType** ppEventSource);
        IFACEMETHOD(add_Opened)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Opened)(_In_ EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(OnBackButtonPressed)(_Out_ BOOLEAN* pResult) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "Popup_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) PopupFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics2
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics3
    {
        BEGIN_INTERFACE_MAP(PopupFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(PopupFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics)
            INTERFACE_ENTRY(PopupFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics2)
            INTERFACE_ENTRY(PopupFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IPopupStatics3)
        END_INTERFACE_MAP(PopupFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ChildProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsOpenProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalOffsetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_VerticalOffsetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ChildTransitionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsLightDismissEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LightDismissOverlayModeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ShouldConstrainToRootBoundsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PlacementTargetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DesiredPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_SystemBackdropProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Popup;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
