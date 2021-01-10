// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: NUnit.Framework.Internal.TestExecutionStatus
#include "NUnit/Framework/Internal/TestExecutionStatus.hpp"
// Including type: NUnit.Framework.ParallelScope
#include "NUnit/Framework/ParallelScope.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: Randomizer
  class Randomizer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestListener
  class ITestListener;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework::Internal::Execution
namespace NUnit::Framework::Internal::Execution {
  // Forward declaring type: IWorkItemDispatcher
  class IWorkItemDispatcher;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0xE0
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
  // [] Offset: FFFFFFFF
  class UnityTestExecutionContext : public ::Il2CppObject/*, public NUnit::Framework::Internal::ITestExecutionContext*/ {
    public:
    // private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext _priorContext
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* priorContext;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // private NUnit.Framework.Internal.TestResult _currentResult
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestResult* currentResult;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestResult*) == 0x8);
    // private System.Int32 _assertCount
    // Size: 0x4
    // Offset: 0x20
    int assertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: assertCount and: Context
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE6818
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6828
    // private NUnit.Framework.Internal.Test <CurrentTest>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Internal::Test* CurrentTest;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Test*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6838
    // private System.DateTime <StartTime>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    System::DateTime StartTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6848
    // private System.Int64 <StartTicks>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    int64_t StartTicks;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6858
    // private System.Object <TestObject>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* TestObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6868
    // private System.String <WorkDirectory>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* WorkDirectory;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private NUnit.Framework.Internal.TestExecutionStatus _executionStatus
    // Size: 0x4
    // Offset: 0x58
    NUnit::Framework::Internal::TestExecutionStatus executionStatus;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestExecutionStatus) == 0x4);
    // Padding between fields: executionStatus and: UpstreamActions
    char __padding9[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE6878
    // private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <UpstreamActions>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6888
    // private System.Int32 <TestCaseTimeout>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    int TestCaseTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TestCaseTimeout and: CurrentCulture
    char __padding11[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE6898
    // private System.Globalization.CultureInfo <CurrentCulture>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    System::Globalization::CultureInfo* CurrentCulture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE68A8
    // private System.Globalization.CultureInfo <CurrentUICulture>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    System::Globalization::CultureInfo* CurrentUICulture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE68B8
    // private NUnit.Framework.Interfaces.ITestListener <Listener>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    NUnit::Framework::Interfaces::ITestListener* Listener;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITestListener*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE68C8
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    System::IO::TextWriter* OutWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE68D8
    // private System.Boolean <StopOnError>k__BackingField
    // Size: 0x1
    // Offset: 0x90
    bool StopOnError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: StopOnError and: Dispatcher
    char __padding16[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE68E8
    // private NUnit.Framework.Internal.Execution.IWorkItemDispatcher <Dispatcher>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    NUnit::Framework::Internal::Execution::IWorkItemDispatcher* Dispatcher;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Execution::IWorkItemDispatcher*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE68F8
    // private NUnit.Framework.ParallelScope <ParallelScope>k__BackingField
    // Size: 0x4
    // Offset: 0xA0
    NUnit::Framework::ParallelScope ParallelScope;
    // Field size check
    static_assert(sizeof(NUnit::Framework::ParallelScope) == 0x4);
    // Padding between fields: ParallelScope and: WorkerId
    char __padding18[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE6908
    // private System.String <WorkerId>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* WorkerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6918
    // private NUnit.Framework.Internal.Randomizer <RandomGenerator>k__BackingField
    // Size: 0x8
    // Offset: 0xB0
    NUnit::Framework::Internal::Randomizer* RandomGenerator;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Randomizer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6928
    // private NUnit.Framework.Constraints.ValueFormatter <CurrentValueFormatter>k__BackingField
    // Size: 0x8
    // Offset: 0xB8
    NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ValueFormatter*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6938
    // private System.Boolean <IsSingleThreaded>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool IsSingleThreaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsSingleThreaded and: SetUpTearDownState
    char __padding22[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE6948
    // private UnityEngine.TestTools.BeforeAfterTestCommandState <SetUpTearDownState>k__BackingField
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::TestTools::BeforeAfterTestCommandState* SetUpTearDownState;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::BeforeAfterTestCommandState*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6958
    // private UnityEngine.TestTools.BeforeAfterTestCommandState <OuterUnityTestActionState>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::TestTools::BeforeAfterTestCommandState* OuterUnityTestActionState;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::BeforeAfterTestCommandState*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6968
    // private System.Int32 <EnumerableRepeatedTestState>k__BackingField
    // Size: 0x4
    // Offset: 0xD8
    int EnumerableRepeatedTestState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDE6978
    // private System.Int32 <EnumerableRetryTestState>k__BackingField
    // Size: 0x4
    // Offset: 0xDC
    int EnumerableRetryTestState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnityTestExecutionContext
    UnityTestExecutionContext(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* priorContext_ = {}, NUnit::Framework::Internal::TestResult* currentResult_ = {}, int assertCount_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context_ = {}, NUnit::Framework::Internal::Test* CurrentTest_ = {}, System::DateTime StartTime_ = {}, int64_t StartTicks_ = {}, ::Il2CppObject* TestObject_ = {}, ::Il2CppString* WorkDirectory_ = {}, NUnit::Framework::Internal::TestExecutionStatus executionStatus_ = {}, System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions_ = {}, int TestCaseTimeout_ = {}, System::Globalization::CultureInfo* CurrentCulture_ = {}, System::Globalization::CultureInfo* CurrentUICulture_ = {}, NUnit::Framework::Interfaces::ITestListener* Listener_ = {}, System::IO::TextWriter* OutWriter_ = {}, bool StopOnError_ = {}, NUnit::Framework::Internal::Execution::IWorkItemDispatcher* Dispatcher_ = {}, NUnit::Framework::ParallelScope ParallelScope_ = {}, ::Il2CppString* WorkerId_ = {}, NUnit::Framework::Internal::Randomizer* RandomGenerator_ = {}, NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter_ = {}, bool IsSingleThreaded_ = {}, UnityEngine::TestTools::BeforeAfterTestCommandState* SetUpTearDownState_ = {}, UnityEngine::TestTools::BeforeAfterTestCommandState* OuterUnityTestActionState_ = {}, int EnumerableRepeatedTestState_ = {}, int EnumerableRetryTestState_ = {}) noexcept : priorContext{priorContext_}, currentResult{currentResult_}, assertCount{assertCount_}, Context{Context_}, CurrentTest{CurrentTest_}, StartTime{StartTime_}, StartTicks{StartTicks_}, TestObject{TestObject_}, WorkDirectory{WorkDirectory_}, executionStatus{executionStatus_}, UpstreamActions{UpstreamActions_}, TestCaseTimeout{TestCaseTimeout_}, CurrentCulture{CurrentCulture_}, CurrentUICulture{CurrentUICulture_}, Listener{Listener_}, OutWriter{OutWriter_}, StopOnError{StopOnError_}, Dispatcher{Dispatcher_}, ParallelScope{ParallelScope_}, WorkerId{WorkerId_}, RandomGenerator{RandomGenerator_}, CurrentValueFormatter{CurrentValueFormatter_}, IsSingleThreaded{IsSingleThreaded_}, SetUpTearDownState{SetUpTearDownState_}, OuterUnityTestActionState{OuterUnityTestActionState_}, EnumerableRepeatedTestState{EnumerableRepeatedTestState_}, EnumerableRetryTestState{EnumerableRetryTestState_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Internal::ITestExecutionContext
    operator NUnit::Framework::Internal::ITestExecutionContext() noexcept {
      return *reinterpret_cast<NUnit::Framework::Internal::ITestExecutionContext*>(this);
    }
    // [CompilerGeneratedAttribute] Offset: 0xDE6808
    // Get static field: static private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <CurrentContext>k__BackingField
    static UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* _get_$CurrentContext$k__BackingField();
    // Set static field: static private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <CurrentContext>k__BackingField
    static void _set_$CurrentContext$k__BackingField(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // static public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext get_CurrentContext()
    // Offset: 0x1187B58
    static UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* get_CurrentContext();
    // static public System.Void set_CurrentContext(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext value)
    // Offset: 0x1187BA8
    static void set_CurrentContext(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // public NUnit.Framework.Internal.Test get_CurrentTest()
    // Offset: 0x1187C00
    NUnit::Framework::Internal::Test* get_CurrentTest();
    // public System.Void set_CurrentTest(NUnit.Framework.Internal.Test value)
    // Offset: 0x1187C08
    void set_CurrentTest(NUnit::Framework::Internal::Test* value);
    // public System.DateTime get_StartTime()
    // Offset: 0x1187C10
    System::DateTime get_StartTime();
    // public System.Void set_StartTime(System.DateTime value)
    // Offset: 0x1187C18
    void set_StartTime(System::DateTime value);
    // public System.Int64 get_StartTicks()
    // Offset: 0x1187C20
    int64_t get_StartTicks();
    // public System.Void set_StartTicks(System.Int64 value)
    // Offset: 0x1187C28
    void set_StartTicks(int64_t value);
    // public System.String get_WorkDirectory()
    // Offset: 0x1187C98
    ::Il2CppString* get_WorkDirectory();
    // public System.Void set_WorkDirectory(System.String value)
    // Offset: 0x1187CA0
    void set_WorkDirectory(::Il2CppString* value);
    // public NUnit.Framework.Internal.TestExecutionStatus get_ExecutionStatus()
    // Offset: 0x117EB94
    NUnit::Framework::Internal::TestExecutionStatus get_ExecutionStatus();
    // public System.Void set_ExecutionStatus(NUnit.Framework.Internal.TestExecutionStatus value)
    // Offset: 0x1180E20
    void set_ExecutionStatus(NUnit::Framework::Internal::TestExecutionStatus value);
    // public System.Collections.Generic.List`1<NUnit.Framework.ITestAction> get_UpstreamActions()
    // Offset: 0x1187CA8
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* get_UpstreamActions();
    // private System.Void set_UpstreamActions(System.Collections.Generic.List`1<NUnit.Framework.ITestAction> value)
    // Offset: 0x1187CB0
    void set_UpstreamActions(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* value);
    // public System.Int32 get_TestCaseTimeout()
    // Offset: 0x1187CB8
    int get_TestCaseTimeout();
    // public System.Void set_TestCaseTimeout(System.Int32 value)
    // Offset: 0x1187CC0
    void set_TestCaseTimeout(int value);
    // public System.Globalization.CultureInfo get_CurrentCulture()
    // Offset: 0x1187CC8
    System::Globalization::CultureInfo* get_CurrentCulture();
    // public System.Void set_CurrentCulture(System.Globalization.CultureInfo value)
    // Offset: 0x1187CD0
    void set_CurrentCulture(System::Globalization::CultureInfo* value);
    // public System.Globalization.CultureInfo get_CurrentUICulture()
    // Offset: 0x1187CD8
    System::Globalization::CultureInfo* get_CurrentUICulture();
    // public System.Void set_CurrentUICulture(System.Globalization.CultureInfo value)
    // Offset: 0x1187CE0
    void set_CurrentUICulture(System::Globalization::CultureInfo* value);
    // public NUnit.Framework.Interfaces.ITestListener get_Listener()
    // Offset: 0x1187CE8
    NUnit::Framework::Interfaces::ITestListener* get_Listener();
    // public System.Void set_Listener(NUnit.Framework.Interfaces.ITestListener value)
    // Offset: 0x1187CF0
    void set_Listener(NUnit::Framework::Interfaces::ITestListener* value);
    // public System.Void .ctor(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext other)
    // Offset: 0x1181D5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestExecutionContext* New_ctor(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestExecutionContext*, creationType>(other)));
    }
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0x1187D00
    void set_OutWriter(System::IO::TextWriter* value);
    // public UnityEngine.TestTools.BeforeAfterTestCommandState get_SetUpTearDownState()
    // Offset: 0x1187D10
    UnityEngine::TestTools::BeforeAfterTestCommandState* get_SetUpTearDownState();
    // public System.Void set_SetUpTearDownState(UnityEngine.TestTools.BeforeAfterTestCommandState value)
    // Offset: 0x1187D18
    void set_SetUpTearDownState(UnityEngine::TestTools::BeforeAfterTestCommandState* value);
    // public UnityEngine.TestTools.BeforeAfterTestCommandState get_OuterUnityTestActionState()
    // Offset: 0x1187D20
    UnityEngine::TestTools::BeforeAfterTestCommandState* get_OuterUnityTestActionState();
    // public System.Void set_OuterUnityTestActionState(UnityEngine.TestTools.BeforeAfterTestCommandState value)
    // Offset: 0x1187D28
    void set_OuterUnityTestActionState(UnityEngine::TestTools::BeforeAfterTestCommandState* value);
    // public System.Int32 get_EnumerableRepeatedTestState()
    // Offset: 0x1187D30
    int get_EnumerableRepeatedTestState();
    // public System.Void set_EnumerableRepeatedTestState(System.Int32 value)
    // Offset: 0x1187D38
    void set_EnumerableRepeatedTestState(int value);
    // public System.Int32 get_EnumerableRetryTestState()
    // Offset: 0x1187D40
    int get_EnumerableRetryTestState();
    // public System.Void set_EnumerableRetryTestState(System.Int32 value)
    // Offset: 0x1187D48
    void set_EnumerableRetryTestState(int value);
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0x1187C30
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Internal.TestResult ITestExecutionContext::get_CurrentResult()
    NUnit::Framework::Internal::TestResult* get_CurrentResult();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0x1187C38
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    void set_CurrentResult(NUnit::Framework::Internal::TestResult* value);
    // public System.Object get_TestObject()
    // Offset: 0x1187C88
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Object ITestExecutionContext::get_TestObject()
    ::Il2CppObject* get_TestObject();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0x1187C90
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_TestObject(System.Object value)
    void set_TestObject(::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x1187620
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestExecutionContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestExecutionContext*, creationType>()));
    }
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0x1187CF8
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.IO.TextWriter ITestExecutionContext::get_OutWriter()
    System::IO::TextWriter* get_OutWriter();
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0x1187D08
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Constraints.ValueFormatter ITestExecutionContext::get_CurrentValueFormatter()
    NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter();
    // public System.Void IncrementAssertCount()
    // Offset: 0x1187D50
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::IncrementAssertCount()
    void IncrementAssertCount();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext
  static check_size<sizeof(UnityTestExecutionContext), 220 + sizeof(int)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityTestExecutionContextSizeCheck;
  static_assert(sizeof(UnityTestExecutionContext) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext");
#pragma pack(pop)
