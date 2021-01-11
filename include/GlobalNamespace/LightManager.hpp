// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LightManager
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: DA4248
  // [ExecuteInEditMode] Offset: DA4248
  class LightManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*/ {
    public:
    // private UnityEngine.Vector4[] _directionalLightDirections
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector4>* directionalLightDirections;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Vector4[] _directionalLightColors
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* directionalLightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Vector4[] _pointLightPositions
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* pointLightPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Vector4[] _pointLightColors
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector4>* pointLightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private System.Int32 lastRefreshFrameNum
    // Size: 0x4
    // Offset: 0x38
    int lastRefreshFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightManager
    LightManager(::Array<UnityEngine::Vector4>* directionalLightDirections_ = {}, ::Array<UnityEngine::Vector4>* directionalLightColors_ = {}, ::Array<UnityEngine::Vector4>* pointLightPositions_ = {}, ::Array<UnityEngine::Vector4>* pointLightColors_ = {}, int lastRefreshFrameNum_ = {}) noexcept : directionalLightDirections{directionalLightDirections_}, directionalLightColors{directionalLightColors_}, pointLightPositions{pointLightPositions_}, pointLightColors{pointLightColors_}, lastRefreshFrameNum{lastRefreshFrameNum_} {}
    // Creating interface conversion operator: operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks() noexcept {
      return *reinterpret_cast<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4D64
    // Get static field: static private readonly System.Int32 _directionalLightDirectionsID
    static int _get__directionalLightDirectionsID();
    // Set static field: static private readonly System.Int32 _directionalLightDirectionsID
    static void _set__directionalLightDirectionsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4D74
    // Get static field: static private readonly System.Int32 _directionalLightColorsID
    static int _get__directionalLightColorsID();
    // Set static field: static private readonly System.Int32 _directionalLightColorsID
    static void _set__directionalLightColorsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4D84
    // Get static field: static private readonly System.Int32 _pointLightPositionsID
    static int _get__pointLightPositionsID();
    // Set static field: static private readonly System.Int32 _pointLightPositionsID
    static void _set__pointLightPositionsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4D94
    // Get static field: static private readonly System.Int32 _pointLightColorsID
    static int _get__pointLightColorsID();
    // Set static field: static private readonly System.Int32 _pointLightColorsID
    static void _set__pointLightColorsID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x187B32C
    void OnDisable();
    // private System.Void OnWillRenderObject()
    // Offset: 0x187B390
    void OnWillRenderObject();
    // private System.Void OnBecameInvisible()
    // Offset: 0x187B408
    void OnBecameInvisible();
    // protected System.Void OnDestroy()
    // Offset: 0x187B990
    void OnDestroy();
    // private System.Void ResetColors()
    // Offset: 0x187B994
    void ResetColors();
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x187B46C
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPreRender(UnityEngine.Camera camera)
    void OnCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x187B98C
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPostRender(UnityEngine.Camera camera)
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x187BB10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x187BBD8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LightManager
  static check_size<sizeof(LightManager), 56 + sizeof(int)> __GlobalNamespace_LightManagerSizeCheck;
  static_assert(sizeof(LightManager) == 0x3C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightManager*, "", "LightManager");
