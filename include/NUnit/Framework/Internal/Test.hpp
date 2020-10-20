// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.Test
  class Test : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITest, public System::IComparable*/ {
    public:
    // protected System.Reflection.MethodInfo[] setUpMethods
    // Offset: 0x10
    ::Array<System::Reflection::MethodInfo*>* setUpMethods;
    // protected System.Reflection.MethodInfo[] tearDownMethods
    // Offset: 0x18
    ::Array<System::Reflection::MethodInfo*>* tearDownMethods;
    // protected NUnit.Framework.Interfaces.ITypeInfo DeclaringTypeInfo
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo;
    // private NUnit.Framework.Interfaces.IMethodInfo _method
    // Offset: 0x28
    NUnit::Framework::Interfaces::IMethodInfo* method;
    // private System.String <Id>k__BackingField
    // Offset: 0x30
    ::Il2CppString* Id;
    // private System.String <Name>k__BackingField
    // Offset: 0x38
    ::Il2CppString* Name;
    // private System.String <FullName>k__BackingField
    // Offset: 0x40
    ::Il2CppString* FullName;
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Offset: 0x48
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Offset: 0x50
    NUnit::Framework::Interfaces::RunState RunState;
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Offset: 0x58
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // private NUnit.Framework.Interfaces.ITest <Parent>k__BackingField
    // Offset: 0x60
    NUnit::Framework::Interfaces::ITest* Parent;
    // private System.Object <Fixture>k__BackingField
    // Offset: 0x68
    ::Il2CppObject* Fixture;
    // private System.Int32 <Seed>k__BackingField
    // Offset: 0x70
    int Seed;
    // private System.Boolean <RequiresThread>k__BackingField
    // Offset: 0x74
    bool RequiresThread;
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITest
    operator NUnit::Framework::Interfaces::ITest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITest*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get static field: static private System.Int32 _nextID
    static int _get__nextID();
    // Set static field: static private System.Int32 _nextID
    static void _set__nextID(int value);
    // Get static field: static private System.String <IdPrefix>k__BackingField
    static ::Il2CppString* _get_$IdPrefix$k__BackingField();
    // Set static field: static private System.String <IdPrefix>k__BackingField
    static void _set_$IdPrefix$k__BackingField(::Il2CppString* value);
    // protected System.Void .ctor(System.String name)
    // Offset: 0x1ECB71C
    static Test* New_ctor(::Il2CppString* name);
    // protected System.Void .ctor(System.String pathName, System.String name)
    // Offset: 0x1ECB864
    static Test* New_ctor(::Il2CppString* pathName, ::Il2CppString* name);
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x1ECB90C
    static Test* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo);
    // protected System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x1ECBAA8
    static Test* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method);
    // private System.Void Initialize(System.String name)
    // Offset: 0x1ECB794
    void Initialize(::Il2CppString* name);
    // static private System.String GetNextId()
    // Offset: 0x1ECBD08
    static ::Il2CppString* GetNextId();
    // public System.Void set_Id(System.String value)
    // Offset: 0x1ECBE20
    void set_Id(::Il2CppString* value);
    // public System.Void set_Name(System.String value)
    // Offset: 0x1ECBE28
    void set_Name(::Il2CppString* value);
    // public System.Void set_FullName(System.String value)
    // Offset: 0x1ECBE38
    void set_FullName(::Il2CppString* value);
    // public System.String get_ClassName()
    // Offset: 0x1ECBE40
    ::Il2CppString* get_ClassName();
    // public System.String get_MethodName()
    // Offset: 0x1ECC0B4
    ::Il2CppString* get_MethodName();
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x1ECC0BC
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // public System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x1EC9A90
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x1ECC0CC
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.String get_XmlElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_XmlElementName();
    // public System.String get_TestType()
    // Offset: 0x1ECC0D4
    ::Il2CppString* get_TestType();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x1ECC10C
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Void set_Parent(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x1ECC19C
    void set_Parent(NUnit::Framework::Interfaces::ITest* value);
    // public System.Object get_Fixture()
    // Offset: 0x1ECC1A4
    ::Il2CppObject* get_Fixture();
    // public System.Void set_Fixture(System.Object value)
    // Offset: 0x1ECC1AC
    void set_Fixture(::Il2CppObject* value);
    // static public System.String get_IdPrefix()
    // Offset: 0x1ECBDB0
    static ::Il2CppString* get_IdPrefix();
    // public System.Int32 get_Seed()
    // Offset: 0x1ECC1B4
    int get_Seed();
    // public System.Void set_Seed(System.Int32 value)
    // Offset: 0x1ECC1BC
    void set_Seed(int value);
    // public NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public System.Void ApplyAttributesToTest(System.Reflection.ICustomAttributeProvider provider)
    // Offset: 0x1ECC1C4
    void ApplyAttributesToTest(System::Reflection::ICustomAttributeProvider* provider);
    // protected System.Void PopulateTestNode(NUnit.Framework.Interfaces.TNode thisNode, System.Boolean recursive)
    // Offset: 0x1ECC3B0
    void PopulateTestNode(NUnit::Framework::Interfaces::TNode* thisNode, bool recursive);
    // static private System.Void .cctor()
    // Offset: 0x1ECC7E0
    static void _cctor();
    // public System.String get_Id()
    // Offset: 0x1ECBE18
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Id()
    ::Il2CppString* get_Id();
    // public System.String get_Name()
    // Offset: 0x1ECBAA0
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Name()
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0x1ECBE30
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_FullName()
    ::Il2CppString* get_FullName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x1ECC0AC
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITest::get_TypeInfo()
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0x1EC9BB0
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IMethodInfo ITest::get_Method()
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x1ECC0C4
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.RunState ITest::get_RunState()
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0x1ECC0FC
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Int32 ITest::get_TestCaseCount()
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x1ECC104
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IPropertyBag ITest::get_Properties()
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Boolean get_IsSuite()
    // Offset: 0x1ECC114
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_IsSuite()
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_HasChildren()
    bool get_HasChildren();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0x1ECC194
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITest ITest::get_Parent()
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> ITest::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x1ECC6A0
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x1ECC72C
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
  }; // NUnit.Framework.Internal.Test
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Test*, "NUnit.Framework.Internal", "Test");
#pragma pack(pop)
