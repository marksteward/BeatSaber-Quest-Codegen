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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeHeaderAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B764
  // [AttributeUsageAttribute] Offset: D8B764
  class NativeHeaderAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8BCF0
    // [DebuggerBrowsableAttribute] Offset: 0xD8BCF0
    // private System.String <Header>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Header;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NativeHeaderAttribute
    NativeHeaderAttribute(::Il2CppString* Header_ = {}) noexcept : Header{Header_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Header;
    }
    // public System.Void set_Header(System.String value)
    // Offset: 0x23EBC88
    void set_Header(::Il2CppString* value);
    // public System.Void .ctor(System.String header)
    // Offset: 0x23EBC90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeHeaderAttribute* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeHeaderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeHeaderAttribute*, creationType>(header)));
    }
  }; // UnityEngine.Bindings.NativeHeaderAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeHeaderAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Bindings_NativeHeaderAttributeSizeCheck;
  static_assert(sizeof(NativeHeaderAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeHeaderAttribute*, "UnityEngine.Bindings", "NativeHeaderAttribute");
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeHeaderAttribute::set_Header
// Il2CppName: set_Header
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeHeaderAttribute::*)(::Il2CppString*)>(&UnityEngine::Bindings::NativeHeaderAttribute::set_Header)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeHeaderAttribute*), "set_Header", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeHeaderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
