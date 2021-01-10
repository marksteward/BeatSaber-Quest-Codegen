// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x18
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass1_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE63C4
  class TestRunCallbackListener::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Interfaces.ITest testsToRun
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITest* testsToRun;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(NUnit::Framework::Interfaces::ITest* testsToRun_ = {}) noexcept : testsToRun{testsToRun_} {}
    // Creating conversion operator: operator NUnit::Framework::Interfaces::ITest*
    constexpr operator NUnit::Framework::Interfaces::ITest*() const noexcept {
      return testsToRun;
    }
    // System.Void <RunStarted>b__0(UnityEngine.TestRunner.ITestRunCallback callback)
    // Offset: 0x118D004
    void $RunStarted$b__0(UnityEngine::TestRunner::ITestRunCallback* callback);
    // public System.Void .ctor()
    // Offset: 0x118C6D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass1_0
  static check_size<sizeof(TestRunCallbackListener::$$c__DisplayClass1_0), 16 + sizeof(NUnit::Framework::Interfaces::ITest*)> __UnityEngine_TestRunner_Utils_TestRunCallbackListener_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(TestRunCallbackListener::$$c__DisplayClass1_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass1_0*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c__DisplayClass1_0");
#pragma pack(pop)
