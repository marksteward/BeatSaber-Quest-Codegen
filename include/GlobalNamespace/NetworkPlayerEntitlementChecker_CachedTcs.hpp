// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayerEntitlementChecker/CachedTcs
  class NetworkPlayerEntitlementChecker::CachedTcs : public ::Il2CppObject {
    public:
    // private System.Single kRefreshTime
    // Size: 0x4
    // Offset: 0x10
    float kRefreshTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: kRefreshTime and: source
    char __padding0[0x4] = {};
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<EntitlementsStatus> _source
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::EntitlementsStatus>* source;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::EntitlementsStatus>*) == 0x8);
    // private System.Single _creationTime
    // Size: 0x4
    // Offset: 0x20
    float creationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: CachedTcs
    CachedTcs(float kRefreshTime_ = {}, System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::EntitlementsStatus>* source_ = {}, float creationTime_ = {}) noexcept : kRefreshTime{kRefreshTime_}, source{source_}, creationTime{creationTime_} {}
    // public System.Threading.Tasks.Task`1<EntitlementsStatus> get_task()
    // Offset: 0x11CE084
    System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* get_task();
    // public System.Void SetResult(EntitlementsStatus status)
    // Offset: 0x11CE0D4
    void SetResult(GlobalNamespace::EntitlementsStatus status);
    // public System.Boolean Refresh()
    // Offset: 0x11CE168
    bool Refresh();
    // public System.Void .ctor()
    // Offset: 0x11CDFFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayerEntitlementChecker::CachedTcs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayerEntitlementChecker::CachedTcs*, creationType>()));
    }
  }; // NetworkPlayerEntitlementChecker/CachedTcs
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayerEntitlementChecker::CachedTcs), 32 + sizeof(float)> __GlobalNamespace_NetworkPlayerEntitlementChecker_CachedTcsSizeCheck;
  static_assert(sizeof(NetworkPlayerEntitlementChecker::CachedTcs) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs*, "", "NetworkPlayerEntitlementChecker/CachedTcs");
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs::get_task
// Il2CppName: get_task
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs::SetResult
// Il2CppName: SetResult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
