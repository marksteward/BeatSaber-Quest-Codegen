// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionSelectionNavigationController
#include "GlobalNamespace/MissionSelectionNavigationController.hpp"
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
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionSelectionNavigationController/<>c__DisplayClass11_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionSelectionNavigationController::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public MissionSelectionNavigationController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MissionSelectionNavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionSelectionNavigationController*) == 0x8);
    // public System.Action`1<System.Boolean> finishedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<bool>* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // public System.Action <>9__1
    // Size: 0x8
    // Offset: 0x20
    System::Action* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass11_0
    $$c__DisplayClass11_0(GlobalNamespace::MissionSelectionNavigationController* $$4__this_ = {}, System::Action_1<bool>* finishedCallback_ = {}, System::Action* $$9__1_ = {}) noexcept : $$4__this{$$4__this_}, finishedCallback{finishedCallback_}, $$9__1{$$9__1_} {}
    // System.Void <PresentMissionClearedIfNeeded>b__0()
    // Offset: 0x1139CF4
    void $PresentMissionClearedIfNeeded$b__0();
    // System.Void <PresentMissionClearedIfNeeded>b__1()
    // Offset: 0x1139DAC
    void $PresentMissionClearedIfNeeded$b__1();
    // public System.Void .ctor()
    // Offset: 0x1139CE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionSelectionNavigationController::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionSelectionNavigationController::$$c__DisplayClass11_0*, creationType>()));
    }
  }; // MissionSelectionNavigationController/<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(MissionSelectionNavigationController::$$c__DisplayClass11_0), 32 + sizeof(System::Action*)> __GlobalNamespace_MissionSelectionNavigationController_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(MissionSelectionNavigationController::$$c__DisplayClass11_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0*, "", "MissionSelectionNavigationController/<>c__DisplayClass11_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::$PresentMissionClearedIfNeeded$b__0
// Il2CppName: <PresentMissionClearedIfNeeded>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::*)()>(&GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::$PresentMissionClearedIfNeeded$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0*), "<PresentMissionClearedIfNeeded>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::$PresentMissionClearedIfNeeded$b__1
// Il2CppName: <PresentMissionClearedIfNeeded>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::*)()>(&GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::$PresentMissionClearedIfNeeded$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0*), "<PresentMissionClearedIfNeeded>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
