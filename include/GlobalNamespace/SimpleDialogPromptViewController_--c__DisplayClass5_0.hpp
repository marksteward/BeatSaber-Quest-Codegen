// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleDialogPromptViewController
#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SimpleDialogPromptViewController/<>c__DisplayClass5_0
  // [CompilerGeneratedAttribute] Offset: E12918
  class SimpleDialogPromptViewController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Int32 buttonNum
    // Size: 0x4
    // Offset: 0x10
    int buttonNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: buttonNum and: $$4__this
    char __padding0[0x4] = {};
    // public SimpleDialogPromptViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SimpleDialogPromptViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(int buttonNum_ = {}, GlobalNamespace::SimpleDialogPromptViewController* $$4__this_ = {}) noexcept : buttonNum{buttonNum_}, $$4__this{$$4__this_} {}
    // System.Void <DidActivate>b__0()
    // Offset: 0x10DEEAC
    void $DidActivate$b__0();
    // public System.Void .ctor()
    // Offset: 0x10DECB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleDialogPromptViewController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleDialogPromptViewController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // SimpleDialogPromptViewController/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(SimpleDialogPromptViewController::$$c__DisplayClass5_0), 24 + sizeof(GlobalNamespace::SimpleDialogPromptViewController*)> __GlobalNamespace_SimpleDialogPromptViewController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(SimpleDialogPromptViewController::$$c__DisplayClass5_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0*, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::$DidActivate$b__0
// Il2CppName: <DidActivate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::$DidActivate$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0*), "<DidActivate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
