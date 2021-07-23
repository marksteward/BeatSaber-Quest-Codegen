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
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CubemapTest
  // [TokenAttribute] Offset: FFFFFFFF
  class CubemapTest : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Material _cubemapMaterial
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* cubemapMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _flatMaterial
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* flatMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.RenderTexture _cubemapRenderTexture
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::RenderTexture* cubemapRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _downsampledCubemapRenderTexture
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::RenderTexture* downsampledCubemapRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _cubemapFlatTexture
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::RenderTexture* cubemapFlatTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // Creating value type constructor for type: CubemapTest
    CubemapTest(UnityEngine::Camera* camera_ = {}, UnityEngine::Material* cubemapMaterial_ = {}, UnityEngine::Material* flatMaterial_ = {}, UnityEngine::RenderTexture* cubemapRenderTexture_ = {}, UnityEngine::RenderTexture* downsampledCubemapRenderTexture_ = {}, UnityEngine::RenderTexture* cubemapFlatTexture_ = {}) noexcept : camera{camera_}, cubemapMaterial{cubemapMaterial_}, flatMaterial{flatMaterial_}, cubemapRenderTexture{cubemapRenderTexture_}, downsampledCubemapRenderTexture{downsampledCubemapRenderTexture_}, cubemapFlatTexture{cubemapFlatTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE11FA0
    // Get static field: static private readonly System.Int32 _cubePropertyId
    static int _get__cubePropertyId();
    // Set static field: static private readonly System.Int32 _cubePropertyId
    static void _set__cubePropertyId(int value);
    // Get instance field: private UnityEngine.Camera _camera
    UnityEngine::Camera* _get__camera();
    // Set instance field: private UnityEngine.Camera _camera
    void _set__camera(UnityEngine::Camera* value);
    // Get instance field: private UnityEngine.Material _cubemapMaterial
    UnityEngine::Material* _get__cubemapMaterial();
    // Set instance field: private UnityEngine.Material _cubemapMaterial
    void _set__cubemapMaterial(UnityEngine::Material* value);
    // Get instance field: private UnityEngine.Material _flatMaterial
    UnityEngine::Material* _get__flatMaterial();
    // Set instance field: private UnityEngine.Material _flatMaterial
    void _set__flatMaterial(UnityEngine::Material* value);
    // Get instance field: private UnityEngine.RenderTexture _cubemapRenderTexture
    UnityEngine::RenderTexture* _get__cubemapRenderTexture();
    // Set instance field: private UnityEngine.RenderTexture _cubemapRenderTexture
    void _set__cubemapRenderTexture(UnityEngine::RenderTexture* value);
    // Get instance field: private UnityEngine.RenderTexture _downsampledCubemapRenderTexture
    UnityEngine::RenderTexture* _get__downsampledCubemapRenderTexture();
    // Set instance field: private UnityEngine.RenderTexture _downsampledCubemapRenderTexture
    void _set__downsampledCubemapRenderTexture(UnityEngine::RenderTexture* value);
    // Get instance field: private UnityEngine.RenderTexture _cubemapFlatTexture
    UnityEngine::RenderTexture* _get__cubemapFlatTexture();
    // Set instance field: private UnityEngine.RenderTexture _cubemapFlatTexture
    void _set__cubemapFlatTexture(UnityEngine::RenderTexture* value);
    // protected System.Void Start()
    // Offset: 0x10847E8
    void Start();
    // protected System.Void Update()
    // Offset: 0x108486C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1084AC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CubemapTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapTest*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1084AC8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CubemapTest
  #pragma pack(pop)
  static check_size<sizeof(CubemapTest), 64 + sizeof(UnityEngine::RenderTexture*)> __GlobalNamespace_CubemapTestSizeCheck;
  static_assert(sizeof(CubemapTest) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CubemapTest*, "", "CubemapTest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CubemapTest::*)()>(&GlobalNamespace::CubemapTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CubemapTest::*)()>(&GlobalNamespace::CubemapTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CubemapTest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
