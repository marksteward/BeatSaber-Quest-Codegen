// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DisconnectPromptView
#include "GlobalNamespace/DisconnectPromptView.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectPromptView/<>c__DisplayClass12_0
  // [CompilerGeneratedAttribute] Offset: E12938
  class DisconnectPromptView::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x10
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public DisconnectPromptView <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::DisconnectPromptView* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectPromptView*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass12_0
    $$c__DisplayClass12_0(System::Action* finishedCallback_ = {}, GlobalNamespace::DisconnectPromptView* $$4__this_ = {}) noexcept : finishedCallback{finishedCallback_}, $$4__this{$$4__this_} {}
    // System.Void <Hide>b__0()
    // Offset: 0x10360B8
    void $Hide$b__0();
    // public System.Void .ctor()
    // Offset: 0x1035F80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectPromptView::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectPromptView::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // DisconnectPromptView/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(DisconnectPromptView::$$c__DisplayClass12_0), 24 + sizeof(GlobalNamespace::DisconnectPromptView*)> __GlobalNamespace_DisconnectPromptView_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(DisconnectPromptView::$$c__DisplayClass12_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0*, "", "DisconnectPromptView/<>c__DisplayClass12_0");
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0::$Hide$b__0
// Il2CppName: <Hide>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0::*)()>(&GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0::$Hide$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0*), "<Hide>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
