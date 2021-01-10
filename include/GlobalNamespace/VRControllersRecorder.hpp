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
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Skipping declaration: Mode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: AnimationClip
  class AnimationClip;
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
  // Size: 0x9C
  // Autogenerated type: VRControllersRecorder
  // [] Offset: FFFFFFFF
  class VRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorder::TypeSerializationBinder
    class TypeSerializationBinder;
    // Nested type: GlobalNamespace::VRControllersRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::VRControllersRecorder::Mode
    struct Mode;
    // Nested type: GlobalNamespace::VRControllersRecorder::Keyframe
    class Keyframe;
    // Size: 0x4
    // Autogenerated type: VRControllersRecorder/Mode
    // [] Offset: FFFFFFFF
    struct Mode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VRControllersRecorder/Mode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRControllersRecorder/Mode Record
      static GlobalNamespace::VRControllersRecorder::Mode _get_Record();
      // Set static field: static public VRControllersRecorder/Mode Record
      static void _set_Record(GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRControllersRecorder/Mode Playback
      static GlobalNamespace::VRControllersRecorder::Mode _get_Playback();
      // Set static field: static public VRControllersRecorder/Mode Playback
      static void _set_Playback(GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRControllersRecorder/Mode Off
      static GlobalNamespace::VRControllersRecorder::Mode _get_Off();
      // Set static field: static public VRControllersRecorder/Mode Off
      static void _set_Off(GlobalNamespace::VRControllersRecorder::Mode value);
    }; // VRControllersRecorder/Mode
    static check_size<sizeof(VRControllersRecorder::Mode), 0 + sizeof(int)> __GlobalNamespace_VRControllersRecorder_ModeSizeCheck;
    static_assert(sizeof(VRControllersRecorder::Mode) == 0x4);
    // [NullAllowed] Offset: 0xDD2960
    // private UnityEngine.TextAsset _recordingTextAsset
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TextAsset* recordingTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // private System.String _recordingFileName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* recordingFileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private VRControllersRecorder/Mode _mode
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::VRControllersRecorder::Mode mode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersRecorder::Mode) == 0x4);
    // [SpaceAttribute] Offset: 0xDD29B8
    // private System.Boolean _dontMoveHead
    // Size: 0x1
    // Offset: 0x2C
    bool dontMoveHead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _changeToNonVRCamera
    // Size: 0x1
    // Offset: 0x2D
    bool changeToNonVRCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _adjustSabersPositionBasedOnHeadPosition
    // Size: 0x1
    // Offset: 0x2E
    bool adjustSabersPositionBasedOnHeadPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: adjustSabersPositionBasedOnHeadPosition and: headRotationOffset
    char __padding5[0x1] = {};
    // private UnityEngine.Vector3 _headRotationOffset
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 headRotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _headPositionOffset
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 headPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _headSmooth
    // Size: 0x4
    // Offset: 0x48
    float headSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cameraFOV
    // Size: 0x4
    // Offset: 0x4C
    float cameraFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _controllersTimeOffset
    // Size: 0x4
    // Offset: 0x50
    float controllersTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _controllersSmooth
    // Size: 0x4
    // Offset: 0x54
    float controllersSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDD2A70
    // private VRController _controller0
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::VRController* controller0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRController _controller1
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::VRController* controller1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD2AD8
    // private UnityEngine.Camera _recorderCamera
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Camera* recorderCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform _spawnRotationTransform
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* spawnRotationTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xDD2B20
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.List`1<VRControllersRecorder/Keyframe> _keyframes
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorder::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorder::Keyframe*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x98
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VRControllersRecorder
    VRControllersRecorder(UnityEngine::TextAsset* recordingTextAsset_ = {}, ::Il2CppString* recordingFileName_ = {}, GlobalNamespace::VRControllersRecorder::Mode mode_ = {}, bool dontMoveHead_ = {}, bool changeToNonVRCamera_ = {}, bool adjustSabersPositionBasedOnHeadPosition_ = {}, UnityEngine::Vector3 headRotationOffset_ = {}, UnityEngine::Vector3 headPositionOffset_ = {}, float headSmooth_ = {}, float cameraFOV_ = {}, float controllersTimeOffset_ = {}, float controllersSmooth_ = {}, GlobalNamespace::VRController* controller0_ = {}, GlobalNamespace::VRController* controller1_ = {}, UnityEngine::Transform* headTransform_ = {}, UnityEngine::Camera* camera_ = {}, UnityEngine::Camera* recorderCamera_ = {}, UnityEngine::Transform* spawnRotationTransform_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorder::Keyframe*>* keyframes_ = {}, int keyframeIndex_ = {}) noexcept : recordingTextAsset{recordingTextAsset_}, recordingFileName{recordingFileName_}, mode{mode_}, dontMoveHead{dontMoveHead_}, changeToNonVRCamera{changeToNonVRCamera_}, adjustSabersPositionBasedOnHeadPosition{adjustSabersPositionBasedOnHeadPosition_}, headRotationOffset{headRotationOffset_}, headPositionOffset{headPositionOffset_}, headSmooth{headSmooth_}, cameraFOV{cameraFOV_}, controllersTimeOffset{controllersTimeOffset_}, controllersSmooth{controllersSmooth_}, controller0{controller0_}, controller1{controller1_}, headTransform{headTransform_}, camera{camera_}, recorderCamera{recorderCamera_}, spawnRotationTransform{spawnRotationTransform_}, audioTimeSyncController{audioTimeSyncController_}, keyframes{keyframes_}, keyframeIndex{keyframeIndex_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_mode(VRControllersRecorder/Mode value)
    // Offset: 0xFFE784
    void set_mode(GlobalNamespace::VRControllersRecorder::Mode value);
    // public VRControllersRecorder/Mode get_mode()
    // Offset: 0xFFE78C
    GlobalNamespace::VRControllersRecorder::Mode get_mode();
    // public System.Void set_recordingTextAsset(UnityEngine.TextAsset value)
    // Offset: 0xFFE794
    void set_recordingTextAsset(UnityEngine::TextAsset* value);
    // public UnityEngine.TextAsset get_recordingTextAsset()
    // Offset: 0xFFE79C
    UnityEngine::TextAsset* get_recordingTextAsset();
    // public System.Void set_recordingFileName(System.String value)
    // Offset: 0xFFE7A4
    void set_recordingFileName(::Il2CppString* value);
    // public System.String get_recordingFileName()
    // Offset: 0xFFE7AC
    ::Il2CppString* get_recordingFileName();
    // public System.Void set_changeToNonVRCamera(System.Boolean value)
    // Offset: 0xFFE7B4
    void set_changeToNonVRCamera(bool value);
    // public System.Boolean get_changeToNonVRCamera()
    // Offset: 0xFFE7C0
    bool get_changeToNonVRCamera();
    // protected System.Void Start()
    // Offset: 0xFFE7C8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFFF090
    void OnDestroy();
    // public System.Void SetDefaultSettings()
    // Offset: 0xFFF3C0
    void SetDefaultSettings();
    // public System.Void SetInGamePlaybackDefaultSettings()
    // Offset: 0xFFF458
    void SetInGamePlaybackDefaultSettings();
    // private System.Void PlaybackTick()
    // Offset: 0xFFF4F4
    void PlaybackTick();
    // private System.Void SetPositionAndRotation(UnityEngine.Transform transf, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion targetRot, System.Single t)
    // Offset: 0xFFFDCC
    void SetPositionAndRotation(UnityEngine::Transform* transf, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion targetRot, float t);
    // private System.Void RecordTick()
    // Offset: 0xFFFF48
    void RecordTick();
    // protected System.Void Update()
    // Offset: 0x100018C
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x1000200
    void LateUpdate();
    // private System.Void Save()
    // Offset: 0xFFF0A0
    void Save();
    // private System.Void Load()
    // Offset: 0xFFEB08
    void Load();
    // static public UnityEngine.AnimationClip CreateAnimationClipFromRecording(System.String recordingfilePath)
    // Offset: 0x1000210
    static UnityEngine::AnimationClip* CreateAnimationClipFromRecording(::Il2CppString* recordingfilePath);
    // public System.Void .ctor()
    // Offset: 0x1000DAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorder*, creationType>()));
    }
  }; // VRControllersRecorder
  static check_size<sizeof(VRControllersRecorder), 152 + sizeof(int)> __GlobalNamespace_VRControllersRecorderSizeCheck;
  static_assert(sizeof(VRControllersRecorder) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder*, "", "VRControllersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::Mode, "", "VRControllersRecorder/Mode");
#pragma pack(pop)
