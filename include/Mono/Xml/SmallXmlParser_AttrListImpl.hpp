// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList
#include "Mono/Xml/SmallXmlParser_IAttrList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser/Mono.Xml.AttrListImpl
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallXmlParser::AttrListImpl : public ::Il2CppObject/*, public Mono::Xml::SmallXmlParser::IAttrList*/ {
    public:
    // private System.Collections.Generic.List`1<System.String> attrNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* attrNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> attrValues
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* attrValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AttrListImpl
    AttrListImpl(System::Collections::Generic::List_1<::Il2CppString*>* attrNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* attrValues_ = {}) noexcept : attrNames{attrNames_}, attrValues{attrValues_} {}
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IAttrList
    operator Mono::Xml::SmallXmlParser::IAttrList() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IAttrList*>(this);
    }
    // public System.Int32 get_Length()
    // Offset: 0x1A54A74
    int get_Length();
    // public System.String[] get_Names()
    // Offset: 0x1A54C88
    ::Array<::Il2CppString*>* get_Names();
    // public System.String[] get_Values()
    // Offset: 0x1A54CE0
    ::Array<::Il2CppString*>* get_Values();
    // public System.String GetName(System.Int32 i)
    // Offset: 0x1A54AC4
    ::Il2CppString* GetName(int i);
    // public System.String GetValue(System.Int32 i)
    // Offset: 0x1A54B3C
    ::Il2CppString* GetValue(int i);
    // public System.String GetValue(System.String name)
    // Offset: 0x1A54BB4
    ::Il2CppString* GetValue(::Il2CppString* name);
    // System.Void Clear()
    // Offset: 0x1A544A0
    void Clear();
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x1A549F4
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1A530E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParser::AttrListImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SmallXmlParser::AttrListImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParser::AttrListImpl*, creationType>()));
    }
  }; // Mono.Xml.SmallXmlParser/Mono.Xml.AttrListImpl
  #pragma pack(pop)
  static check_size<sizeof(SmallXmlParser::AttrListImpl), 24 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __Mono_Xml_SmallXmlParser_AttrListImplSizeCheck;
  static_assert(sizeof(SmallXmlParser::AttrListImpl) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Xml::SmallXmlParser::AttrListImpl::*)()>(&Mono::Xml::SmallXmlParser::AttrListImpl::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::get_Names
// Il2CppName: get_Names
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Mono::Xml::SmallXmlParser::AttrListImpl::*)()>(&Mono::Xml::SmallXmlParser::AttrListImpl::get_Names)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "get_Names", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Mono::Xml::SmallXmlParser::AttrListImpl::*)()>(&Mono::Xml::SmallXmlParser::AttrListImpl::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Xml::SmallXmlParser::AttrListImpl::*)(int)>(&Mono::Xml::SmallXmlParser::AttrListImpl::GetName)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Xml::SmallXmlParser::AttrListImpl::*)(int)>(&Mono::Xml::SmallXmlParser::AttrListImpl::GetValue)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Xml::SmallXmlParser::AttrListImpl::*)(::Il2CppString*)>(&Mono::Xml::SmallXmlParser::AttrListImpl::GetValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::AttrListImpl::*)()>(&Mono::Xml::SmallXmlParser::AttrListImpl::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::AttrListImpl::*)(::Il2CppString*, ::Il2CppString*)>(&Mono::Xml::SmallXmlParser::AttrListImpl::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::AttrListImpl*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::AttrListImpl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
