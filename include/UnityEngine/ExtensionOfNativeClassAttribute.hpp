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
  // Autogenerated type: UnityEngine.ExtensionOfNativeClassAttribute
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4D608
  // [AttributeUsageAttribute] Offset: D4D608
  class ExtensionOfNativeClassAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ExtensionOfNativeClassAttribute
    ExtensionOfNativeClassAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x168A41C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtensionOfNativeClassAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExtensionOfNativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtensionOfNativeClassAttribute*, creationType>()));
    }
  }; // UnityEngine.ExtensionOfNativeClassAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExtensionOfNativeClassAttribute*, "UnityEngine", "ExtensionOfNativeClassAttribute");
