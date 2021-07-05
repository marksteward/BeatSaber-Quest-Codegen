// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree
namespace ModestTree {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeStringFormatter
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeStringFormatter : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::TypeStringFormatter::$$c
    class $$c;
    // Creating value type constructor for type: TypeStringFormatter
    TypeStringFormatter() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _prettyNameCache
    static System::Collections::Generic::Dictionary_2<System::Type*, ::Il2CppString*>* _get__prettyNameCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _prettyNameCache
    static void _set__prettyNameCache(System::Collections::Generic::Dictionary_2<System::Type*, ::Il2CppString*>* value);
    // static public System.String PrettyName(System.Type type)
    // Offset: 0x1382680
    static ::Il2CppString* PrettyName(System::Type* type);
    // static private System.String PrettyNameInternal(System.Type type)
    // Offset: 0x13846FC
    static ::Il2CppString* PrettyNameInternal(System::Type* type);
    // static private System.String GetCSharpTypeName(System.String typeName)
    // Offset: 0x1384B30
    static ::Il2CppString* GetCSharpTypeName(::Il2CppString* typeName);
    // static private System.Void .cctor()
    // Offset: 0x1384D9C
    static void _cctor();
  }; // ModestTree.TypeStringFormatter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeStringFormatter*, "ModestTree", "TypeStringFormatter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::PrettyName
// Il2CppName: PrettyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Type*)>(&ModestTree::TypeStringFormatter::PrettyName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter*), "PrettyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::PrettyNameInternal
// Il2CppName: PrettyNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Type*)>(&ModestTree::TypeStringFormatter::PrettyNameInternal)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter*), "PrettyNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::GetCSharpTypeName
// Il2CppName: GetCSharpTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&ModestTree::TypeStringFormatter::GetCSharpTypeName)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter*), "GetCSharpTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::TypeStringFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
