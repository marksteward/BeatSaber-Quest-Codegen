// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Autogenerated type: OVRSceneLoader
  class OVRSceneLoader : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSceneLoader::SceneInfo
    struct SceneInfo;
    // Nested type: GlobalNamespace::OVRSceneLoader::$DelayCanvasPosUpdate$d__24
    class $DelayCanvasPosUpdate$d__24;
    // Nested type: GlobalNamespace::OVRSceneLoader::$onCheckSceneCoroutine$d__25
    class $onCheckSceneCoroutine$d__25;
    // Autogenerated type: OVRSceneLoader/SceneInfo
    struct SceneInfo : public System::ValueType {
      public:
      // public System.Collections.Generic.List`1<System.String> scenes
      // Offset: 0x0
      System::Collections::Generic::List_1<::Il2CppString*>* scenes;
      // public System.Int64 version
      // Offset: 0x8
      int64_t version;
      // Creating value type constructor for type: SceneInfo
      constexpr SceneInfo(System::Collections::Generic::List_1<::Il2CppString*>* scenes_ = {}, int64_t version_ = {}) : scenes{scenes_}, version{version_} {}
      // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneList, System.Int64 currentSceneEpochVersion)
      // Offset: 0xA3B930
      static OVRSceneLoader::SceneInfo* New_ctor(System::Collections::Generic::List_1<::Il2CppString*>* sceneList, int64_t currentSceneEpochVersion);
    }; // OVRSceneLoader/SceneInfo
    // public System.Single sceneCheckIntervalSeconds
    // Offset: 0x18
    float sceneCheckIntervalSeconds;
    // public System.Single logCloseTime
    // Offset: 0x1C
    float logCloseTime;
    // public UnityEngine.Canvas mainCanvas
    // Offset: 0x20
    UnityEngine::Canvas* mainCanvas;
    // public UnityEngine.UI.Text logTextBox
    // Offset: 0x28
    UnityEngine::UI::Text* logTextBox;
    // private UnityEngine.AsyncOperation loadSceneOperation
    // Offset: 0x30
    UnityEngine::AsyncOperation* loadSceneOperation;
    // private System.String formattedLogText
    // Offset: 0x38
    ::Il2CppString* formattedLogText;
    // private System.Single closeLogTimer
    // Offset: 0x40
    float closeLogTimer;
    // private System.Boolean closeLogDialogue
    // Offset: 0x44
    bool closeLogDialogue;
    // private System.Boolean canvasPosUpdated
    // Offset: 0x45
    bool canvasPosUpdated;
    // private System.String scenePath
    // Offset: 0x48
    ::Il2CppString* scenePath;
    // private System.String sceneLoadDataPath
    // Offset: 0x50
    ::Il2CppString* sceneLoadDataPath;
    // private System.Collections.Generic.List`1<UnityEngine.AssetBundle> loadedAssetBundles
    // Offset: 0x58
    System::Collections::Generic::List_1<UnityEngine::AssetBundle*>* loadedAssetBundles;
    // private OVRSceneLoader/SceneInfo currentSceneInfo
    // Offset: 0x60
    GlobalNamespace::OVRSceneLoader::SceneInfo currentSceneInfo;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
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
    // private System.Void Awake()
    // Offset: 0xF4E25C
    void Awake();
    // private System.Void Start()
    // Offset: 0xF4E2D8
    void Start();
    // private System.Void LoadScene(OVRSceneLoader/SceneInfo sceneInfo)
    // Offset: 0xF4E6D8
    void LoadScene(GlobalNamespace::OVRSceneLoader::SceneInfo sceneInfo);
    // private System.Void LoadSceneOperation_completed(UnityEngine.AsyncOperation obj)
    // Offset: 0xF4EF6C
    void LoadSceneOperation_completed(UnityEngine::AsyncOperation* obj);
    // public System.Void Update()
    // Offset: 0xF4F0D4
    void Update();
    // private System.Void UpdateCanvasPosition()
    // Offset: 0xF4F30C
    void UpdateCanvasPosition();
    // private OVRSceneLoader/SceneInfo GetSceneInfo()
    // Offset: 0xF4E4B0
    GlobalNamespace::OVRSceneLoader::SceneInfo GetSceneInfo();
    // private System.Collections.IEnumerator DelayCanvasPosUpdate()
    // Offset: 0xF4E434
    System::Collections::IEnumerator* DelayCanvasPosUpdate();
    // private System.Collections.IEnumerator onCheckSceneCoroutine()
    // Offset: 0xF4F058
    System::Collections::IEnumerator* onCheckSceneCoroutine();
    // private System.Void DestroyAllGameObjects()
    // Offset: 0xF4F5D0
    void DestroyAllGameObjects();
    // public System.Void .ctor()
    // Offset: 0xF4F6E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSceneLoader* New_ctor();
  }; // OVRSceneLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader::SceneInfo, "", "OVRSceneLoader/SceneInfo");
#pragma pack(pop)
