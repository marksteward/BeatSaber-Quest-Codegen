// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObjectiveValueFormatterSO
#include "GlobalNamespace/ObjectiveValueFormatterSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DistanceObjectiveValueFormatterSO
  class DistanceObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
    public:
    // Creating value type constructor for type: DistanceObjectiveValueFormatterSO
    DistanceObjectiveValueFormatterSO() noexcept {}
    // public override System.String FormatValue(System.Int32 value)
    // Offset: 0x106D840
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.String ObjectiveValueFormatterSO::FormatValue(System.Int32 value)
    ::Il2CppString* FormatValue(int value);
    // public System.Void .ctor()
    // Offset: 0x106D8BC
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.Void ObjectiveValueFormatterSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceObjectiveValueFormatterSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DistanceObjectiveValueFormatterSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceObjectiveValueFormatterSO*, creationType>()));
    }
  }; // DistanceObjectiveValueFormatterSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DistanceObjectiveValueFormatterSO*, "", "DistanceObjectiveValueFormatterSO");
