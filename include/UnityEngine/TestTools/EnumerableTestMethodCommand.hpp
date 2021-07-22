// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableTestMethodCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumerableTestMethodCommand : public NUnit::Framework::Internal::Commands::TestCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerable$d__2
    class $ExecuteEnumerable$d__2;
    // Nested type: UnityEngine::TestTools::EnumerableTestMethodCommand::$ExecuteEnumerableAndRecordExceptions$d__3
    class $ExecuteEnumerableAndRecordExceptions$d__3;
    // private readonly NUnit.Framework.Internal.TestMethod testMethod
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestMethod* testMethod;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestMethod*) == 0x8);
    // Creating value type constructor for type: EnumerableTestMethodCommand
    EnumerableTestMethodCommand(NUnit::Framework::Internal::TestMethod* testMethod_ = {}) noexcept : testMethod{testMethod_} {}
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // Deleting conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept = delete;
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0x147F5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableTestMethodCommand* New_ctor(NUnit::Framework::Internal::TestMethod* testMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableTestMethodCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableTestMethodCommand*, creationType>(testMethod)));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1489920
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // static private System.Collections.IEnumerator ExecuteEnumerableAndRecordExceptions(System.Collections.IEnumerator enumerator, NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14899E8
    static System::Collections::IEnumerator* ExecuteEnumerableAndRecordExceptions(System::Collections::IEnumerator* enumerator, NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1489A90
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableTestMethodCommand
  #pragma pack(pop)
  static check_size<sizeof(EnumerableTestMethodCommand), 24 + sizeof(NUnit::Framework::Internal::TestMethod*)> __UnityEngine_TestTools_EnumerableTestMethodCommandSizeCheck;
  static_assert(sizeof(EnumerableTestMethodCommand) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableTestMethodCommand*, "UnityEngine.TestTools", "EnumerableTestMethodCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestTools::EnumerableTestMethodCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerable)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand*), "ExecuteEnumerable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerableAndRecordExceptions
// Il2CppName: ExecuteEnumerableAndRecordExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (*)(System::Collections::IEnumerator*, NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableTestMethodCommand::ExecuteEnumerableAndRecordExceptions)> {
  static const MethodInfo* get() {
    static auto* enumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand*), "ExecuteEnumerableAndRecordExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumerator, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableTestMethodCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (UnityEngine::TestTools::EnumerableTestMethodCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableTestMethodCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableTestMethodCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
