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
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.UsedByNativeCodeAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4905C
  // [VisibleToOtherModulesAttribute] Offset: D4905C
  class UsedByNativeCodeAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD49620
    // [DebuggerBrowsableAttribute] Offset: 0xD49620
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UsedByNativeCodeAttribute
    UsedByNativeCodeAttribute(::Il2CppString* Name_ = {}) noexcept : Name{Name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x1A04964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>(name)));
    }
    // public System.Void set_Name(System.String value)
    // Offset: 0x1A04998
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1A0495C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.UsedByNativeCodeAttribute
  static check_size<sizeof(UsedByNativeCodeAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Scripting_UsedByNativeCodeAttributeSizeCheck;
  static_assert(sizeof(UsedByNativeCodeAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
