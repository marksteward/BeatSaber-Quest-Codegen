// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ShowcaseFlowCoordinator
#include "GlobalNamespace/ShowcaseFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: ShowcaseFlowCoordinator/<>c__DisplayClass26_0
  // [CompilerGeneratedAttribute] Offset: E12598
  class ShowcaseFlowCoordinator::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    // public ShowcaseFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ShowcaseFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ShowcaseFlowCoordinator*) == 0x8);
    // public LevelCompletionResults levelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // public IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x28
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass26_0
    $$c__DisplayClass26_0(GlobalNamespace::ShowcaseFlowCoordinator* $$4__this_ = {}, GlobalNamespace::LevelCompletionResults* levelCompletionResults_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, bool practice_ = {}) noexcept : $$4__this{$$4__this_}, levelCompletionResults{levelCompletionResults_}, difficultyBeatmap{difficultyBeatmap_}, practice{practice_} {}
    // System.Void <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0x10DE7C4
    void $ProcessLevelCompletionResultsAfterLevelDidFinish$b__0(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName);
    // public System.Void .ctor()
    // Offset: 0x10DE108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowcaseFlowCoordinator::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowcaseFlowCoordinator::$$c__DisplayClass26_0*, creationType>()));
    }
  }; // ShowcaseFlowCoordinator/<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(ShowcaseFlowCoordinator::$$c__DisplayClass26_0), 40 + sizeof(bool)> __GlobalNamespace_ShowcaseFlowCoordinator_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(ShowcaseFlowCoordinator::$$c__DisplayClass26_0) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0*, "", "ShowcaseFlowCoordinator/<>c__DisplayClass26_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0::$ProcessLevelCompletionResultsAfterLevelDidFinish$b__0
// Il2CppName: <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0::*)(GlobalNamespace::EnterPlayerGuestNameViewController*, ::Il2CppString*)>(&GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0::$ProcessLevelCompletionResultsAfterLevelDidFinish$b__0)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "EnterPlayerGuestNameViewController")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0*), "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, playerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowcaseFlowCoordinator::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
