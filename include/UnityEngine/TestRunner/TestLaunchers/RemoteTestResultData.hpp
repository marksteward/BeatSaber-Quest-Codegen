// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x90
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
  // [] Offset: FFFFFFFF
  class RemoteTestResultData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c
    class $$c;
    // public System.String testId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* testId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String fullName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* fullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String resultState
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* resultState;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public NUnit.Framework.Interfaces.TestStatus testStatus
    // Size: 0x4
    // Offset: 0x30
    NUnit::Framework::Interfaces::TestStatus testStatus;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::TestStatus) == 0x4);
    // Padding between fields: testStatus and: duration
    char __padding4[0x4] = {};
    // public System.Double duration
    // Size: 0x8
    // Offset: 0x38
    double duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.DateTime startTime
    // Size: 0x8
    // Offset: 0x40
    System::DateTime startTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.DateTime endTime
    // Size: 0x8
    // Offset: 0x48
    System::DateTime endTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.String message
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String stackTrace
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 assertCount
    // Size: 0x4
    // Offset: 0x60
    int assertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 failCount
    // Size: 0x4
    // Offset: 0x64
    int failCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 passCount
    // Size: 0x4
    // Offset: 0x68
    int passCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 skipCount
    // Size: 0x4
    // Offset: 0x6C
    int skipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 inconclusiveCount
    // Size: 0x4
    // Offset: 0x70
    int inconclusiveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasChildren
    // Size: 0x1
    // Offset: 0x74
    bool hasChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasChildren and: output
    char __padding15[0x3] = {};
    // public System.String output
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* output;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String xml
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* xml;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String[] childrenIds
    // Size: 0x8
    // Offset: 0x88
    ::Array<::Il2CppString*>* childrenIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: RemoteTestResultData
    RemoteTestResultData(::Il2CppString* testId_ = {}, ::Il2CppString* name_ = {}, ::Il2CppString* fullName_ = {}, ::Il2CppString* resultState_ = {}, NUnit::Framework::Interfaces::TestStatus testStatus_ = {}, double duration_ = {}, System::DateTime startTime_ = {}, System::DateTime endTime_ = {}, ::Il2CppString* message_ = {}, ::Il2CppString* stackTrace_ = {}, int assertCount_ = {}, int failCount_ = {}, int passCount_ = {}, int skipCount_ = {}, int inconclusiveCount_ = {}, bool hasChildren_ = {}, ::Il2CppString* output_ = {}, ::Il2CppString* xml_ = {}, ::Array<::Il2CppString*>* childrenIds_ = {}) noexcept : testId{testId_}, name{name_}, fullName{fullName_}, resultState{resultState_}, testStatus{testStatus_}, duration{duration_}, startTime{startTime_}, endTime{endTime_}, message{message_}, stackTrace{stackTrace_}, assertCount{assertCount_}, failCount{failCount_}, passCount{passCount_}, skipCount{skipCount_}, inconclusiveCount{inconclusiveCount_}, hasChildren{hasChildren_}, output{output_}, xml{xml_}, childrenIds{childrenIds_} {}
    // System.Void .ctor(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x118B458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultData* New_ctor(NUnit::Framework::Interfaces::ITestResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultData*, creationType>(result)));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
  static check_size<sizeof(RemoteTestResultData), 136 + sizeof(::Array<::Il2CppString*>*)> __UnityEngine_TestRunner_TestLaunchers_RemoteTestResultDataSizeCheck;
  static_assert(sizeof(RemoteTestResultData) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultData");
#pragma pack(pop)
