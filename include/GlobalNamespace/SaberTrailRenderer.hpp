// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrailElementCollection
  class TrailElementCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: SaberTrailRenderer
  class SaberTrailRenderer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Vector3[] _vertices
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector3>* vertices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Int32[] _indices
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* indices;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private UnityEngine.Vector2[] _uvs
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Vector2>* uvs;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector2>*) == 0x8);
    // private UnityEngine.Color[] _colors
    // Size: 0x8
    // Offset: 0x48
    ::Array<UnityEngine::Color>* colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // private System.Single _trailWidth
    // Size: 0x4
    // Offset: 0x50
    float trailWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _trailDuration
    // Size: 0x4
    // Offset: 0x54
    float trailDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _segmentDuration
    // Size: 0x4
    // Offset: 0x58
    float segmentDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _granularity
    // Size: 0x4
    // Offset: 0x5C
    int granularity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _whiteSectionMaxDuration
    // Size: 0x4
    // Offset: 0x60
    float whiteSectionMaxDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SaberTrailRenderer
    SaberTrailRenderer(UnityEngine::MeshRenderer* meshRenderer_ = {}, UnityEngine::MeshFilter* meshFilter_ = {}, UnityEngine::Mesh* mesh_ = {}, ::Array<UnityEngine::Vector3>* vertices_ = {}, ::Array<int>* indices_ = {}, ::Array<UnityEngine::Vector2>* uvs_ = {}, ::Array<UnityEngine::Color>* colors_ = {}, float trailWidth_ = {}, float trailDuration_ = {}, float segmentDuration_ = {}, int granularity_ = {}, float whiteSectionMaxDuration_ = {}) noexcept : meshRenderer{meshRenderer_}, meshFilter{meshFilter_}, mesh{mesh_}, vertices{vertices_}, indices{indices_}, uvs{uvs_}, colors{colors_}, trailWidth{trailWidth_}, trailDuration{trailDuration_}, segmentDuration{segmentDuration_}, granularity{granularity_}, whiteSectionMaxDuration{whiteSectionMaxDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD3A2D4
    // Get static field: static private readonly UnityEngine.Bounds _bounds
    static UnityEngine::Bounds _get__bounds();
    // Set static field: static private readonly UnityEngine.Bounds _bounds
    static void _set__bounds(UnityEngine::Bounds value);
    // static field const value: static private System.Single kMinMotionBlurSpeed
    static constexpr const float kMinMotionBlurSpeed = 2.5;
    // Get static field: static private System.Single kMinMotionBlurSpeed
    static float _get_kMinMotionBlurSpeed();
    // Set static field: static private System.Single kMinMotionBlurSpeed
    static void _set_kMinMotionBlurSpeed(float value);
    // static field const value: static private System.Single kMotionBlurStrength
    static constexpr const float kMotionBlurStrength = 0.8;
    // Get static field: static private System.Single kMotionBlurStrength
    static float _get_kMotionBlurStrength();
    // Set static field: static private System.Single kMotionBlurStrength
    static void _set_kMotionBlurStrength(float value);
    // public System.Void Init(System.Single trailWidth, System.Single trailDuration, System.Int32 granularity, System.Single whiteSectionMaxDuration)
    // Offset: 0x1053174
    void Init(float trailWidth, float trailDuration, int granularity, float whiteSectionMaxDuration);
    // protected System.Void OnDestroy()
    // Offset: 0x105349C
    void OnDestroy();
    // private System.Void OnValidate()
    // Offset: 0x10534A8
    void OnValidate();
    // protected System.Void OnEnable()
    // Offset: 0x1053588
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x105361C
    void OnDisable();
    // public System.Void SetTrailWidth(System.Single width)
    // Offset: 0x10536B0
    void SetTrailWidth(float width);
    // public System.Void UpdateMesh(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x1052BCC
    void UpdateMesh(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color);
    // protected System.Void UpdateVertices(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x10536B8
    void UpdateVertices(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color);
    // private System.Void UpdateIndices()
    // Offset: 0x10532B4
    void UpdateIndices();
    // public System.Void .ctor()
    // Offset: 0x1053BE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberTrailRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberTrailRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberTrailRenderer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1053BEC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SaberTrailRenderer
  #pragma pack(pop)
  static check_size<sizeof(SaberTrailRenderer), 96 + sizeof(float)> __GlobalNamespace_SaberTrailRendererSizeCheck;
  static_assert(sizeof(SaberTrailRenderer) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTrailRenderer*, "", "SaberTrailRenderer");
