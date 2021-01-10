// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  // Autogenerated type: NUnit.Framework.Internal.Commands.TestCommand
  // [] Offset: FFFFFFFF
  class TestCommand : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB343C
    // private NUnit.Framework.Internal.Test <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Test* Test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Test*) == 0x8);
    // Creating value type constructor for type: TestCommand
    TestCommand(NUnit::Framework::Internal::Test* Test_ = {}) noexcept : Test{Test_} {}
    // Creating conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept {
      return Test;
    }
    // public System.Void .ctor(NUnit.Framework.Internal.Test test)
    // Offset: 0x13EE2BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCommand* New_ctor(NUnit::Framework::Internal::Test* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::TestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCommand*, creationType>(test)));
    }
    // public NUnit.Framework.Internal.Test get_Test()
    // Offset: 0x13EE2B4
    NUnit::Framework::Internal::Test* get_Test();
    // private System.Void set_Test(NUnit.Framework.Internal.Test value)
    // Offset: 0x13EFAAC
    void set_Test(NUnit::Framework::Internal::Test* value);
    // public NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.TestCommand
  static check_size<sizeof(TestCommand), 16 + sizeof(NUnit::Framework::Internal::Test*)> __NUnit_Framework_Internal_Commands_TestCommandSizeCheck;
  static_assert(sizeof(TestCommand) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::TestCommand*, "NUnit.Framework.Internal.Commands", "TestCommand");
#pragma pack(pop)
