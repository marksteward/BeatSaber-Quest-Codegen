// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_TrackedObject/EIndex
#include "GlobalNamespace/SteamVR_TrackedObject.hpp"
// Including type: Valve.VR.RenderModel_ControllerMode_State_t
#include "Valve/VR/RenderModel_ControllerMode_State_t.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: VREvent_t because it is already included!
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
  // Forward declaring type: RenderModel_TextureMap_t
  struct RenderModel_TextureMap_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_RenderModel
  class SteamVR_RenderModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_RenderModel::RenderModel
    class RenderModel;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder
    class RenderModelInterfaceHolder;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::$SetModelAsync$d__21
    class $SetModelAsync$d__21;
    // Nested type: GlobalNamespace::SteamVR_RenderModel::$FreeRenderModel$d__24
    class $FreeRenderModel$d__24;
    // public SteamVR_TrackedObject/EIndex index
    // Offset: 0x18
    GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // public System.String modelOverride
    // Offset: 0x20
    ::Il2CppString* modelOverride;
    // public UnityEngine.Shader shader
    // Offset: 0x28
    UnityEngine::Shader* shader;
    // public System.Boolean verbose
    // Offset: 0x30
    bool verbose;
    // public System.Boolean createComponents
    // Offset: 0x31
    bool createComponents;
    // public System.Boolean updateDynamically
    // Offset: 0x32
    bool updateDynamically;
    // public Valve.VR.RenderModel_ControllerMode_State_t controllerModeState
    // Offset: 0x33
    Valve::VR::RenderModel_ControllerMode_State_t controllerModeState;
    // private System.String <renderModelName>k__BackingField
    // Offset: 0x38
    ::Il2CppString* renderModelName;
    // private SteamVR_Events/Action deviceConnectedAction
    // Offset: 0x40
    GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // private SteamVR_Events/Action hideRenderModelsAction
    // Offset: 0x48
    GlobalNamespace::SteamVR_Events::Action* hideRenderModelsAction;
    // private SteamVR_Events/Action modelSkinSettingsHaveChangedAction
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* modelSkinSettingsHaveChangedAction;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> nameCache
    // Offset: 0x58
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* nameCache;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // static field const value: static public System.String modelOverrideWarning
    static constexpr const char* modelOverrideWarning = "Model override is really only meant to be used in the scene view for lining things up; using it at runtime is discouraged.  Use tracked device index instead to ensure the correct model is displayed for all users.";
    // Get static field: static public System.String modelOverrideWarning
    static ::Il2CppString* _get_modelOverrideWarning();
    // Set static field: static public System.String modelOverrideWarning
    static void _set_modelOverrideWarning(::Il2CppString* value);
    // static field const value: static public System.String k_localTransformName
    static constexpr const char* k_localTransformName = "attach";
    // Get static field: static public System.String k_localTransformName
    static ::Il2CppString* _get_k_localTransformName();
    // Set static field: static public System.String k_localTransformName
    static void _set_k_localTransformName(::Il2CppString* value);
    // Get static field: static public System.Collections.Hashtable models
    static System::Collections::Hashtable* _get_models();
    // Set static field: static public System.Collections.Hashtable models
    static void _set_models(System::Collections::Hashtable* value);
    // Get static field: static public System.Collections.Hashtable materials
    static System::Collections::Hashtable* _get_materials();
    // Set static field: static public System.Collections.Hashtable materials
    static void _set_materials(System::Collections::Hashtable* value);
    // public System.String get_renderModelName()
    // Offset: 0xD902C4
    ::Il2CppString* get_renderModelName();
    // private System.Void set_renderModelName(System.String value)
    // Offset: 0xD902CC
    void set_renderModelName(::Il2CppString* value);
    // private System.Void OnModelSkinSettingsHaveChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0xD902D4
    void OnModelSkinSettingsHaveChanged(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnHideRenderModels(System.Boolean hidden)
    // Offset: 0xD90514
    void OnHideRenderModels(bool hidden);
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0xD90648
    void OnDeviceConnected(int i, bool connected);
    // public System.Void UpdateModel()
    // Offset: 0xD90350
    void UpdateModel();
    // private System.Collections.IEnumerator SetModelAsync(System.String renderModelName)
    // Offset: 0xD90660
    System::Collections::IEnumerator* SetModelAsync(::Il2CppString* renderModelName);
    // private System.Boolean SetModel(System.String renderModelName)
    // Offset: 0xD90724
    bool SetModel(::Il2CppString* renderModelName);
    // private SteamVR_RenderModel/RenderModel LoadRenderModel(Valve.VR.CVRRenderModels renderModels, System.String renderModelName, System.String baseName)
    // Offset: 0xD919AC
    GlobalNamespace::SteamVR_RenderModel::RenderModel* LoadRenderModel(Valve::VR::CVRRenderModels* renderModels, ::Il2CppString* renderModelName, ::Il2CppString* baseName);
    // private System.Collections.IEnumerator FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0xD92894
    System::Collections::IEnumerator* FreeRenderModel(System::IntPtr pRenderModel);
    // public UnityEngine.Transform FindComponent(System.String componentName)
    // Offset: 0xD92980
    UnityEngine::Transform* FindComponent(::Il2CppString* componentName);
    // private System.Void StripMesh(UnityEngine.GameObject go)
    // Offset: 0xD90BEC
    void StripMesh(UnityEngine::GameObject* go);
    // private System.Boolean LoadComponents(SteamVR_RenderModel/RenderModelInterfaceHolder holder, System.String renderModelName)
    // Offset: 0xD90D30
    bool LoadComponents(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder* holder, ::Il2CppString* renderModelName);
    // private System.Void OnEnable()
    // Offset: 0xD92B7C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xD92CA4
    void OnDisable();
    // private System.Void Update()
    // Offset: 0xD92D08
    void Update();
    // public System.Void UpdateComponents(Valve.VR.CVRRenderModels renderModels)
    // Offset: 0xD91558
    void UpdateComponents(Valve::VR::CVRRenderModels* renderModels);
    // public System.Void SetDeviceIndex(System.Int32 index)
    // Offset: 0xD92D8C
    void SetDeviceIndex(int index);
    // static private System.Void Sleep()
    // Offset: 0xD92490
    static void Sleep();
    // private Valve.VR.RenderModel_t MarshalRenderModel(System.IntPtr pRenderModel)
    // Offset: 0xD9249C
    Valve::VR::RenderModel_t MarshalRenderModel(System::IntPtr pRenderModel);
    // private Valve.VR.RenderModel_TextureMap_t MarshalRenderModel_TextureMap(System.IntPtr pRenderModel)
    // Offset: 0xD926A4
    Valve::VR::RenderModel_TextureMap_t MarshalRenderModel_TextureMap(System::IntPtr pRenderModel);
    // private System.Void .ctor()
    // Offset: 0xD92A1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_RenderModel* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xD92E18
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_RenderModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel*, "", "SteamVR_RenderModel");
#pragma pack(pop)
