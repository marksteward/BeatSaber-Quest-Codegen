// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: FailureSite
  struct FailureSite;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestResult
  // [] Offset: FFFFFFFF
  class TestResult : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestResult*/ {
    public:
    // private System.Text.StringBuilder _output
    // Size: 0x8
    // Offset: 0x10
    System::Text::StringBuilder* output;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Double _duration
    // Size: 0x8
    // Offset: 0x18
    double duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // protected System.Int32 InternalAssertCount
    // Size: 0x4
    // Offset: 0x20
    int InternalAssertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: InternalAssertCount and: resultState
    char __padding2[0x4] = {};
    // private NUnit.Framework.Interfaces.ResultState _resultState
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::ResultState* resultState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ResultState*) == 0x8);
    // private System.String _message
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _stackTrace
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB330C
    // private NUnit.Framework.Interfaces.ITest <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Interfaces::ITest* Test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB331C
    // private System.DateTime <StartTime>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    System::DateTime StartTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB332C
    // private System.DateTime <EndTime>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    System::DateTime EndTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB333C
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    System::IO::TextWriter* OutWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // Creating value type constructor for type: TestResult
    TestResult(System::Text::StringBuilder* output_ = {}, double duration_ = {}, int InternalAssertCount_ = {}, NUnit::Framework::Interfaces::ResultState* resultState_ = {}, ::Il2CppString* message_ = {}, ::Il2CppString* stackTrace_ = {}, NUnit::Framework::Interfaces::ITest* Test_ = {}, System::DateTime StartTime_ = {}, System::DateTime EndTime_ = {}, System::IO::TextWriter* OutWriter_ = {}) noexcept : output{output_}, duration{duration_}, InternalAssertCount{InternalAssertCount_}, resultState{resultState_}, message{message_}, stackTrace{stackTrace_}, Test{Test_}, StartTime{StartTime_}, EndTime{EndTime_}, OutWriter{OutWriter_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestResult
    operator NUnit::Framework::Interfaces::ITestResult() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestResult*>(this);
    }
    // static field const value: static System.Double MIN_DURATION
    static constexpr const double MIN_DURATION = 1e-06;
    // Get static field: static System.Double MIN_DURATION
    static double _get_MIN_DURATION();
    // Set static field: static System.Double MIN_DURATION
    static void _set_MIN_DURATION(double value);
    // Get static field: static readonly System.String CHILD_ERRORS_MESSAGE
    static ::Il2CppString* _get_CHILD_ERRORS_MESSAGE();
    // Set static field: static readonly System.String CHILD_ERRORS_MESSAGE
    static void _set_CHILD_ERRORS_MESSAGE(::Il2CppString* value);
    // Get static field: static readonly System.String CHILD_IGNORE_MESSAGE
    static ::Il2CppString* _get_CHILD_IGNORE_MESSAGE();
    // Set static field: static readonly System.String CHILD_IGNORE_MESSAGE
    static void _set_CHILD_IGNORE_MESSAGE(::Il2CppString* value);
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x195BC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResult* New_ctor(NUnit::Framework::Interfaces::ITest* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResult*, creationType>(test)));
    }
    // private System.Void set_Test(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x195F8C8
    void set_Test(NUnit::Framework::Interfaces::ITest* value);
    // private System.Void set_ResultState(NUnit.Framework.Interfaces.ResultState value)
    // Offset: 0x195F8B8
    void set_ResultState(NUnit::Framework::Interfaces::ResultState* value);
    // public System.Void set_Duration(System.Double value)
    // Offset: 0x195FA40
    void set_Duration(double value);
    // public System.Void set_StartTime(System.DateTime value)
    // Offset: 0x195FA6C
    void set_StartTime(System::DateTime value);
    // public System.Void set_EndTime(System.DateTime value)
    // Offset: 0x195FA7C
    void set_EndTime(System::DateTime value);
    // private System.Void set_Message(System.String value)
    // Offset: 0x195FA8C
    void set_Message(::Il2CppString* value);
    // private System.Void set_StackTrace(System.String value)
    // Offset: 0x195FA9C
    void set_StackTrace(::Il2CppString* value);
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0x195C26C
    System::IO::TextWriter* get_OutWriter();
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0x195FAAC
    void set_OutWriter(System::IO::TextWriter* value);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x1960524
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x19605B4
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState, System.String message, System.String stackTrace)
    // Offset: 0x1960530
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message, ::Il2CppString* stackTrace);
    // public System.Void RecordException(System.Exception ex)
    // Offset: 0x19605BC
    void RecordException(System::Exception* ex);
    // public System.Void RecordException(System.Exception ex, NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x19607CC
    void RecordException(System::Exception* ex, NUnit::Framework::Interfaces::FailureSite site);
    // public System.Void RecordTearDownException(System.Exception ex)
    // Offset: 0x1960A1C
    void RecordTearDownException(System::Exception* ex);
    // private NUnit.Framework.Interfaces.TNode AddReasonElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x1960420
    NUnit::Framework::Interfaces::TNode* AddReasonElement(NUnit::Framework::Interfaces::TNode* targetNode);
    // private NUnit.Framework.Interfaces.TNode AddFailureElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x196033C
    NUnit::Framework::Interfaces::TNode* AddFailureElement(NUnit::Framework::Interfaces::TNode* targetNode);
    // private NUnit.Framework.Interfaces.TNode AddOutputElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x19604A4
    NUnit::Framework::Interfaces::TNode* AddOutputElement(NUnit::Framework::Interfaces::TNode* targetNode);
    // static private System.Void .cctor()
    // Offset: 0x1960D5C
    static void _cctor();
    // public NUnit.Framework.Interfaces.ITest get_Test()
    // Offset: 0x195F8C0
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: NUnit.Framework.Interfaces.ITest ITestResult::get_Test()
    NUnit::Framework::Interfaces::ITest* get_Test();
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x195BDAC
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: NUnit.Framework.Interfaces.ResultState ITestResult::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public System.String get_Name()
    // Offset: 0x195F8D0
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.String ITestResult::get_Name()
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0x195F984
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.String ITestResult::get_FullName()
    ::Il2CppString* get_FullName();
    // public System.Double get_Duration()
    // Offset: 0x195FA38
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Double ITestResult::get_Duration()
    double get_Duration();
    // public System.DateTime get_StartTime()
    // Offset: 0x195FA64
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.DateTime ITestResult::get_StartTime()
    System::DateTime get_StartTime();
    // public System.DateTime get_EndTime()
    // Offset: 0x195FA74
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.DateTime ITestResult::get_EndTime()
    System::DateTime get_EndTime();
    // public System.String get_Message()
    // Offset: 0x195FA84
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.String ITestResult::get_Message()
    ::Il2CppString* get_Message();
    // public System.String get_StackTrace()
    // Offset: 0x195FA94
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.String ITestResult::get_StackTrace()
    ::Il2CppString* get_StackTrace();
    // public System.Int32 get_AssertCount()
    // Offset: 0x195FAA4
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Int32 ITestResult::get_AssertCount()
    int get_AssertCount();
    // public System.Int32 get_FailCount()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Int32 ITestResult::get_FailCount()
    int get_FailCount();
    // public System.Int32 get_PassCount()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Int32 ITestResult::get_PassCount()
    int get_PassCount();
    // public System.Int32 get_SkipCount()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Int32 ITestResult::get_SkipCount()
    int get_SkipCount();
    // public System.Int32 get_InconclusiveCount()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Int32 ITestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Boolean ITestResult::get_HasChildren()
    bool get_HasChildren();
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> ITestResult::get_Children()
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
    // public System.String get_Output()
    // Offset: 0x195FAB4
    // Implemented from: NUnit.Framework.Interfaces.ITestResult
    // Base method: System.String ITestResult::get_Output()
    ::Il2CppString* get_Output();
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x195FAD4
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x195FB60
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestResult
  static check_size<sizeof(TestResult), 88 + sizeof(System::IO::TextWriter*)> __NUnit_Framework_Internal_TestResultSizeCheck;
  static_assert(sizeof(TestResult) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestResult*, "NUnit.Framework.Internal", "TestResult");
