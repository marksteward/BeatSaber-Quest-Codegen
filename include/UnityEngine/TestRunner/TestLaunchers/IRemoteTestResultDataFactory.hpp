// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: RemoteTestResultDataWithTestData
  class RemoteTestResultDataWithTestData;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class IRemoteTestResultDataFactory {
    public:
    // Creating value type constructor for type: IRemoteTestResultDataFactory
    IRemoteTestResultDataFactory() noexcept {}
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTestResult(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTestResult(NUnit::Framework::Interfaces::ITestResult* result);
    // public UnityEngine.TestRunner.TestLaunchers.RemoteTestResultDataWithTestData CreateFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* CreateFromTest(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*, "UnityEngine.TestRunner.TestLaunchers", "IRemoteTestResultDataFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::CreateFromTestResult
// Il2CppName: CreateFromTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* (UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::CreateFromTestResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*), "CreateFromTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::CreateFromTest
// Il2CppName: CreateFromTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::TestLaunchers::RemoteTestResultDataWithTestData* (UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory::CreateFromTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*), "CreateFromTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
