// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ModalView
#include "HMUI/ModalView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ModalView/<>c__DisplayClass17_0
  // [CompilerGeneratedAttribute] Offset: DF7EC0
  class ModalView::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    // public HMUI.ModalView <>4__this
    // Size: 0x8
    // Offset: 0x10
    HMUI::ModalView* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ModalView*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass17_0
    $$c__DisplayClass17_0(HMUI::ModalView* $$4__this_ = {}, System::Action* finishedCallback_ = {}) noexcept : $$4__this{$$4__this_}, finishedCallback{finishedCallback_} {}
    // System.Void <Hide>b__0()
    // Offset: 0x12B26C4
    void $Hide$b__0();
    // public System.Void .ctor()
    // Offset: 0x12B1BCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModalView::$$c__DisplayClass17_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ModalView::$$c__DisplayClass17_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModalView::$$c__DisplayClass17_0*, creationType>()));
    }
  }; // HMUI.ModalView/<>c__DisplayClass17_0
  #pragma pack(pop)
  static check_size<sizeof(ModalView::$$c__DisplayClass17_0), 24 + sizeof(System::Action*)> __HMUI_ModalView_$$c__DisplayClass17_0SizeCheck;
  static_assert(sizeof(ModalView::$$c__DisplayClass17_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView::$$c__DisplayClass17_0*, "HMUI", "ModalView/<>c__DisplayClass17_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ModalView::$$c__DisplayClass17_0::$Hide$b__0
// Il2CppName: <Hide>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::$$c__DisplayClass17_0::*)()>(&HMUI::ModalView::$$c__DisplayClass17_0::$Hide$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView::$$c__DisplayClass17_0*), "<Hide>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::$$c__DisplayClass17_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
