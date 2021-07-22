// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectSO
  class BloomPrePassEffectSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: MirrorRendererSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MirrorRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MirrorRendererSO::CameraTransformData
    struct CameraTransformData;
    // Size: 0x21
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MirrorRendererSO/CameraTransformData
    // [TokenAttribute] Offset: FFFFFFFF
    struct CameraTransformData/*, public System::ValueType*/ {
      public:
      // public readonly UnityEngine.Vector3 position
      // Size: 0xC
      // Offset: 0x0
      UnityEngine::Vector3 position;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // public readonly UnityEngine.Quaternion rotation
      // Size: 0x10
      // Offset: 0xC
      UnityEngine::Quaternion rotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
      // public readonly System.Single fov
      // Size: 0x4
      // Offset: 0x1C
      float fov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Boolean stereoEnabled
      // Size: 0x1
      // Offset: 0x20
      bool stereoEnabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: CameraTransformData
      constexpr CameraTransformData(UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, float fov_ = {}, bool stereoEnabled_ = {}) noexcept : position{position_}, rotation{rotation_}, fov{fov_}, stereoEnabled{stereoEnabled_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Single fov, System.Boolean stereoEnabled)
      // Offset: 0xF0D0C4
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  CameraTransformData(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float fov, bool stereoEnabled)
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0xF0D0E0
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
      // public override System.Int32 GetHashCode()
      // Offset: 0xF0D0E8
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
    }; // MirrorRendererSO/CameraTransformData
    #pragma pack(pop)
    static check_size<sizeof(MirrorRendererSO::CameraTransformData), 32 + sizeof(bool)> __GlobalNamespace_MirrorRendererSO_CameraTransformDataSizeCheck;
    static_assert(sizeof(MirrorRendererSO::CameraTransformData) == 0x21);
    // private UnityEngine.LayerMask _reflectLayers
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::LayerMask reflectLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // private System.Int32 _stereoTextureWidth
    // Size: 0x4
    // Offset: 0x1C
    int stereoTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _stereoTextureHeight
    // Size: 0x4
    // Offset: 0x20
    int stereoTextureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _monoTextureWidth
    // Size: 0x4
    // Offset: 0x24
    int monoTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _monoTextureHeight
    // Size: 0x4
    // Offset: 0x28
    int monoTextureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxAntiAliasing
    // Size: 0x4
    // Offset: 0x2C
    int maxAntiAliasing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _disableDepthTexture
    // Size: 0x1
    // Offset: 0x30
    bool disableDepthTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enableBloomPrePass
    // Size: 0x1
    // Offset: 0x31
    bool enableBloomPrePass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableBloomPrePass and: bloomPrePassRenderer
    char __padding7[0x6] = {};
    // [SpaceAttribute] Offset: 0xDEBAA4
    // private BloomPrePassRendererSO _bloomPrePassRenderer
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BloomPrePassRendererSO* bloomPrePassRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectSO _bloomPrePassEffect
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectSO*) == 0x8);
    // private UnityEngine.Shader _clearDepthShader
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Shader* clearDepthShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.RenderTexture _bloomPrePassRenderTexture
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Camera _mirrorCamera
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Camera* mirrorCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private System.Int32 _antialiasing
    // Size: 0x4
    // Offset: 0x60
    int antialiasing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: antialiasing and: renderTextures
    char __padding13[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<MirrorRendererSO/CameraTransformData,UnityEngine.RenderTexture> _renderTextures
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<GlobalNamespace::MirrorRendererSO::CameraTransformData, UnityEngine::RenderTexture*>* renderTextures;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::MirrorRendererSO::CameraTransformData, UnityEngine::RenderTexture*>*) == 0x8);
    // private readonly UnityEngine.Rect kLeftRect
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Rect kLeftRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private readonly UnityEngine.Rect kRightRect
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Rect kRightRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private readonly UnityEngine.Rect kFullRect
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Rect kFullRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // Creating value type constructor for type: MirrorRendererSO
    MirrorRendererSO(UnityEngine::LayerMask reflectLayers_ = {}, int stereoTextureWidth_ = {}, int stereoTextureHeight_ = {}, int monoTextureWidth_ = {}, int monoTextureHeight_ = {}, int maxAntiAliasing_ = {}, bool disableDepthTexture_ = {}, bool enableBloomPrePass_ = {}, GlobalNamespace::BloomPrePassRendererSO* bloomPrePassRenderer_ = {}, GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect_ = {}, UnityEngine::Shader* clearDepthShader_ = {}, UnityEngine::RenderTexture* bloomPrePassRenderTexture_ = {}, UnityEngine::Camera* mirrorCamera_ = {}, int antialiasing_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::MirrorRendererSO::CameraTransformData, UnityEngine::RenderTexture*>* renderTextures_ = {}, UnityEngine::Rect kLeftRect_ = {}, UnityEngine::Rect kRightRect_ = {}, UnityEngine::Rect kFullRect_ = {}) noexcept : reflectLayers{reflectLayers_}, stereoTextureWidth{stereoTextureWidth_}, stereoTextureHeight{stereoTextureHeight_}, monoTextureWidth{monoTextureWidth_}, monoTextureHeight{monoTextureHeight_}, maxAntiAliasing{maxAntiAliasing_}, disableDepthTexture{disableDepthTexture_}, enableBloomPrePass{enableBloomPrePass_}, bloomPrePassRenderer{bloomPrePassRenderer_}, bloomPrePassEffect{bloomPrePassEffect_}, clearDepthShader{clearDepthShader_}, bloomPrePassRenderTexture{bloomPrePassRenderTexture_}, mirrorCamera{mirrorCamera_}, antialiasing{antialiasing_}, renderTextures{renderTextures_}, kLeftRect{kLeftRect_}, kRightRect{kRightRect_}, kFullRect{kFullRect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kWaterLayer
    static constexpr const int kWaterLayer = 4;
    // Get static field: static private System.Int32 kWaterLayer
    static int _get_kWaterLayer();
    // Set static field: static private System.Int32 kWaterLayer
    static void _set_kWaterLayer(int value);
    // private System.Void OnValidate()
    // Offset: 0x2340474
    void OnValidate();
    // protected System.Void Awake()
    // Offset: 0x2340554
    void Awake();
    // private System.Void ValidateParams()
    // Offset: 0x2340478
    void ValidateParams();
    // public System.Void Init(UnityEngine.LayerMask reflectLayers, System.Int32 stereoTextureWidth, System.Int32 stereoTextureHeight, System.Int32 monoTextureWidth, System.Int32 monoTextureHeight, System.Int32 maxAntiAliasing, System.Boolean enableBloomPrePass)
    // Offset: 0x2340558
    void Init(UnityEngine::LayerMask reflectLayers, int stereoTextureWidth, int stereoTextureHeight, int monoTextureWidth, int monoTextureHeight, int maxAntiAliasing, bool enableBloomPrePass);
    // public System.Void PrepareForNextFrame()
    // Offset: 0x233F744
    void PrepareForNextFrame();
    // public UnityEngine.Texture GetMirrorTexture(UnityEngine.Vector3 reflectionPlanePos, UnityEngine.Vector3 reflectionPlaneNormal)
    // Offset: 0x233FB60
    UnityEngine::Texture* GetMirrorTexture(UnityEngine::Vector3 reflectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal);
    // private System.Void RenderMirror(UnityEngine.Vector3 camPosition, UnityEngine.Quaternion camRotation, UnityEngine.Matrix4x4 camProjectionMatrix, UnityEngine.Rect screenRect, UnityEngine.Vector3 reclectionPlanePos, UnityEngine.Vector3 reflectionPlaneNormal)
    // Offset: 0x2340C18
    void RenderMirror(UnityEngine::Vector3 camPosition, UnityEngine::Quaternion camRotation, UnityEngine::Matrix4x4 camProjectionMatrix, UnityEngine::Rect screenRect, UnityEngine::Vector3 reclectionPlanePos, UnityEngine::Vector3 reflectionPlaneNormal);
    // protected System.Void OnDisable()
    // Offset: 0x2340F40
    void OnDisable();
    // private System.Void CreateOrUpdateMirrorCamera(UnityEngine.Camera currentCamera, UnityEngine.RenderTexture renderTexture)
    // Offset: 0x234058C
    void CreateOrUpdateMirrorCamera(UnityEngine::Camera* currentCamera, UnityEngine::RenderTexture* renderTexture);
    // static private UnityEngine.Vector4 Plane(UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x2340820
    static UnityEngine::Vector4 Plane(UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // static private UnityEngine.Vector4 CameraSpacePlane(UnityEngine.Matrix4x4 worldToCameraMatrix, UnityEngine.Vector3 pos, UnityEngine.Vector3 normal)
    // Offset: 0x2340E9C
    static UnityEngine::Vector4 CameraSpacePlane(UnityEngine::Matrix4x4 worldToCameraMatrix, UnityEngine::Vector3 pos, UnityEngine::Vector3 normal);
    // static private UnityEngine.Matrix4x4 CalculateReflectionMatrix(UnityEngine.Vector4 plane)
    // Offset: 0x23408FC
    static UnityEngine::Matrix4x4 CalculateReflectionMatrix(UnityEngine::Vector4 plane);
    // public System.Void .ctor()
    // Offset: 0x23410FC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirrorRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirrorRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirrorRendererSO*, creationType>()));
    }
  }; // MirrorRendererSO
  #pragma pack(pop)
  static check_size<sizeof(MirrorRendererSO), 144 + sizeof(UnityEngine::Rect)> __GlobalNamespace_MirrorRendererSOSizeCheck;
  static_assert(sizeof(MirrorRendererSO) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererSO::CameraTransformData, "", "MirrorRendererSO/CameraTransformData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::ValidateParams
// Il2CppName: ValidateParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::ValidateParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "ValidateParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::LayerMask, int, int, int, int, int, bool)>(&GlobalNamespace::MirrorRendererSO::Init)> {
  static const MethodInfo* get() {
    static auto* reflectLayers = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* stereoTextureWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stereoTextureHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* monoTextureWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* monoTextureHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAntiAliasing = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* enableBloomPrePass = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectLayers, stereoTextureWidth, stereoTextureHeight, monoTextureWidth, monoTextureHeight, maxAntiAliasing, enableBloomPrePass});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::PrepareForNextFrame
// Il2CppName: PrepareForNextFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::PrepareForNextFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "PrepareForNextFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::GetMirrorTexture
// Il2CppName: GetMirrorTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture* (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::GetMirrorTexture)> {
  static const MethodInfo* get() {
    static auto* reflectionPlanePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* reflectionPlaneNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "GetMirrorTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionPlanePos, reflectionPlaneNormal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::RenderMirror
// Il2CppName: RenderMirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Matrix4x4, UnityEngine::Rect, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::RenderMirror)> {
  static const MethodInfo* get() {
    static auto* camPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* camRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* camProjectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* reclectionPlanePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* reflectionPlaneNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "RenderMirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camPosition, camRotation, camProjectionMatrix, screenRect, reclectionPlanePos, reflectionPlaneNormal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)()>(&GlobalNamespace::MirrorRendererSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera
// Il2CppName: CreateOrUpdateMirrorCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirrorRendererSO::*)(UnityEngine::Camera*, UnityEngine::RenderTexture*)>(&GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera)> {
  static const MethodInfo* get() {
    static auto* currentCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "CreateOrUpdateMirrorCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentCamera, renderTexture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::Plane
// Il2CppName: Plane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::Plane)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "Plane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::CameraSpacePlane
// Il2CppName: CameraSpacePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Matrix4x4, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::MirrorRendererSO::CameraSpacePlane)> {
  static const MethodInfo* get() {
    static auto* worldToCameraMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "CameraSpacePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldToCameraMatrix, pos, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix
// Il2CppName: CalculateReflectionMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Vector4)>(&GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix)> {
  static const MethodInfo* get() {
    static auto* plane = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererSO*), "CalculateReflectionMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plane});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
