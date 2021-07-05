// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.NavigationController/<>c__DisplayClass10_0
  // [CompilerGeneratedAttribute] Offset: DF7DB0
  class NavigationController::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public System.Single[] startPositions
    // Size: 0x8
    // Offset: 0x10
    ::Array<float>* startPositions;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // public HMUI.NavigationController <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::NavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::NavigationController*) == 0x8);
    // public System.Single[] endPositions
    // Size: 0x8
    // Offset: 0x20
    ::Array<float>* endPositions;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // public System.Single moveOffset
    // Size: 0x4
    // Offset: 0x28
    float moveOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass10_0
    $$c__DisplayClass10_0(::Array<float>* startPositions_ = {}, HMUI::NavigationController* $$4__this_ = {}, ::Array<float>* endPositions_ = {}, float moveOffset_ = {}) noexcept : startPositions{startPositions_}, $$4__this{$$4__this_}, endPositions{endPositions_}, moveOffset{moveOffset_} {}
    // System.Void <PopViewControllers>g__AnimationLayouter|0(System.Single t, HMUI.ViewController[] viewControllers, System.Collections.Generic.HashSet`1<HMUI.ViewController> removingViewControllers)
    // Offset: 0x12B313C
    void $PopViewControllers$g__AnimationLayouter_0(float t, ::Array<HMUI::ViewController*>* viewControllers, System::Collections::Generic::HashSet_1<HMUI::ViewController*>* removingViewControllers);
    // public System.Void .ctor()
    // Offset: 0x12B308C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavigationController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::NavigationController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavigationController::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // HMUI.NavigationController/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(NavigationController::$$c__DisplayClass10_0), 40 + sizeof(float)> __HMUI_NavigationController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(NavigationController::$$c__DisplayClass10_0) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController::$$c__DisplayClass10_0*, "HMUI", "NavigationController/<>c__DisplayClass10_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::NavigationController::$$c__DisplayClass10_0::$PopViewControllers$g__AnimationLayouter_0
// Il2CppName: <PopViewControllers>g__AnimationLayouter|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::$$c__DisplayClass10_0::*)(float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*)>(&HMUI::NavigationController::$$c__DisplayClass10_0::$PopViewControllers$g__AnimationLayouter_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    static auto* removingViewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController::$$c__DisplayClass10_0*), "<PopViewControllers>g__AnimationLayouter|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, viewControllers, removingViewControllers});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
