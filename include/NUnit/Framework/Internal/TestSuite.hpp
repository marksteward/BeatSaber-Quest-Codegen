// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITest because it is already included!
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestSuite
  class TestSuite : public NUnit::Framework::Internal::Test {
    public:
    // Writing base type padding for base size: 0x75 to desired offset: 0x78
    char ___base_padding[0x3] = {};
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> tests
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05A24
    // [CompilerGeneratedAttribute] Offset: 0xE05A24
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05A60
    // [CompilerGeneratedAttribute] Offset: 0xE05A60
    // private System.Boolean <MaintainTestOrder>k__BackingField
    // Size: 0x1
    // Offset: 0x88
    bool MaintainTestOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TestSuite
    TestSuite(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, bool MaintainTestOrder_ = {}) noexcept : tests{tests_}, Arguments{Arguments_}, MaintainTestOrder{MaintainTestOrder_} {}
    // public System.Void Sort()
    // Offset: 0x22B4478
    void Sort();
    // public System.Void Add(NUnit.Framework.Internal.Test test)
    // Offset: 0x22B476C
    void Add(NUnit::Framework::Internal::Test* test);
    // public System.Object[] get_Arguments()
    // Offset: 0x22B4AB0
    ::Array<::Il2CppObject*>* get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x22B4AB8
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // protected System.Boolean get_MaintainTestOrder()
    // Offset: 0x22B4AC0
    bool get_MaintainTestOrder();
    // protected System.Void set_MaintainTestOrder(System.Boolean value)
    // Offset: 0x22B4AC8
    void set_MaintainTestOrder(bool value);
    // protected System.Void CheckSetUpTearDownMethods(System.Type attrType)
    // Offset: 0x22B0558
    void CheckSetUpTearDownMethods(System::Type* attrType);
    // public System.Void .ctor(System.String name)
    // Offset: 0x22AF17C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(name)));
    }
    // public System.Void .ctor(System.String parentSuiteName, System.String name)
    // Offset: 0x22ABFB8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String parentSuiteName, System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* parentSuiteName, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(parentSuiteName, name)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x22B04A0
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(fixtureType)));
    }
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x22B47DC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.Int32 get_TestCaseCount()
    // Offset: 0x22B47E4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Int32 Test::get_TestCaseCount()
    int get_TestCaseCount();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x22B4AD4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x22B4BD8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override System.String get_XmlElementName()
    // Offset: 0x22B4C30
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x22B4C78
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestSuite
  #pragma pack(pop)
  static check_size<sizeof(TestSuite), 136 + sizeof(bool)> __NUnit_Framework_Internal_TestSuiteSizeCheck;
  static_assert(sizeof(TestSuite) == 0x89);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuite*, "NUnit.Framework.Internal", "TestSuite");
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::Sort
// Il2CppName: Sort
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_Arguments
// Il2CppName: get_Arguments
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::set_Arguments
// Il2CppName: set_Arguments
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_MaintainTestOrder
// Il2CppName: get_MaintainTestOrder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::set_MaintainTestOrder
// Il2CppName: set_MaintainTestOrder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::CheckSetUpTearDownMethods
// Il2CppName: CheckSetUpTearDownMethods
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_Tests
// Il2CppName: get_Tests
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_TestCaseCount
// Il2CppName: get_TestCaseCount
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::MakeTestResult
// Il2CppName: MakeTestResult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_HasChildren
// Il2CppName: get_HasChildren
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::get_XmlElementName
// Il2CppName: get_XmlElementName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestSuite::AddToXml
// Il2CppName: AddToXml
// Cannot perform method pointer template specialization from operators!
