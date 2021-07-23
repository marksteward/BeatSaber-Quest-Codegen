// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockBeatmapLoader
#include "GlobalNamespace/MockBeatmapLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: BeatmapLevelsModel/GetBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MockBeatmapLoader/<GetBeatmapData>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MockBeatmapLoader::$GetBeatmapData$d__2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<MockBeatmapData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData*> $$t__builder;
    // public BeatmapIdentifierNetSerializable beatmap
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // public MockBeatmapLoader <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MockBeatmapLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockBeatmapLoader*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private MockBeatmapLoader/<>c__DisplayClass2_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$u__1;
    // Creating value type constructor for type: $GetBeatmapData$d__2
    constexpr $GetBeatmapData$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData*> $$t__builder_ = {}, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap_ = {}, GlobalNamespace::MockBeatmapLoader* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, beatmap{beatmap_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<MockBeatmapData> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData*> _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<MockBeatmapData> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData*> value);
    // Get instance field: public BeatmapIdentifierNetSerializable beatmap
    GlobalNamespace::BeatmapIdentifierNetSerializable* _get_beatmap();
    // Set instance field: public BeatmapIdentifierNetSerializable beatmap
    void _set_beatmap(GlobalNamespace::BeatmapIdentifierNetSerializable* value);
    // Get instance field: public MockBeatmapLoader <>4__this
    GlobalNamespace::MockBeatmapLoader* _get_$$4__this();
    // Set instance field: public MockBeatmapLoader <>4__this
    void _set_$$4__this(GlobalNamespace::MockBeatmapLoader* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: private MockBeatmapLoader/<>c__DisplayClass2_0 <>8__1
    GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0* _get_$$8__1();
    // Set instance field: private MockBeatmapLoader/<>c__DisplayClass2_0 <>8__1
    void _set_$$8__1(GlobalNamespace::MockBeatmapLoader::$$c__DisplayClass2_0* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> value);
    // private System.Void MoveNext()
    // Offset: 0xED130C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xED1314
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MockBeatmapLoader/<GetBeatmapData>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2, "", "MockBeatmapLoader/<GetBeatmapData>d__2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::*)()>(&GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapLoader::$GetBeatmapData$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
