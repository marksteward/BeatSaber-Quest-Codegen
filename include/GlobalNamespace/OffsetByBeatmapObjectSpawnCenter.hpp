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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OffsetByBeatmapObjectSpawnCenter
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetByBeatmapObjectSpawnCenter : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE0315C
    // private readonly BeatmapObjectSpawnCenter _spawnCenter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnCenter* spawnCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // Creating value type constructor for type: OffsetByBeatmapObjectSpawnCenter
    OffsetByBeatmapObjectSpawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter* spawnCenter_ = {}) noexcept : spawnCenter{spawnCenter_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private readonly BeatmapObjectSpawnCenter _spawnCenter
    GlobalNamespace::BeatmapObjectSpawnCenter* _get__spawnCenter();
    // Set instance field: private readonly BeatmapObjectSpawnCenter _spawnCenter
    void _set__spawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter* value);
    // protected System.Void Start()
    // Offset: 0xFF3B6C
    void Start();
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single distance)
    // Offset: 0xFF3C20
    void HandleSpawnCenterDistanceWasFound(float distance);
    // public System.Void .ctor()
    // Offset: 0xFF3D20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetByBeatmapObjectSpawnCenter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetByBeatmapObjectSpawnCenter*, creationType>()));
    }
  }; // OffsetByBeatmapObjectSpawnCenter
  #pragma pack(pop)
  static check_size<sizeof(OffsetByBeatmapObjectSpawnCenter), 24 + sizeof(GlobalNamespace::BeatmapObjectSpawnCenter*)> __GlobalNamespace_OffsetByBeatmapObjectSpawnCenterSizeCheck;
  static_assert(sizeof(OffsetByBeatmapObjectSpawnCenter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*, "", "OffsetByBeatmapObjectSpawnCenter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(&GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound
// Il2CppName: HandleSpawnCenterDistanceWasFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)(float)>(&GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*), "HandleSpawnCenterDistanceWasFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
