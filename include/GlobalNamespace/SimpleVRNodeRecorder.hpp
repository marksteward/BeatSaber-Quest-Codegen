// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: VRPlatformHelper
  class VRPlatformHelper;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleVRNodeRecorder
  class SimpleVRNodeRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SimpleVRNodeRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::SimpleVRNodeRecorder::RecordMode
    struct RecordMode;
    // Autogenerated type: SimpleVRNodeRecorder/SavedData
    class SavedData : public ::Il2CppObject {
      public:
      // Nested type: GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe
      class NodeKeyframe;
      // public SimpleVRNodeRecorder/SavedData/NodeKeyframe[] keyframes
      // Offset: 0x10
      ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes;
      // Creating conversion operator: operator ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*
      constexpr operator ::Array<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>*() const {
        return keyframes;
      }
      // public System.Void .ctor()
      // Offset: 0xB9ADB0
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static SimpleVRNodeRecorder::SavedData* New_ctor();
    }; // SimpleVRNodeRecorder/SavedData
    // Autogenerated type: SimpleVRNodeRecorder/RecordMode
    struct RecordMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: RecordMode
      constexpr RecordMode(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Record
      static constexpr const int Record = 0;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Record
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Record();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Record
      static void _set_Record(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Playback
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Playback();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Playback
      static void _set_Playback(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
      // static field const value: static public SimpleVRNodeRecorder/RecordMode Off
      static constexpr const int Off = 2;
      // Get static field: static public SimpleVRNodeRecorder/RecordMode Off
      static GlobalNamespace::SimpleVRNodeRecorder::RecordMode _get_Off();
      // Set static field: static public SimpleVRNodeRecorder/RecordMode Off
      static void _set_Off(GlobalNamespace::SimpleVRNodeRecorder::RecordMode value);
    }; // SimpleVRNodeRecorder/RecordMode
    // private FloatSO _songTime
    // Offset: 0x18
    GlobalNamespace::FloatSO* songTime;
    // private System.String _saveFilename
    // Offset: 0x20
    ::Il2CppString* saveFilename;
    // private SimpleVRNodeRecorder/RecordMode _mode
    // Offset: 0x28
    GlobalNamespace::SimpleVRNodeRecorder::RecordMode mode;
    // private UnityEngine.XR.XRNode _node
    // Offset: 0x2C
    UnityEngine::XR::XRNode node;
    // private UnityEngine.Transform _playbackTransform
    // Offset: 0x30
    UnityEngine::Transform* playbackTransform;
    // private System.Single _smooth
    // Offset: 0x38
    float smooth;
    // private System.Single _forwardOffset
    // Offset: 0x3C
    float forwardOffset;
    // private VRPlatformHelper _vrPlatformHelper
    // Offset: 0x40
    GlobalNamespace::VRPlatformHelper* vrPlatformHelper;
    // private System.Collections.Generic.List`1<SimpleVRNodeRecorder/SavedData/NodeKeyframe> _keyframes
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*>* keyframes;
    // private System.Int32 _keyframeIndex
    // Offset: 0x50
    int keyframeIndex;
    // private UnityEngine.Vector3 _prevPos
    // Offset: 0x54
    UnityEngine::Vector3 prevPos;
    // private UnityEngine.Quaternion _prevRot
    // Offset: 0x60
    UnityEngine::Quaternion prevRot;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Awake()
    // Offset: 0xB9A158
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xB9A57C
    void OnDestroy();
    // private System.Void RecordNewKeyFrame()
    // Offset: 0xB9A6CC
    void RecordNewKeyFrame();
    // protected System.Void Update()
    // Offset: 0xB9A830
    void Update();
    // private System.Void Save()
    // Offset: 0xB9A58C
    void Save();
    // private System.Void Load()
    // Offset: 0xB9A274
    void Load();
    // public System.Void .ctor()
    // Offset: 0xB9ADB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleVRNodeRecorder* New_ctor();
  }; // SimpleVRNodeRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder*, "", "SimpleVRNodeRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::SavedData*, "", "SimpleVRNodeRecorder/SavedData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::RecordMode, "", "SimpleVRNodeRecorder/RecordMode");
#pragma pack(pop)
