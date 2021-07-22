// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpClientHandler
#include "System/Net/Http/HttpClientHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
  // Forward declaring type: HttpContent
  class HttpContent;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.HttpClientHandler/System.Net.Http.<SendAsync>d__64
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HttpClientHandler::$SendAsync$d__64/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage*> $$t__builder;
    // public System.Net.Http.HttpClientHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    System::Net::Http::HttpClientHandler* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpClientHandler*) == 0x8);
    // public System.Net.Http.HttpRequestMessage request
    // Size: 0x8
    // Offset: 0x28
    System::Net::Http::HttpRequestMessage* request;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpRequestMessage*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Net.HttpWebRequest <wrequest>5__1
    // Size: 0x8
    // Offset: 0x38
    System::Net::HttpWebRequest* $wrequest$5__1;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // private System.Net.Http.HttpContent <content>5__2
    // Size: 0x8
    // Offset: 0x40
    System::Net::Http::HttpContent* $content$5__2;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpContent*) == 0x8);
    // private System.IO.Stream <stream>5__3
    // Size: 0x8
    // Offset: 0x48
    System::IO::Stream* $stream$5__3;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Net.HttpWebResponse <wresponse>5__4
    // Size: 0x8
    // Offset: 0x50
    System::Net::HttpWebResponse* $wresponse$5__4;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebResponse*) == 0x8);
    // private System.Threading.CancellationTokenRegistration <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Threading::CancellationTokenRegistration $$7__wrap1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x70
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.IO.Stream> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::IO::Stream*>::ConfiguredTaskAwaiter $$u__2;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Net.WebResponse> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Net::WebResponse*>::ConfiguredTaskAwaiter $$u__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> <>u__4
    // Size: 0xFFFFFFFF
    // Offset: 0xA0
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage*> $$u__4;
    // Creating value type constructor for type: $SendAsync$d__64
    constexpr $SendAsync$d__64(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage*> $$t__builder_ = {}, System::Net::Http::HttpClientHandler* $$4__this_ = {}, System::Net::Http::HttpRequestMessage* request_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Net::HttpWebRequest* $wrequest$5__1_ = {}, System::Net::Http::HttpContent* $content$5__2_ = {}, System::IO::Stream* $stream$5__3_ = {}, System::Net::HttpWebResponse* $wresponse$5__4_ = {}, System::Threading::CancellationTokenRegistration $$7__wrap1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::IO::Stream*>::ConfiguredTaskAwaiter $$u__2_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Net::WebResponse*>::ConfiguredTaskAwaiter $$u__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage*> $$u__4_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, request{request_}, cancellationToken{cancellationToken_}, $wrequest$5__1{$wrequest$5__1_}, $content$5__2{$content$5__2_}, $stream$5__3{$stream$5__3_}, $wresponse$5__4{$wresponse$5__4_}, $$7__wrap1{$$7__wrap1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_}, $$u__4{$$u__4_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEDC550
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEDC558
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.Http.HttpClientHandler/System.Net.Http.<SendAsync>d__64
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClientHandler::$SendAsync$d__64, "System.Net.Http", "HttpClientHandler/<SendAsync>d__64");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$SendAsync$d__64::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::$SendAsync$d__64::*)()>(&System::Net::Http::HttpClientHandler::$SendAsync$d__64::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClientHandler::$SendAsync$d__64), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClientHandler::$SendAsync$d__64::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::$SendAsync$d__64::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::Http::HttpClientHandler::$SendAsync$d__64::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClientHandler::$SendAsync$d__64), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
