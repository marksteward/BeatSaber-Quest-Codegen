// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestCaseBuilder
  class ITestCaseBuilder;
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: ITestFixtureData
  class ITestFixtureData;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestFixture
  class TestFixture;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class NUnitTestFixtureBuilder : public ::Il2CppObject {
    public:
    // private NUnit.Framework.Interfaces.ITestCaseBuilder _testBuilder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITestCaseBuilder* testBuilder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITestCaseBuilder*) == 0x8);
    // Creating value type constructor for type: NUnitTestFixtureBuilder
    NUnitTestFixtureBuilder(NUnit::Framework::Interfaces::ITestCaseBuilder* testBuilder_ = {}) noexcept : testBuilder{testBuilder_} {}
    // Creating conversion operator: operator NUnit::Framework::Interfaces::ITestCaseBuilder*
    constexpr operator NUnit::Framework::Interfaces::ITestCaseBuilder*() const noexcept {
      return testBuilder;
    }
    // Get static field: static private readonly System.String NO_TYPE_ARGS_MSG
    static ::Il2CppString* _get_NO_TYPE_ARGS_MSG();
    // Set static field: static private readonly System.String NO_TYPE_ARGS_MSG
    static void _set_NO_TYPE_ARGS_MSG(::Il2CppString* value);
    // Get instance field: private NUnit.Framework.Interfaces.ITestCaseBuilder _testBuilder
    NUnit::Framework::Interfaces::ITestCaseBuilder* _get__testBuilder();
    // Set instance field: private NUnit.Framework.Interfaces.ITestCaseBuilder _testBuilder
    void _set__testBuilder(NUnit::Framework::Interfaces::ITestCaseBuilder* value);
    // static private System.Void .cctor()
    // Offset: 0x1726C0C
    static void _cctor();
    // public NUnit.Framework.Internal.TestSuite BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x1723E30
    NUnit::Framework::Internal::TestSuite* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // public NUnit.Framework.Internal.TestSuite BuildFrom(NUnit.Framework.Interfaces.ITypeInfo typeInfo, NUnit.Framework.Interfaces.ITestFixtureData testFixtureData)
    // Offset: 0x1725BEC
    NUnit::Framework::Internal::TestSuite* BuildFrom(NUnit::Framework::Interfaces::ITypeInfo* typeInfo, NUnit::Framework::Interfaces::ITestFixtureData* testFixtureData);
    // private System.Void AddTestCasesToFixture(NUnit.Framework.Internal.TestFixture fixture)
    // Offset: 0x1725978
    void AddTestCasesToFixture(NUnit::Framework::Internal::TestFixture* fixture);
    // private NUnit.Framework.Internal.Test BuildTestCase(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.TestSuite suite)
    // Offset: 0x1726AAC
    NUnit::Framework::Internal::Test* BuildTestCase(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::TestSuite* suite);
    // static private System.Void CheckTestFixtureIsValid(NUnit.Framework.Internal.TestFixture fixture)
    // Offset: 0x172563C
    static void CheckTestFixtureIsValid(NUnit::Framework::Internal::TestFixture* fixture);
    // public System.Void .ctor()
    // Offset: 0x1724010
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitTestFixtureBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitTestFixtureBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder
  #pragma pack(pop)
  static check_size<sizeof(NUnitTestFixtureBuilder), 16 + sizeof(NUnit::Framework::Interfaces::ITestCaseBuilder*)> __NUnit_Framework_Internal_Builders_NUnitTestFixtureBuilderSizeCheck;
  static_assert(sizeof(NUnitTestFixtureBuilder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*, "NUnit.Framework.Internal.Builders", "NUnitTestFixtureBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildFrom)> {
  static const MethodInfo* get() {
    static auto* typeInfo = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeInfo});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildFrom
// Il2CppName: BuildFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::*)(NUnit::Framework::Interfaces::ITypeInfo*, NUnit::Framework::Interfaces::ITestFixtureData*)>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildFrom)> {
  static const MethodInfo* get() {
    static auto* typeInfo = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITypeInfo")->byval_arg;
    static auto* testFixtureData = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFixtureData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), "BuildFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeInfo, testFixtureData});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::AddTestCasesToFixture
// Il2CppName: AddTestCasesToFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::*)(NUnit::Framework::Internal::TestFixture*)>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::AddTestCasesToFixture)> {
  static const MethodInfo* get() {
    static auto* fixture = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestFixture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), "AddTestCasesToFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixture});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildTestCase
// Il2CppName: BuildTestCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Test* (NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::*)(NUnit::Framework::Interfaces::IMethodInfo*, NUnit::Framework::Internal::TestSuite*)>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::BuildTestCase)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), "BuildTestCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, suite});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::CheckTestFixtureIsValid
// Il2CppName: CheckTestFixtureIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(NUnit::Framework::Internal::TestFixture*)>(&NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::CheckTestFixtureIsValid)> {
  static const MethodInfo* get() {
    static auto* fixture = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestFixture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder*), "CheckTestFixtureIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixture});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NUnitTestFixtureBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
