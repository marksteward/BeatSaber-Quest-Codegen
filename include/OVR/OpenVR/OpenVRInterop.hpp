// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInitError
  struct EVRInitError;
  // Forward declaring type: EVRApplicationType
  struct EVRApplicationType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.OpenVRInterop
  // [] Offset: FFFFFFFF
  class OpenVRInterop : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OpenVRInterop
    OpenVRInterop() noexcept {}
    // static System.UInt32 InitInternal(ref OVR.OpenVR.EVRInitError peError, OVR.OpenVR.EVRApplicationType eApplicationType)
    // Offset: 0x1066C10
    static uint InitInternal(OVR::OpenVR::EVRInitError& peError, OVR::OpenVR::EVRApplicationType eApplicationType);
    // static System.UInt32 InitInternal2(ref OVR.OpenVR.EVRInitError peError, OVR.OpenVR.EVRApplicationType eApplicationType, in System.String pStartupInfo)
    // Offset: 0x1066CA4
    static uint InitInternal2(OVR::OpenVR::EVRInitError& peError, OVR::OpenVR::EVRApplicationType eApplicationType, ::Il2CppString*& pStartupInfo);
    // static System.Void ShutdownInternal()
    // Offset: 0x1066D5C
    static void ShutdownInternal();
    // static System.Boolean IsHmdPresent()
    // Offset: 0x1066DD0
    static bool IsHmdPresent();
    // static System.Boolean IsRuntimeInstalled()
    // Offset: 0x1066E50
    static bool IsRuntimeInstalled();
    // static System.IntPtr GetStringForHmdError(OVR.OpenVR.EVRInitError error)
    // Offset: 0x1066F44
    static System::IntPtr GetStringForHmdError(OVR::OpenVR::EVRInitError error);
    // static System.IntPtr GetGenericInterface(in System.String pchInterfaceVersion, ref OVR.OpenVR.EVRInitError peError)
    // Offset: 0x1066FC8
    static System::IntPtr GetGenericInterface(::Il2CppString*& pchInterfaceVersion, OVR::OpenVR::EVRInitError& peError);
    // static System.Boolean IsInterfaceVersionValid(in System.String pchInterfaceVersion)
    // Offset: 0x1067074
    static bool IsInterfaceVersionValid(::Il2CppString*& pchInterfaceVersion);
    // static System.UInt32 GetInitToken()
    // Offset: 0x1067114
    static uint GetInitToken();
    // public System.Void .ctor()
    // Offset: 0x1068774
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVRInterop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::OpenVRInterop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVRInterop*, creationType>()));
    }
  }; // OVR.OpenVR.OpenVRInterop
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OpenVRInterop*, "OVR.OpenVR", "OpenVRInterop");
