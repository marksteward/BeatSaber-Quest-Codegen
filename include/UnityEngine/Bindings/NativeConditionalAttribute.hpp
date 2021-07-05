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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeConditionalAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B728
  // [AttributeUsageAttribute] Offset: D8B728
  class NativeConditionalAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8BC78
    // [DebuggerBrowsableAttribute] Offset: 0xD8BC78
    // private System.String <Condition>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Condition;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD8BCB4
    // [CompilerGeneratedAttribute] Offset: 0xD8BCB4
    // private System.Boolean <Enabled>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool Enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NativeConditionalAttribute
    NativeConditionalAttribute(::Il2CppString* Condition_ = {}, bool Enabled_ = {}) noexcept : Condition{Condition_}, Enabled{Enabled_} {}
    // public System.Void set_Condition(System.String value)
    // Offset: 0x23EBC40
    void set_Condition(::Il2CppString* value);
    // public System.Void set_Enabled(System.Boolean value)
    // Offset: 0x23EBC48
    void set_Enabled(bool value);
    // public System.Void .ctor(System.String condition)
    // Offset: 0x23EBC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeConditionalAttribute* New_ctor(::Il2CppString* condition) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeConditionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeConditionalAttribute*, creationType>(condition)));
    }
  }; // UnityEngine.Bindings.NativeConditionalAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeConditionalAttribute), 24 + sizeof(bool)> __UnityEngine_Bindings_NativeConditionalAttributeSizeCheck;
  static_assert(sizeof(NativeConditionalAttribute) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeConditionalAttribute*, "UnityEngine.Bindings", "NativeConditionalAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::set_Condition
// Il2CppName: set_Condition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeConditionalAttribute::*)(::Il2CppString*)>(&UnityEngine::Bindings::NativeConditionalAttribute::set_Condition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeConditionalAttribute*), "set_Condition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled
// Il2CppName: set_Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeConditionalAttribute::*)(bool)>(&UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeConditionalAttribute*), "set_Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
