// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRing
  class TrackLaneRing;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: TrackLaneRingsManager
  // [] Offset: FFFFFFFF
  class TrackLaneRingsManager : public UnityEngine::MonoBehaviour {
    public:
    // private TrackLaneRing _trackLaneRingPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TrackLaneRing* trackLaneRingPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrackLaneRing*) == 0x8);
    // private System.Int32 _ringCount
    // Size: 0x4
    // Offset: 0x20
    int ringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _ringPositionStep
    // Size: 0x4
    // Offset: 0x24
    float ringPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _spawnAsChildren
    // Size: 0x1
    // Offset: 0x28
    bool spawnAsChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: spawnAsChildren and: rings
    char __padding3[0x7] = {};
    // private TrackLaneRing[] _rings
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::TrackLaneRing*>* rings;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TrackLaneRing*>*) == 0x8);
    // Creating value type constructor for type: TrackLaneRingsManager
    TrackLaneRingsManager(GlobalNamespace::TrackLaneRing* trackLaneRingPrefab_ = {}, int ringCount_ = {}, float ringPositionStep_ = {}, bool spawnAsChildren_ = {}, ::Array<GlobalNamespace::TrackLaneRing*>* rings_ = {}) noexcept : trackLaneRingPrefab{trackLaneRingPrefab_}, ringCount{ringCount_}, ringPositionStep{ringPositionStep_}, spawnAsChildren{spawnAsChildren_}, rings{rings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_ringPositionStep()
    // Offset: 0xFED47C
    float get_ringPositionStep();
    // public TrackLaneRing[] get_Rings()
    // Offset: 0xFED484
    ::Array<GlobalNamespace::TrackLaneRing*>* get_Rings();
    // protected System.Void Awake()
    // Offset: 0xFED48C
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0xFED830
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0xFED8DC
    void LateUpdate();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0xFED988
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xFEDCD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrackLaneRingsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsManager*, creationType>()));
    }
  }; // TrackLaneRingsManager
  static check_size<sizeof(TrackLaneRingsManager), 48 + sizeof(::Array<GlobalNamespace::TrackLaneRing*>*)> __GlobalNamespace_TrackLaneRingsManagerSizeCheck;
  static_assert(sizeof(TrackLaneRingsManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
#pragma pack(pop)
