// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: UnityEngine.DisallowMultipleComponent
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4D26C
  // [AttributeUsageAttribute] Offset: D4D26C
  class DisallowMultipleComponent : public System::Attribute {
    public:
    // Creating value type constructor for type: DisallowMultipleComponent
    DisallowMultipleComponent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1685554
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisallowMultipleComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::DisallowMultipleComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisallowMultipleComponent*, creationType>()));
    }
  }; // UnityEngine.DisallowMultipleComponent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DisallowMultipleComponent*, "UnityEngine", "DisallowMultipleComponent");
#pragma pack(pop)
