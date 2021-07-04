// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: NUnit.Framework.RepeatAttribute
#include "NUnit/Framework/RepeatAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableRepeatedTestCommand
  class EnumerableRepeatedTestCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableRepeatedTestCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    // private System.Int32 repeatCount
    // Size: 0x4
    // Offset: 0x20
    int repeatCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EnumerableRepeatedTestCommand
    EnumerableRepeatedTestCommand(int repeatCount_ = {}) noexcept : repeatCount{repeatCount_} {}
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // public System.Void .ctor(NUnit.Framework.RepeatAttribute/RepeatedTestCommand commandToReplace)
    // Offset: 0x14AD290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableRepeatedTestCommand* New_ctor(NUnit::Framework::RepeatAttribute::RepeatedTestCommand* commandToReplace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableRepeatedTestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableRepeatedTestCommand*, creationType>(commandToReplace)));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14B51A8
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14B513C
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableRepeatedTestCommand
  #pragma pack(pop)
  static check_size<sizeof(EnumerableRepeatedTestCommand), 32 + sizeof(int)> __UnityEngine_TestTools_EnumerableRepeatedTestCommandSizeCheck;
  static_assert(sizeof(EnumerableRepeatedTestCommand) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableRepeatedTestCommand*, "UnityEngine.TestTools", "EnumerableRepeatedTestCommand");
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::Execute
// Il2CppName: Execute
// Cannot perform method pointer template specialization from operators!
