// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.Stream/System.IO.<CopyToAsyncInternal>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D6A044
  struct Stream::$CopyToAsyncInternal$d__27/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Int32 bufferSize
    // Size: 0x4
    // Offset: 0x20
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IO.Stream destination
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* destination;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Byte[] <buffer>5__1
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* $buffer$5__1;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 <bytesRead>5__2
    // Size: 0x4
    // Offset: 0x38
    int $bytesRead$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.IO.Stream <>4__this
    // Size: 0x8
    // Offset: 0x48
    System::IO::Stream* $$4__this;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x50
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__2;
    // Creating value type constructor for type: $CopyToAsyncInternal$d__27
    constexpr $CopyToAsyncInternal$d__27(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, int bufferSize_ = {}, System::IO::Stream* destination_ = {}, ::Array<uint8_t>* $buffer$5__1_ = {}, int $bytesRead$5__2_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::IO::Stream* $$4__this_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, bufferSize{bufferSize_}, destination{destination_}, $buffer$5__1{$buffer$5__1_}, $bytesRead$5__2{$bytesRead$5__2_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value);
    // Get instance field: public System.Int32 bufferSize
    int _get_bufferSize();
    // Set instance field: public System.Int32 bufferSize
    void _set_bufferSize(int value);
    // Get instance field: public System.IO.Stream destination
    System::IO::Stream* _get_destination();
    // Set instance field: public System.IO.Stream destination
    void _set_destination(System::IO::Stream* value);
    // Get instance field: private System.Byte[] <buffer>5__1
    ::Array<uint8_t>* _get_$buffer$5__1();
    // Set instance field: private System.Byte[] <buffer>5__1
    void _set_$buffer$5__1(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 <bytesRead>5__2
    int _get_$bytesRead$5__2();
    // Set instance field: private System.Int32 <bytesRead>5__2
    void _set_$bytesRead$5__2(int value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: public System.IO.Stream <>4__this
    System::IO::Stream* _get_$$4__this();
    // Set instance field: public System.IO.Stream <>4__this
    void _set_$$4__this(System::IO::Stream* value);
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter value);
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__2
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__2
    void _set_$$u__2(typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter value);
    // private System.Void MoveNext()
    // Offset: 0xEEAD24
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEEAD2C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.IO.Stream/System.IO.<CopyToAsyncInternal>d__27
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::$CopyToAsyncInternal$d__27, "System.IO", "Stream/<CopyToAsyncInternal>d__27");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::$CopyToAsyncInternal$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::$CopyToAsyncInternal$d__27::*)()>(&System::IO::Stream::$CopyToAsyncInternal$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$CopyToAsyncInternal$d__27), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$CopyToAsyncInternal$d__27::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::$CopyToAsyncInternal$d__27::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::IO::Stream::$CopyToAsyncInternal$d__27::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$CopyToAsyncInternal$d__27), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
