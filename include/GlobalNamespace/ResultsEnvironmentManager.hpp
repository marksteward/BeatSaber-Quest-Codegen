// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager
  class ResultsEnvironmentManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword
    class ResultEnvironmentControllerWithKeyword;
    // Nested type: GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // private ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword[] _resultEnvironmentControllersWithKeyword
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*>* resultEnvironmentControllersWithKeyword;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*>*) == 0x8);
    // private System.String _currentShownKeyword
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* currentShownKeyword;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ResultsEnvironmentManager
    ResultsEnvironmentManager(::Array<GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*>* resultEnvironmentControllersWithKeyword_ = {}, ::Il2CppString* currentShownKeyword_ = {}) noexcept : resultEnvironmentControllersWithKeyword{resultEnvironmentControllersWithKeyword_}, currentShownKeyword{currentShownKeyword_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BaseResultsEnvironmentController GetResultEnvironmentControllerForKeyword(System.String keyword)
    // Offset: 0xF88B5C
    GlobalNamespace::BaseResultsEnvironmentController* GetResultEnvironmentControllerForKeyword(::Il2CppString* keyword);
    // public System.Void ShowResultForKeyword(System.String keyword, System.Boolean immediately)
    // Offset: 0xF88C30
    void ShowResultForKeyword(::Il2CppString* keyword, bool immediately);
    // public System.Void HideResultForKeyword(System.String keyword, System.Boolean immediately)
    // Offset: 0xF88CE0
    void HideResultForKeyword(::Il2CppString* keyword, bool immediately);
    // public System.Void .ctor()
    // Offset: 0xF88D88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsEnvironmentManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager*, creationType>()));
    }
  }; // ResultsEnvironmentManager
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_ResultsEnvironmentManagerSizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsEnvironmentManager*, "", "ResultsEnvironmentManager");
