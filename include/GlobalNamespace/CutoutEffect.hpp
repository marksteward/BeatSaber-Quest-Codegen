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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: CutoutEffect
  class CutoutEffect : public UnityEngine::MonoBehaviour {
    public:
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [NullAllowed] Offset: 0xD3982C
    // private BoolSO _useRandomCutoutOffset
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BoolSO* useRandomCutoutOffset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.Vector3 _cutoutOffset
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 cutoutOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _randomNoiseTexOffset
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 randomNoiseTexOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _cutout
    // Size: 0x4
    // Offset: 0x40
    float cutout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: CutoutEffect
    CutoutEffect(GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, GlobalNamespace::BoolSO* useRandomCutoutOffset_ = {}, UnityEngine::Vector3 cutoutOffset_ = {}, UnityEngine::Vector3 randomNoiseTexOffset_ = {}, float cutout_ = {}) noexcept : materialPropertyBlockController{materialPropertyBlockController_}, useRandomCutoutOffset{useRandomCutoutOffset_}, cutoutOffset{cutoutOffset_}, randomNoiseTexOffset{randomNoiseTexOffset_}, cutout{cutout_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD39874
    // Get static field: static private readonly System.Int32 _cutoutPropertyID
    static int _get__cutoutPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutPropertyID
    static void _set__cutoutPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD39884
    // Get static field: static private readonly System.Int32 _cutoutTexOffsetPropertyID
    static int _get__cutoutTexOffsetPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutTexOffsetPropertyID
    static void _set__cutoutTexOffsetPropertyID(int value);
    // public System.Boolean get_useRandomCutoutOffset()
    // Offset: 0x1069804
    bool get_useRandomCutoutOffset();
    // protected System.Void Start()
    // Offset: 0x1069854
    void Start();
    // public System.Void SetCutout(System.Single cutout)
    // Offset: 0x10694B8
    void SetCutout(float cutout);
    // public System.Void SetCutout(System.Single cutout, UnityEngine.Vector3 cutoutOffset)
    // Offset: 0x1069904
    void SetCutout(float cutout, UnityEngine::Vector3 cutoutOffset);
    // public System.Void .ctor()
    // Offset: 0x1069A28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutoutEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutEffect*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1069A30
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CutoutEffect
  #pragma pack(pop)
  static check_size<sizeof(CutoutEffect), 64 + sizeof(float)> __GlobalNamespace_CutoutEffectSizeCheck;
  static_assert(sizeof(CutoutEffect) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutEffect*, "", "CutoutEffect");
