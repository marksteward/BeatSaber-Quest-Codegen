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
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: ScreenshotRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenshotRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScreenshotRecorder::RecordingType
    struct RecordingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ScreenshotRecorder/RecordingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RecordingType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: RecordingType
      constexpr RecordingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ScreenshotRecorder/RecordingType Sequence
      static constexpr const int Sequence = 0;
      // Get static field: static public ScreenshotRecorder/RecordingType Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Sequence
      static void _set_Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static constexpr const int Stereo360Sequence = 1;
      // Get static field: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Stereo360Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Stereo360Sequence
      static void _set_Stereo360Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static constexpr const int Mono360Sequence = 2;
      // Get static field: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Mono360Sequence();
      // Set static field: static public ScreenshotRecorder/RecordingType Mono360Sequence
      static void _set_Mono360Sequence(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static constexpr const int F10ForScreenshot = 3;
      // Get static field: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_F10ForScreenshot();
      // Set static field: static public ScreenshotRecorder/RecordingType F10ForScreenshot
      static void _set_F10ForScreenshot(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType Interval
      static constexpr const int Interval = 4;
      // Get static field: static public ScreenshotRecorder/RecordingType Interval
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_Interval();
      // Set static field: static public ScreenshotRecorder/RecordingType Interval
      static void _set_Interval(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // static field const value: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static constexpr const int ScreenshotOnPause = 5;
      // Get static field: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static GlobalNamespace::ScreenshotRecorder::RecordingType _get_ScreenshotOnPause();
      // Set static field: static public ScreenshotRecorder/RecordingType ScreenshotOnPause
      static void _set_ScreenshotOnPause(GlobalNamespace::ScreenshotRecorder::RecordingType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // ScreenshotRecorder/RecordingType
    #pragma pack(pop)
    static check_size<sizeof(ScreenshotRecorder::RecordingType), 0 + sizeof(int)> __GlobalNamespace_ScreenshotRecorder_RecordingTypeSizeCheck;
    static_assert(sizeof(ScreenshotRecorder::RecordingType) == 0x4);
    // private System.String _folder
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* folder;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NullAllowed] Offset: 0xDCFC90
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private System.Int32 _frameRate
    // Size: 0x4
    // Offset: 0x28
    int frameRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _forceFixedFramerate
    // Size: 0x1
    // Offset: 0x2C
    bool forceFixedFramerate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forceFixedFramerate and: interval
    char __padding3[0x3] = {};
    // private System.Int32 _interval
    // Size: 0x4
    // Offset: 0x30
    int interval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private ScreenshotRecorder/RecordingType _recordingType
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::ScreenshotRecorder::RecordingType recordingType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScreenshotRecorder::RecordingType) == 0x4);
    // private System.Boolean _pauseWithPButton
    // Size: 0x1
    // Offset: 0x38
    bool pauseWithPButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pauseWithPButton and: antiAlias
    char __padding6[0x3] = {};
    // private System.Int32 _antiAlias
    // Size: 0x4
    // Offset: 0x3C
    int antiAlias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _screenshotWidth
    // Size: 0x4
    // Offset: 0x40
    int screenshotWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _screenshotHeight
    // Size: 0x4
    // Offset: 0x44
    int screenshotHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _counter
    // Size: 0x4
    // Offset: 0x48
    int counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _originalTimeScale
    // Size: 0x4
    // Offset: 0x4C
    float originalTimeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x50
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: paused and: frameNum
    char __padding12[0x3] = {};
    // private System.Int32 _frameNum
    // Size: 0x4
    // Offset: 0x54
    int frameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.RenderTexture _cubemapLeftEye
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::RenderTexture* cubemapLeftEye;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _cubemapRighEye
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::RenderTexture* cubemapRighEye;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _equirectTexture
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::RenderTexture* equirectTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _cameraRenderTexture
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::RenderTexture* cameraRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // Creating value type constructor for type: ScreenshotRecorder
    ScreenshotRecorder(::Il2CppString* folder_ = {}, UnityEngine::Camera* camera_ = {}, int frameRate_ = {}, bool forceFixedFramerate_ = {}, int interval_ = {}, GlobalNamespace::ScreenshotRecorder::RecordingType recordingType_ = {}, bool pauseWithPButton_ = {}, int antiAlias_ = {}, int screenshotWidth_ = {}, int screenshotHeight_ = {}, int counter_ = {}, float originalTimeScale_ = {}, bool paused_ = {}, int frameNum_ = {}, UnityEngine::RenderTexture* cubemapLeftEye_ = {}, UnityEngine::RenderTexture* cubemapRighEye_ = {}, UnityEngine::RenderTexture* equirectTexture_ = {}, UnityEngine::RenderTexture* cameraRenderTexture_ = {}) noexcept : folder{folder_}, camera{camera_}, frameRate{frameRate_}, forceFixedFramerate{forceFixedFramerate_}, interval{interval_}, recordingType{recordingType_}, pauseWithPButton{pauseWithPButton_}, antiAlias{antiAlias_}, screenshotWidth{screenshotWidth_}, screenshotHeight{screenshotHeight_}, counter{counter_}, originalTimeScale{originalTimeScale_}, paused{paused_}, frameNum{frameNum_}, cubemapLeftEye{cubemapLeftEye_}, cubemapRighEye{cubemapRighEye_}, equirectTexture{equirectTexture_}, cameraRenderTexture{cameraRenderTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.String _folder
    ::Il2CppString* _get__folder();
    // Set instance field: private System.String _folder
    void _set__folder(::Il2CppString* value);
    // Get instance field: private UnityEngine.Camera _camera
    UnityEngine::Camera* _get__camera();
    // Set instance field: private UnityEngine.Camera _camera
    void _set__camera(UnityEngine::Camera* value);
    // Get instance field: private System.Int32 _frameRate
    int _get__frameRate();
    // Set instance field: private System.Int32 _frameRate
    void _set__frameRate(int value);
    // Get instance field: private System.Boolean _forceFixedFramerate
    bool _get__forceFixedFramerate();
    // Set instance field: private System.Boolean _forceFixedFramerate
    void _set__forceFixedFramerate(bool value);
    // Get instance field: private System.Int32 _interval
    int _get__interval();
    // Set instance field: private System.Int32 _interval
    void _set__interval(int value);
    // Get instance field: private ScreenshotRecorder/RecordingType _recordingType
    GlobalNamespace::ScreenshotRecorder::RecordingType _get__recordingType();
    // Set instance field: private ScreenshotRecorder/RecordingType _recordingType
    void _set__recordingType(GlobalNamespace::ScreenshotRecorder::RecordingType value);
    // Get instance field: private System.Boolean _pauseWithPButton
    bool _get__pauseWithPButton();
    // Set instance field: private System.Boolean _pauseWithPButton
    void _set__pauseWithPButton(bool value);
    // Get instance field: private System.Int32 _antiAlias
    int _get__antiAlias();
    // Set instance field: private System.Int32 _antiAlias
    void _set__antiAlias(int value);
    // Get instance field: private System.Int32 _screenshotWidth
    int _get__screenshotWidth();
    // Set instance field: private System.Int32 _screenshotWidth
    void _set__screenshotWidth(int value);
    // Get instance field: private System.Int32 _screenshotHeight
    int _get__screenshotHeight();
    // Set instance field: private System.Int32 _screenshotHeight
    void _set__screenshotHeight(int value);
    // Get instance field: private System.Int32 _counter
    int _get__counter();
    // Set instance field: private System.Int32 _counter
    void _set__counter(int value);
    // Get instance field: private System.Single _originalTimeScale
    float _get__originalTimeScale();
    // Set instance field: private System.Single _originalTimeScale
    void _set__originalTimeScale(float value);
    // Get instance field: private System.Boolean _paused
    bool _get__paused();
    // Set instance field: private System.Boolean _paused
    void _set__paused(bool value);
    // Get instance field: private System.Int32 _frameNum
    int _get__frameNum();
    // Set instance field: private System.Int32 _frameNum
    void _set__frameNum(int value);
    // Get instance field: private UnityEngine.RenderTexture _cubemapLeftEye
    UnityEngine::RenderTexture* _get__cubemapLeftEye();
    // Set instance field: private UnityEngine.RenderTexture _cubemapLeftEye
    void _set__cubemapLeftEye(UnityEngine::RenderTexture* value);
    // Get instance field: private UnityEngine.RenderTexture _cubemapRighEye
    UnityEngine::RenderTexture* _get__cubemapRighEye();
    // Set instance field: private UnityEngine.RenderTexture _cubemapRighEye
    void _set__cubemapRighEye(UnityEngine::RenderTexture* value);
    // Get instance field: private UnityEngine.RenderTexture _equirectTexture
    UnityEngine::RenderTexture* _get__equirectTexture();
    // Set instance field: private UnityEngine.RenderTexture _equirectTexture
    void _set__equirectTexture(UnityEngine::RenderTexture* value);
    // Get instance field: private UnityEngine.RenderTexture _cameraRenderTexture
    UnityEngine::RenderTexture* _get__cameraRenderTexture();
    // Set instance field: private UnityEngine.RenderTexture _cameraRenderTexture
    void _set__cameraRenderTexture(UnityEngine::RenderTexture* value);
    // protected System.Void OnEnable()
    // Offset: 0x1222114
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1222298
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x122236C
    void LateUpdate();
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x12224D0
    void OnApplicationFocus(bool hasFocus);
    // private System.Void SaveCameraScreenshot()
    // Offset: 0x122243C
    void SaveCameraScreenshot();
    // private System.Void SaveTextureScreenshot(UnityEngine.Texture2D tex)
    // Offset: 0x122260C
    void SaveTextureScreenshot(UnityEngine::Texture2D* tex);
    // private UnityEngine.Texture2D ConvertRenderTexture(UnityEngine.RenderTexture renderTexture)
    // Offset: 0x12224E8
    UnityEngine::Texture2D* ConvertRenderTexture(UnityEngine::RenderTexture* renderTexture);
    // public System.Void .ctor()
    // Offset: 0x122271C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenshotRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScreenshotRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenshotRecorder*, creationType>()));
    }
  }; // ScreenshotRecorder
  #pragma pack(pop)
  static check_size<sizeof(ScreenshotRecorder), 112 + sizeof(UnityEngine::RenderTexture*)> __GlobalNamespace_ScreenshotRecorderSizeCheck;
  static_assert(sizeof(ScreenshotRecorder) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenshotRecorder*, "", "ScreenshotRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenshotRecorder::RecordingType, "", "ScreenshotRecorder/RecordingType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)()>(&GlobalNamespace::ScreenshotRecorder::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)()>(&GlobalNamespace::ScreenshotRecorder::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)()>(&GlobalNamespace::ScreenshotRecorder::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)(bool)>(&GlobalNamespace::ScreenshotRecorder::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot
// Il2CppName: SaveCameraScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)()>(&GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "SaveCameraScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot
// Il2CppName: SaveTextureScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenshotRecorder::*)(UnityEngine::Texture2D*)>(&GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "SaveTextureScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture
// Il2CppName: ConvertRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (GlobalNamespace::ScreenshotRecorder::*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenshotRecorder*), "ConvertRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenshotRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
