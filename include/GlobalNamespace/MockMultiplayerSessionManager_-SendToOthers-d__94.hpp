// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MockMultiplayerSessionManager/<SendToOthers>d__94
  // [CompilerGeneratedAttribute] Offset: E12228
  struct MockMultiplayerSessionManager::$SendToOthers$d__94/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public LiteNetLib.Utils.NetDataWriter writer
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // public MockMultiplayerSessionManager <>4__this
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockMultiplayerSessionManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // public MockPlayer player
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MockPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private System.Int32 <length>5__2
    // Size: 0x4
    // Offset: 0x40
    int $length$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $length$5__2 and: $data$5__3
    char __padding5[0x4] = {};
    // private System.Byte[] <data>5__3
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* $data$5__3;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendToOthers$d__94
    constexpr $SendToOthers$d__94(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, LiteNetLib::Utils::NetDataWriter* writer_ = {}, GlobalNamespace::MockMultiplayerSessionManager* $$4__this_ = {}, GlobalNamespace::MockPlayer* player_ = {}, int $length$5__2_ = {}, ::Array<uint8_t>* $data$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, writer{writer_}, $$4__this{$$4__this_}, player{player_}, $length$5__2{$length$5__2_}, $data$5__3{$data$5__3_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE4A78
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE4A80
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MockMultiplayerSessionManager/<SendToOthers>d__94
  #pragma pack(pop)
  static check_size<sizeof(MockMultiplayerSessionManager::$SendToOthers$d__94), 80 + sizeof(System::Runtime::CompilerServices::TaskAwaiter)> __GlobalNamespace_MockMultiplayerSessionManager_$SendToOthers$d__94SizeCheck;
  static_assert(sizeof(MockMultiplayerSessionManager::$SendToOthers$d__94) == 0x58);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94, "", "MockMultiplayerSessionManager/<SendToOthers>d__94");
// Writing MetadataGetter for method: GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::*)()>(&GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94::SetStateMachine)> {
  const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockMultiplayerSessionManager::$SendToOthers$d__94), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
