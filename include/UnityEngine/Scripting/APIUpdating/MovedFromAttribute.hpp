// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
#include "UnityEngine/Scripting/APIUpdating/MovedFromAttributeData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Size: 0x2C
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4E340
  class MovedFromAttribute : public System::Attribute {
    public:
    // UnityEngine.Scripting.APIUpdating.MovedFromAttributeData data
    // Size: 0x1C
    // Offset: 0x10
    UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data;
    // Field size check
    static_assert(sizeof(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData) == 0x1C);
    // Creating value type constructor for type: MovedFromAttribute
    MovedFromAttribute(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data_ = {}) noexcept : data{data_} {}
    // Creating conversion operator: operator UnityEngine::Scripting::APIUpdating::MovedFromAttributeData
    constexpr operator UnityEngine::Scripting::APIUpdating::MovedFromAttributeData() const noexcept {
      return data;
    }
    // public System.Void .ctor(System.Boolean autoUpdateAPI, System.String sourceNamespace, System.String sourceAssembly, System.String sourceClassName)
    // Offset: 0x16C0348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(bool autoUpdateAPI, ::Il2CppString* sourceNamespace, ::Il2CppString* sourceAssembly, ::Il2CppString* sourceClassName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName)));
    }
    // public System.Void .ctor(System.String sourceNamespace)
    // Offset: 0x16C0440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(::Il2CppString* sourceNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(sourceNamespace)));
    }
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  static check_size<sizeof(MovedFromAttribute), 16 + sizeof(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData)> __UnityEngine_Scripting_APIUpdating_MovedFromAttributeSizeCheck;
  static_assert(sizeof(MovedFromAttribute) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
#pragma pack(pop)
