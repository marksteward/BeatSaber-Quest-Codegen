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
  class Navigator : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::Demos::Navigator::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.Demos.Navigator/State
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
      // static field const value: static public RootMotion.Demos.Navigator/State Idle
      static constexpr const int Idle = 0;
      // Get static field: static public RootMotion.Demos.Navigator/State Idle
      static RootMotion::Demos::Navigator::State _get_Idle();
      // Set static field: static public RootMotion.Demos.Navigator/State Idle
      static void _set_Idle(RootMotion::Demos::Navigator::State value);
      // static field const value: static public RootMotion.Demos.Navigator/State Seeking
      static constexpr const int Seeking = 1;
      // Get static field: static public RootMotion.Demos.Navigator/State Seeking
      static RootMotion::Demos::Navigator::State _get_Seeking();
      // Set static field: static public RootMotion.Demos.Navigator/State Seeking
      static void _set_Seeking(RootMotion::Demos::Navigator::State value);
      // static field const value: static public RootMotion.Demos.Navigator/State OnPath
      static constexpr const int OnPath = 2;
      // Get static field: static public RootMotion.Demos.Navigator/State OnPath
      static RootMotion::Demos::Navigator::State _get_OnPath();
      // Set static field: static public RootMotion.Demos.Navigator/State OnPath
      static void _set_OnPath(RootMotion::Demos::Navigator::State value);
    }; // RootMotion.Demos.Navigator/State
    #pragma pack(pop)
    static check_size<sizeof(Navigator::State), 0 + sizeof(int)> __RootMotion_Demos_Navigator_StateSizeCheck;
    static_assert(sizeof(Navigator::State) == 0x4);
    // [TooltipAttribute] Offset: 0xE07C80
    // public System.Boolean activeTargetSeeking
    // Size: 0x1
    // Offset: 0x10
    bool activeTargetSeeking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: activeTargetSeeking and: cornerRadius
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xE07CB8
    // public System.Single cornerRadius
    // Size: 0x4
    // Offset: 0x14
    float cornerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07CF0
    // public System.Single recalculateOnPathDistance
    // Size: 0x4
    // Offset: 0x18
    float recalculateOnPathDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07D28
    // public System.Single maxSampleDistance
    // Size: 0x4
    // Offset: 0x1C
    float maxSampleDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE07D60
    // public System.Single nextPathInterval
    // Size: 0x4
    // Offset: 0x20
    float nextPathInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE07D98
    // private UnityEngine.Vector3 <normalizedDeltaPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 normalizedDeltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xE07DA8
    // private RootMotion.Demos.Navigator/State <state>k__BackingField
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
    // public UnityEngine.Vector3 get_normalizedDeltaPosition()
    // Offset: 0x1CAC75C
    UnityEngine::Vector3 get_normalizedDeltaPosition();
    // private System.Void set_normalizedDeltaPosition(UnityEngine.Vector3 value)
    // Offset: 0x1CAC768
    void set_normalizedDeltaPosition(UnityEngine::Vector3 value);
    // public RootMotion.Demos.Navigator/State get_state()
    // Offset: 0x1CAC774
    RootMotion::Demos::Navigator::State get_state();
    // private System.Void set_state(RootMotion.Demos.Navigator/State value)
    // Offset: 0x1CAC77C
    void set_state(RootMotion::Demos::Navigator::State value);
    // public System.Void Initiate(UnityEngine.Transform transform)
    // Offset: 0x1CAC784
    void Initiate(UnityEngine::Transform* transform);
    // public System.Void Update(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CAC858
    void Update(UnityEngine::Vector3 targetPosition);
    // private System.Void CalculatePath(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CACD9C
    void CalculatePath(UnityEngine::Vector3 targetPosition);
    // private System.Boolean Find(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1CACE0C
    bool Find(UnityEngine::Vector3 targetPosition);
    // private System.Void Stop()
    // Offset: 0x1CACC64
    void Stop();
    // private System.Single HorDistance(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x1CACCD8
    float HorDistance(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // public System.Void Visualize()
    // Offset: 0x1CACF54
    void Visualize();
    // public System.Void .ctor()
    // Offset: 0x1CAD104
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
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::get_normalizedDeltaPosition
// Il2CppName: get_normalizedDeltaPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::set_normalizedDeltaPosition
// Il2CppName: set_normalizedDeltaPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::get_state
// Il2CppName: get_state
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::set_state
// Il2CppName: set_state
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Initiate
// Il2CppName: Initiate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::CalculatePath
// Il2CppName: CalculatePath
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Find
// Il2CppName: Find
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Stop
// Il2CppName: Stop
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::HorDistance
// Il2CppName: HorDistance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::Visualize
// Il2CppName: Visualize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Demos::Navigator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
