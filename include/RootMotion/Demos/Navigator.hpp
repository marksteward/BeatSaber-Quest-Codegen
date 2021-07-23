// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPath
  class NavMeshPath;
}
// Forward declaring namespace: RootMotion::Demos
namespace RootMotion::Demos {
  // Skipping declaration: State because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.Demos
namespace RootMotion::Demos {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Demos.Navigator
  // [TokenAttribute] Offset: FFFFFFFF
  class Navigator : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::Demos::Navigator::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.Demos.Navigator/RootMotion.Demos.State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Idle
      static constexpr const int Idle = 0;
      // Get static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Idle
      static RootMotion::Demos::Navigator::State _get_Idle();
      // Set static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Idle
      static void _set_Idle(RootMotion::Demos::Navigator::State value);
      // static field const value: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Seeking
      static constexpr const int Seeking = 1;
      // Get static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Seeking
      static RootMotion::Demos::Navigator::State _get_Seeking();
      // Set static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State Seeking
      static void _set_Seeking(RootMotion::Demos::Navigator::State value);
      // static field const value: static public RootMotion.Demos.Navigator/RootMotion.Demos.State OnPath
      static constexpr const int OnPath = 2;
      // Get static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State OnPath
      static RootMotion::Demos::Navigator::State _get_OnPath();
      // Set static field: static public RootMotion.Demos.Navigator/RootMotion.Demos.State OnPath
      static void _set_OnPath(RootMotion::Demos::Navigator::State value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // RootMotion.Demos.Navigator/RootMotion.Demos.State
    #pragma pack(pop)
    static check_size<sizeof(Navigator::State), 0 + sizeof(int)> __RootMotion_Demos_Navigator_StateSizeCheck;
    static_assert(sizeof(Navigator::State) == 0x4);
    // [TooltipAttribute] Offset: 0xDF2740
    // public System.Boolean activeTargetSeeking
    // Size: 0x1
    // Offset: 0x10
    bool activeTargetSeeking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: activeTargetSeeking and: cornerRadius
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xDF2778
    // public System.Single cornerRadius
    // Size: 0x4
    // Offset: 0x14
    float cornerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF27B0
    // public System.Single recalculateOnPathDistance
    // Size: 0x4
    // Offset: 0x18
    float recalculateOnPathDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF27E8
    // public System.Single maxSampleDistance
    // Size: 0x4
    // Offset: 0x1C
    float maxSampleDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDF2820
    // public System.Single nextPathInterval
    // Size: 0x4
    // Offset: 0x20
    float nextPathInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <normalizedDeltaPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 normalizedDeltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private RootMotion.Demos.Navigator/RootMotion.Demos.State <state>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    RootMotion::Demos::Navigator::State state;
    // Field size check
    static_assert(sizeof(RootMotion::Demos::Navigator::State) == 0x4);
    // Padding between fields: state and: transform
    char __padding6[0x4] = {};
    // private UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Int32 cornerIndex
    // Size: 0x4
    // Offset: 0x40
    int cornerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: cornerIndex and: corners
    char __padding8[0x4] = {};
    // private UnityEngine.Vector3[] corners
    // Size: 0x8
    // Offset: 0x48
    ::Array<UnityEngine::Vector3>* corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.AI.NavMeshPath path
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AI::NavMeshPath* path;
    // Field size check
    static_assert(sizeof(UnityEngine::AI::NavMeshPath*) == 0x8);
    // private UnityEngine.Vector3 lastTargetPosition
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 lastTargetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x64
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: nextPathTime
    char __padding12[0x3] = {};
    // private System.Single nextPathTime
    // Size: 0x4
    // Offset: 0x68
    float nextPathTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Navigator
    Navigator(bool activeTargetSeeking_ = {}, float cornerRadius_ = {}, float recalculateOnPathDistance_ = {}, float maxSampleDistance_ = {}, float nextPathInterval_ = {}, UnityEngine::Vector3 normalizedDeltaPosition_ = {}, RootMotion::Demos::Navigator::State state_ = {}, UnityEngine::Transform* transform_ = {}, int cornerIndex_ = {}, ::Array<UnityEngine::Vector3>* corners_ = {}, UnityEngine::AI::NavMeshPath* path_ = {}, UnityEngine::Vector3 lastTargetPosition_ = {}, bool initiated_ = {}, float nextPathTime_ = {}) noexcept : activeTargetSeeking{activeTargetSeeking_}, cornerRadius{cornerRadius_}, recalculateOnPathDistance{recalculateOnPathDistance_}, maxSampleDistance{maxSampleDistance_}, nextPathInterval{nextPathInterval_}, normalizedDeltaPosition{normalizedDeltaPosition_}, state{state_}, transform{transform_}, cornerIndex{cornerIndex_}, corners{corners_}, path{path_}, lastTargetPosition{lastTargetPosition_}, initiated{initiated_}, nextPathTime{nextPathTime_} {}
    // Get instance field: public System.Boolean activeTargetSeeking
    bool _get_activeTargetSeeking();
    // Set instance field: public System.Boolean activeTargetSeeking
    void _set_activeTargetSeeking(bool value);
    // Get instance field: public System.Single cornerRadius
    float _get_cornerRadius();
    // Set instance field: public System.Single cornerRadius
    void _set_cornerRadius(float value);
    // Get instance field: public System.Single recalculateOnPathDistance
    float _get_recalculateOnPathDistance();
    // Set instance field: public System.Single recalculateOnPathDistance
    void _set_recalculateOnPathDistance(float value);
    // Get instance field: public System.Single maxSampleDistance
    float _get_maxSampleDistance();
    // Set instance field: public System.Single maxSampleDistance
    void _set_maxSampleDistance(float value);
    // Get instance field: public System.Single nextPathInterval
    float _get_nextPathInterval();
    // Set instance field: public System.Single nextPathInterval
    void _set_nextPathInterval(float value);
    // Get instance field: private UnityEngine.Vector3 <normalizedDeltaPosition>k__BackingField
    UnityEngine::Vector3 _get_$normalizedDeltaPosition$k__BackingField();
    // Set instance field: private UnityEngine.Vector3 <normalizedDeltaPosition>k__BackingField
    void _set_$normalizedDeltaPosition$k__BackingField(UnityEngine::Vector3 value);
    // Get instance field: private RootMotion.Demos.Navigator/RootMotion.Demos.State <state>k__BackingField
    RootMotion::Demos::Navigator::State _get_$state$k__BackingField();
    // Set instance field: private RootMotion.Demos.Navigator/RootMotion.Demos.State <state>k__BackingField
    void _set_$state$k__BackingField(RootMotion::Demos::Navigator::State value);
    // Get instance field: private UnityEngine.Transform transform
    UnityEngine::Transform* _get_transform();
    // Set instance field: private UnityEngine.Transform transform
    void _set_transform(UnityEngine::Transform* value);
    // Get instance field: private System.Int32 cornerIndex
    int _get_cornerIndex();
    // Set instance field: private System.Int32 cornerIndex
    void _set_cornerIndex(int value);
    // Get instance field: private UnityEngine.Vector3[] corners
    ::Array<UnityEngine::Vector3>* _get_corners();
    // Set instance field: private UnityEngine.Vector3[] corners
    void _set_corners(::Array<UnityEngine::Vector3>* value);
    // Get instance field: private UnityEngine.AI.NavMeshPath path
    UnityEngine::AI::NavMeshPath* _get_path();
    // Set instance field: private UnityEngine.AI.NavMeshPath path
    void _set_path(UnityEngine::AI::NavMeshPath* value);
    // Get instance field: private UnityEngine.Vector3 lastTargetPosition
    UnityEngine::Vector3 _get_lastTargetPosition();
    // Set instance field: private UnityEngine.Vector3 lastTargetPosition
    void _set_lastTargetPosition(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean initiated
    bool _get_initiated();
    // Set instance field: private System.Boolean initiated
    void _set_initiated(bool value);
    // Get instance field: private System.Single nextPathTime
    float _get_nextPathTime();
    // Set instance field: private System.Single nextPathTime
    void _set_nextPathTime(float value);
    // public UnityEngine.Vector3 get_normalizedDeltaPosition()
    // Offset: 0x1CDC7E8
    UnityEngine::Vector3 get_normalizedDeltaPosition();
    // private System.Void set_normalizedDeltaPosition(UnityEngine.Vector3 value)
    // Offset: 0x1CDC7F4
    void set_normalizedDeltaPosition(UnityEngine::Vector3 value);
    // public RootMotion.Demos.Navigator/RootMotion.Demos.State get_state()
    // Offset: 0x1CDC800
    RootMotion::Demos::Navigator::State get_state();
    // private System.Void set_state(RootMotion.Demos.Navigator/RootMotion.Demos.State value)
    // Offset: 0x1CDC808
    void set_state(RootMotion::Demos::Navigator::State value);
    // public System.Void Initiate(UnityEngine.Transform transform)
    // Offset: 0x1CDC810
    void Initiate(UnityEngine::Transform* transform);
    // public System.Void Update(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CDC8E4
    void Update(UnityEngine::Vector3 targetPosition);
    // private System.Void CalculatePath(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CDCE28
    void CalculatePath(UnityEngine::Vector3 targetPosition);
    // private System.Boolean Find(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CDCE98
    bool Find(UnityEngine::Vector3 targetPosition);
    // private System.Void Stop()
    // Offset: 0x1CDCCF0
    void Stop();
    // private System.Single HorDistance(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x1CDCD64
    float HorDistance(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // public System.Void Visualize()
    // Offset: 0x1CDCFE0
    void Visualize();
    // public System.Void .ctor()
    // Offset: 0x1CDD190
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Navigator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Demos::Navigator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Navigator*, creationType>()));
    }
  }; // RootMotion.Demos.Navigator
  #pragma pack(pop)
  static check_size<sizeof(Navigator), 104 + sizeof(float)> __RootMotion_Demos_NavigatorSizeCheck;
  static_assert(sizeof(Navigator) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Demos::Navigator*, "RootMotion.Demos", "Navigator");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Demos::Navigator::State, "RootMotion.Demos", "Navigator/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::get_normalizedDeltaPosition
// Il2CppName: get_normalizedDeltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::Demos::Navigator::*)()>(&RootMotion::Demos::Navigator::get_normalizedDeltaPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "get_normalizedDeltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::set_normalizedDeltaPosition
// Il2CppName: set_normalizedDeltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)(UnityEngine::Vector3)>(&RootMotion::Demos::Navigator::set_normalizedDeltaPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "set_normalizedDeltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::Demos::Navigator::State (RootMotion::Demos::Navigator::*)()>(&RootMotion::Demos::Navigator::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::set_state
// Il2CppName: set_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)(RootMotion::Demos::Navigator::State)>(&RootMotion::Demos::Navigator::set_state)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("RootMotion.Demos", "Navigator/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "set_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)(UnityEngine::Transform*)>(&RootMotion::Demos::Navigator::Initiate)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)(UnityEngine::Vector3)>(&RootMotion::Demos::Navigator::Update)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::CalculatePath
// Il2CppName: CalculatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)(UnityEngine::Vector3)>(&RootMotion::Demos::Navigator::CalculatePath)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "CalculatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::Demos::Navigator::*)(UnityEngine::Vector3)>(&RootMotion::Demos::Navigator::Find)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)()>(&RootMotion::Demos::Navigator::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::HorDistance
// Il2CppName: HorDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::Demos::Navigator::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::Demos::Navigator::HorDistance)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "HorDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Visualize
// Il2CppName: Visualize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Demos::Navigator::*)()>(&RootMotion::Demos::Navigator::Visualize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Demos::Navigator*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
