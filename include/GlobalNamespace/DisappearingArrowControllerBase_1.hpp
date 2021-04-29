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
  // Forward declaring type: IGameNoteControllerInitializable`1<T>
  template<typename T>
  class IGameNoteControllerInitializable_1;
  // Forward declaring type: IGameNoteTypeProvider
  class IGameNoteTypeProvider;
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
  // Forward declaring type: NoteMovement
  class NoteMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DisappearingArrowControllerBase`1
  template<typename T>
  class DisappearingArrowControllerBase_1 : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.SpriteRenderer[] _spriteRenderers
    // Size: 0x8
    // Offset: 0x0
    ::Array<UnityEngine::SpriteRenderer*>* spriteRenderers;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::SpriteRenderer*>*) == 0x8);
    // private UnityEngine.MeshRenderer _cubeMeshRenderer
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::MeshRenderer* cubeMeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private CutoutEffect _arrowCutoutEffect
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::CutoutEffect* arrowCutoutEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutEffect*) == 0x8);
    // private NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement*) == 0x8);
    // [SpaceAttribute] Offset: 0xD38A9C
    // private System.Single _disappearingNormalStart
    // Size: 0x4
    // Offset: 0x0
    float disappearingNormalStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingNormalEnd
    // Size: 0x4
    // Offset: 0x0
    float disappearingNormalEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingGhostStart
    // Size: 0x4
    // Offset: 0x0
    float disappearingGhostStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingGhostEnd
    // Size: 0x4
    // Offset: 0x0
    float disappearingGhostEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single[] _initialSpriteAlphas
    // Size: 0x8
    // Offset: 0x0
    ::Array<float>* initialSpriteAlphas;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.Single _prevArrowTransparency
    // Size: 0x4
    // Offset: 0x0
    float prevArrowTransparency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minDistance
    // Size: 0x4
    // Offset: 0x0
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxDistance
    // Size: 0x4
    // Offset: 0x0
    float maxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideMesh
    // Size: 0x1
    // Offset: 0x0
    bool hideMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fadeArrow
    // Size: 0x1
    // Offset: 0x0
    bool fadeArrow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DisappearingArrowControllerBase_1
    DisappearingArrowControllerBase_1(::Array<UnityEngine::SpriteRenderer*>* spriteRenderers_ = {}, UnityEngine::MeshRenderer* cubeMeshRenderer_ = {}, GlobalNamespace::CutoutEffect* arrowCutoutEffect_ = {}, GlobalNamespace::NoteMovement* noteMovement_ = {}, float disappearingNormalStart_ = {}, float disappearingNormalEnd_ = {}, float disappearingGhostStart_ = {}, float disappearingGhostEnd_ = {}, ::Array<float>* initialSpriteAlphas_ = {}, float prevArrowTransparency_ = {}, float minDistance_ = {}, float maxDistance_ = {}, bool hideMesh_ = {}, bool fadeArrow_ = {}) noexcept : spriteRenderers{spriteRenderers_}, cubeMeshRenderer{cubeMeshRenderer_}, arrowCutoutEffect{arrowCutoutEffect_}, noteMovement{noteMovement_}, disappearingNormalStart{disappearingNormalStart_}, disappearingNormalEnd{disappearingNormalEnd_}, disappearingGhostStart{disappearingGhostStart_}, disappearingGhostEnd{disappearingGhostEnd_}, initialSpriteAlphas{initialSpriteAlphas_}, prevArrowTransparency{prevArrowTransparency_}, minDistance{minDistance_}, maxDistance{maxDistance_}, hideMesh{hideMesh_}, fadeArrow{fadeArrow_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected T get_gameNoteController()
    // Offset: 0xFFFFFFFF
    T get_gameNoteController() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::get_gameNoteController");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_gameNoteController", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void CalculateMinMaxDistance()
    // Offset: 0xFFFFFFFF
    void CalculateMinMaxDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::CalculateMinMaxDistance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CalculateMinMaxDistance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandleNoteMovementNoteDidMoveInJumpPhase()
    // Offset: 0xFFFFFFFF
    void HandleNoteMovementNoteDidMoveInJumpPhase() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::HandleNoteMovementNoteDidMoveInJumpPhase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleNoteMovementNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandleGameNoteControllerDidInit(T gameNoteController)
    // Offset: 0xFFFFFFFF
    void HandleGameNoteControllerDidInit(T gameNoteController) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::HandleGameNoteControllerDidInit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleGameNoteControllerDidInit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameNoteController)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, gameNoteController);
    }
    // private System.Void SetArrowTransparency(System.Single arrowTransparency)
    // Offset: 0xFFFFFFFF
    void SetArrowTransparency(float arrowTransparency) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::SetArrowTransparency");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetArrowTransparency", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arrowTransparency)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arrowTransparency);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisappearingArrowControllerBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisappearingArrowControllerBase_1<T>*, creationType>()));
    }
  }; // DisappearingArrowControllerBase`1
  // Could not write size check! Type: DisappearingArrowControllerBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
