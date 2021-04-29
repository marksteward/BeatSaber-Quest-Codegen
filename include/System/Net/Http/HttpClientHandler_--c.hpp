// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpClientHandler
#include "System/Net/Http/HttpClientHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpClientHandler/<>c
  // [CompilerGeneratedAttribute] Offset: D0ACDC
  class HttpClientHandler::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Net.Http.HttpClientHandler/<>c <>9
    static System::Net::Http::HttpClientHandler::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.HttpClientHandler/<>c <>9
    static void _set_$$9(System::Net::Http::HttpClientHandler::$$c* value);
    // Get static field: static public System.Func`2<System.String,System.Boolean> <>9__61_0
    static System::Func_2<::Il2CppString*, bool>* _get_$$9__61_0();
    // Set static field: static public System.Func`2<System.String,System.Boolean> <>9__61_0
    static void _set_$$9__61_0(System::Func_2<::Il2CppString*, bool>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__64_0
    static System::Action_1<::Il2CppObject*>* _get_$$9__64_0();
    // Set static field: static public System.Action`1<System.Object> <>9__64_0
    static void _set_$$9__64_0(System::Action_1<::Il2CppObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1408E84
    static void _cctor();
    // System.Boolean <CreateWebRequest>b__61_0(System.String l)
    // Offset: 0x1408EF0
    bool $CreateWebRequest$b__61_0(::Il2CppString* l);
    // System.Void <SendAsync>b__64_0(System.Object l)
    // Offset: 0x1408F44
    void $SendAsync$b__64_0(::Il2CppObject* l);
    // public System.Void .ctor()
    // Offset: 0x1408EE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpClientHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpClientHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpClientHandler::$$c*, creationType>()));
    }
  }; // System.Net.Http.HttpClientHandler/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClientHandler::$$c*, "System.Net.Http", "HttpClientHandler/<>c");
