// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestListener
  class ITestListener {
    public:
    // Creating value type constructor for type: ITestListener
    ITestListener() noexcept {}
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xFFFFFFFF
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0xFFFFFFFF
    void TestOutput(NUnit::Framework::Interfaces::TestOutput* output);
  }; // NUnit.Framework.Interfaces.ITestListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestListener*, "NUnit.Framework.Interfaces", "ITestListener");
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestStarted
// Il2CppName: TestStarted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestFinished
// Il2CppName: TestFinished
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestListener::TestOutput
// Il2CppName: TestOutput
// Cannot perform method pointer template specialization from operators!
