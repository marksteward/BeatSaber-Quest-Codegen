// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
  class UnityWorkItemDataHolder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityWorkItemDataHolder
    UnityWorkItemDataHolder() noexcept {}
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_alreadyStartedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static void _set_alreadyStartedTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_alreadyExecutedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static void _set_alreadyExecutedTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14AFB54
    static void _cctor();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItemDataHolder");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
