// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAuthenticationTokenProvider
#include "GlobalNamespace/PlatformAuthenticationTokenProvider.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: PlatformAuthenticationTokenProvider/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF144
  class PlatformAuthenticationTokenProvider::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly PlatformAuthenticationTokenProvider/<>c <>9
    static GlobalNamespace::PlatformAuthenticationTokenProvider::$$c* _get_$$9();
    // Set static field: static public readonly PlatformAuthenticationTokenProvider/<>c <>9
    static void _set_$$9(GlobalNamespace::PlatformAuthenticationTokenProvider::$$c* value);
    // Get static field: static public System.Func`2<System.String,System.Byte> <>9__8_0
    static System::Func_2<::Il2CppString*, uint8_t>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.String,System.Byte> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<::Il2CppString*, uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0xF08680
    static void _cctor();
    // System.Byte <GetAuthenticationToken>b__8_0(System.String s)
    // Offset: 0xF086F0
    uint8_t $GetAuthenticationToken$b__8_0(::Il2CppString* s);
    // public System.Void .ctor()
    // Offset: 0xF086E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAuthenticationTokenProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAuthenticationTokenProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAuthenticationTokenProvider::$$c*, creationType>()));
    }
  }; // PlatformAuthenticationTokenProvider/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAuthenticationTokenProvider::$$c*, "", "PlatformAuthenticationTokenProvider/<>c");
#pragma pack(pop)
