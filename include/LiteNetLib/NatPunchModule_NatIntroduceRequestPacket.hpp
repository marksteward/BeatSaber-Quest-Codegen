// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NatPunchModule
#include "LiteNetLib/NatPunchModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
  class NatPunchModule::NatIntroduceRequestPacket : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD0A2EC
    // private System.Net.IPEndPoint <Internal>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPEndPoint* Internal;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD0A2FC
    // private System.String <Token>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NatIntroduceRequestPacket
    NatIntroduceRequestPacket(System::Net::IPEndPoint* Internal_ = {}, ::Il2CppString* Token_ = {}) noexcept : Internal{Internal_}, Token{Token_} {}
    // public System.Net.IPEndPoint get_Internal()
    // Offset: 0x1A2C938
    System::Net::IPEndPoint* get_Internal();
    // public System.Void set_Internal(System.Net.IPEndPoint value)
    // Offset: 0x1A2C940
    void set_Internal(System::Net::IPEndPoint* value);
    // public System.String get_Token()
    // Offset: 0x1A2C948
    ::Il2CppString* get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x1A2C950
    void set_Token(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1A2C208
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule::NatIntroduceRequestPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule::NatIntroduceRequestPacket*, creationType>()));
    }
  }; // LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule::NatIntroduceRequestPacket), 24 + sizeof(::Il2CppString*)> __LiteNetLib_NatPunchModule_NatIntroduceRequestPacketSizeCheck;
  static_assert(sizeof(NatPunchModule::NatIntroduceRequestPacket) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
