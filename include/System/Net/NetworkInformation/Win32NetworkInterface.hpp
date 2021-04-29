// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.Win32_FIXED_INFO
#include "System/Net/NetworkInformation/Win32_FIXED_INFO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32NetworkInterface
  class Win32NetworkInterface : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Win32NetworkInterface
    Win32NetworkInterface() noexcept {}
    // Get static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
    static System::Net::NetworkInformation::Win32_FIXED_INFO _get_fixedInfo();
    // Set static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
    static void _set_fixedInfo(System::Net::NetworkInformation::Win32_FIXED_INFO value);
    // Get static field: static private System.Boolean initialized
    static bool _get_initialized();
    // Set static field: static private System.Boolean initialized
    static void _set_initialized(bool value);
    // static private System.Int32 GetNetworkParams(System.IntPtr ptr, ref System.Int32 size)
    // Offset: 0x134CA94
    static int GetNetworkParams(System::IntPtr ptr, int& size);
    // static public System.Net.NetworkInformation.Win32_FIXED_INFO get_FixedInfo()
    // Offset: 0x134C284
    static System::Net::NetworkInformation::Win32_FIXED_INFO get_FixedInfo();
  }; // System.Net.NetworkInformation.Win32NetworkInterface
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32NetworkInterface*, "System.Net.NetworkInformation", "Win32NetworkInterface");
