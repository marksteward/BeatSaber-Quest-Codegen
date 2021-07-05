// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Res
  class Res : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Res
    Res() noexcept {}
    // static public System.String GetString(System.String name)
    // Offset: 0x192C6EC
    static ::Il2CppString* GetString(::Il2CppString* name);
    // static public System.String GetString(System.String name, params System.Object[] args)
    // Offset: 0x1931C20
    static ::Il2CppString* GetString(::Il2CppString* name, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.String GetString(System.String name, params System.Object[] args)
    static ::Il2CppString* GetString(::Il2CppString* name, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.String GetString(System.String name, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppString* GetString(::Il2CppString* name, TParams&&... args) {
      return GetString(name, {args...});
    }
  }; // System.Xml.Res
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Res*, "System.Xml", "Res");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Res::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Xml::Res::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Res*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Res::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&System::Xml::Res::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Res*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
