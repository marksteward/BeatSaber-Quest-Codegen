// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TestExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TestExtensions
    TestExtensions() noexcept {}
    // static private System.Collections.Generic.IEnumerable`1<System.String> GetTestCategories(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14AFBC8
    static System::Collections::Generic::IEnumerable_1<::Il2CppString*>* GetTestCategories(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Collections.Generic.List`1<System.String> GetAllCategoriesFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14AFF1C
    static System::Collections::Generic::List_1<::Il2CppString*>* GetAllCategoriesFromTest(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Void ParseForNameDuplicates(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B0088
    static void ParseForNameDuplicates(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Int32 GetChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B05A0
    static int GetChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Boolean HasChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B077C
    static bool HasChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static private System.String GetAncestorPath(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B0930
    static ::Il2CppString* GetAncestorPath(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14AF740
    static ::Il2CppString* GetUniqueName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B0BC8
    static ::Il2CppString* GetFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetSkipReason(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B1094
    static ::Il2CppString* GetSkipReason(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentId(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B12E0
    static ::Il2CppString* GetParentId(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B146C
    static ::Il2CppString* GetParentFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14B15FC
    static ::Il2CppString* GetParentUniqueName(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestExtensions");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetTestCategories
// Il2CppName: GetTestCategories
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAllCategoriesFromTest
// Il2CppName: GetAllCategoriesFromTest
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::ParseForNameDuplicates
// Il2CppName: ParseForNameDuplicates
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetChildIndex
// Il2CppName: GetChildIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::HasChildIndex
// Il2CppName: HasChildIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAncestorPath
// Il2CppName: GetAncestorPath
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetUniqueName
// Il2CppName: GetUniqueName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetFullName
// Il2CppName: GetFullName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetSkipReason
// Il2CppName: GetSkipReason
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentId
// Il2CppName: GetParentId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentFullName
// Il2CppName: GetParentFullName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentUniqueName
// Il2CppName: GetParentUniqueName
// Cannot perform method pointer template specialization from operators!
