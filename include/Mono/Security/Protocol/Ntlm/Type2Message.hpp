// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type2Message
  class Type2Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.Byte[] _nonce
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* nonce;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String _targetName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* targetName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] _targetInfo
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* targetInfo;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Type2Message
    Type2Message(::Array<uint8_t>* nonce_ = {}, ::Il2CppString* targetName_ = {}, ::Array<uint8_t>* targetInfo_ = {}) noexcept : nonce{nonce_}, targetName{targetName_}, targetInfo{targetInfo_} {}
    // public System.Void .ctor(System.Byte[] message)
    // Offset: 0x1D7C76C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type2Message* New_ctor(::Array<uint8_t>* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::Type2Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type2Message*, creationType>(message)));
    }
    // public System.Byte[] get_Nonce()
    // Offset: 0x1D7B7B0
    ::Array<uint8_t>* get_Nonce();
    // public System.String get_TargetName()
    // Offset: 0x1D7C890
    ::Il2CppString* get_TargetName();
    // public System.Byte[] get_TargetInfo()
    // Offset: 0x1D7B730
    ::Array<uint8_t>* get_TargetInfo();
    // protected override System.Void Finalize()
    // Offset: 0x1D7C814
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x1D7C898
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x1D7CA20
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type2Message
  #pragma pack(pop)
  static check_size<sizeof(Type2Message), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_Protocol_Ntlm_Type2MessageSizeCheck;
  static_assert(sizeof(Type2Message) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce
// Il2CppName: get_Nonce
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName
// Il2CppName: get_TargetName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo
// Il2CppName: get_TargetInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::Finalize
// Il2CppName: Finalize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::Decode
// Il2CppName: Decode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type2Message::GetBytes
// Il2CppName: GetBytes
// Cannot perform method pointer template specialization from operators!
