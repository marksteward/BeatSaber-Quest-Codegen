// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityLogCheckDelegatingCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: IEnumerableTestMethodCommand
  class IEnumerableTestMethodCommand;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: E3D8CC
  class UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand enumerableTestMethodCommand
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand* enumerableTestMethodCommand;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand* enumerableTestMethodCommand_ = {}, NUnit::Framework::Internal::ITestExecutionContext* context_ = {}) noexcept : enumerableTestMethodCommand{enumerableTestMethodCommand_}, context{context_} {}
    // public System.Void .ctor()
    // Offset: 0x14AE244
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0), 24 + sizeof(NUnit::Framework::Internal::ITestExecutionContext*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityLogCheckDelegatingCommand_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand/<>c__DisplayClass3_0");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
