// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ArcadeFlowCoordinator
#include "GlobalNamespace/ArcadeFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ArcadeFlowCoordinator/<>c__DisplayClass26_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ArcadeFlowCoordinator::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    // public ArcadeFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ArcadeFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ArcadeFlowCoordinator*) == 0x8);
    // public ResultsViewController resultsViewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass26_0
    $$c__DisplayClass26_0(GlobalNamespace::ArcadeFlowCoordinator* $$4__this_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}) noexcept : $$4__this{$$4__this_}, resultsViewController{resultsViewController_} {}
    // Get instance field: public ArcadeFlowCoordinator <>4__this
    GlobalNamespace::ArcadeFlowCoordinator* _get_$$4__this();
    // Set instance field: public ArcadeFlowCoordinator <>4__this
    void _set_$$4__this(GlobalNamespace::ArcadeFlowCoordinator* value);
    // Get instance field: public ResultsViewController resultsViewController
    GlobalNamespace::ResultsViewController* _get_resultsViewController();
    // Set instance field: public ResultsViewController resultsViewController
    void _set_resultsViewController(GlobalNamespace::ResultsViewController* value);
    // System.Void <HandleResultsViewControllerRestartButtonPressed>b__0()
    // Offset: 0x10DAFBC
    void $HandleResultsViewControllerRestartButtonPressed$b__0();
    // public System.Void .ctor()
    // Offset: 0x10DAE0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArcadeFlowCoordinator::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArcadeFlowCoordinator::$$c__DisplayClass26_0*, creationType>()));
    }
  }; // ArcadeFlowCoordinator/<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(ArcadeFlowCoordinator::$$c__DisplayClass26_0), 24 + sizeof(GlobalNamespace::ResultsViewController*)> __GlobalNamespace_ArcadeFlowCoordinator_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(ArcadeFlowCoordinator::$$c__DisplayClass26_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0*, "", "ArcadeFlowCoordinator/<>c__DisplayClass26_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0::$HandleResultsViewControllerRestartButtonPressed$b__0
// Il2CppName: <HandleResultsViewControllerRestartButtonPressed>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0::$HandleResultsViewControllerRestartButtonPressed$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0*), "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
