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
  // Autogenerated type: UnityEngine.ExcludeFromObjectFactoryAttribute
  // [UsedByNativeCodeAttribute] Offset: D901EC
  // [AttributeUsageAttribute] Offset: D901EC
  class ExcludeFromObjectFactoryAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ExcludeFromObjectFactoryAttribute
    ExcludeFromObjectFactoryAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B970B8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExcludeFromObjectFactoryAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ExcludeFromObjectFactoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExcludeFromObjectFactoryAttribute*, creationType>()));
    }
  }; // UnityEngine.ExcludeFromObjectFactoryAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ExcludeFromObjectFactoryAttribute*, "UnityEngine", "ExcludeFromObjectFactoryAttribute");
// Writing MetadataGetter for method: UnityEngine::ExcludeFromObjectFactoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
