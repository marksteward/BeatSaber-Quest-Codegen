// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollView/<>c__DisplayClass56_0
  // [CompilerGeneratedAttribute] Offset: DF7F10
  class ScrollView::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    // public System.Single threshold
    // Size: 0x4
    // Offset: 0x10
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass56_0
    $$c__DisplayClass56_0(float threshold_ = {}) noexcept : threshold{threshold_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return threshold;
    }
    // System.Boolean <HandleJoystickWasCenteredThisFrame>b__0(System.Single pos)
    // Offset: 0x12B7EE0
    bool $HandleJoystickWasCenteredThisFrame$b__0(float pos);
    // public System.Void .ctor()
    // Offset: 0x12B7D84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollView::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollView::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollView::$$c__DisplayClass56_0*, creationType>()));
    }
  }; // HMUI.ScrollView/<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(ScrollView::$$c__DisplayClass56_0), 16 + sizeof(float)> __HMUI_ScrollView_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(ScrollView::$$c__DisplayClass56_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView::$$c__DisplayClass56_0*, "HMUI", "ScrollView/<>c__DisplayClass56_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScrollView::$$c__DisplayClass56_0::$HandleJoystickWasCenteredThisFrame$b__0
// Il2CppName: <HandleJoystickWasCenteredThisFrame>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ScrollView::$$c__DisplayClass56_0::*)(float)>(&HMUI::ScrollView::$$c__DisplayClass56_0::$HandleJoystickWasCenteredThisFrame$b__0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollView::$$c__DisplayClass56_0*), "<HandleJoystickWasCenteredThisFrame>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollView::$$c__DisplayClass56_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
