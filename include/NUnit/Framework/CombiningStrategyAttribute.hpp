// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.NUnitAttribute
#include "NUnit/Framework/NUnitAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.ITestBuilder
#include "NUnit/Framework/Interfaces/ITestBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
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
  // Forward declaring type: ICombiningStrategy
  class ICombiningStrategy;
  // Forward declaring type: IParameterDataProvider
  class IParameterDataProvider;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x28
  // Autogenerated type: NUnit.Framework.CombiningStrategyAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB2EAC
  class CombiningStrategyAttribute : public NUnit::Framework::NUnitAttribute/*, public NUnit::Framework::Interfaces::ITestBuilder, public NUnit::Framework::Interfaces::IApplyToTest*/ {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _builder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*) == 0x8);
    // private NUnit.Framework.Interfaces.ICombiningStrategy _strategy
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Interfaces::ICombiningStrategy* strategy;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ICombiningStrategy*) == 0x8);
    // private NUnit.Framework.Interfaces.IParameterDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::IParameterDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IParameterDataProvider*) == 0x8);
    // Creating value type constructor for type: CombiningStrategyAttribute
    CombiningStrategyAttribute(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* builder_ = {}, NUnit::Framework::Interfaces::ICombiningStrategy* strategy_ = {}, NUnit::Framework::Interfaces::IParameterDataProvider* dataProvider_ = {}) noexcept : builder{builder_}, strategy{strategy_}, dataProvider{dataProvider_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestBuilder
    operator NUnit::Framework::Interfaces::ITestBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestBuilder*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IApplyToTest
    operator NUnit::Framework::Interfaces::IApplyToTest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IApplyToTest*>(this);
    }
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ICombiningStrategy strategy, NUnit.Framework.Interfaces.IParameterDataProvider provider)
    // Offset: 0x13DA018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombiningStrategyAttribute* New_ctor(NUnit::Framework::Interfaces::ICombiningStrategy* strategy, NUnit::Framework::Interfaces::IParameterDataProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::CombiningStrategyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombiningStrategyAttribute*, creationType>(strategy, provider)));
    }
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0x13DA164
    // Implemented from: NUnit.Framework.Interfaces.ITestBuilder
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> ITestBuilder::BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x13DABE4
    // Implemented from: NUnit.Framework.Interfaces.IApplyToTest
    // Base method: System.Void IApplyToTest::ApplyToTest(NUnit.Framework.Internal.Test test)
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
  }; // NUnit.Framework.CombiningStrategyAttribute
  static check_size<sizeof(CombiningStrategyAttribute), 32 + sizeof(NUnit::Framework::Interfaces::IParameterDataProvider*)> __NUnit_Framework_CombiningStrategyAttributeSizeCheck;
  static_assert(sizeof(CombiningStrategyAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::CombiningStrategyAttribute*, "NUnit.Framework", "CombiningStrategyAttribute");
#pragma pack(pop)
