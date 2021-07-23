// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.PlatformServicesAvailabilityInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformServicesAvailabilityInfo : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability
    struct OnlineServicesAvailability;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability
    // [TokenAttribute] Offset: FFFFFFFF
    struct OnlineServicesAvailability/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: OnlineServicesAvailability
      constexpr OnlineServicesAvailability(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Available
      static constexpr const int Available = 0;
      // Get static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Available
      static OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability _get_Available();
      // Set static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Available
      static void _set_Available(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability value);
      // static field const value: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Unavailable
      static constexpr const int Unavailable = 1;
      // Get static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Unavailable
      static OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability _get_Unavailable();
      // Set static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability Unavailable
      static void _set_Unavailable(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability
    #pragma pack(pop)
    static check_size<sizeof(PlatformServicesAvailabilityInfo::OnlineServicesAvailability), 0 + sizeof(int)> __OnlineServices_PlatformServicesAvailabilityInfo_OnlineServicesAvailabilitySizeCheck;
    static_assert(sizeof(PlatformServicesAvailabilityInfo::OnlineServicesAvailability) == 0x4);
    // public readonly OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability availability
    // Size: 0x4
    // Offset: 0x10
    OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability availability;
    // Field size check
    static_assert(sizeof(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability) == 0x4);
    // Padding between fields: availability and: localizedMessage
    char __padding0[0x4] = {};
    // public readonly System.String localizedMessage
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlatformServicesAvailabilityInfo
    PlatformServicesAvailabilityInfo(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability availability_ = {}, ::Il2CppString* localizedMessage_ = {}) noexcept : availability{availability_}, localizedMessage{localizedMessage_} {}
    // Get instance field: public readonly OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability availability
    OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability _get_availability();
    // Set instance field: public readonly OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability availability
    void _set_availability(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability value);
    // Get instance field: public readonly System.String localizedMessage
    ::Il2CppString* _get_localizedMessage();
    // Set instance field: public readonly System.String localizedMessage
    void _set_localizedMessage(::Il2CppString* value);
    // static public OnlineServices.PlatformServicesAvailabilityInfo get_everythingOK()
    // Offset: 0xFF9FCC
    static OnlineServices::PlatformServicesAvailabilityInfo* get_everythingOK();
    // static public OnlineServices.PlatformServicesAvailabilityInfo get_onlineServicesUnavailableError()
    // Offset: 0xFFA0CC
    static OnlineServices::PlatformServicesAvailabilityInfo* get_onlineServicesUnavailableError();
    // private System.Void .ctor(OnlineServices.PlatformServicesAvailabilityInfo/OnlineServices.OnlineServicesAvailability availability, System.String localizedMessage)
    // Offset: 0xFFA090
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformServicesAvailabilityInfo* New_ctor(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability availability, ::Il2CppString* localizedMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::PlatformServicesAvailabilityInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformServicesAvailabilityInfo*, creationType>(availability, localizedMessage)));
    }
  }; // OnlineServices.PlatformServicesAvailabilityInfo
  #pragma pack(pop)
  static check_size<sizeof(PlatformServicesAvailabilityInfo), 24 + sizeof(::Il2CppString*)> __OnlineServices_PlatformServicesAvailabilityInfoSizeCheck;
  static_assert(sizeof(PlatformServicesAvailabilityInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformServicesAvailabilityInfo*, "OnlineServices", "PlatformServicesAvailabilityInfo");
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability, "OnlineServices", "PlatformServicesAvailabilityInfo/OnlineServicesAvailability");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::PlatformServicesAvailabilityInfo::get_everythingOK
// Il2CppName: get_everythingOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OnlineServices::PlatformServicesAvailabilityInfo* (*)()>(&OnlineServices::PlatformServicesAvailabilityInfo::get_everythingOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformServicesAvailabilityInfo*), "get_everythingOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformServicesAvailabilityInfo::get_onlineServicesUnavailableError
// Il2CppName: get_onlineServicesUnavailableError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OnlineServices::PlatformServicesAvailabilityInfo* (*)()>(&OnlineServices::PlatformServicesAvailabilityInfo::get_onlineServicesUnavailableError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformServicesAvailabilityInfo*), "get_onlineServicesUnavailableError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformServicesAvailabilityInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
