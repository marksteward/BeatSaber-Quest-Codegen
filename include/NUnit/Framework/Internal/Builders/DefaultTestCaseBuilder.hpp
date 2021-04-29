// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestCaseBuilder
#include "NUnit/Framework/Interfaces/ITestCaseBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestCaseBuilder
  class NUnitTestCaseBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder
  class DefaultTestCaseBuilder : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestCaseBuilder*/ {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _nunitTestCaseBuilder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* nunitTestCaseBuilder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*) == 0x8);
    // Creating value type constructor for type: DefaultTestCaseBuilder
    DefaultTestCaseBuilder(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* nunitTestCaseBuilder_ = {}) noexcept : nunitTestCaseBuilder{nunitTestCaseBuilder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestCaseBuilder
    operator NUnit::Framework::Interfaces::ITestCaseBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestCaseBuilder*>(this);
    }
    // Creating conversion operator: operator NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*
    constexpr operator NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*() const noexcept {
      return nunitTestCaseBuilder;
    }
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x15CF2B4
    bool CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method);
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x15CF414
    bool CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite);
    // public NUnit.Framework.Internal.Test BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x15CF418
    NUnit::Framework::Internal::Test* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite);
    // private NUnit.Framework.Internal.Test BuildParameterizedMethodSuite(NUnit.Framework.Interfaces.IMethodInfo method, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> tests)
    // Offset: 0x15CFC1C
    NUnit::Framework::Internal::Test* BuildParameterizedMethodSuite(NUnit::Framework::Interfaces::IMethodInfo* method, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* tests);
    // private NUnit.Framework.Internal.Test BuildSingleTestMethod(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0x15CFA90
    NUnit::Framework::Internal::Test* BuildSingleTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public System.Void .ctor()
    // Offset: 0x15CFF20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultTestCaseBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultTestCaseBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.DefaultTestCaseBuilder
  #pragma pack(pop)
  static check_size<sizeof(DefaultTestCaseBuilder), 16 + sizeof(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*)> __NUnit_Framework_Internal_Builders_DefaultTestCaseBuilderSizeCheck;
  static_assert(sizeof(DefaultTestCaseBuilder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::DefaultTestCaseBuilder*, "NUnit.Framework.Internal.Builders", "DefaultTestCaseBuilder");
