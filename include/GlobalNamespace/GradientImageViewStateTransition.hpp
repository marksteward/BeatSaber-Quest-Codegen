// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseStateTransition`1
#include "GlobalNamespace/BaseStateTransition_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GradientTransitionSO
  class GradientTransitionSO;
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: ColorTween
  class ColorTween;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GradientImageViewStateTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: EA8748
  class GradientImageViewStateTransition : public GlobalNamespace::BaseStateTransition_1<HMUI::ImageView*> {
    public:
    // [SpaceAttribute] Offset: 0xEB8CE0
    // private GradientTransitionSO _transition
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GradientTransitionSO* transition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GradientTransitionSO*) == 0x8);
    // private Tweening.ColorTween _colorTweenA
    // Size: 0x8
    // Offset: 0x30
    Tweening::ColorTween* colorTweenA;
    // Field size check
    static_assert(sizeof(Tweening::ColorTween*) == 0x8);
    // private Tweening.ColorTween _colorTweenB
    // Size: 0x8
    // Offset: 0x38
    Tweening::ColorTween* colorTweenB;
    // Field size check
    static_assert(sizeof(Tweening::ColorTween*) == 0x8);
    // Creating value type constructor for type: GradientImageViewStateTransition
    GradientImageViewStateTransition(GlobalNamespace::GradientTransitionSO* transition_ = {}, Tweening::ColorTween* colorTweenA_ = {}, Tweening::ColorTween* colorTweenB_ = {}) noexcept : transition{transition_}, colorTweenA{colorTweenA_}, colorTweenB{colorTweenB_} {}
    // Get instance field: private GradientTransitionSO _transition
    GlobalNamespace::GradientTransitionSO* _get__transition();
    // Set instance field: private GradientTransitionSO _transition
    void _set__transition(GlobalNamespace::GradientTransitionSO* value);
    // Get instance field: private Tweening.ColorTween _colorTweenA
    Tweening::ColorTween* _get__colorTweenA();
    // Set instance field: private Tweening.ColorTween _colorTweenA
    void _set__colorTweenA(Tweening::ColorTween* value);
    // Get instance field: private Tweening.ColorTween _colorTweenB
    Tweening::ColorTween* _get__colorTweenB();
    // Set instance field: private Tweening.ColorTween _colorTweenB
    void _set__colorTweenB(Tweening::ColorTween* value);
    // private System.Void StartTweens(UnityEngine.Color endColor1, UnityEngine.Color endColor2)
    // Offset: 0x1F23E38
    void StartTweens(UnityEngine::Color endColor1, UnityEngine::Color endColor2);
    // private System.Void StartTween(UnityEngine.Color startColor, UnityEngine.Color endColor, System.Action`1<UnityEngine.Color> tweenAction, System.Action onCompleteAction, ref Tweening.ColorTween colorTween)
    // Offset: 0x1F24618
    void StartTween(UnityEngine::Color startColor, UnityEngine::Color endColor, System::Action_1<UnityEngine::Color>* tweenAction, System::Action* onCompleteAction, ByRef<Tweening::ColorTween*> colorTween);
    // private System.Void SetColors(UnityEngine.Color startColor, UnityEngine.Color endColor)
    // Offset: 0x1F24318
    void SetColors(UnityEngine::Color startColor, UnityEngine::Color endColor);
    // private System.Void <StartTweens>g__Color1CompleteAction|17_0()
    // Offset: 0x1F24840
    void $StartTweens$g__Color1CompleteAction_17_0();
    // private System.Void <StartTweens>g__Color2CompleteAction|17_1()
    // Offset: 0x1F248CC
    void $StartTweens$g__Color2CompleteAction_17_1();
    // private System.Void <StartTweens>b__17_2(UnityEngine.Color color)
    // Offset: 0x1F24958
    void $StartTweens$b__17_2(UnityEngine::Color color);
    // private System.Void <StartTweens>b__17_3(UnityEngine.Color color)
    // Offset: 0x1F24974
    void $StartTweens$b__17_3(UnityEngine::Color color);
    // protected override BaseTransitionSO get_transition()
    // Offset: 0x1F23DAC
    // Implemented from: BaseStateTransition
    // Base method: BaseTransitionSO BaseStateTransition::get_transition()
    GlobalNamespace::BaseTransitionSO* get_transition();
    // public System.Void .ctor()
    // Offset: 0x1F247F0
    // Implemented from: BaseStateTransition`1
    // Base method: System.Void BaseStateTransition_1::.ctor()
    // Base method: System.Void BaseStateTransition::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GradientImageViewStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GradientImageViewStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GradientImageViewStateTransition*, creationType>()));
    }
    // protected override System.Void TransitionToNormalState()
    // Offset: 0x1F23DB4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToNormalState()
    void TransitionToNormalState();
    // protected override System.Void TransitionToHighlightedState()
    // Offset: 0x1F24000
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToHighlightedState()
    void TransitionToHighlightedState();
    // protected override System.Void TransitionToPressedState()
    // Offset: 0x1F24084
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToPressedState()
    void TransitionToPressedState();
    // protected override System.Void TransitionToDisabledState()
    // Offset: 0x1F24108
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToDisabledState()
    void TransitionToDisabledState();
    // protected override System.Void TransitionToSelectedState()
    // Offset: 0x1F2418C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedState()
    void TransitionToSelectedState();
    // protected override System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x1F24210
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedAndHighlightedState()
    void TransitionToSelectedAndHighlightedState();
    // protected override System.Void SetNormalState()
    // Offset: 0x1F24294
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetNormalState()
    void SetNormalState();
    // protected override System.Void SetHighlightedState()
    // Offset: 0x1F24384
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetHighlightedState()
    void SetHighlightedState();
    // protected override System.Void SetPressedState()
    // Offset: 0x1F24408
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetPressedState()
    void SetPressedState();
    // protected override System.Void SetDisabledState()
    // Offset: 0x1F2448C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetDisabledState()
    void SetDisabledState();
    // protected override System.Void SetSelectedState()
    // Offset: 0x1F24510
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedState()
    void SetSelectedState();
    // protected override System.Void SetSelectedAndHighlightedState()
    // Offset: 0x1F24594
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedAndHighlightedState()
    void SetSelectedAndHighlightedState();
  }; // GradientImageViewStateTransition
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GradientImageViewStateTransition*, "", "GradientImageViewStateTransition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::StartTweens
// Il2CppName: StartTweens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)(UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::GradientImageViewStateTransition::StartTweens)> {
  static const MethodInfo* get() {
    static auto* endColor1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* endColor2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "StartTweens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endColor1, endColor2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::StartTween
// Il2CppName: StartTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)(UnityEngine::Color, UnityEngine::Color, System::Action_1<UnityEngine::Color>*, System::Action*, ByRef<Tweening::ColorTween*>)>(&GlobalNamespace::GradientImageViewStateTransition::StartTween)> {
  static const MethodInfo* get() {
    static auto* startColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* endColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* tweenAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    static auto* onCompleteAction = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* colorTween = &::il2cpp_utils::GetClassFromName("Tweening", "ColorTween")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "StartTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startColor, endColor, tweenAction, onCompleteAction, colorTween});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)(UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::GradientImageViewStateTransition::SetColors)> {
  static const MethodInfo* get() {
    static auto* startColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* endColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startColor, endColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::$StartTweens$g__Color1CompleteAction_17_0
// Il2CppName: <StartTweens>g__Color1CompleteAction|17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::$StartTweens$g__Color1CompleteAction_17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "<StartTweens>g__Color1CompleteAction|17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::$StartTweens$g__Color2CompleteAction_17_1
// Il2CppName: <StartTweens>g__Color2CompleteAction|17_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::$StartTweens$g__Color2CompleteAction_17_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "<StartTweens>g__Color2CompleteAction|17_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::$StartTweens$b__17_2
// Il2CppName: <StartTweens>b__17_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)(UnityEngine::Color)>(&GlobalNamespace::GradientImageViewStateTransition::$StartTweens$b__17_2)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "<StartTweens>b__17_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::$StartTweens$b__17_3
// Il2CppName: <StartTweens>b__17_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)(UnityEngine::Color)>(&GlobalNamespace::GradientImageViewStateTransition::$StartTweens$b__17_3)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "<StartTweens>b__17_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BaseTransitionSO* (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToNormalState
// Il2CppName: TransitionToNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToHighlightedState
// Il2CppName: TransitionToHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToPressedState
// Il2CppName: TransitionToPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToDisabledState
// Il2CppName: TransitionToDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToSelectedState
// Il2CppName: TransitionToSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::TransitionToSelectedAndHighlightedState
// Il2CppName: TransitionToSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::TransitionToSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "TransitionToSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetNormalState
// Il2CppName: SetNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetHighlightedState
// Il2CppName: SetHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetPressedState
// Il2CppName: SetPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetDisabledState
// Il2CppName: SetDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetSelectedState
// Il2CppName: SetSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GradientImageViewStateTransition::SetSelectedAndHighlightedState
// Il2CppName: SetSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GradientImageViewStateTransition::*)()>(&GlobalNamespace::GradientImageViewStateTransition::SetSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GradientImageViewStateTransition*), "SetSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
