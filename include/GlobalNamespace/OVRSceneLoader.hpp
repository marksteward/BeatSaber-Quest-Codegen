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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: SceneInfo because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSceneLoader : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSceneLoader::SceneInfo
    struct SceneInfo;
    // Nested type: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24
    class $DelayCanvasPosUpdate$d__24;
    // Nested type: GlobalNamespace::OVRSceneLoader::$onCheckSceneCoroutine$d__25
    class $onCheckSceneCoroutine$d__25;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRSceneLoader/SceneInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct SceneInfo/*, public System::ValueType*/ {
      public:
      // public System.Collections.Generic.List`1<System.String> scenes
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::List_1<::Il2CppString*>* scenes;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
      // public System.Int64 version
      // Size: 0x8
      // Offset: 0x8
      int64_t version;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // Creating value type constructor for type: SceneInfo
      constexpr SceneInfo(System::Collections::Generic::List_1<::Il2CppString*>* scenes_ = {}, int64_t version_ = {}) noexcept : scenes{scenes_}, version{version_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: public System.Collections.Generic.List`1<System.String> scenes
      System::Collections::Generic::List_1<::Il2CppString*>* _get_scenes();
      // Set instance field: public System.Collections.Generic.List`1<System.String> scenes
      void _set_scenes(System::Collections::Generic::List_1<::Il2CppString*>* value);
      // Get instance field: public System.Int64 version
      int64_t _get_version();
      // Set instance field: public System.Int64 version
      void _set_version(int64_t value);
      // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneList, System.Int64 currentSceneEpochVersion)
      // Offset: 0xEE14F4
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  SceneInfo(System::Collections::Generic::List_1<::Il2CppString*>* sceneList, int64_t currentSceneEpochVersion)
    }; // OVRSceneLoader/SceneInfo
    #pragma pack(pop)
    static check_size<sizeof(OVRSceneLoader::SceneInfo), 8 + sizeof(int64_t)> __GlobalNamespace_OVRSceneLoader_SceneInfoSizeCheck;
    static_assert(sizeof(OVRSceneLoader::SceneInfo) == 0x10);
    // public System.Single sceneCheckIntervalSeconds
    // Size: 0x4
    // Offset: 0x18
    float sceneCheckIntervalSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single logCloseTime
    // Size: 0x4
    // Offset: 0x1C
    float logCloseTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Canvas mainCanvas
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Canvas* mainCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // public UnityEngine.UI.Text logTextBox
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Text* logTextBox;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.AsyncOperation loadSceneOperation
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AsyncOperation* loadSceneOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private System.String formattedLogText
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* formattedLogText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single closeLogTimer
    // Size: 0x4
    // Offset: 0x40
    float closeLogTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean closeLogDialogue
    // Size: 0x1
    // Offset: 0x44
    bool closeLogDialogue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean canvasPosUpdated
    // Size: 0x1
    // Offset: 0x45
    bool canvasPosUpdated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canvasPosUpdated and: scenePath
    char __padding8[0x2] = {};
    // private System.String scenePath
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* scenePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String sceneLoadDataPath
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* sceneLoadDataPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<UnityEngine::AssetBundle*>* loadedAssetBundles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::AssetBundle*>*) == 0x8);
    // private OVRSceneLoader/SceneInfo currentSceneInfo
    // Size: 0x10
    // Offset: 0x60
    GlobalNamespace::OVRSceneLoader::SceneInfo currentSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSceneLoader::SceneInfo) == 0x10);
    // Creating value type constructor for type: OVRSceneLoader
    OVRSceneLoader(float sceneCheckIntervalSeconds_ = {}, float logCloseTime_ = {}, UnityEngine::Canvas* mainCanvas_ = {}, UnityEngine::UI::Text* logTextBox_ = {}, UnityEngine::AsyncOperation* loadSceneOperation_ = {}, ::Il2CppString* formattedLogText_ = {}, float closeLogTimer_ = {}, bool closeLogDialogue_ = {}, bool canvasPosUpdated_ = {}, ::Il2CppString* scenePath_ = {}, ::Il2CppString* sceneLoadDataPath_ = {}, System::Collections::Generic::List_1<UnityEngine::AssetBundle*>* loadedAssetBundles_ = {}, GlobalNamespace::OVRSceneLoader::SceneInfo currentSceneInfo_ = {}) noexcept : sceneCheckIntervalSeconds{sceneCheckIntervalSeconds_}, logCloseTime{logCloseTime_}, mainCanvas{mainCanvas_}, logTextBox{logTextBox_}, loadSceneOperation{loadSceneOperation_}, formattedLogText{formattedLogText_}, closeLogTimer{closeLogTimer_}, closeLogDialogue{closeLogDialogue_}, canvasPosUpdated{canvasPosUpdated_}, scenePath{scenePath_}, sceneLoadDataPath{sceneLoadDataPath_}, loadedAssetBundles{loadedAssetBundles_}, currentSceneInfo{currentSceneInfo_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String externalStoragePath
    static constexpr const char* externalStoragePath = "/sdcard/Android/data";
    // Get static field: static public System.String externalStoragePath
    static ::Il2CppString* _get_externalStoragePath();
    // Set static field: static public System.String externalStoragePath
    static void _set_externalStoragePath(::Il2CppString* value);
    // static field const value: static public System.String sceneLoadDataName
    static constexpr const char* sceneLoadDataName = "SceneLoadData.txt";
    // Get static field: static public System.String sceneLoadDataName
    static ::Il2CppString* _get_sceneLoadDataName();
    // Set static field: static public System.String sceneLoadDataName
    static void _set_sceneLoadDataName(::Il2CppString* value);
    // static field const value: static public System.String resourceBundleName
    static constexpr const char* resourceBundleName = "asset_resources";
    // Get static field: static public System.String resourceBundleName
    static ::Il2CppString* _get_resourceBundleName();
    // Set static field: static public System.String resourceBundleName
    static void _set_resourceBundleName(::Il2CppString* value);
    // Get instance field: public System.Single sceneCheckIntervalSeconds
    float _get_sceneCheckIntervalSeconds();
    // Set instance field: public System.Single sceneCheckIntervalSeconds
    void _set_sceneCheckIntervalSeconds(float value);
    // Get instance field: public System.Single logCloseTime
    float _get_logCloseTime();
    // Set instance field: public System.Single logCloseTime
    void _set_logCloseTime(float value);
    // Get instance field: public UnityEngine.Canvas mainCanvas
    UnityEngine::Canvas* _get_mainCanvas();
    // Set instance field: public UnityEngine.Canvas mainCanvas
    void _set_mainCanvas(UnityEngine::Canvas* value);
    // Get instance field: public UnityEngine.UI.Text logTextBox
    UnityEngine::UI::Text* _get_logTextBox();
    // Set instance field: public UnityEngine.UI.Text logTextBox
    void _set_logTextBox(UnityEngine::UI::Text* value);
    // Get instance field: private UnityEngine.AsyncOperation loadSceneOperation
    UnityEngine::AsyncOperation* _get_loadSceneOperation();
    // Set instance field: private UnityEngine.AsyncOperation loadSceneOperation
    void _set_loadSceneOperation(UnityEngine::AsyncOperation* value);
    // Get instance field: private System.String formattedLogText
    ::Il2CppString* _get_formattedLogText();
    // Set instance field: private System.String formattedLogText
    void _set_formattedLogText(::Il2CppString* value);
    // Get instance field: private System.Single closeLogTimer
    float _get_closeLogTimer();
    // Set instance field: private System.Single closeLogTimer
    void _set_closeLogTimer(float value);
    // Get instance field: private System.Boolean closeLogDialogue
    bool _get_closeLogDialogue();
    // Set instance field: private System.Boolean closeLogDialogue
    void _set_closeLogDialogue(bool value);
    // Get instance field: private System.Boolean canvasPosUpdated
    bool _get_canvasPosUpdated();
    // Set instance field: private System.Boolean canvasPosUpdated
    void _set_canvasPosUpdated(bool value);
    // Get instance field: private System.String scenePath
    ::Il2CppString* _get_scenePath();
    // Set instance field: private System.String scenePath
    void _set_scenePath(::Il2CppString* value);
    // Get instance field: private System.String sceneLoadDataPath
    ::Il2CppString* _get_sceneLoadDataPath();
    // Set instance field: private System.String sceneLoadDataPath
    void _set_sceneLoadDataPath(::Il2CppString* value);
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    System::Collections::Generic::List_1<UnityEngine::AssetBundle*>* _get_loadedAssetBundles();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    void _set_loadedAssetBundles(System::Collections::Generic::List_1<UnityEngine::AssetBundle*>* value);
    // Get instance field: private OVRSceneLoader/SceneInfo currentSceneInfo
    GlobalNamespace::OVRSceneLoader::SceneInfo _get_currentSceneInfo();
    // Set instance field: private OVRSceneLoader/SceneInfo currentSceneInfo
    void _set_currentSceneInfo(GlobalNamespace::OVRSceneLoader::SceneInfo value);
    // private System.Void Awake()
    // Offset: 0x15FA1E0
    void Awake();
    // private System.Void Start()
    // Offset: 0x15FA25C
    void Start();
    // private System.Void LoadScene(OVRSceneLoader/SceneInfo sceneInfo)
    // Offset: 0x15FA60C
    void LoadScene(GlobalNamespace::OVRSceneLoader::SceneInfo sceneInfo);
    // private System.Void LoadSceneOperation_completed(UnityEngine.AsyncOperation obj)
    // Offset: 0x15FAE74
    void LoadSceneOperation_completed(UnityEngine::AsyncOperation* obj);
    // public System.Void Update()
    // Offset: 0x15FAFC8
    void Update();
    // private System.Void UpdateCanvasPosition()
    // Offset: 0x15FB200
    void UpdateCanvasPosition();
    // private OVRSceneLoader/SceneInfo GetSceneInfo()
    // Offset: 0x15FA3F4
    GlobalNamespace::OVRSceneLoader::SceneInfo GetSceneInfo();
    // private System.Collections.IEnumerator DelayCanvasPosUpdate()
    // Offset: 0x15FA384
    System::Collections::IEnumerator* DelayCanvasPosUpdate();
    // private System.Collections.IEnumerator onCheckSceneCoroutine()
    // Offset: 0x15FAF58
    System::Collections::IEnumerator* onCheckSceneCoroutine();
    // private System.Void DestroyAllGameObjects()
    // Offset: 0x15FB4C4
    void DestroyAllGameObjects();
    // public System.Void .ctor()
    // Offset: 0x15FB5D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSceneLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneLoader*, creationType>()));
    }
  }; // OVRSceneLoader
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneLoader), 96 + sizeof(GlobalNamespace::OVRSceneLoader::SceneInfo)> __GlobalNamespace_OVRSceneLoaderSizeCheck;
  static_assert(sizeof(OVRSceneLoader) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader::SceneInfo, "", "OVRSceneLoader/SceneInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)(GlobalNamespace::OVRSceneLoader::SceneInfo)>(&GlobalNamespace::OVRSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneInfo = &::il2cpp_utils::GetClassFromName("", "OVRSceneLoader/SceneInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed
// Il2CppName: LoadSceneOperation_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)(UnityEngine::AsyncOperation*)>(&GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "LoadSceneOperation_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition
// Il2CppName: UpdateCanvasPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "UpdateCanvasPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::GetSceneInfo
// Il2CppName: GetSceneInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSceneLoader::SceneInfo (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::GetSceneInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "GetSceneInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate
// Il2CppName: DelayCanvasPosUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "DelayCanvasPosUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine
// Il2CppName: onCheckSceneCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "onCheckSceneCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects
// Il2CppName: DestroyAllGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneLoader::*)()>(&GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneLoader*), "DestroyAllGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
