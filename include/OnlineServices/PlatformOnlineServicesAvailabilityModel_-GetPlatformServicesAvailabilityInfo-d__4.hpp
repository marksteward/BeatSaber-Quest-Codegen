// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.PlatformOnlineServicesAvailabilityModel
#include "OnlineServices/PlatformOnlineServicesAvailabilityModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.PlatformOnlineServicesAvailabilityModel/<GetPlatformServicesAvailabilityInfo>d__4
  // [CompilerGeneratedAttribute] Offset: E12A88
  struct PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.PlatformServicesAvailabilityInfo> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // Creating value type constructor for type: $GetPlatformServicesAvailabilityInfo$d__4
    constexpr $GetPlatformServicesAvailabilityInfo$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE652C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE6534
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.PlatformOnlineServicesAvailabilityModel/<GetPlatformServicesAvailabilityInfo>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4, "OnlineServices", "PlatformOnlineServicesAvailabilityModel/<GetPlatformServicesAvailabilityInfo>d__4");
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::SetStateMachine
// Il2CppName: SetStateMachine
// Cannot perform method pointer template specialization from operators!
