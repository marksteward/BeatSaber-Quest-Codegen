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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestFilter
  class TestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter
  class RuntimeTestRunnerFilter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c
    class $$c;
    // Nested type: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // public System.String[] assemblyNames
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* assemblyNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.String[] groupNames
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* groupNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.String[] categoryNames
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* categoryNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.String[] testNames
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* testNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean synchronousOnly
    // Size: 0x1
    // Offset: 0x30
    bool synchronousOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RuntimeTestRunnerFilter
    RuntimeTestRunnerFilter(::Array<::Il2CppString*>* assemblyNames_ = {}, ::Array<::Il2CppString*>* groupNames_ = {}, ::Array<::Il2CppString*>* categoryNames_ = {}, ::Array<::Il2CppString*>* testNames_ = {}, bool synchronousOnly_ = {}) noexcept : assemblyNames{assemblyNames_}, groupNames{groupNames_}, categoryNames{categoryNames_}, testNames{testNames_}, synchronousOnly{synchronousOnly_} {}
    // public NUnit.Framework.Interfaces.ITestFilter BuildNUnitFilter()
    // Offset: 0x14BC6F0
    NUnit::Framework::Interfaces::ITestFilter* BuildNUnitFilter();
    // static private System.Void AddFilters(System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestFilter> filters, System.String[] values, System.Func`2<System.String,NUnit.Framework.Internal.TestFilter> builder)
    // Offset: 0x14BCAA0
    static void AddFilters(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestFilter*>* filters, ::Array<::Il2CppString*>* values, System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>* builder);
    // public System.Void .ctor()
    // Offset: 0x14BCEF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeTestRunnerFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeTestRunnerFilter*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter
  #pragma pack(pop)
  static check_size<sizeof(RuntimeTestRunnerFilter), 48 + sizeof(bool)> __UnityEngine_TestTools_TestRunner_GUI_RuntimeTestRunnerFilterSizeCheck;
  static_assert(sizeof(RuntimeTestRunnerFilter) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*, "UnityEngine.TestTools.TestRunner.GUI", "RuntimeTestRunnerFilter");
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::BuildNUnitFilter
// Il2CppName: BuildNUnitFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::*)()>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::BuildNUnitFilter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*), "BuildNUnitFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::AddFilters
// Il2CppName: AddFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestFilter*>*, ::Array<::Il2CppString*>*, System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>*)>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::AddFilters)> {
  const MethodInfo* get() {
    static auto* filters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")})->byval_arg;
    static auto* values = &classof(::Array<::Array<::Il2CppString*>*>*)->byval_arg;
    static auto* builder = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestFilter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*), "AddFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filters, values, builder});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
