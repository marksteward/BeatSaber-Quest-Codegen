// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SelectableStateController
#include "GlobalNamespace/SelectableStateController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BaseStateTransition
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseStateTransition : public UnityEngine::MonoBehaviour {
    public:
    // protected SelectableStateController _selectableStateController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SelectableStateController* selectableStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectableStateController*) == 0x8);
    // Creating value type constructor for type: BaseStateTransition
    BaseStateTransition(GlobalNamespace::SelectableStateController* selectableStateController_ = {}) noexcept : selectableStateController{selectableStateController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: protected SelectableStateController _selectableStateController
    GlobalNamespace::SelectableStateController* _get__selectableStateController();
    // Set instance field: protected SelectableStateController _selectableStateController
    void _set__selectableStateController(GlobalNamespace::SelectableStateController* value);
    // protected Tweening.TweeningManager get_tweeningManager()
    // Offset: 0x1FCAE5C
    Tweening::TweeningManager* get_tweeningManager();
    // protected BaseTransitionSO get_transition()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BaseTransitionSO* get_transition();
    // public System.Void SetState(SelectableStateController/ViewState viewState)
    // Offset: 0x1FCAE78
    void SetState(GlobalNamespace::SelectableStateController::ViewState viewState);
    // protected System.Void OnEnable()
    // Offset: 0x1FCAEF0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1FCAF84
    void OnDisable();
    // private System.Void HandleSelectableStateControllerStateDidChange(SelectableStateController/ViewState state)
    // Offset: 0x1FCB018
    void HandleSelectableStateControllerStateDidChange(GlobalNamespace::SelectableStateController::ViewState state);
    // protected System.Void TransitionToNormalState()
    // Offset: 0x1FCB080
    void TransitionToNormalState();
    // protected System.Void TransitionToHighlightedState()
    // Offset: 0x1FCB084
    void TransitionToHighlightedState();
    // protected System.Void TransitionToPressedState()
    // Offset: 0x1FCB088
    void TransitionToPressedState();
    // protected System.Void TransitionToDisabledState()
    // Offset: 0x1FCB08C
    void TransitionToDisabledState();
    // protected System.Void TransitionToSelectedState()
    // Offset: 0x1FCB090
    void TransitionToSelectedState();
    // protected System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x1FCB094
    void TransitionToSelectedAndHighlightedState();
    // protected System.Void SetNormalState()
    // Offset: 0x1FCB098
    void SetNormalState();
    // protected System.Void SetHighlightedState()
    // Offset: 0x1FCB09C
    void SetHighlightedState();
    // protected System.Void SetPressedState()
    // Offset: 0x1FCB0A0
    void SetPressedState();
    // protected System.Void SetDisabledState()
    // Offset: 0x1FCB0A4
    void SetDisabledState();
    // protected System.Void SetSelectedState()
    // Offset: 0x1FCB0A8
    void SetSelectedState();
    // protected System.Void SetSelectedAndHighlightedState()
    // Offset: 0x1FCB0AC
    void SetSelectedAndHighlightedState();
    // protected System.Void .ctor()
    // Offset: 0x1FCB0B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseStateTransition*, creationType>()));
    }
  }; // BaseStateTransition
  #pragma pack(pop)
  static check_size<sizeof(BaseStateTransition), 24 + sizeof(GlobalNamespace::SelectableStateController*)> __GlobalNamespace_BaseStateTransitionSizeCheck;
  static_assert(sizeof(BaseStateTransition) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseStateTransition*, "", "BaseStateTransition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::get_tweeningManager
// Il2CppName: get_tweeningManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::TweeningManager* (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::get_tweeningManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "get_tweeningManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BaseTransitionSO* (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)(GlobalNamespace::SelectableStateController::ViewState)>(&GlobalNamespace::BaseStateTransition::SetState)> {
  static const MethodInfo* get() {
    static auto* viewState = &::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::HandleSelectableStateControllerStateDidChange
// Il2CppName: HandleSelectableStateControllerStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)(GlobalNamespace::SelectableStateController::ViewState)>(&GlobalNamespace::BaseStateTransition::HandleSelectableStateControllerStateDidChange)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "SelectableStateController/ViewState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "HandleSelectableStateControllerStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToNormalState
// Il2CppName: TransitionToNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToHighlightedState
// Il2CppName: TransitionToHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToPressedState
// Il2CppName: TransitionToPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToDisabledState
// Il2CppName: TransitionToDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToSelectedState
// Il2CppName: TransitionToSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::TransitionToSelectedAndHighlightedState
// Il2CppName: TransitionToSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::TransitionToSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "TransitionToSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetNormalState
// Il2CppName: SetNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetHighlightedState
// Il2CppName: SetHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetPressedState
// Il2CppName: SetPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetDisabledState
// Il2CppName: SetDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetSelectedState
// Il2CppName: SetSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::SetSelectedAndHighlightedState
// Il2CppName: SetSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseStateTransition::*)()>(&GlobalNamespace::BaseStateTransition::SetSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseStateTransition*), "SetSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseStateTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
