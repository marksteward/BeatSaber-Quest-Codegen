// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObjectiveValueFormatterSO
  class ObjectiveValueFormatterSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: MissionObjectiveTypeSO
  // [] Offset: FFFFFFFF
  class MissionObjectiveTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _objectiveName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* objectiveName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _noConditionValue
    // Size: 0x1
    // Offset: 0x20
    bool noConditionValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noConditionValue and: objectiveValueFormater
    char __padding1[0x7] = {};
    // private ObjectiveValueFormatterSO _objectiveValueFormater
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObjectiveValueFormatterSO*) == 0x8);
    // Creating value type constructor for type: MissionObjectiveTypeSO
    MissionObjectiveTypeSO(::Il2CppString* objectiveName_ = {}, bool noConditionValue_ = {}, GlobalNamespace::ObjectiveValueFormatterSO* objectiveValueFormater_ = {}) noexcept : objectiveName{objectiveName_}, noConditionValue{noConditionValue_}, objectiveValueFormater{objectiveValueFormater_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_objectiveName()
    // Offset: 0x101F8D0
    ::Il2CppString* get_objectiveName();
    // public System.String get_objectiveNameLocalized()
    // Offset: 0x1018B34
    ::Il2CppString* get_objectiveNameLocalized();
    // public System.Boolean get_noConditionValue()
    // Offset: 0x101F8D8
    bool get_noConditionValue();
    // public ObjectiveValueFormatterSO get_objectiveValueFormater()
    // Offset: 0x101F8E0
    GlobalNamespace::ObjectiveValueFormatterSO* get_objectiveValueFormater();
    // public System.Void .ctor()
    // Offset: 0x101F8E8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveTypeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveTypeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveTypeSO*, creationType>()));
    }
  }; // MissionObjectiveTypeSO
  static check_size<sizeof(MissionObjectiveTypeSO), 40 + sizeof(GlobalNamespace::ObjectiveValueFormatterSO*)> __GlobalNamespace_MissionObjectiveTypeSOSizeCheck;
  static_assert(sizeof(MissionObjectiveTypeSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveTypeSO*, "", "MissionObjectiveTypeSO");
#pragma pack(pop)
