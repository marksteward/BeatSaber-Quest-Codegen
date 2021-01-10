// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.IPProtectionLevel
#include "System/Net/Sockets/IPProtectionLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x18
  // Autogenerated type: System.Net.Configuration.SettingsSectionInternal
  // [] Offset: FFFFFFFF
  class SettingsSectionInternal : public ::Il2CppObject {
    public:
    // readonly System.Boolean HttpListenerUnescapeRequestUrl
    // Size: 0x1
    // Offset: 0x10
    bool HttpListenerUnescapeRequestUrl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HttpListenerUnescapeRequestUrl and: IPProtectionLevel
    char __padding0[0x3] = {};
    // readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    // Size: 0x4
    // Offset: 0x14
    System::Net::Sockets::IPProtectionLevel IPProtectionLevel;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::IPProtectionLevel) == 0x4);
    // Creating value type constructor for type: SettingsSectionInternal
    SettingsSectionInternal(bool HttpListenerUnescapeRequestUrl_ = {}, System::Net::Sockets::IPProtectionLevel IPProtectionLevel_ = {}) noexcept : HttpListenerUnescapeRequestUrl{HttpListenerUnescapeRequestUrl_}, IPProtectionLevel{IPProtectionLevel_} {}
    // Get static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static System::Net::Configuration::SettingsSectionInternal* _get_instance();
    // Set static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static void _set_instance(System::Net::Configuration::SettingsSectionInternal* value);
    // static System.Net.Configuration.SettingsSectionInternal get_Section()
    // Offset: 0x130CF8C
    static System::Net::Configuration::SettingsSectionInternal* get_Section();
    // System.Boolean get_Ipv6Enabled()
    // Offset: 0x130CFF4
    bool get_Ipv6Enabled();
    // static private System.Void .cctor()
    // Offset: 0x130D014
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x130CFFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsSectionInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::SettingsSectionInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsSectionInternal*, creationType>()));
    }
  }; // System.Net.Configuration.SettingsSectionInternal
  static check_size<sizeof(SettingsSectionInternal), 20 + sizeof(System::Net::Sockets::IPProtectionLevel)> __System_Net_Configuration_SettingsSectionInternalSizeCheck;
  static_assert(sizeof(SettingsSectionInternal) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
#pragma pack(pop)
