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
  // Autogenerated type: UnityEngine.ExcludeFromPresetAttribute
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D4D46C
  // [AttributeUsageAttribute] Offset: D4D46C
  class ExcludeFromPresetAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ExcludeFromPresetAttribute
    ExcludeFromPresetAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1688118
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExcludeFromPresetAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExcludeFromPresetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExcludeFromPresetAttribute*, creationType>()));
    }
  }; // UnityEngine.ExcludeFromPresetAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExcludeFromPresetAttribute*, "UnityEngine", "ExcludeFromPresetAttribute");
