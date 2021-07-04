// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.InputTracking
  // [RequiredByNativeCodeAttribute] Offset: DB64F0
  // [NativeHeaderAttribute] Offset: DB64F0
  // [StaticAccessorAttribute] Offset: DB64F0
  // [NativeConditionalAttribute] Offset: DB64F0
  class InputTracking : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::XR::InputTracking::TrackingStateEventType
    struct TrackingStateEventType;
    // Creating value type constructor for type: InputTracking
    InputTracking() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xDB6E8C
    // [CompilerGeneratedAttribute] Offset: 0xDB6E8C
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingAcquired
    static System::Action_1<UnityEngine::XR::XRNodeState>* _get_trackingAcquired();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingAcquired
    static void _set_trackingAcquired(System::Action_1<UnityEngine::XR::XRNodeState>* value);
    // [CompilerGeneratedAttribute] Offset: 0xDB6EC8
    // [DebuggerBrowsableAttribute] Offset: 0xDB6EC8
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingLost
    static System::Action_1<UnityEngine::XR::XRNodeState>* _get_trackingLost();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> trackingLost
    static void _set_trackingLost(System::Action_1<UnityEngine::XR::XRNodeState>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xDB6F04
    // [CompilerGeneratedAttribute] Offset: 0xDB6F04
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeAdded
    static System::Action_1<UnityEngine::XR::XRNodeState>* _get_nodeAdded();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeAdded
    static void _set_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xDB6F40
    // [CompilerGeneratedAttribute] Offset: 0xDB6F40
    // Get static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeRemoved
    static System::Action_1<UnityEngine::XR::XRNodeState>* _get_nodeRemoved();
    // Set static field: static private System.Action`1<UnityEngine.XR.XRNodeState> nodeRemoved
    static void _set_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState>* value);
    // static private System.Void InvokeTrackingEvent(UnityEngine.XR.InputTracking/TrackingStateEventType eventType, UnityEngine.XR.XRNode nodeType, System.Int64 uniqueID, System.Boolean tracked)
    // Offset: 0x23DD0C8
    static void InvokeTrackingEvent(UnityEngine::XR::InputTracking::TrackingStateEventType eventType, UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked);
    // static public System.Void Recenter()
    // Offset: 0x23DD2E8
    static void Recenter();
    // static public System.Void GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStates)
    // Offset: 0x23DD31C
    static void GetNodeStates(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates);
    // static private System.Void GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStates)
    // Offset: 0x23DD3F4
    static void GetNodeStates_Internal(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates);
    // static private System.Void .cctor()
    // Offset: 0x23DD434
    static void _cctor();
  }; // UnityEngine.XR.InputTracking
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputTracking*, "UnityEngine.XR", "InputTracking");
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::InvokeTrackingEvent
// Il2CppName: InvokeTrackingEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::Recenter
// Il2CppName: Recenter
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetNodeStates
// Il2CppName: GetNodeStates
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::GetNodeStates_Internal
// Il2CppName: GetNodeStates_Internal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::InputTracking::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
