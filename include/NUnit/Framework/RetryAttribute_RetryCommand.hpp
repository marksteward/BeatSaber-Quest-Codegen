// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.RetryAttribute
#include "NUnit/Framework/RetryAttribute.hpp"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.RetryAttribute/NUnit.Framework.RetryCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class RetryAttribute::RetryCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand {
    public:
    // private System.Int32 _retryCount
    // Size: 0x4
    // Offset: 0x20
    int retryCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RetryCommand
    RetryCommand(int retryCount_ = {}) noexcept : retryCount{retryCount_} {}
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x22476A4
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.RetryAttribute/NUnit.Framework.RetryCommand
  #pragma pack(pop)
  static check_size<sizeof(RetryAttribute::RetryCommand), 32 + sizeof(int)> __NUnit_Framework_RetryAttribute_RetryCommandSizeCheck;
  static_assert(sizeof(RetryAttribute::RetryCommand) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::RetryAttribute::RetryCommand*, "NUnit.Framework", "RetryAttribute/RetryCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::RetryAttribute::RetryCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::RetryAttribute::RetryCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::RetryAttribute::RetryCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::RetryAttribute::RetryCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
