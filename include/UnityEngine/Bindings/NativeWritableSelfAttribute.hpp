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
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeWritableSelfAttribute
  // [AttributeUsageAttribute] Offset: CB6398
  // [VisibleToOtherModulesAttribute] Offset: CB6398
  class NativeWritableSelfAttribute : public System::Attribute {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xCB68D8
    // [CompilerGeneratedAttribute] Offset: 0xCB68D8
    // private System.Boolean <WritableSelf>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool WritableSelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NativeWritableSelfAttribute
    NativeWritableSelfAttribute(bool WritableSelf_ = {}) noexcept : WritableSelf{WritableSelf_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return WritableSelf;
    }
    // public System.Void set_WritableSelf(System.Boolean value)
    // Offset: 0x21AF1F0
    void set_WritableSelf(bool value);
    // public System.Void .ctor()
    // Offset: 0x21AF1FC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeWritableSelfAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeWritableSelfAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeWritableSelfAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NativeWritableSelfAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeWritableSelfAttribute), 16 + sizeof(bool)> __UnityEngine_Bindings_NativeWritableSelfAttributeSizeCheck;
  static_assert(sizeof(NativeWritableSelfAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeWritableSelfAttribute*, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
