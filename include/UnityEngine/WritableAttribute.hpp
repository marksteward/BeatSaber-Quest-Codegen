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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WritableAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D48BB8
  // [VisibleToOtherModulesAttribute] Offset: D48BB8
  class WritableAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: WritableAttribute
    WritableAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1A04A48
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WritableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::WritableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WritableAttribute*, creationType>()));
    }
  }; // UnityEngine.WritableAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WritableAttribute*, "UnityEngine", "WritableAttribute");
