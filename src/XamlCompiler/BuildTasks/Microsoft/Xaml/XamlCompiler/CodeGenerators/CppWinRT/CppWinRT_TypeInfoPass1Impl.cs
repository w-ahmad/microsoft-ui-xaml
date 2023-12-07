﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace Microsoft.UI.Xaml.Markup.Compiler.CodeGen
{
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    internal partial class CppWinRT_TypeInfoPass1Impl : CppWinRT_CodeGenerator<TypeInfoDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(@"//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
");
  if(!String.IsNullOrEmpty(ProjectInfo.PrecompiledHeaderFile)) { 
            this.Write("#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(ProjectInfo.PrecompiledHeaderFile));
            this.Write("\"\r\n");
  }
            this.Write(@"
#include <memory>
#include <string>
#include <regex>
#include <unknwn.h>
#include <mutex>
#include ""winrt/windows.foundation.h""
#include ""winrt/windows.ui.xaml.interop.h""
#include ""winrt/microsoft.ui.xaml.markup.h""
#include ""XamlTypeInfo.xaml.g.h""
#include ""XamlMetaDataProvider.h""

namespace winrt::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(ProjectInfo.RootNamespace)));
            this.Write("::implementation\r\n{\r\n    using namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write(";\r\n    using namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsXamlInterop)));
            this.Write(";\r\n\r\n    // XamlMetaDataProvider\r\n\r\n\r\n");
  if(!ProjectInfo.GenerateProviderCode) { 
            this.Write("    void XamlMetaDataProvider::AddOtherProvider(IXamlMetadataProvider otherProvid" +
                    "er)\r\n    {\r\n        Provider()->AddOtherProvider(otherProvider);\r\n    }\r\n\r\n");
  }
            this.Write("    IXamlType XamlMetaDataProvider::GetXamlType(TypeName const& type)\r\n    {\r\n   " +
                    "     return Provider()->GetXamlTypeByType(type);\r\n    }\r\n\r\n    IXamlType XamlMet" +
                    "aDataProvider::GetXamlType(::winrt::hstring const& fullName)\r\n    {\r\n        ret" +
                    "urn Provider()->GetXamlTypeByName(fullName);\r\n    }\r\n\r\n    ::winrt::com_array<Xm" +
                    "lnsDefinition> XamlMetaDataProvider::GetXmlnsDefinitions()\r\n    {\r\n        retur" +
                    "n ::winrt::com_array<XmlnsDefinition>(0);\r\n    }\r\n\r\n    std::shared_ptr<XamlType" +
                    "InfoProvider> XamlMetaDataProvider::Provider()\r\n    {\r\n        if (!_provider)\r\n" +
                    "        {\r\n            _provider = std::make_shared<XamlTypeInfoProvider>();\r\n  " +
                    "      }\r\n        return _provider;\r\n    }\r\n\r\n    // XamlTypeInfoProvider\r\n\r\n    " +
                    "IXamlType XamlTypeInfoProvider::GetXamlTypeByType(TypeName const& type)\r\n    {\r\n" +
                    "        auto xamlType = GetXamlTypeByName(type.Name);\r\n        auto userXamlType" +
                    " = xamlType ? xamlType.try_as<IXamlUserType>() : nullptr;\r\n        if (!xamlType" +
                    " || (userXamlType && userXamlType->IsReturnTypeStub() && !userXamlType->IsLocalT" +
                    "ype()))\r\n        {\r\n            auto libXamlType = CheckOtherMetadataProvidersFo" +
                    "rType(type);\r\n            if (libXamlType)\r\n            {\r\n                if (l" +
                    "ibXamlType.IsConstructible() || !xamlType)\r\n                {\r\n                 " +
                    "   xamlType = libXamlType;\r\n                }\r\n            }\r\n        }\r\n       " +
                    " return xamlType;\r\n    }\r\n\r\n    IXamlType XamlTypeInfoProvider::GetXamlTypeByNam" +
                    "e(::winrt::hstring const& typeName)\r\n    {\r\n        if (typeName.empty())\r\n     " +
                    "   {\r\n            return nullptr;\r\n        }\r\n\r\n        std::lock_guard<std::rec" +
                    "ursive_mutex> lock(_xamlTypesCriticalSection);\r\n        auto val = _xamlTypes.fi" +
                    "nd(typeName.data());\r\n        if (val != _xamlTypes.end())\r\n        {\r\n         " +
                    "   auto xamlType = (val->second).get();\r\n            if (xamlType)\r\n            " +
                    "{\r\n                return xamlType;\r\n            }\r\n        }\r\n\r\n        auto xa" +
                    "mlType = CreateXamlType(typeName);\r\n        auto userXamlType = xamlType ? xamlT" +
                    "ype.try_as<IXamlUserType>() : nullptr;\r\n        if (!xamlType || (userXamlType &" +
                    "& userXamlType->IsReturnTypeStub() && !userXamlType->IsLocalType()))\r\n        {\r" +
                    "\n            IXamlType libXamlType = CheckOtherMetadataProvidersForName(typeName" +
                    ");\r\n            if (libXamlType)\r\n            {\r\n                if (libXamlType" +
                    ".IsConstructible() || !xamlType)\r\n                {\r\n                    xamlTyp" +
                    "e = libXamlType;\r\n                }\r\n            }\r\n        }\r\n\r\n        if (xam" +
                    "lType)\r\n        {\r\n            _xamlTypes.insert_or_assign(xamlType.FullName().d" +
                    "ata(), xamlType);\r\n        }\r\n        return xamlType;\r\n    }\r\n\r\n    IXamlMember" +
                    " XamlTypeInfoProvider::GetMemberByLongName(::winrt::hstring const& longMemberNam" +
                    "e)\r\n    {\r\n        if (longMemberName.empty())\r\n        {\r\n            return nu" +
                    "llptr;\r\n        }\r\n\r\n        std::lock_guard<std::recursive_mutex> lock(_xamlMem" +
                    "bersCriticalSection);\r\n        auto val = _xamlMembers.find(longMemberName.data(" +
                    "));\r\n        if (val != _xamlMembers.end())\r\n        {\r\n            return val->" +
                    "second;\r\n        }\r\n\r\n        auto xamlMember = CreateXamlMember(longMemberName)" +
                    ";\r\n\r\n        if (xamlMember)\r\n        {\r\n            _xamlMembers.insert_or_assi" +
                    "gn(longMemberName.data(), xamlMember);\r\n        }\r\n        return xamlMember;\r\n " +
                    "   }\r\n");
  if(!ProjectInfo.GenerateProviderCode) { 
            this.Write("\r\n    void XamlTypeInfoProvider::AddOtherProvider(IXamlMetadataProvider otherProv" +
                    "ider)\r\n    {\r\n         std::lock_guard<std::recursive_mutex> lock(_xamlTypesCrit" +
                    "icalSection);\r\n        _otherProviders.push_back(otherProvider);\r\n    }\r\n");
  }
            this.Write("\r\n    IXamlType XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::winrt:" +
                    ":hstring const& typeName)\r\n    {\r\n        IXamlType foundXamlType;\r\n        std:" +
                    ":lock_guard<std::recursive_mutex> lock(_xamlTypesCriticalSection);\r\n        for " +
                    "(auto const& provider : OtherProviders())\r\n        {\r\n            auto xamlType " +
                    "= provider.GetXamlType(typeName);\r\n            if (xamlType)\r\n            {\r\n   " +
                    "             if (xamlType.IsConstructible())\r\n                {\r\n               " +
                    "     return xamlType;\r\n                }\r\n                foundXamlType = xamlTy" +
                    "pe;\r\n            }\r\n        }\r\n        return foundXamlType;\r\n    }\r\n\r\n    IXaml" +
                    "Type XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(TypeName const& t)" +
                    "\r\n    {\r\n        IXamlType foundXamlType;\r\n        std::lock_guard<std::recursiv" +
                    "e_mutex> lock(_xamlTypesCriticalSection);\r\n        for (auto const& provider : O" +
                    "therProviders())\r\n        {\r\n            auto xamlType = provider.GetXamlType(t)" +
                    ";\r\n            if (xamlType)\r\n            {\r\n                if (xamlType.IsCons" +
                    "tructible())\r\n                {\r\n                    return xamlType;\r\n         " +
                    "       }\r\n                foundXamlType = xamlType;\r\n            }\r\n        }\r\n " +
                    "       return foundXamlType;\r\n    }\r\n\r\n    // XamlSystemBaseType\r\n\r\n    XamlSyst" +
                    "emBaseType::XamlSystemBaseType(::winrt::hstring const& name)\r\n        : _fullNam" +
                    "e(name)\r\n    {\r\n    }\r\n\r\n    IXamlType XamlSystemBaseType::BaseType() const\r\n   " +
                    " {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    IXamlMember" +
                    " XamlSystemBaseType::ContentProperty() const\r\n    {\r\n        throw ::winrt::hres" +
                    "ult_not_implemented {};\r\n    }\r\n\r\n    ::winrt::hstring XamlSystemBaseType::FullN" +
                    "ame() const\r\n    {\r\n        return _fullName;\r\n    }\r\n\r\n    ::winrt::hstring Xam" +
                    "lSystemBaseType::Name() const\r\n    {\r\n        const wchar_t* separator = wcsrchr" +
                    "(_fullName.c_str(), \'.\');\r\n        if (!separator)\r\n        {\r\n            retur" +
                    "n _fullName;\r\n        }\r\n        return ::winrt::hstring { separator };\r\n    }\r\n" +
                    "\r\n    bool XamlSystemBaseType::IsArray() const\r\n    {\r\n        throw ::winrt::hr" +
                    "esult_not_implemented {};\r\n    }\r\n\r\n    bool XamlSystemBaseType::IsCollection() " +
                    "const\r\n    {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    b" +
                    "ool XamlSystemBaseType::IsConstructible() const\r\n    {\r\n        throw ::winrt::h" +
                    "result_not_implemented {};\r\n    }\r\n\r\n    bool XamlSystemBaseType::IsDictionary()" +
                    " const\r\n    {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    " +
                    "bool XamlSystemBaseType::IsMarkupExtension() const\r\n    {\r\n        throw ::winrt" +
                    "::hresult_not_implemented {};\r\n    }\r\n\r\n    bool XamlSystemBaseType::IsEnum() co" +
                    "nst\r\n    {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    boo" +
                    "l XamlSystemBaseType::IsSystemType() const\r\n    {\r\n        throw ::winrt::hresul" +
                    "t_not_implemented {};\r\n    }\r\n\r\n    bool XamlSystemBaseType::IsBindable() const\r" +
                    "\n    {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    IXamlTy" +
                    "pe XamlSystemBaseType::ItemType() const\r\n    {\r\n        throw ::winrt::hresult_n" +
                    "ot_implemented {};\r\n    }\r\n\r\n    IXamlType XamlSystemBaseType::KeyType() const\r\n" +
                    "    {\r\n        throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    IXamlTyp" +
                    "e XamlSystemBaseType::BoxedType() const\r\n    {\r\n        throw ::winrt::hresult_n" +
                    "ot_implemented {};\r\n    }\r\n\r\n    TypeName XamlSystemBaseType::UnderlyingType() c" +
                    "onst\r\n    {\r\n        return { _fullName, TypeKind::Primitive };\r\n    }\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write(@"::IInspectable XamlSystemBaseType::ActivateInstance() const
    {
        throw ::winrt::hresult_not_implemented {};
    }

    IXamlMember XamlSystemBaseType::GetMember(::winrt::hstring const& ) const
    {
        throw ::winrt::hresult_not_implemented {};
    }

    void XamlSystemBaseType::AddToVector(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const&, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const&) const\r\n    {\r\n        throw ::winrt::hresult_not_implement" +
                    "ed {};\r\n    }\r\n\r\n    void XamlSystemBaseType::AddToMap(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const&, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const&, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const&) const\r\n    {\r\n        throw ::winrt::hresult_not_implement" +
                    "ed {};\r\n    }\r\n\r\n    void XamlSystemBaseType::RunInitializer() const\r\n    {\r\n   " +
                    "     throw ::winrt::hresult_not_implemented {};\r\n    }\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write(@"::IInspectable XamlSystemBaseType::CreateFromString(::winrt::hstring const& ) const
    {
        throw ::winrt::hresult_not_implemented {};
    }

    // XamlUserType

    XamlUserType::XamlUserType(
        std::shared_ptr<XamlTypeInfoProvider> const& provider, 
        ::winrt::hstring const& fullName, 
        IXamlType baseType)
            : _provider(provider)
            , _fullName(fullName)
            , _baseType(baseType)
    {
    }

    ::winrt::hstring XamlUserType::GetRuntimeClassName() const
    {
        static ::winrt::hstring name{ ::winrt::name_of<");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IXamlType>() };\r\n        return name;\r\n    }\r\n\r\n    ::winrt::hstring XamlUserTy" +
                    "pe::FullName() const\r\n    {\r\n        return _fullName;\r\n    }\r\n\r\n    ::winrt::hs" +
                    "tring XamlUserType::Name() const\r\n    {\r\n        const wchar_t* separator = wcsr" +
                    "chr(_fullName.c_str(), \'.\');\r\n        if (!separator)\r\n        {\r\n            re" +
                    "turn _fullName;\r\n        }\r\n        return separator;\r\n    }\r\n\r\n    TypeName Xam" +
                    "lUserType::UnderlyingType() const\r\n    {\r\n        return { _fullName, _kindOfTyp" +
                    "e };\r\n    }\r\n\r\n    bool XamlUserType::IsSystemType() const\r\n    {\r\n        retur" +
                    "n true;\r\n    }\r\n\r\n    IXamlType XamlUserType::BaseType() const\r\n    {\r\n        r" +
                    "eturn _baseType;\r\n    }\r\n\r\n    bool XamlUserType::IsArray() const\r\n    {\r\n      " +
                    "  return _isArray;\r\n    }\r\n\r\n    void XamlUserType::IsArray(bool value)\r\n    {\r\n" +
                    "        _isArray = value;\r\n    }\r\n\r\n    bool XamlUserType::IsCollection() const\r" +
                    "\n    {\r\n        return _collectionAdd;\r\n    }\r\n\r\n    bool XamlUserType::IsConstr" +
                    "uctible() const\r\n    {\r\n        return _activator;\r\n    }\r\n\r\n    bool XamlUserTy" +
                    "pe::IsDictionary() const\r\n    {\r\n        return _dictionaryAdd;\r\n    }\r\n\r\n    bo" +
                    "ol XamlUserType::IsMarkupExtension() const\r\n    {\r\n        return _isMarkupExten" +
                    "sion;\r\n    }\r\n\r\n    void XamlUserType::IsMarkupExtension(bool value)\r\n    {\r\n   " +
                    "     _isMarkupExtension = value;\r\n    }\r\n\r\n    bool XamlUserType::IsEnum() const" +
                    "\r\n    {\r\n        return _isEnum;\r\n    }\r\n\r\n    void XamlUserType::IsEnum(bool va" +
                    "lue)\r\n    {\r\n        _isEnum = value;\r\n    }\r\n\r\n    bool XamlUserType::IsBindabl" +
                    "e() const\r\n    {\r\n        return _isBindable;\r\n    }\r\n\r\n    void XamlUserType::I" +
                    "sBindable(bool value)\r\n    {\r\n        _isBindable = value;\r\n    }\r\n\r\n    bool Xa" +
                    "mlUserType::IsReturnTypeStub() const\r\n    {\r\n        return _isReturnTypeStub;\r\n" +
                    "    }\r\n\r\n    void XamlUserType::IsReturnTypeStub(bool value)\r\n    {\r\n        _is" +
                    "ReturnTypeStub = value;\r\n    }\r\n\r\n    bool XamlUserType::IsLocalType() const\r\n  " +
                    "  {\r\n        return _isLocalType;\r\n    }\r\n\r\n    void XamlUserType::IsLocalType(b" +
                    "ool value)\r\n    {\r\n        _isLocalType = value;\r\n    }\r\n\r\n    IXamlMember XamlU" +
                    "serType::ContentProperty() const\r\n    {\r\n        return _provider->GetMemberByLo" +
                    "ngName(_contentPropertyName);\r\n    }\r\n\r\n    IXamlType XamlUserType::ItemType() c" +
                    "onst\r\n    {\r\n        return _provider->GetXamlTypeByName(_itemTypeName);\r\n    }\r" +
                    "\n\r\n    IXamlType XamlUserType::KeyType() const\r\n    {\r\n        return _provider-" +
                    ">GetXamlTypeByName(_keyTypeName);\r\n    }\r\n\r\n    IXamlType XamlUserType::BoxedTyp" +
                    "e() const\r\n    {\r\n        return _boxedType;\r\n    }\r\n\r\n\r\n    IXamlMember XamlUse" +
                    "rType::GetMember(::winrt::hstring const& name) const\r\n    {\r\n        auto val = " +
                    "_memberNames.find(name.data());\r\n        if (val != _memberNames.end())\r\n       " +
                    " {\r\n            return _provider->GetMemberByLongName(val->second);\r\n        }\r\n" +
                    "        return nullptr;\r\n    }\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable XamlUserType::ActivateInstance() const\r\n    {\r\n        return _act" +
                    "ivator();\r\n    }\r\n\r\n    void XamlUserType::AddToMap(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& key, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& item) const\r\n    {\r\n        _dictionaryAdd(instance, key, i" +
                    "tem);\r\n    }\r\n\r\n    void XamlUserType::AddToVector(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& item) const\r\n    {\r\n        _collectionAdd(instance, item);" +
                    "\r\n    }\r\n\r\n    void XamlUserType::RunInitializer() const\r\n    {\r\n        // The " +
                    "C++ runtime will have already run all the Static Initializers at start up.\r\n    " +
                    "}\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write(@"::IInspectable XamlUserType::CreateFromString(::winrt::hstring const& input) const
    {
        // For boxed types, run the boxed type's CreateFromString method and boxing
        if (BoxedType() != nullptr)
        {
            return BoxedType().CreateFromString(input);
        }

        if (_createFromStringMethod)
        {
            return (*_createFromStringMethod)(input);
        }
        else
        {
            return _fromStringConverter(*this, input);
        }
    }

    void XamlUserType::ContentPropertyName(::winrt::hstring const& value) 
    { 
        _contentPropertyName = value; 
    }

    void XamlUserType::ItemTypeName(::winrt::hstring const& value)
    { 
        _itemTypeName = value; 
    }

    void XamlUserType::KeyTypeName(::winrt::hstring const& value)
    {
        _keyTypeName = value; 
    }
    void XamlUserType::SetBoxedType(IXamlType boxedType)
    {
        _boxedType = boxedType;
    }


    void XamlUserType::AddMemberName(::winrt::hstring const& shortName)
    {
        std::wstring longName = FullName().data();
        longName += L""."";
        longName += shortName;
    ");
    // TODO: Make this faster with WindowsPreallocateStringBuffer 
            this.Write("        _memberNames.insert_or_assign(shortName.data(), longName);\r\n    }\r\n\r\n    " +
                    "void XamlUserType::AddEnumValue(::winrt::hstring const& name, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable value)\r\n    {\r\n        _enumValues.insert_or_assign(name.data(), v" +
                    "alue);\r\n    }\r\n\r\n    uint32_t XamlUserType::CreateEnumUIntFromString(::winrt::hs" +
                    "tring const& input) const\r\n    {\r\n        bool found = false;\r\n\r\n        const s" +
                    "td::wregex regularExpression(L\"^\\\\s+|\\\\s*,\\\\s*|\\\\s+$\");\r\n        uint32_t val = " +
                    "0;\r\n\r\n        for (std::wcregex_token_iterator it{ input.begin(), input.end(), r" +
                    "egularExpression, -1 }, end; it != end; ++it)\r\n        {\r\n            std::wcsub" +
                    "_match const& subMatch = *it;\r\n            if (subMatch.length() == 0)\r\n        " +
                    "    {\r\n                continue;\r\n            }\r\n\r\n            auto lookup{ subM" +
                    "atch.str() };\r\n\r\n            try\r\n            {\r\n                auto entry = _e" +
                    "numValues.find(lookup);\r\n                if (entry != _enumValues.end())\r\n      " +
                    "          {\r\n                    val = winrt::unbox_value<int>(entry->second);\r\n" +
                    "                }\r\n                else\r\n                {\r\n                    " +
                    "val |= std::stoi(subMatch);\r\n                }\r\n                found = true;\r\n " +
                    "           }\r\n            catch (std::invalid_argument const&)\r\n            {\r\n " +
                    "               found = false;\r\n                break;\r\n            }\r\n        }\r" +
                    "\n\r\n        if (found)\r\n        {\r\n            return val;\r\n        }\r\n        th" +
                    "row ::winrt::hresult_invalid_argument {};\r\n    }\r\n\r\n \r\n    XamlMember::XamlMembe" +
                    "r(\r\n        std::shared_ptr<XamlTypeInfoProvider> const& provider, \r\n        ::w" +
                    "inrt::hstring const& name, \r\n        ::winrt::hstring const& typeName)\r\n        " +
                    "    : _provider(provider)\r\n            , _name(name)\r\n            , _typeName(ty" +
                    "peName)\r\n    {\r\n    }\r\n\r\n    void XamlMember::TargetTypeName(::winrt::hstring co" +
                    "nst& value)\r\n    { \r\n        _targetTypeName = value; \r\n    }\r\n\r\n    bool XamlMe" +
                    "mber::IsAttachable() const\r\n    {\r\n        return _isAttachable;\r\n    }\r\n\r\n    v" +
                    "oid XamlMember::IsAttachable(bool value)\r\n    {\r\n        _isAttachable = value;\r" +
                    "\n    }\r\n\r\n    bool XamlMember::IsDependencyProperty() const\r\n    {\r\n        retu" +
                    "rn _isDependencyProperty;\r\n    }\r\n\r\n    void XamlMember::IsDependencyProperty(bo" +
                    "ol value)\r\n    {\r\n        _isDependencyProperty = value;\r\n    }\r\n\r\n    bool Xaml" +
                    "Member::IsReadOnly() const\r\n    {\r\n        return _isReadOnly;\r\n    }\r\n\r\n    voi" +
                    "d XamlMember::IsReadOnly(bool value)\r\n    {\r\n        _isReadOnly = value;\r\n    }" +
                    "\r\n\r\n    ::winrt::hstring XamlMember::Name() const\r\n    {\r\n        return _name;\r" +
                    "\n    }\r\n\r\n    IXamlType XamlMember::Type() const\r\n    {\r\n        return _provide" +
                    "r->GetXamlTypeByName(_typeName);\r\n    }\r\n\r\n    IXamlType XamlMember::TargetType(" +
                    ") const\r\n    {\r\n        return _provider->GetXamlTypeByName(_targetTypeName);\r\n " +
                    "   }\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable XamlMember::GetValue(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance) const\r\n    {\r\n        return _getter(instance);\r\n" +
                    "    }\r\n\r\n    void XamlMember::SetValue(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n    {\r\n        _setter(instance, value);\r\n    }\r\n}");
            return this.GenerationEnvironment.ToString();
        }
    }
}
