// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
#include "UnityEngine/ResourceManagement/AsyncOperations/DownloadStatus.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationBase`1<TObject>
  template<typename TObject>
  class AsyncOperationBase_1;
  // Forward declaring type: IAsyncOperation
  class IAsyncOperation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
  template<typename TObject>
  struct AsyncOperationHandle_1/*, public System::ValueType, public System::Collections::IEnumerator, public System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*/ {
    public:
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> m_InternalOp
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*) == 0x8);
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x0
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_LocationName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_LocationName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AsyncOperationHandle_1
    constexpr AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* m_InternalOp_ = {}, int m_Version_ = {}, ::Il2CppString* m_LocationName_ = {}) noexcept : m_InternalOp{m_InternalOp_}, m_Version{m_Version_}, m_LocationName{m_LocationName_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>
    operator System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(this);
    }
    // System.String get_LocationName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_LocationName() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_LocationName");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_LocationName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
    }
    // System.Void set_LocationName(System.String value)
    // Offset: 0xFFFFFFFF
    void set_LocationName(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::set_LocationName");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_LocationName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> op)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* op) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::GetDownloadStatus");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(*this, ___internal__method);
    }
    // UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus InternalGetDownloadStatus(System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::InternalGetDownloadStatus");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "InternalGetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(visited)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(*this, ___internal__method, visited);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.Int32 version)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int version) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op), ::il2cpp_utils::ExtractType(version)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op, version);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.String locationName)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::Il2CppString* locationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op), ::il2cpp_utils::ExtractType(locationName)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op, locationName);
    }
    // System.Void .ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation op, System.Int32 version, System.String locationName)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    AsyncOperationHandle_1(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int version, ::Il2CppString* locationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op), ::il2cpp_utils::ExtractType(version), ::il2cpp_utils::ExtractType(locationName)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, op, version, locationName);
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> Acquire()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> Acquire() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(*this, ___internal__method);
    }
    // public System.Void add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> value)
    // Offset: 0xFFFFFFFF
    void add_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::add_Completed");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "add_Completed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> value)
    // Offset: 0xFFFFFFFF
    void remove_Completed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::remove_Completed");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "remove_Completed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void add_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0xFFFFFFFF
    void add_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::add_CompletedTypeless");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "add_CompletedTypeless", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void remove_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0xFFFFFFFF
    void remove_CompletedTypeless(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::remove_CompletedTypeless");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "remove_CompletedTypeless", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.String get_DebugName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_DebugName() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_DebugName");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
    }
    // public System.Void add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0xFFFFFFFF
    void add_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::add_Destroyed");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "add_Destroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> value)
    // Offset: 0xFFFFFFFF
    void remove_Destroyed(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::remove_Destroyed");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "remove_Destroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Boolean Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> other)
    // Offset: 0xFFFFFFFF
    bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
    }
    // public TObject WaitForCompletion()
    // Offset: 0xFFFFFFFF
    TObject WaitForCompletion() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::WaitForCompletion");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "WaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TObject, false>(*this, ___internal__method);
    }
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> get_InternalOp()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* get_InternalOp() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_InternalOp");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_InternalOp", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*, false>(*this, ___internal__method);
    }
    // public System.Boolean get_IsDone()
    // Offset: 0xFFFFFFFF
    bool get_IsDone() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_IsDone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_IsDone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // public System.Boolean IsValid()
    // Offset: 0xFFFFFFFF
    bool IsValid() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::IsValid");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IsValid", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // public System.Exception get_OperationException()
    // Offset: 0xFFFFFFFF
    System::Exception* get_OperationException() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_OperationException");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_OperationException", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Exception*, false>(*this, ___internal__method);
    }
    // public System.Single get_PercentComplete()
    // Offset: 0xFFFFFFFF
    float get_PercentComplete() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_PercentComplete");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<float, false>(*this, ___internal__method);
    }
    // System.Int32 get_ReferenceCount()
    // Offset: 0xFFFFFFFF
    int get_ReferenceCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_ReferenceCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_ReferenceCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // System.Void Release()
    // Offset: 0xFFFFFFFF
    void Release() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // public TObject get_Result()
    // Offset: 0xFFFFFFFF
    TObject get_Result() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_Result");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Result", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<TObject, false>(*this, ___internal__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus get_Status()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_Status");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Status", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, false>(*this, ___internal__method);
    }
    // public System.Threading.Tasks.Task`1<TObject> get_Task()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TObject>* get_Task() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::get_Task");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Task", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TObject>*, false>(*this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(*this, ___internal__method);
    }
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0xFFFFFFFF
    bool System_Collections_IEnumerator_MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::System.Collections.IEnumerator.MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
  }; // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
  // Could not write size check! Type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1");