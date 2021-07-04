// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ISaberSwingRatingCounter
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
// Including type: ISaberMovementDataProcessor
#include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ISaberSwingRatingCounterDidChangeReceiver
  class ISaberSwingRatingCounterDidChangeReceiver;
  // Forward declaring type: ISaberSwingRatingCounterDidFinishReceiver
  class ISaberSwingRatingCounterDidFinishReceiver;
  // Forward declaring type: BladeMovementDataElement
  struct BladeMovementDataElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: SaberSwingRatingCounter
  class SaberSwingRatingCounter : public ::Il2CppObject/*, public GlobalNamespace::ISaberSwingRatingCounter, public GlobalNamespace::ISaberMovementDataProcessor*/ {
    public:
    // Nested type: GlobalNamespace::SaberSwingRatingCounter::Pool
    class Pool;
    // private SaberMovementData _saberMovementData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SaberMovementData* saberMovementData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberMovementData*) == 0x8);
    // private UnityEngine.Vector3 _cutPlaneNormal
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 cutPlaneNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _cutTime
    // Size: 0x4
    // Offset: 0x24
    float cutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _afterCutRating
    // Size: 0x4
    // Offset: 0x28
    float afterCutRating;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _beforeCutRating
    // Size: 0x4
    // Offset: 0x2C
    float beforeCutRating;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Plane _notePlane
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Plane notePlane;
    // Field size check
    static_assert(sizeof(UnityEngine::Plane) == 0x10);
    // private System.Boolean _notePlaneWasCut
    // Size: 0x1
    // Offset: 0x40
    bool notePlaneWasCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: notePlaneWasCut and: noteForward
    char __padding6[0x3] = {};
    // private UnityEngine.Vector3 _noteForward
    // Size: 0xC
    // Offset: 0x44
    UnityEngine::Vector3 noteForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidChangeReceiver> _didChangeReceivers
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* didChangeReceivers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*) == 0x8);
    // private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidFinishReceiver> _didFinishReceivers
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* didFinishReceivers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*) == 0x8);
    // private UnityEngine.Vector3 _notePlaneCenter
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 notePlaneCenter;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _beforeCutTopPos
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 beforeCutTopPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _beforeCutBottomPos
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 beforeCutBottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _afterCutTopPos
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 afterCutTopPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _afterCutBottomPos
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 afterCutBottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _newPlaneNormal
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 newPlaneNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _cutTopPos
    // Size: 0xC
    // Offset: 0xA8
    UnityEngine::Vector3 cutTopPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _cutBottomPos
    // Size: 0xC
    // Offset: 0xB4
    UnityEngine::Vector3 cutBottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _finished
    // Size: 0x1
    // Offset: 0xC0
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SaberSwingRatingCounter
    SaberSwingRatingCounter(GlobalNamespace::SaberMovementData* saberMovementData_ = {}, UnityEngine::Vector3 cutPlaneNormal_ = {}, float cutTime_ = {}, float afterCutRating_ = {}, float beforeCutRating_ = {}, UnityEngine::Plane notePlane_ = {}, bool notePlaneWasCut_ = {}, UnityEngine::Vector3 noteForward_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* didChangeReceivers_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* didFinishReceivers_ = {}, UnityEngine::Vector3 notePlaneCenter_ = {}, UnityEngine::Vector3 beforeCutTopPos_ = {}, UnityEngine::Vector3 beforeCutBottomPos_ = {}, UnityEngine::Vector3 afterCutTopPos_ = {}, UnityEngine::Vector3 afterCutBottomPos_ = {}, UnityEngine::Vector3 newPlaneNormal_ = {}, UnityEngine::Vector3 cutTopPos_ = {}, UnityEngine::Vector3 cutBottomPos_ = {}, bool finished_ = {}) noexcept : saberMovementData{saberMovementData_}, cutPlaneNormal{cutPlaneNormal_}, cutTime{cutTime_}, afterCutRating{afterCutRating_}, beforeCutRating{beforeCutRating_}, notePlane{notePlane_}, notePlaneWasCut{notePlaneWasCut_}, noteForward{noteForward_}, didChangeReceivers{didChangeReceivers_}, didFinishReceivers{didFinishReceivers_}, notePlaneCenter{notePlaneCenter_}, beforeCutTopPos{beforeCutTopPos_}, beforeCutBottomPos{beforeCutBottomPos_}, afterCutTopPos{afterCutTopPos_}, afterCutBottomPos{afterCutBottomPos_}, newPlaneNormal{newPlaneNormal_}, cutTopPos{cutTopPos_}, cutBottomPos{cutBottomPos_}, finished{finished_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounter
    operator GlobalNamespace::ISaberSwingRatingCounter() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounter*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISaberMovementDataProcessor
    operator GlobalNamespace::ISaberMovementDataProcessor() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberMovementDataProcessor*>(this);
    }
    // public System.Single get_beforeCutRating()
    // Offset: 0x10D067C
    float get_beforeCutRating();
    // public System.Single get_afterCutRating()
    // Offset: 0x10D0684
    float get_afterCutRating();
    // public System.Void RegisterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver receiver)
    // Offset: 0x10D068C
    void RegisterDidChangeReceiver(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);
    // public System.Void RegisterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver receiver)
    // Offset: 0x10D06F4
    void RegisterDidFinishReceiver(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);
    // public System.Void UnregisterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver receiver)
    // Offset: 0x10D075C
    void UnregisterDidChangeReceiver(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);
    // public System.Void UnregisterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver receiver)
    // Offset: 0x10D07C4
    void UnregisterDidFinishReceiver(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);
    // public System.Void Init(SaberMovementData saberMovementData, UnityEngine.Transform noteTransform)
    // Offset: 0x10D082C
    void Init(GlobalNamespace::SaberMovementData* saberMovementData, UnityEngine::Transform* noteTransform);
    // public System.Void ProcessNewData(BladeMovementDataElement newData, BladeMovementDataElement prevData, System.Boolean prevDataAreValid)
    // Offset: 0x10D0954
    void ProcessNewData(GlobalNamespace::BladeMovementDataElement newData, GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);
    // private System.Void Finish()
    // Offset: 0x10D0E50
    void Finish();
    // public System.Void DrawGizmos()
    // Offset: 0x10D0F98
    void DrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x10D127C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberSwingRatingCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberSwingRatingCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberSwingRatingCounter*, creationType>()));
    }
  }; // SaberSwingRatingCounter
  #pragma pack(pop)
  static check_size<sizeof(SaberSwingRatingCounter), 192 + sizeof(bool)> __GlobalNamespace_SaberSwingRatingCounterSizeCheck;
  static_assert(sizeof(SaberSwingRatingCounter) == 0xC1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating
// Il2CppName: get_beforeCutRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "get_beforeCutRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating
// Il2CppName: get_afterCutRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "get_afterCutRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver
// Il2CppName: RegisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver)> {
  const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver
// Il2CppName: RegisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver)> {
  const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver
// Il2CppName: UnregisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver)> {
  const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver
// Il2CppName: UnregisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver)> {
  const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::SaberMovementData*, UnityEngine::Transform*)>(&GlobalNamespace::SaberSwingRatingCounter::Init)> {
  const MethodInfo* get() {
    static auto* saberMovementData = &::il2cpp_utils::GetClassFromName("", "SaberMovementData")->byval_arg;
    static auto* noteTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberMovementData, noteTransform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::ProcessNewData
// Il2CppName: ProcessNewData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(GlobalNamespace::BladeMovementDataElement, GlobalNamespace::BladeMovementDataElement, bool)>(&GlobalNamespace::SaberSwingRatingCounter::ProcessNewData)> {
  const MethodInfo* get() {
    static auto* newData = &::il2cpp_utils::GetClassFromName("", "BladeMovementDataElement")->byval_arg;
    static auto* prevData = &::il2cpp_utils::GetClassFromName("", "BladeMovementDataElement")->byval_arg;
    static auto* prevDataAreValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "ProcessNewData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newData, prevData, prevDataAreValid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::Finish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::DrawGizmos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
