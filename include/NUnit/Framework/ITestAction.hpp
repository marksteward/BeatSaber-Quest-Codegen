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
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ActionTargets
  struct ActionTargets;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.ITestAction
  // [] Offset: FFFFFFFF
  class ITestAction {
    public:
    // Creating value type constructor for type: ITestAction
    ITestAction() noexcept {}
    // public System.Void BeforeTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void BeforeTest(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void AfterTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void AfterTest(NUnit::Framework::Interfaces::ITest* test);
    // public NUnit.Framework.ActionTargets get_Targets()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::ActionTargets get_Targets();
  }; // NUnit.Framework.ITestAction
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ITestAction*, "NUnit.Framework", "ITestAction");
