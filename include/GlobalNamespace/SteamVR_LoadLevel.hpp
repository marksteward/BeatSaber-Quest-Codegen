// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF1
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_LoadLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_LoadLevel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45
    class $LoadLevel$d__45;
    // public System.String levelName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessPath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* internalProcessPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String internalProcessArgs
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* internalProcessArgs;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean loadAdditive
    // Size: 0x1
    // Offset: 0x30
    bool loadAdditive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean loadAsync
    // Size: 0x1
    // Offset: 0x31
    bool loadAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loadAsync and: loadingScreen
    char __padding4[0x6] = {};
    // public UnityEngine.Texture loadingScreen
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Texture* loadingScreen;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarEmpty
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Texture* progressBarEmpty;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture progressBarFull
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Texture* progressBarFull;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public System.Single loadingScreenWidthInMeters
    // Size: 0x4
    // Offset: 0x50
    float loadingScreenWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single progressBarWidthInMeters
    // Size: 0x4
    // Offset: 0x54
    float progressBarWidthInMeters;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenDistance
    // Size: 0x4
    // Offset: 0x58
    float loadingScreenDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: loadingScreenDistance and: loadingScreenTransform
    char __padding10[0x4] = {};
    // public UnityEngine.Transform loadingScreenTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* loadingScreenTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform progressBarTransform
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* progressBarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Texture front
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Texture* front;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture back
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Texture* back;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture left
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Texture* left;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture right
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Texture* right;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture top
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Texture* top;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture bottom
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Texture* bottom;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Color backgroundColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color backgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Boolean showGrid
    // Size: 0x1
    // Offset: 0xB0
    bool showGrid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showGrid and: fadeOutTime
    char __padding20[0x3] = {};
    // public System.Single fadeOutTime
    // Size: 0x4
    // Offset: 0xB4
    float fadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeInTime
    // Size: 0x4
    // Offset: 0xB8
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single postLoadSettleTime
    // Size: 0x4
    // Offset: 0xBC
    float postLoadSettleTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeInTime
    // Size: 0x4
    // Offset: 0xC0
    float loadingScreenFadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single loadingScreenFadeOutTime
    // Size: 0x4
    // Offset: 0xC4
    float loadingScreenFadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeRate
    // Size: 0x4
    // Offset: 0xC8
    float fadeRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single alpha
    // Size: 0x4
    // Offset: 0xCC
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AsyncOperation async
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::AsyncOperation* async;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.RenderTexture renderTexture
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::RenderTexture* renderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private System.UInt64 loadingScreenOverlayHandle
    // Size: 0x8
    // Offset: 0xE0
    uint64_t loadingScreenOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 progressBarOverlayHandle
    // Size: 0x8
    // Offset: 0xE8
    uint64_t progressBarOverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Boolean autoTriggerOnEnable
    // Size: 0x1
    // Offset: 0xF0
    bool autoTriggerOnEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SteamVR_LoadLevel
    SteamVR_LoadLevel(::Il2CppString* levelName_ = {}, ::Il2CppString* internalProcessPath_ = {}, ::Il2CppString* internalProcessArgs_ = {}, bool loadAdditive_ = {}, bool loadAsync_ = {}, UnityEngine::Texture* loadingScreen_ = {}, UnityEngine::Texture* progressBarEmpty_ = {}, UnityEngine::Texture* progressBarFull_ = {}, float loadingScreenWidthInMeters_ = {}, float progressBarWidthInMeters_ = {}, float loadingScreenDistance_ = {}, UnityEngine::Transform* loadingScreenTransform_ = {}, UnityEngine::Transform* progressBarTransform_ = {}, UnityEngine::Texture* front_ = {}, UnityEngine::Texture* back_ = {}, UnityEngine::Texture* left_ = {}, UnityEngine::Texture* right_ = {}, UnityEngine::Texture* top_ = {}, UnityEngine::Texture* bottom_ = {}, UnityEngine::Color backgroundColor_ = {}, bool showGrid_ = {}, float fadeOutTime_ = {}, float fadeInTime_ = {}, float postLoadSettleTime_ = {}, float loadingScreenFadeInTime_ = {}, float loadingScreenFadeOutTime_ = {}, float fadeRate_ = {}, float alpha_ = {}, UnityEngine::AsyncOperation* async_ = {}, UnityEngine::RenderTexture* renderTexture_ = {}, uint64_t loadingScreenOverlayHandle_ = {}, uint64_t progressBarOverlayHandle_ = {}, bool autoTriggerOnEnable_ = {}) noexcept : levelName{levelName_}, internalProcessPath{internalProcessPath_}, internalProcessArgs{internalProcessArgs_}, loadAdditive{loadAdditive_}, loadAsync{loadAsync_}, loadingScreen{loadingScreen_}, progressBarEmpty{progressBarEmpty_}, progressBarFull{progressBarFull_}, loadingScreenWidthInMeters{loadingScreenWidthInMeters_}, progressBarWidthInMeters{progressBarWidthInMeters_}, loadingScreenDistance{loadingScreenDistance_}, loadingScreenTransform{loadingScreenTransform_}, progressBarTransform{progressBarTransform_}, front{front_}, back{back_}, left{left_}, right{right_}, top{top_}, bottom{bottom_}, backgroundColor{backgroundColor_}, showGrid{showGrid_}, fadeOutTime{fadeOutTime_}, fadeInTime{fadeInTime_}, postLoadSettleTime{postLoadSettleTime_}, loadingScreenFadeInTime{loadingScreenFadeInTime_}, loadingScreenFadeOutTime{loadingScreenFadeOutTime_}, fadeRate{fadeRate_}, alpha{alpha_}, async{async_}, renderTexture{renderTexture_}, loadingScreenOverlayHandle{loadingScreenOverlayHandle_}, progressBarOverlayHandle{progressBarOverlayHandle_}, autoTriggerOnEnable{autoTriggerOnEnable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private SteamVR_LoadLevel _active
    static GlobalNamespace::SteamVR_LoadLevel* _get__active();
    // Set static field: static private SteamVR_LoadLevel _active
    static void _set__active(GlobalNamespace::SteamVR_LoadLevel* value);
    // Get instance field: public System.String levelName
    ::Il2CppString* _get_levelName();
    // Set instance field: public System.String levelName
    void _set_levelName(::Il2CppString* value);
    // Get instance field: public System.String internalProcessPath
    ::Il2CppString* _get_internalProcessPath();
    // Set instance field: public System.String internalProcessPath
    void _set_internalProcessPath(::Il2CppString* value);
    // Get instance field: public System.String internalProcessArgs
    ::Il2CppString* _get_internalProcessArgs();
    // Set instance field: public System.String internalProcessArgs
    void _set_internalProcessArgs(::Il2CppString* value);
    // Get instance field: public System.Boolean loadAdditive
    bool _get_loadAdditive();
    // Set instance field: public System.Boolean loadAdditive
    void _set_loadAdditive(bool value);
    // Get instance field: public System.Boolean loadAsync
    bool _get_loadAsync();
    // Set instance field: public System.Boolean loadAsync
    void _set_loadAsync(bool value);
    // Get instance field: public UnityEngine.Texture loadingScreen
    UnityEngine::Texture* _get_loadingScreen();
    // Set instance field: public UnityEngine.Texture loadingScreen
    void _set_loadingScreen(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture progressBarEmpty
    UnityEngine::Texture* _get_progressBarEmpty();
    // Set instance field: public UnityEngine.Texture progressBarEmpty
    void _set_progressBarEmpty(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture progressBarFull
    UnityEngine::Texture* _get_progressBarFull();
    // Set instance field: public UnityEngine.Texture progressBarFull
    void _set_progressBarFull(UnityEngine::Texture* value);
    // Get instance field: public System.Single loadingScreenWidthInMeters
    float _get_loadingScreenWidthInMeters();
    // Set instance field: public System.Single loadingScreenWidthInMeters
    void _set_loadingScreenWidthInMeters(float value);
    // Get instance field: public System.Single progressBarWidthInMeters
    float _get_progressBarWidthInMeters();
    // Set instance field: public System.Single progressBarWidthInMeters
    void _set_progressBarWidthInMeters(float value);
    // Get instance field: public System.Single loadingScreenDistance
    float _get_loadingScreenDistance();
    // Set instance field: public System.Single loadingScreenDistance
    void _set_loadingScreenDistance(float value);
    // Get instance field: public UnityEngine.Transform loadingScreenTransform
    UnityEngine::Transform* _get_loadingScreenTransform();
    // Set instance field: public UnityEngine.Transform loadingScreenTransform
    void _set_loadingScreenTransform(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform progressBarTransform
    UnityEngine::Transform* _get_progressBarTransform();
    // Set instance field: public UnityEngine.Transform progressBarTransform
    void _set_progressBarTransform(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Texture front
    UnityEngine::Texture* _get_front();
    // Set instance field: public UnityEngine.Texture front
    void _set_front(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture back
    UnityEngine::Texture* _get_back();
    // Set instance field: public UnityEngine.Texture back
    void _set_back(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture left
    UnityEngine::Texture* _get_left();
    // Set instance field: public UnityEngine.Texture left
    void _set_left(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture right
    UnityEngine::Texture* _get_right();
    // Set instance field: public UnityEngine.Texture right
    void _set_right(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture top
    UnityEngine::Texture* _get_top();
    // Set instance field: public UnityEngine.Texture top
    void _set_top(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Texture bottom
    UnityEngine::Texture* _get_bottom();
    // Set instance field: public UnityEngine.Texture bottom
    void _set_bottom(UnityEngine::Texture* value);
    // Get instance field: public UnityEngine.Color backgroundColor
    UnityEngine::Color _get_backgroundColor();
    // Set instance field: public UnityEngine.Color backgroundColor
    void _set_backgroundColor(UnityEngine::Color value);
    // Get instance field: public System.Boolean showGrid
    bool _get_showGrid();
    // Set instance field: public System.Boolean showGrid
    void _set_showGrid(bool value);
    // Get instance field: public System.Single fadeOutTime
    float _get_fadeOutTime();
    // Set instance field: public System.Single fadeOutTime
    void _set_fadeOutTime(float value);
    // Get instance field: public System.Single fadeInTime
    float _get_fadeInTime();
    // Set instance field: public System.Single fadeInTime
    void _set_fadeInTime(float value);
    // Get instance field: public System.Single postLoadSettleTime
    float _get_postLoadSettleTime();
    // Set instance field: public System.Single postLoadSettleTime
    void _set_postLoadSettleTime(float value);
    // Get instance field: public System.Single loadingScreenFadeInTime
    float _get_loadingScreenFadeInTime();
    // Set instance field: public System.Single loadingScreenFadeInTime
    void _set_loadingScreenFadeInTime(float value);
    // Get instance field: public System.Single loadingScreenFadeOutTime
    float _get_loadingScreenFadeOutTime();
    // Set instance field: public System.Single loadingScreenFadeOutTime
    void _set_loadingScreenFadeOutTime(float value);
    // Get instance field: private System.Single fadeRate
    float _get_fadeRate();
    // Set instance field: private System.Single fadeRate
    void _set_fadeRate(float value);
    // Get instance field: private System.Single alpha
    float _get_alpha();
    // Set instance field: private System.Single alpha
    void _set_alpha(float value);
    // Get instance field: private UnityEngine.AsyncOperation async
    UnityEngine::AsyncOperation* _get_async();
    // Set instance field: private UnityEngine.AsyncOperation async
    void _set_async(UnityEngine::AsyncOperation* value);
    // Get instance field: private UnityEngine.RenderTexture renderTexture
    UnityEngine::RenderTexture* _get_renderTexture();
    // Set instance field: private UnityEngine.RenderTexture renderTexture
    void _set_renderTexture(UnityEngine::RenderTexture* value);
    // Get instance field: private System.UInt64 loadingScreenOverlayHandle
    uint64_t _get_loadingScreenOverlayHandle();
    // Set instance field: private System.UInt64 loadingScreenOverlayHandle
    void _set_loadingScreenOverlayHandle(uint64_t value);
    // Get instance field: private System.UInt64 progressBarOverlayHandle
    uint64_t _get_progressBarOverlayHandle();
    // Set instance field: private System.UInt64 progressBarOverlayHandle
    void _set_progressBarOverlayHandle(uint64_t value);
    // Get instance field: public System.Boolean autoTriggerOnEnable
    bool _get_autoTriggerOnEnable();
    // Set instance field: public System.Boolean autoTriggerOnEnable
    void _set_autoTriggerOnEnable(bool value);
    // static public System.Boolean get_loading()
    // Offset: 0x13A82C0
    static bool get_loading();
    // static public System.Single get_progress()
    // Offset: 0x13A8358
    static float get_progress();
    // static public UnityEngine.Texture get_progressTexture()
    // Offset: 0x13A846C
    static UnityEngine::Texture* get_progressTexture();
    // private System.Void OnEnable()
    // Offset: 0x13A8544
    void OnEnable();
    // public System.Void Trigger()
    // Offset: 0x13A8554
    void Trigger();
    // static public System.Void Begin(System.String levelName, System.Boolean showGrid, System.Single fadeOutTime, System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0x13A865C
    static void Begin(::Il2CppString* levelName, bool showGrid, float fadeOutTime, float r, float g, float b, float a);
    // private System.Void OnGUI()
    // Offset: 0x13A8768
    void OnGUI();
    // private System.Void Update()
    // Offset: 0x13A8F48
    void Update();
    // private System.Collections.IEnumerator LoadLevel()
    // Offset: 0x13A85EC
    System::Collections::IEnumerator* LoadLevel();
    // private System.UInt64 GetOverlayHandle(System.String overlayName, UnityEngine.Transform transform, System.Single widthInMeters)
    // Offset: 0x13A8BAC
    uint64_t GetOverlayHandle(::Il2CppString* overlayName, UnityEngine::Transform* transform, float widthInMeters);
    // public System.Void .ctor()
    // Offset: 0x13A91C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_LoadLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13A9228
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_LoadLevel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_LoadLevel), 240 + sizeof(bool)> __GlobalNamespace_SteamVR_LoadLevelSizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel) == 0xF1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_LoadLevel*, "", "SteamVR_LoadLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_loading
// Il2CppName: get_loading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_loading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_loading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::get_progressTexture
// Il2CppName: get_progressTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture* (*)()>(&GlobalNamespace::SteamVR_LoadLevel::get_progressTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "get_progressTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Trigger
// Il2CppName: Trigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::Trigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Trigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool, float, float, float, float, float)>(&GlobalNamespace::SteamVR_LoadLevel::Begin)> {
  static const MethodInfo* get() {
    static auto* levelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* showGrid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fadeOutTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelName, showGrid, fadeOutTime, r, g, b, a});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::LoadLevel
// Il2CppName: LoadLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SteamVR_LoadLevel::*)()>(&GlobalNamespace::SteamVR_LoadLevel::LoadLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "LoadLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::GetOverlayHandle
// Il2CppName: GetOverlayHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_LoadLevel::*)(::Il2CppString*, UnityEngine::Transform*, float)>(&GlobalNamespace::SteamVR_LoadLevel::GetOverlayHandle)> {
  static const MethodInfo* get() {
    static auto* overlayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* widthInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), "GetOverlayHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overlayName, transform, widthInMeters});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_LoadLevel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
