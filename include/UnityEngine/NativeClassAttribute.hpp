// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.NativeClassAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D78E84
  // [VisibleToOtherModulesAttribute] Offset: D78E84
  class NativeClassAttribute : public System::Attribute {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD793F4
    // private System.String <QualifiedNativeName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* QualifiedNativeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD79430
    // private System.String <Declaration>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Declaration;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NativeClassAttribute
    NativeClassAttribute(::Il2CppString* QualifiedNativeName_ = {}, ::Il2CppString* Declaration_ = {}) noexcept : QualifiedNativeName{QualifiedNativeName_}, Declaration{Declaration_} {}
    // private System.Void set_QualifiedNativeName(System.String value)
    // Offset: 0x23C21E0
    void set_QualifiedNativeName(::Il2CppString* value);
    // private System.Void set_Declaration(System.String value)
    // Offset: 0x23C21E8
    void set_Declaration(::Il2CppString* value);
    // public System.Void .ctor(System.String qualifiedCppName)
    // Offset: 0x23C21F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeClassAttribute* New_ctor(::Il2CppString* qualifiedCppName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::NativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeClassAttribute*, creationType>(qualifiedCppName)));
    }
    // public System.Void .ctor(System.String qualifiedCppName, System.String declaration)
    // Offset: 0x23C2268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeClassAttribute* New_ctor(::Il2CppString* qualifiedCppName, ::Il2CppString* declaration) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::NativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeClassAttribute*, creationType>(qualifiedCppName, declaration)));
    }
  }; // UnityEngine.NativeClassAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeClassAttribute), 24 + sizeof(::Il2CppString*)> __UnityEngine_NativeClassAttributeSizeCheck;
  static_assert(sizeof(NativeClassAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::set_QualifiedNativeName
// Il2CppName: set_QualifiedNativeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::NativeClassAttribute::*)(::Il2CppString*)>(&UnityEngine::NativeClassAttribute::set_QualifiedNativeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NativeClassAttribute*), "set_QualifiedNativeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::set_Declaration
// Il2CppName: set_Declaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::NativeClassAttribute::*)(::Il2CppString*)>(&UnityEngine::NativeClassAttribute::set_Declaration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NativeClassAttribute*), "set_Declaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::NativeClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
