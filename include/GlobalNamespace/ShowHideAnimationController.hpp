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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ShowHideAnimationController
  // [] Offset: FFFFFFFF
  class ShowHideAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ShowHideAnimationController::$DeactivateSelfAfterDelayCoroutine$d__9
    class $DeactivateSelfAfterDelayCoroutine$d__9;
    // public UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // public System.Boolean _deactivateSelfAfterDelay
    // Size: 0x1
    // Offset: 0x20
    bool deactivateSelfAfterDelay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deactivateSelfAfterDelay and: deactivationDelay
    char __padding1[0x3] = {};
    // public System.Single _deactivationDelay
    // Size: 0x4
    // Offset: 0x24
    float deactivationDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _show
    // Size: 0x1
    // Offset: 0x28
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: show and: showAnimatorParam
    char __padding3[0x3] = {};
    // private System.Int32 _showAnimatorParam
    // Size: 0x4
    // Offset: 0x2C
    int showAnimatorParam;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShowHideAnimationController
    ShowHideAnimationController(UnityEngine::Animator* animator_ = {}, bool deactivateSelfAfterDelay_ = {}, float deactivationDelay_ = {}, bool show_ = {}, int showAnimatorParam_ = {}) noexcept : animator{animator_}, deactivateSelfAfterDelay{deactivateSelfAfterDelay_}, deactivationDelay{deactivationDelay_}, show{show_}, showAnimatorParam{showAnimatorParam_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_Show(System.Boolean value)
    // Offset: 0x103D53C
    void set_Show(bool value);
    // public System.Boolean get_Show()
    // Offset: 0x103D69C
    bool get_Show();
    // protected System.Void Awake()
    // Offset: 0x103D6A4
    void Awake();
    // private System.Collections.IEnumerator DeactivateSelfAfterDelayCoroutine(System.Single delay)
    // Offset: 0x103D720
    System::Collections::IEnumerator* DeactivateSelfAfterDelayCoroutine(float delay);
    // public System.Void .ctor()
    // Offset: 0x103D7D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowHideAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowHideAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowHideAnimationController*, creationType>()));
    }
  }; // ShowHideAnimationController
  static check_size<sizeof(ShowHideAnimationController), 44 + sizeof(int)> __GlobalNamespace_ShowHideAnimationControllerSizeCheck;
  static_assert(sizeof(ShowHideAnimationController) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowHideAnimationController*, "", "ShowHideAnimationController");
