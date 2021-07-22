// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerAvailabilityData
#include "GlobalNamespace/MasterServerAvailabilityData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerAvailabilityData/UserMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerAvailabilityData::UserMessage : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage
    class LocalizedMessage;
    // public MasterServerAvailabilityData/UserMessage/LocalizedMessage[] localizations
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>* localizations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>*) == 0x8);
    // Creating value type constructor for type: UserMessage
    UserMessage(::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>* localizations_ = {}) noexcept : localizations{localizations_} {}
    // Creating conversion operator: operator ::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>*
    constexpr operator ::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>*() const noexcept {
      return localizations;
    }
    // public System.Void .ctor()
    // Offset: 0x117ED80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerAvailabilityData::UserMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerAvailabilityData::UserMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerAvailabilityData::UserMessage*, creationType>()));
    }
  }; // MasterServerAvailabilityData/UserMessage
  #pragma pack(pop)
  static check_size<sizeof(MasterServerAvailabilityData::UserMessage), 16 + sizeof(::Array<GlobalNamespace::MasterServerAvailabilityData::UserMessage::LocalizedMessage*>*)> __GlobalNamespace_MasterServerAvailabilityData_UserMessageSizeCheck;
  static_assert(sizeof(MasterServerAvailabilityData::UserMessage) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData::UserMessage*, "", "MasterServerAvailabilityData/UserMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityData::UserMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
