// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerAvailabilityData/UserMessage
#include "GlobalNamespace/MasterServerAvailabilityData_UserMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerAvailabilityData/UserMessage/LocalizedMessage
  class MasterServerAvailabilityData::UserMessage::LocalizedMessage : public ::Il2CppObject {
    public:
    // public System.String language
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* language;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LocalizedMessage
    LocalizedMessage(::Il2CppString* language_ = {}, ::Il2CppString* message_ = {}) noexcept : language{language_}, message{message_} {}
    // public System.Void .ctor()
    // Offset: 0x2406528
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerAvailabilityData::UserMessage::LocalizedMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerAvailabilityData::UserMessage::LocalizedMessage*, creationType>()));
    }
  }; // MasterServerAvailabilityData/UserMessage/LocalizedMessage
  #pragma pack(pop)
  static check_size<sizeof(MasterServerAvailabilityData::UserMessage::LocalizedMessage), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerAvailabilityData_UserMessage_LocalizedMessageSizeCheck;
  static_assert(sizeof(MasterServerAvailabilityData::UserMessage::LocalizedMessage) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*, "", "MasterServerAvailabilityData/UserMessage/LocalizedMessage");
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
