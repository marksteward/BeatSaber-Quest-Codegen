// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: TestFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class TestFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // [NullAllowed] Offset: 0xE0D3E4
    // private HMUI.ViewController _viewController
    // Size: 0x8
    // Offset: 0xA8
    HMUI::ViewController* viewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // [NullAllowed] Offset: 0xE0D41C
    // private HMUI.ViewController _leftViewController
    // Size: 0x8
    // Offset: 0xB0
    HMUI::ViewController* leftViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // [NullAllowed] Offset: 0xE0D454
    // private HMUI.ViewController _rightViewController
    // Size: 0x8
    // Offset: 0xB8
    HMUI::ViewController* rightViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // [NullAllowed] Offset: 0xE0D48C
    // private HMUI.ViewController _bottomScreenViewController
    // Size: 0x8
    // Offset: 0xC0
    HMUI::ViewController* bottomScreenViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // [NullAllowed] Offset: 0xE0D4C4
    // private HMUI.ViewController _topScreenViewController
    // Size: 0x8
    // Offset: 0xC8
    HMUI::ViewController* topScreenViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // Creating value type constructor for type: TestFlowCoordinator
    TestFlowCoordinator(HMUI::ViewController* viewController_ = {}, HMUI::ViewController* leftViewController_ = {}, HMUI::ViewController* rightViewController_ = {}, HMUI::ViewController* bottomScreenViewController_ = {}, HMUI::ViewController* topScreenViewController_ = {}) noexcept : viewController{viewController_}, leftViewController{leftViewController_}, rightViewController{rightViewController_}, bottomScreenViewController{bottomScreenViewController_}, topScreenViewController{topScreenViewController_} {}
    // public System.Void .ctor()
    // Offset: 0x106C0B4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFlowCoordinator*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x106C098
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // TestFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(TestFlowCoordinator), 200 + sizeof(HMUI::ViewController*)> __GlobalNamespace_TestFlowCoordinatorSizeCheck;
  static_assert(sizeof(TestFlowCoordinator) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestFlowCoordinator*, "", "TestFlowCoordinator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TestFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::TestFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
