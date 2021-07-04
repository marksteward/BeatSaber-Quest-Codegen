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
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner
  class CoroutineRunner : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::Utils::CoroutineRunner::$HandleEnumerableTest$d__8
    class $HandleEnumerableTest$d__8;
    // Nested type: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__10
    class $ExMethod$d__10;
    // Nested type: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11
    class $StartTimer$d__11;
    // private System.Boolean m_Running
    // Size: 0x1
    // Offset: 0x10
    bool m_Running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Timeout
    // Size: 0x1
    // Offset: 0x11
    bool m_Timeout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Timeout and: m_Controller
    char __padding1[0x6] = {};
    // private readonly UnityEngine.MonoBehaviour m_Controller
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MonoBehaviour* m_Controller;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext m_Context
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* m_Context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // private UnityEngine.Coroutine m_TimeOutCoroutine
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Coroutine* m_TimeOutCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // private System.Collections.IEnumerator m_TestCoroutine
    // Size: 0x8
    // Offset: 0x30
    System::Collections::IEnumerator* m_TestCoroutine;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: CoroutineRunner
    CoroutineRunner(bool m_Running_ = {}, bool m_Timeout_ = {}, UnityEngine::MonoBehaviour* m_Controller_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* m_Context_ = {}, UnityEngine::Coroutine* m_TimeOutCoroutine_ = {}, System::Collections::IEnumerator* m_TestCoroutine_ = {}) noexcept : m_Running{m_Running_}, m_Timeout{m_Timeout_}, m_Controller{m_Controller_}, m_Context{m_Context_}, m_TimeOutCoroutine{m_TimeOutCoroutine_}, m_TestCoroutine{m_TestCoroutine_} {}
    // public System.Void .ctor(UnityEngine.MonoBehaviour playmodeTestsController, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x23DE774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineRunner* New_ctor(UnityEngine::MonoBehaviour* playmodeTestsController, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::CoroutineRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineRunner*, creationType>(playmodeTestsController, context)));
    }
    // public System.Collections.IEnumerator HandleEnumerableTest(System.Collections.IEnumerator testEnumerator)
    // Offset: 0x23DE7AC
    System::Collections::IEnumerator* HandleEnumerableTest(System::Collections::IEnumerator* testEnumerator);
    // private System.Void StopAllRunningCoroutines()
    // Offset: 0x23DE854
    void StopAllRunningCoroutines();
    // private System.Collections.IEnumerator ExMethod(System.Collections.IEnumerator e, System.Int32 timeout)
    // Offset: 0x23DE8AC
    System::Collections::IEnumerator* ExMethod(System::Collections::IEnumerator* e, int timeout);
    // private System.Collections.IEnumerator StartTimer(System.Collections.IEnumerator coroutineToBeKilled, System.Int32 timeout, System.Action onTimeout)
    // Offset: 0x23DE95C
    System::Collections::IEnumerator* StartTimer(System::Collections::IEnumerator* coroutineToBeKilled, int timeout, System::Action* onTimeout);
    // public System.Boolean HasFailedWithTimeout()
    // Offset: 0x23DEA1C
    bool HasFailedWithTimeout();
    // private System.Void <ExMethod>b__10_0()
    // Offset: 0x23DEA24
    void $ExMethod$b__10_0();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner
  #pragma pack(pop)
  static check_size<sizeof(CoroutineRunner), 48 + sizeof(System::Collections::IEnumerator*)> __UnityEngine_TestTools_Utils_CoroutineRunnerSizeCheck;
  static_assert(sizeof(CoroutineRunner) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::CoroutineRunner*, "UnityEngine.TestTools.Utils", "CoroutineRunner");
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::HandleEnumerableTest
// Il2CppName: HandleEnumerableTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::Utils::CoroutineRunner::*)(System::Collections::IEnumerator*)>(&UnityEngine::TestTools::Utils::CoroutineRunner::HandleEnumerableTest)> {
  const MethodInfo* get() {
    static auto* testEnumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "HandleEnumerableTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testEnumerator});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::StopAllRunningCoroutines
// Il2CppName: StopAllRunningCoroutines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::StopAllRunningCoroutines)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "StopAllRunningCoroutines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::ExMethod
// Il2CppName: ExMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::Utils::CoroutineRunner::*)(System::Collections::IEnumerator*, int)>(&UnityEngine::TestTools::Utils::CoroutineRunner::ExMethod)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "ExMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, timeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::StartTimer
// Il2CppName: StartTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::Utils::CoroutineRunner::*)(System::Collections::IEnumerator*, int, System::Action*)>(&UnityEngine::TestTools::Utils::CoroutineRunner::StartTimer)> {
  const MethodInfo* get() {
    static auto* coroutineToBeKilled = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* onTimeout = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "StartTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coroutineToBeKilled, timeout, onTimeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::HasFailedWithTimeout
// Il2CppName: HasFailedWithTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Utils::CoroutineRunner::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::HasFailedWithTimeout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "HasFailedWithTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$b__10_0
// Il2CppName: <ExMethod>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$b__10_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner*), "<ExMethod>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
