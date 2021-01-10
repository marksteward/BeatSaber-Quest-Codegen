// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: TestResultRenderer
  class TestResultRenderer;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x20
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback
  // [] Offset: FFFFFFFF
  class TestResultRendererCallback : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer m_ResultRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer* m_ResultRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*) == 0x8);
    // Creating value type constructor for type: TestResultRendererCallback
    TestResultRendererCallback(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer* m_ResultRenderer_ = {}) noexcept : m_ResultRenderer{m_ResultRenderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x1195468
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x119546C
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void OnGUI()
    // Offset: 0x1195564
    void OnGUI();
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1195574
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x1195578
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x119557C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResultRendererCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResultRendererCallback*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRendererCallback
  static check_size<sizeof(TestResultRendererCallback), 24 + sizeof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*)> __UnityEngine_TestTools_TestRunner_Callbacks_TestResultRendererCallbackSizeCheck;
  static_assert(sizeof(TestResultRendererCallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRendererCallback*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRendererCallback");
#pragma pack(pop)
