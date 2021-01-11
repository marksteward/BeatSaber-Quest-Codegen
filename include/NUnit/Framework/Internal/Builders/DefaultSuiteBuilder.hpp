// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ISuiteBuilder
#include "NUnit/Framework/Interfaces/ISuiteBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestFixtureBuilder
  class NUnitTestFixtureBuilder;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IFixtureBuilder
  class IFixtureBuilder;
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
  // Autogenerated type: NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
  // [] Offset: FFFFFFFF
  class DefaultSuiteBuilder : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ISuiteBuilder*/ {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder _defaultBuilder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* defaultBuilder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*) == 0x8);
    // Creating value type constructor for type: DefaultSuiteBuilder
    DefaultSuiteBuilder(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder* defaultBuilder_ = {}) noexcept : defaultBuilder{defaultBuilder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ISuiteBuilder
    operator NUnit::Framework::Interfaces::ISuiteBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ISuiteBuilder*>(this);
    }
    // Creating conversion operator: operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*
    constexpr operator NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*() const noexcept {
      return defaultBuilder;
    }
    // private NUnit.Framework.Internal.TestSuite BuildMultipleFixtures(NUnit.Framework.Interfaces.ITypeInfo typeInfo, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> fixtures)
    // Offset: 0x13E9AD0
    NUnit::Framework::Internal::TestSuite* BuildMultipleFixtures(NUnit::Framework::Interfaces::ITypeInfo* typeInfo, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>* fixtures);
    // private NUnit.Framework.Interfaces.IFixtureBuilder[] GetFixtureBuilderAttributes(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x13E973C
    ::Array<NUnit::Framework::Interfaces::IFixtureBuilder*>* GetFixtureBuilderAttributes(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // private System.Boolean HasArguments(NUnit.Framework.Interfaces.IFixtureBuilder attr)
    // Offset: 0x13E9EA4
    bool HasArguments(NUnit::Framework::Interfaces::IFixtureBuilder* attr);
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x13E8D88
    // Implemented from: NUnit.Framework.Interfaces.ISuiteBuilder
    // Base method: System.Boolean ISuiteBuilder::CanBuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    bool CanBuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public NUnit.Framework.Internal.TestSuite BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x13E905C
    // Implemented from: NUnit.Framework.Interfaces.ISuiteBuilder
    // Base method: NUnit.Framework.Internal.TestSuite ISuiteBuilder::BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    NUnit::Framework::Internal::TestSuite* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public System.Void .ctor()
    // Offset: 0x13D7FEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultSuiteBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::DefaultSuiteBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultSuiteBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.DefaultSuiteBuilder
  static check_size<sizeof(DefaultSuiteBuilder), 16 + sizeof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*)> __NUnit_Framework_Internal_Builders_DefaultSuiteBuilderSizeCheck;
  static_assert(sizeof(DefaultSuiteBuilder) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::DefaultSuiteBuilder*, "NUnit.Framework.Internal.Builders", "DefaultSuiteBuilder");
