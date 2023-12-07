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

#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi) 
#define FEATURE_UWPSUPPORTAPI_OVERRIDE override
#else
#define FEATURE_UWPSUPPORTAPI_OVERRIDE
#endif
#define __FrameworkApplication_GUID "9e00ad29-1d7e-48dd-a33a-e22f902499ca"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::IApplication2, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::IApplication2, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(add_ResourceManagerRequested)(_In_ ABI::Windows::Foundation::ITypedEventHandler<IInspectable*, ABI::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override { return This()->add_ResourceManagerRequested(pValue, pToken); }
        IFACEMETHOD(remove_ResourceManagerRequested)(_In_ EventRegistrationToken token) override { return This()->remove_ResourceManagerRequested(token); }
    };
}
#pragma endregion

namespace DirectUI
{
    class FrameworkApplication;
    class DebugSettings;
    class LaunchActivatedEventArgs;
    class ResourceDictionary;
    class WindowCreatedEventArgs;
    class XamlIslandRoot;

    class __declspec(novtable) FrameworkApplicationGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::IApplication
        , public ABI::Microsoft::UI::Xaml::IApplicationOverrides
        , public ABI::Microsoft::UI::Xaml::IFrameworkApplicationPrivate
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::IApplication2, FrameworkApplicationGenerated >
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        , public ABI::Microsoft::UI::Xaml::IApplicationFeature_UwpSupportApi
        , public ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi
#endif
    {
        friend class DirectUI::FrameworkApplication;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Application");

        BEGIN_INTERFACE_MAP(FrameworkApplicationGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IApplication)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IApplicationOverrides)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IFrameworkApplicationPrivate)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IApplication2)
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IApplicationFeature_UwpSupportApi)
            INTERFACE_ENTRY(FrameworkApplicationGenerated, ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi)
#endif
        END_INTERFACE_MAP(FrameworkApplicationGenerated, ctl::WeakReferenceSource)

    public:
        FrameworkApplicationGenerated();
        ~FrameworkApplicationGenerated() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_DebugSettings)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDebugSettings** ppValue) override;
        IFACEMETHOD(get_FocusVisualKind)(_Out_ ABI::Microsoft::UI::Xaml::FocusVisualKind* pValue) override;
        IFACEMETHOD(put_FocusVisualKind)(_In_ ABI::Microsoft::UI::Xaml::FocusVisualKind value) override;
        IFACEMETHOD(get_HighContrastAdjustment)(_Out_ ABI::Microsoft::UI::Xaml::ApplicationHighContrastAdjustment* pValue) override;
        IFACEMETHOD(put_HighContrastAdjustment)(_In_ ABI::Microsoft::UI::Xaml::ApplicationHighContrastAdjustment value) override;
        IFACEMETHOD(get_RequestedTheme)(_Out_ ABI::Microsoft::UI::Xaml::ApplicationTheme* pValue) override;
        IFACEMETHOD(put_RequestedTheme)(_In_ ABI::Microsoft::UI::Xaml::ApplicationTheme value) override;
        IFACEMETHOD(get_RequiresPointerMode)(_Out_ ABI::Microsoft::UI::Xaml::ApplicationRequiresPointerMode* pValue) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        IFACEMETHOD(put_RequiresPointerMode)(_In_ ABI::Microsoft::UI::Xaml::ApplicationRequiresPointerMode value) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        IFACEMETHOD(get_Resources)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IResourceDictionary** ppValue) override;
        IFACEMETHOD(put_Resources)(_In_opt_ ABI::Microsoft::UI::Xaml::IResourceDictionary* pValue) override;
        IFACEMETHOD(get_ShutdownModel)(_Out_ ABI::Microsoft::UI::Xaml::ShutdownModel* pValue) override;
        IFACEMETHOD(put_ShutdownModel)(_In_ ABI::Microsoft::UI::Xaml::ShutdownModel value) override;
        IFACEMETHOD(get_Windows)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Window*>** ppValue) override;

        // Events.
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(add_EnteredBackground)(_In_ ABI::Microsoft::UI::Xaml::IEnteredBackgroundEventHandler* pValue, _Out_ EventRegistrationToken* pToken) = 0;
        IFACEMETHOD(remove_EnteredBackground)(_In_ EventRegistrationToken token) = 0;
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(add_LeavingBackground)(_In_ ABI::Microsoft::UI::Xaml::ILeavingBackgroundEventHandler* pValue, _Out_ EventRegistrationToken* pToken) = 0;
        IFACEMETHOD(remove_LeavingBackground)(_In_ EventRegistrationToken token) = 0;
#endif
        virtual _Check_return_ HRESULT STDMETHODCALLTYPE add_ResourceManagerRequested(_In_ ABI::Windows::Foundation::ITypedEventHandler<IInspectable*, ABI::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken);
        virtual _Check_return_ HRESULT STDMETHODCALLTYPE remove_ResourceManagerRequested(_In_ EventRegistrationToken token);
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(add_Resuming)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) = 0;
        IFACEMETHOD(remove_Resuming)(_In_ EventRegistrationToken token) = 0;
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(add_Suspending)(_In_ ABI::Microsoft::UI::Xaml::ISuspendingEventHandler* pValue, _Out_ EventRegistrationToken* pToken) = 0;
        IFACEMETHOD(remove_Suspending)(_In_ EventRegistrationToken token) = 0;
#endif
        IFACEMETHOD(add_UnhandledException)(_In_ ABI::Microsoft::UI::Xaml::IUnhandledExceptionEventHandler* pValue, _Out_ EventRegistrationToken* pToken) = 0;
        IFACEMETHOD(remove_UnhandledException)(_In_ EventRegistrationToken token) = 0;

        // Methods.
        IFACEMETHOD(CreateIslandRoot)(_Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot** ppResult) override;
        IFACEMETHOD(CreateIslandRootWithContentBridge)(_In_ IInspectable* pOwner, _In_opt_ IInspectable* pContentBridge, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot** ppResult) override;
        IFACEMETHOD(Exit)() override;
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnBackgroundActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnBackgroundActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnCachedFileUpdaterActivated)(_In_ ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnCachedFileUpdaterActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnFileActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnFileActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnFileOpenPickerActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnFileOpenPickerActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnFileSavePickerActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnFileSavePickerActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs* pArgs);
#endif
        IFACEMETHOD(OnLaunched)(_In_ ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs* pArgs) override;
        _Check_return_ HRESULT OnLaunchedProtected(_In_ ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs* pArgs);
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnSearchActivated)(_In_ ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnSearchActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnShareTargetActivated)(_In_ ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnShareTargetActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs* pArgs);
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
        IFACEMETHOD(OnWindowCreated)(_In_ ABI::Microsoft::UI::Xaml::IWindowCreatedEventArgs* pArgs) FEATURE_UWPSUPPORTAPI_OVERRIDE;
        _Check_return_ HRESULT OnWindowCreatedProtected(_In_ ABI::Microsoft::UI::Xaml::IWindowCreatedEventArgs* pArgs);
#endif
        IFACEMETHOD(RemoveIsland)(_In_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot* pIsland) override;
        IFACEMETHOD(SetSynchronizationWindow)(_In_ UINT64 commitResizeWindow) override;
        IFACEMETHOD(StartOnCurrentThread)(_In_opt_ ABI::Microsoft::UI::Xaml::IApplicationInitializationCallback* pCallback) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
       _Check_return_ HRESULT EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const;

        // Fields.
    };
}

#include "FrameworkApplication_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) FrameworkApplicationFactory:
       public ctl::AggregableActivationFactory<DirectUI::FrameworkApplication>
        , public ABI::Microsoft::UI::Xaml::IApplicationFactory
        , public ABI::Microsoft::UI::Xaml::IApplicationStatics
        , public ABI::Microsoft::UI::Xaml::IFrameworkApplicationStaticsPrivate
    {
        BEGIN_INTERFACE_MAP(FrameworkApplicationFactory, ctl::AggregableActivationFactory<DirectUI::FrameworkApplication>)
            INTERFACE_ENTRY(FrameworkApplicationFactory, ABI::Microsoft::UI::Xaml::IApplicationFactory)
            INTERFACE_ENTRY(FrameworkApplicationFactory, ABI::Microsoft::UI::Xaml::IApplicationStatics)
            INTERFACE_ENTRY(FrameworkApplicationFactory, ABI::Microsoft::UI::Xaml::IFrameworkApplicationStaticsPrivate)
        END_INTERFACE_MAP(FrameworkApplicationFactory, ctl::AggregableActivationFactory<DirectUI::FrameworkApplication>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IApplication** ppInstance);

        // Static properties.
        IFACEMETHOD(get_Current)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IApplication** ppValue) override;

        // Dependency properties.
        

        // Attached properties.

        // Static methods.
        IFACEMETHOD(Start)(_In_opt_ ABI::Microsoft::UI::Xaml::IApplicationInitializationCallback* pCallback) override;
        IFACEMETHOD(LoadComponent)(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator) override;
        IFACEMETHOD(LoadComponentWithResourceLocation)(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator, _In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation) override;
        IFACEMETHOD(EnableFailFastOnStowedException)() override;

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;


        _Check_return_ HRESULT CheckActivationAllowed() override;

    private:

        // Customized static properties.
         _Check_return_ HRESULT get_CurrentImpl(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IApplication** ppValue); 

        // Customized static  methods.
         _Check_return_ HRESULT StartImpl(_In_opt_ ABI::Microsoft::UI::Xaml::IApplicationInitializationCallback* pCallback); 
         _Check_return_ HRESULT LoadComponentImpl(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator); 
         _Check_return_ HRESULT LoadComponentWithResourceLocationImpl(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator, _In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation); 
         _Check_return_ HRESULT EnableFailFastOnStowedExceptionImpl(); 
    };
}
