// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D44CEC
  class MobileAuthenticatedStream::$$c__DisplayClass66_0 : public ::Il2CppObject {
    public:
    // public Mono.Net.Security.MobileAuthenticatedStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    Mono::Net::Security::MobileAuthenticatedStream* $$4__this;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // public System.Int32 len
    // Size: 0x4
    // Offset: 0x18
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass66_0
    $$c__DisplayClass66_0(Mono::Net::Security::MobileAuthenticatedStream* $$4__this_ = {}, int len_ = {}) noexcept : $$4__this{$$4__this_}, len{len_} {}
    // System.Int32 <InnerRead>b__0()
    // Offset: 0x1268B50
    int $InnerRead$b__0();
    // public System.Void .ctor()
    // Offset: 0x1268B48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MobileAuthenticatedStream::$$c__DisplayClass66_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MobileAuthenticatedStream::$$c__DisplayClass66_0*, creationType>()));
    }
  }; // Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0
  static check_size<sizeof(MobileAuthenticatedStream::$$c__DisplayClass66_0), 24 + sizeof(int)> __Mono_Net_Security_MobileAuthenticatedStream_$$c__DisplayClass66_0SizeCheck;
  static_assert(sizeof(MobileAuthenticatedStream::$$c__DisplayClass66_0) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0*, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
