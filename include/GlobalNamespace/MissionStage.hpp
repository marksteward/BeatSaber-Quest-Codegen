// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionStage
  class MissionStage : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _minimumMissionsToUnlock
    // Size: 0x4
    // Offset: 0x18
    int minimumMissionsToUnlock;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: minimumMissionsToUnlock and: rectTransform
    char __padding0[0x4] = {};
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: MissionStage
    MissionStage(int minimumMissionsToUnlock_ = {}, UnityEngine::RectTransform* rectTransform_ = {}) noexcept : minimumMissionsToUnlock{minimumMissionsToUnlock_}, rectTransform{rectTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_minimumMissionsToUnlock()
    // Offset: 0x109CFE0
    int get_minimumMissionsToUnlock();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x1099DA8
    UnityEngine::Vector2 get_position();
    // public System.Void .ctor()
    // Offset: 0x109CFE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStage*, creationType>()));
    }
  }; // MissionStage
  #pragma pack(pop)
  static check_size<sizeof(MissionStage), 32 + sizeof(UnityEngine::RectTransform*)> __GlobalNamespace_MissionStageSizeCheck;
  static_assert(sizeof(MissionStage) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStage*, "", "MissionStage");
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::get_minimumMissionsToUnlock
// Il2CppName: get_minimumMissionsToUnlock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::get_position
// Il2CppName: get_position
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MissionStage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
