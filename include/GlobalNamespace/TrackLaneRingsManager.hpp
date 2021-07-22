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
  // Forward declaring type: TrackLaneRing
  class TrackLaneRing;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsManager
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Offset: 0x106F5FC
    float get_ringPositionStep();
    // public TrackLaneRing[] get_Rings()
    // Offset: 0x106F604
    ::Array<GlobalNamespace::TrackLaneRing*>* get_Rings();
    // protected System.Void Awake()
    // Offset: 0x106F60C
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0x106F978
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x106FA24
    void LateUpdate();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x106FAD0
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x106FE20
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
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsManager), 48 + sizeof(::Array<GlobalNamespace::TrackLaneRing*>*)> __GlobalNamespace_TrackLaneRingsManagerSizeCheck;
  static_assert(sizeof(TrackLaneRingsManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep
// Il2CppName: get_ringPositionStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "get_ringPositionStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::get_Rings
// Il2CppName: get_Rings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::TrackLaneRing*>* (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::get_Rings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "get_Rings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsManager::*)()>(&GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsManager*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
