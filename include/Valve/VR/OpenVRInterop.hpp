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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.OpenVRInterop
  // [] Offset: FFFFFFFF
  class OpenVRInterop : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OpenVRInterop
    OpenVRInterop() noexcept {}
    // static System.UInt32 InitInternal(ref Valve.VR.EVRInitError peError, Valve.VR.EVRApplicationType eApplicationType)
    // Offset: 0x19A9B84
    static uint InitInternal(Valve::VR::EVRInitError& peError, Valve::VR::EVRApplicationType eApplicationType);
    // static System.Void ShutdownInternal()
    // Offset: 0x19A9C18
    static void ShutdownInternal();
    // static System.Boolean IsHmdPresent()
    // Offset: 0x19A9C8C
    static bool IsHmdPresent();
    // static System.Boolean IsRuntimeInstalled()
    // Offset: 0x19A9D0C
    static bool IsRuntimeInstalled();
    // static System.IntPtr GetStringForHmdError(Valve.VR.EVRInitError error)
    // Offset: 0x19A9E00
    static System::IntPtr GetStringForHmdError(Valve::VR::EVRInitError error);
    // static System.IntPtr GetGenericInterface(in System.String pchInterfaceVersion, ref Valve.VR.EVRInitError peError)
    // Offset: 0x19A9E84
    static System::IntPtr GetGenericInterface(::Il2CppString*& pchInterfaceVersion, Valve::VR::EVRInitError& peError);
    // static System.Boolean IsInterfaceVersionValid(in System.String pchInterfaceVersion)
    // Offset: 0x19A9F30
    static bool IsInterfaceVersionValid(::Il2CppString*& pchInterfaceVersion);
    // static System.UInt32 GetInitToken()
    // Offset: 0x19A9FD0
    static uint GetInitToken();
    // public System.Void .ctor()
    // Offset: 0x19AB2B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVRInterop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::OpenVRInterop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVRInterop*, creationType>()));
    }
  }; // Valve.VR.OpenVRInterop
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::OpenVRInterop*, "Valve.VR", "OpenVRInterop");
