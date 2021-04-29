// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EditAvatarViewController/<>c__DisplayClass56_0
  // [CompilerGeneratedAttribute] Offset: D324AC
  class EditAvatarViewController::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    // public EditAvatarViewController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::EditAvatarViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController*) == 0x8);
    // public System.Action`1<UnityEngine.Color> colorSetter
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<UnityEngine::Color>* colorSetter;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // public EditAvatarViewController/AvatarEditPart avatarEditPart
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController::AvatarEditPart) == 0x4);
    // Padding between fields: avatarEditPart and: currentColor
    char __padding2[0x4] = {};
    // public System.Func`1<UnityEngine.Color> currentColor
    // Size: 0x8
    // Offset: 0x28
    System::Func_1<UnityEngine::Color>* currentColor;
    // Field size check
    static_assert(sizeof(System::Func_1<UnityEngine::Color>*) == 0x8);
    // public System.Int32 uvSegment
    // Size: 0x4
    // Offset: 0x30
    int uvSegment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: uvSegment and: $$9__1
    char __padding4[0x4] = {};
    // public System.Action`1<UnityEngine.Color> <>9__1
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<UnityEngine::Color>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass56_0
    $$c__DisplayClass56_0(GlobalNamespace::EditAvatarViewController* $$4__this_ = {}, System::Action_1<UnityEngine::Color>* colorSetter_ = {}, GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart_ = {}, System::Func_1<UnityEngine::Color>* currentColor_ = {}, int uvSegment_ = {}, System::Action_1<UnityEngine::Color>* $$9__1_ = {}) noexcept : $$4__this{$$4__this_}, colorSetter{colorSetter_}, avatarEditPart{avatarEditPart_}, currentColor{currentColor_}, uvSegment{uvSegment_}, $$9__1{$$9__1_} {}
    // System.Void <SetupColorButton>b__0()
    // Offset: 0x1072290
    void $SetupColorButton$b__0();
    // System.Void <SetupColorButton>b__1(UnityEngine.Color c)
    // Offset: 0x1072370
    void $SetupColorButton$b__1(UnityEngine::Color c);
    // public System.Void .ctor()
    // Offset: 0x1071F98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarViewController::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditAvatarViewController::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarViewController::$$c__DisplayClass56_0*, creationType>()));
    }
  }; // EditAvatarViewController/<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(EditAvatarViewController::$$c__DisplayClass56_0), 56 + sizeof(System::Action_1<UnityEngine::Color>*)> __GlobalNamespace_EditAvatarViewController_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(EditAvatarViewController::$$c__DisplayClass56_0) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditAvatarViewController::$$c__DisplayClass56_0*, "", "EditAvatarViewController/<>c__DisplayClass56_0");
