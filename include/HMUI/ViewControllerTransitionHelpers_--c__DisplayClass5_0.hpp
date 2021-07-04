// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass5_0
  // [CompilerGeneratedAttribute] Offset: DF7E40
  class ViewControllerTransitionHelpers::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x10
    HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single moveOffset
    // Size: 0x4
    // Offset: 0x18
    float moveOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveOffset and: toDismissViewController
    char __padding1[0x4] = {};
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public System.Single baseCanvasGroupAlpha
    // Size: 0x4
    // Offset: 0x28
    float baseCanvasGroupAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(HMUI::ViewController* toPresentViewController_ = {}, float moveOffset_ = {}, HMUI::ViewController* toDismissViewController_ = {}, float baseCanvasGroupAlpha_ = {}) noexcept : toPresentViewController{toPresentViewController_}, moveOffset{moveOffset_}, toDismissViewController{toDismissViewController_}, baseCanvasGroupAlpha{baseCanvasGroupAlpha_} {}
    // System.Void <DoHorizontalTransition>b__0(System.Single t)
    // Offset: 0x2387808
    void $DoHorizontalTransition$b__0(float t);
    // public System.Void .ctor()
    // Offset: 0x2387800
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass5_0), 40 + sizeof(float)> __HMUI_ViewControllerTransitionHelpers_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass5_0) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::$DoHorizontalTransition$b__0
// Il2CppName: <DoHorizontalTransition>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
