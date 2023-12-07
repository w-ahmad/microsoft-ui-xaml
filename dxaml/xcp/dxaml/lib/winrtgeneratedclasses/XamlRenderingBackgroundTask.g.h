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


#define __XamlRenderingBackgroundTask_GUID "bb0cf59e-1ed3-4815-827e-af00c0185b1b"

namespace DirectUI
{
    class XamlRenderingBackgroundTask;
    class ResourceDictionary;

    class __declspec(novtable) XamlRenderingBackgroundTaskGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides
    {
        friend class DirectUI::XamlRenderingBackgroundTask;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask");

        BEGIN_INTERFACE_MAP(XamlRenderingBackgroundTaskGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(XamlRenderingBackgroundTaskGenerated, ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask)
            INTERFACE_ENTRY(XamlRenderingBackgroundTaskGenerated, ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides)
        END_INTERFACE_MAP(XamlRenderingBackgroundTaskGenerated, ctl::WeakReferenceSource)

    public:
        XamlRenderingBackgroundTaskGenerated();
        ~XamlRenderingBackgroundTaskGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::XamlRenderingBackgroundTask;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::XamlRenderingBackgroundTask;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(OnRun)(_In_ ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance* pTaskInstance) override;
        _Check_return_ HRESULT OnRunProtected(_In_ ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance* pTaskInstance);


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "XamlRenderingBackgroundTask_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) XamlRenderingBackgroundTaskFactory:
       public ctl::AggregableAbstractActivationFactory<DirectUI::XamlRenderingBackgroundTask>
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskStaticsPrivate
    {
        BEGIN_INTERFACE_MAP(XamlRenderingBackgroundTaskFactory, ctl::AggregableAbstractActivationFactory<DirectUI::XamlRenderingBackgroundTask>)
            INTERFACE_ENTRY(XamlRenderingBackgroundTaskFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory)
            INTERFACE_ENTRY(XamlRenderingBackgroundTaskFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskStaticsPrivate)
        END_INTERFACE_MAP(XamlRenderingBackgroundTaskFactory, ctl::AggregableAbstractActivationFactory<DirectUI::XamlRenderingBackgroundTask>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask** ppInstance);

        // Static properties.
        IFACEMETHOD(get_Resources)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IResourceDictionary** ppValue) override;

        // Dependency properties.

        // Attached properties.

        // Static methods.
        IFACEMETHOD(EnableStandaloneHosting)() override;
        IFACEMETHOD(SetScalePercentage)(_In_ UINT percentage) override;

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::XamlRenderingBackgroundTask;
        }

        _Check_return_ HRESULT CheckActivationAllowed() override;

    private:

        // Customized static properties.
         _Check_return_ HRESULT get_ResourcesImpl(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IResourceDictionary** ppValue); 

        // Customized static  methods.
         _Check_return_ HRESULT EnableStandaloneHostingImpl(); 
         _Check_return_ HRESULT SetScalePercentageImpl(_In_ UINT percentage); 
    };
}
