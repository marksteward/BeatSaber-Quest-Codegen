// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
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
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData
  class RemoteTestData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c
    class $$c;
    // public System.String id
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* id;
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
    // public System.Int32 testCaseCount
    // Size: 0x4
    // Offset: 0x28
    int testCaseCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ChildIndex
    // Size: 0x4
    // Offset: 0x2C
    int ChildIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasChildren
    // Size: 0x1
    // Offset: 0x30
    bool hasChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isSuite
    // Size: 0x1
    // Offset: 0x31
    bool isSuite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSuite and: childrenIds
    char __padding6[0x6] = {};
    // public System.String[] childrenIds
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppString*>* childrenIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Int32 testCaseTimeout
    // Size: 0x4
    // Offset: 0x40
    int testCaseTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: testCaseTimeout and: Categories
    char __padding8[0x4] = {};
    // public System.String[] Categories
    // Size: 0x8
    // Offset: 0x48
    ::Array<::Il2CppString*>* Categories;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean IsTestAssembly
    // Size: 0x1
    // Offset: 0x50
    bool IsTestAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsTestAssembly and: RunState
    char __padding10[0x3] = {};
    // public NUnit.Framework.Interfaces.RunState RunState
    // Size: 0x4
    // Offset: 0x54
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // public System.String Description
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* Description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String SkipReason
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* SkipReason;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ParentId
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* ParentId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String UniqueName
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* UniqueName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ParentUniqueName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* ParentUniqueName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String ParentFullName
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* ParentFullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RemoteTestData
    RemoteTestData(::Il2CppString* id_ = {}, ::Il2CppString* name_ = {}, ::Il2CppString* fullName_ = {}, int testCaseCount_ = {}, int ChildIndex_ = {}, bool hasChildren_ = {}, bool isSuite_ = {}, ::Array<::Il2CppString*>* childrenIds_ = {}, int testCaseTimeout_ = {}, ::Array<::Il2CppString*>* Categories_ = {}, bool IsTestAssembly_ = {}, NUnit::Framework::Interfaces::RunState RunState_ = {}, ::Il2CppString* Description_ = {}, ::Il2CppString* SkipReason_ = {}, ::Il2CppString* ParentId_ = {}, ::Il2CppString* UniqueName_ = {}, ::Il2CppString* ParentUniqueName_ = {}, ::Il2CppString* ParentFullName_ = {}) noexcept : id{id_}, name{name_}, fullName{fullName_}, testCaseCount{testCaseCount_}, ChildIndex{ChildIndex_}, hasChildren{hasChildren_}, isSuite{isSuite_}, childrenIds{childrenIds_}, testCaseTimeout{testCaseTimeout_}, Categories{Categories_}, IsTestAssembly{IsTestAssembly_}, RunState{RunState_}, Description{Description_}, SkipReason{SkipReason_}, ParentId{ParentId_}, UniqueName{UniqueName_}, ParentUniqueName{ParentUniqueName_}, ParentFullName{ParentFullName_} {}
    // System.Void .ctor(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x136C988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestData* New_ctor(NUnit::Framework::Interfaces::ITest* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestData*, creationType>(test)));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestData
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestData), 128 + sizeof(::Il2CppString*)> __UnityEngine_TestRunner_TestLaunchers_RemoteTestDataSizeCheck;
  static_assert(sizeof(RemoteTestData) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestData");
