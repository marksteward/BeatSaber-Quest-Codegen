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
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: FloatTween
  class FloatTween;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9D
  #pragma pack(push, 1)
  // Autogenerated type: HologramRays
  // [TokenAttribute] Offset: FFFFFFFF
  class HologramRays : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::HologramRays::$FadingCoroutine$d__28
    class $FadingCoroutine$d__28;
    // private TubeBloomPrePassLight _bloomLight
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TubeBloomPrePassLight* bloomLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.MeshRenderer _raysMeshRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshRenderer* raysMeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _laserHolderTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* laserHolderTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _hologramRaysTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* hologramRaysTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Mesh _hologramRaysMesh
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Mesh* hologramRaysMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private System.Single _topYPosition
    // Size: 0x4
    // Offset: 0x48
    float topYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bottomYPosition
    // Size: 0x4
    // Offset: 0x4C
    float bottomYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE070B8
    // private System.Single cachedExtent
    // Size: 0x4
    // Offset: 0x50
    float cachedExtent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cachedExtent and: tweeningManager
    char __padding8[0x4] = {};
    // [InjectAttribute] Offset: 0xE07104
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x58
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.FloatTween _transitionTween
    // Size: 0x8
    // Offset: 0x60
    Tweening::FloatTween* transitionTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // private UnityEngine.Color _bloomColor
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Color bloomColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _bloomTransparentColor
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Color bloomTransparentColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x88
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _raysDistance
    // Size: 0x4
    // Offset: 0x8C
    float raysDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _raysLocalScale
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 raysLocalScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean boundsInitialized
    // Size: 0x1
    // Offset: 0x9C
    bool boundsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HologramRays
    HologramRays(GlobalNamespace::TubeBloomPrePassLight* bloomLight_ = {}, UnityEngine::MeshRenderer* raysMeshRenderer_ = {}, UnityEngine::Transform* targetTransform_ = {}, UnityEngine::Transform* laserHolderTransform_ = {}, UnityEngine::Transform* hologramRaysTransform_ = {}, UnityEngine::Mesh* hologramRaysMesh_ = {}, float topYPosition_ = {}, float bottomYPosition_ = {}, float cachedExtent_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::FloatTween* transitionTween_ = {}, UnityEngine::Color bloomColor_ = {}, UnityEngine::Color bloomTransparentColor_ = {}, float alpha_ = {}, float raysDistance_ = {}, UnityEngine::Vector3 raysLocalScale_ = {}, bool boundsInitialized_ = {}) noexcept : bloomLight{bloomLight_}, raysMeshRenderer{raysMeshRenderer_}, targetTransform{targetTransform_}, laserHolderTransform{laserHolderTransform_}, hologramRaysTransform{hologramRaysTransform_}, hologramRaysMesh{hologramRaysMesh_}, topYPosition{topYPosition_}, bottomYPosition{bottomYPosition_}, cachedExtent{cachedExtent_}, tweeningManager{tweeningManager_}, transitionTween{transitionTween_}, bloomColor{bloomColor_}, bloomTransparentColor{bloomTransparentColor_}, alpha{alpha_}, raysDistance{raysDistance_}, raysLocalScale{raysLocalScale_}, boundsInitialized{boundsInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE07114
    // Get static field: static private readonly System.Int32 _materialBottomPositionID
    static int _get__materialBottomPositionID();
    // Set static field: static private readonly System.Int32 _materialBottomPositionID
    static void _set__materialBottomPositionID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE07124
    // Get static field: static private readonly System.Int32 _materialTopPositionID
    static int _get__materialTopPositionID();
    // Set static field: static private readonly System.Int32 _materialTopPositionID
    static void _set__materialTopPositionID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE07134
    // Get static field: static private readonly System.Int32 _materialAlphaID
    static int _get__materialAlphaID();
    // Set static field: static private readonly System.Int32 _materialAlphaID
    static void _set__materialAlphaID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get instance field: private TubeBloomPrePassLight _bloomLight
    GlobalNamespace::TubeBloomPrePassLight* _get__bloomLight();
    // Set instance field: private TubeBloomPrePassLight _bloomLight
    void _set__bloomLight(GlobalNamespace::TubeBloomPrePassLight* value);
    // Get instance field: private UnityEngine.MeshRenderer _raysMeshRenderer
    UnityEngine::MeshRenderer* _get__raysMeshRenderer();
    // Set instance field: private UnityEngine.MeshRenderer _raysMeshRenderer
    void _set__raysMeshRenderer(UnityEngine::MeshRenderer* value);
    // Get instance field: private UnityEngine.Transform _targetTransform
    UnityEngine::Transform* _get__targetTransform();
    // Set instance field: private UnityEngine.Transform _targetTransform
    void _set__targetTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _laserHolderTransform
    UnityEngine::Transform* _get__laserHolderTransform();
    // Set instance field: private UnityEngine.Transform _laserHolderTransform
    void _set__laserHolderTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _hologramRaysTransform
    UnityEngine::Transform* _get__hologramRaysTransform();
    // Set instance field: private UnityEngine.Transform _hologramRaysTransform
    void _set__hologramRaysTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Mesh _hologramRaysMesh
    UnityEngine::Mesh* _get__hologramRaysMesh();
    // Set instance field: private UnityEngine.Mesh _hologramRaysMesh
    void _set__hologramRaysMesh(UnityEngine::Mesh* value);
    // Get instance field: private System.Single _topYPosition
    float _get__topYPosition();
    // Set instance field: private System.Single _topYPosition
    void _set__topYPosition(float value);
    // Get instance field: private System.Single _bottomYPosition
    float _get__bottomYPosition();
    // Set instance field: private System.Single _bottomYPosition
    void _set__bottomYPosition(float value);
    // Get instance field: private System.Single cachedExtent
    float _get_cachedExtent();
    // Set instance field: private System.Single cachedExtent
    void _set_cachedExtent(float value);
    // Get instance field: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager* _get__tweeningManager();
    // Set instance field: private readonly Tweening.TweeningManager _tweeningManager
    void _set__tweeningManager(Tweening::TweeningManager* value);
    // Get instance field: private Tweening.FloatTween _transitionTween
    Tweening::FloatTween* _get__transitionTween();
    // Set instance field: private Tweening.FloatTween _transitionTween
    void _set__transitionTween(Tweening::FloatTween* value);
    // Get instance field: private UnityEngine.Color _bloomColor
    UnityEngine::Color _get__bloomColor();
    // Set instance field: private UnityEngine.Color _bloomColor
    void _set__bloomColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _bloomTransparentColor
    UnityEngine::Color _get__bloomTransparentColor();
    // Set instance field: private UnityEngine.Color _bloomTransparentColor
    void _set__bloomTransparentColor(UnityEngine::Color value);
    // Get instance field: private System.Single _alpha
    float _get__alpha();
    // Set instance field: private System.Single _alpha
    void _set__alpha(float value);
    // Get instance field: private System.Single _raysDistance
    float _get__raysDistance();
    // Set instance field: private System.Single _raysDistance
    void _set__raysDistance(float value);
    // Get instance field: private UnityEngine.Vector3 _raysLocalScale
    UnityEngine::Vector3 _get__raysLocalScale();
    // Set instance field: private UnityEngine.Vector3 _raysLocalScale
    void _set__raysLocalScale(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean boundsInitialized
    bool _get_boundsInitialized();
    // Set instance field: private System.Boolean boundsInitialized
    void _set_boundsInitialized(bool value);
    // static private System.Void RuntimeInit()
    // Offset: 0x10EB340
    static void RuntimeInit();
    // protected System.Void Awake()
    // Offset: 0x10EB3A8
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x10EB4DC
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x10EB4FC
    void OnValidate();
    // private System.Void Update()
    // Offset: 0x10EB87C
    void Update();
    // private System.Void Refresh()
    // Offset: 0x10EB60C
    void Refresh();
    // public System.Void Animate(System.Boolean turningOn, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x10EB880
    void Animate(bool turningOn, float duration, Tweening::EaseType easeType);
    // private System.Collections.IEnumerator FadingCoroutine(System.Boolean turningOn, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x10EB950
    System::Collections::IEnumerator* FadingCoroutine(bool turningOn, float duration, Tweening::EaseType easeType);
    // private System.Void UpdateBounds()
    // Offset: 0x10EB9EC
    void UpdateBounds();
    // private System.Void <Awake>b__22_0(System.Single f)
    // Offset: 0x10EBBE4
    void $Awake$b__22_0(float f);
    // public System.Void .ctor()
    // Offset: 0x10EBB18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HologramRays* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HologramRays::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HologramRays*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x10EBB38
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HologramRays
  #pragma pack(pop)
  static check_size<sizeof(HologramRays), 156 + sizeof(bool)> __GlobalNamespace_HologramRaysSizeCheck;
  static_assert(sizeof(HologramRays) == 0x9D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HologramRays*, "", "HologramRays");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::RuntimeInit
// Il2CppName: RuntimeInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HologramRays::RuntimeInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "RuntimeInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)(bool, float, Tweening::EaseType)>(&GlobalNamespace::HologramRays::Animate)> {
  static const MethodInfo* get() {
    static auto* turningOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turningOn, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::FadingCoroutine
// Il2CppName: FadingCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::HologramRays::*)(bool, float, Tweening::EaseType)>(&GlobalNamespace::HologramRays::FadingCoroutine)> {
  static const MethodInfo* get() {
    static auto* turningOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "FadingCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turningOn, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::UpdateBounds
// Il2CppName: UpdateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)()>(&GlobalNamespace::HologramRays::UpdateBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "UpdateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::$Awake$b__22_0
// Il2CppName: <Awake>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HologramRays::*)(float)>(&GlobalNamespace::HologramRays::$Awake$b__22_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), "<Awake>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HologramRays::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::HologramRays::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HologramRays*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
