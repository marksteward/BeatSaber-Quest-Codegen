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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceResponsePacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NatPunchModule::NatIntroduceResponsePacket : public ::Il2CppObject {
    public:
    // private System.Net.IPEndPoint <Internal>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPEndPoint* Internal;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.IPEndPoint <External>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Net::IPEndPoint* External;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.String <Token>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NatIntroduceResponsePacket
    NatIntroduceResponsePacket(System::Net::IPEndPoint* Internal_ = {}, System::Net::IPEndPoint* External_ = {}, ::Il2CppString* Token_ = {}) noexcept : Internal{Internal_}, External{External_}, Token{Token_} {}
    // public System.Net.IPEndPoint get_Internal()
    // Offset: 0x1BB1774
    System::Net::IPEndPoint* get_Internal();
    // public System.Void set_Internal(System.Net.IPEndPoint value)
    // Offset: 0x1BB177C
    void set_Internal(System::Net::IPEndPoint* value);
    // public System.Net.IPEndPoint get_External()
    // Offset: 0x1BB1784
    System::Net::IPEndPoint* get_External();
    // public System.Void set_External(System.Net.IPEndPoint value)
    // Offset: 0x1BB178C
    void set_External(System::Net::IPEndPoint* value);
    // public System.String get_Token()
    // Offset: 0x1BB1794
    ::Il2CppString* get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x1BB179C
    void set_Token(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1BB08C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule::NatIntroduceResponsePacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule::NatIntroduceResponsePacket*, creationType>()));
    }
  }; // LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceResponsePacket
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule::NatIntroduceResponsePacket), 32 + sizeof(::Il2CppString*)> __LiteNetLib_NatPunchModule_NatIntroduceResponsePacketSizeCheck;
  static_assert(sizeof(NatPunchModule::NatIntroduceResponsePacket) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*, "LiteNetLib", "NatPunchModule/NatIntroduceResponsePacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)()>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_Internal
// Il2CppName: set_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)(System::Net::IPEndPoint*)>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_Internal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "set_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_External
// Il2CppName: get_External
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)()>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_External)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "get_External", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_External
// Il2CppName: set_External
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)(System::Net::IPEndPoint*)>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_External)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "set_External", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)()>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_Token
// Il2CppName: set_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::*)(::Il2CppString*)>(&LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::set_Token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceResponsePacket*), "set_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceResponsePacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
