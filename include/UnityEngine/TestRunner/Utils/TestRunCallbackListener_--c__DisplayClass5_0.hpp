// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/UnityEngine.TestRunner.Utils.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TestRunCallbackListener::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Interfaces.ITest test
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITest* test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(NUnit::Framework::Interfaces::ITest* test_ = {}) noexcept : test{test_} {}
    // Creating conversion operator: operator NUnit::Framework::Interfaces::ITest*
    constexpr operator NUnit::Framework::Interfaces::ITest*() const noexcept {
      return test;
    }
    // System.Void <TestStarted>b__0(UnityEngine.TestRunner.ITestRunCallback callback)
    // Offset: 0x148797C
    void $TestStarted$b__0(UnityEngine::TestRunner::ITestRunCallback* callback);
    // public System.Void .ctor()
    // Offset: 0x1487498
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/UnityEngine.TestRunner.Utils.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(TestRunCallbackListener::$$c__DisplayClass5_0), 16 + sizeof(NUnit::Framework::Interfaces::ITest*)> __UnityEngine_TestRunner_Utils_TestRunCallbackListener_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(TestRunCallbackListener::$$c__DisplayClass5_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0::$TestStarted$b__0
// Il2CppName: <TestStarted>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0::*)(UnityEngine::TestRunner::ITestRunCallback*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0::$TestStarted$b__0)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner", "ITestRunCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0*), "<TestStarted>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
