// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
#include "NUnit/Framework/Internal/Commands/ApplyChangesToContextCommand.hpp"
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IApplyToContext
  class IApplyToContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
  class EnumerableApplyChangesToContextCommand : public NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1
    class $ExecuteEnumerable$d__1;
    // Creating value type constructor for type: EnumerableApplyChangesToContextCommand
    EnumerableApplyChangesToContextCommand() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x136F3A4
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    // Offset: 0x1367BCC
    // Implemented from: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
    // Base method: System.Void ApplyChangesToContextCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableApplyChangesToContextCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableApplyChangesToContextCommand*, creationType>(innerCommand, changes)));
    }
  }; // UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableApplyChangesToContextCommand*, "UnityEngine.TestTools", "EnumerableApplyChangesToContextCommand");
