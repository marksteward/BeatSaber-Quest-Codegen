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
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenVRInterop : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OpenVRInterop
    OpenVRInterop() noexcept {}
    // static System.UInt32 InitInternal(ref OVR.OpenVR.EVRInitError peError, OVR.OpenVR.EVRApplicationType eApplicationType)
    // Offset: 0x124864C
    static uint InitInternal(OVR::OpenVR::EVRInitError& peError, OVR::OpenVR::EVRApplicationType eApplicationType);
    // static System.UInt32 InitInternal2(ref OVR.OpenVR.EVRInitError peError, OVR.OpenVR.EVRApplicationType eApplicationType, in System.String pStartupInfo)
    // Offset: 0x12486E0
    static uint InitInternal2(OVR::OpenVR::EVRInitError& peError, OVR::OpenVR::EVRApplicationType eApplicationType, ::Il2CppString*& pStartupInfo);
    // static System.Void ShutdownInternal()
    // Offset: 0x1248798
    static void ShutdownInternal();
    // static System.Boolean IsHmdPresent()
    // Offset: 0x124880C
    static bool IsHmdPresent();
    // static System.Boolean IsRuntimeInstalled()
    // Offset: 0x124888C
    static bool IsRuntimeInstalled();
    // static System.IntPtr GetStringForHmdError(OVR.OpenVR.EVRInitError error)
    // Offset: 0x1248980
    static System::IntPtr GetStringForHmdError(OVR::OpenVR::EVRInitError error);
    // static System.IntPtr GetGenericInterface(in System.String pchInterfaceVersion, ref OVR.OpenVR.EVRInitError peError)
    // Offset: 0x1248A04
    static System::IntPtr GetGenericInterface(::Il2CppString*& pchInterfaceVersion, OVR::OpenVR::EVRInitError& peError);
    // static System.Boolean IsInterfaceVersionValid(in System.String pchInterfaceVersion)
    // Offset: 0x1248AB0
    static bool IsInterfaceVersionValid(::Il2CppString*& pchInterfaceVersion);
    // static System.UInt32 GetInitToken()
    // Offset: 0x1248B50
    static uint GetInitToken();
    // public System.Void .ctor()
    // Offset: 0x124A0D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVRInterop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::OpenVRInterop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVRInterop*, creationType>()));
    }
  }; // OVR.OpenVR.OpenVRInterop
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OpenVRInterop*, "OVR.OpenVR", "OpenVRInterop");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::InitInternal
// Il2CppName: InitInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(OVR::OpenVR::EVRInitError&, OVR::OpenVR::EVRApplicationType)>(&OVR::OpenVR::OpenVRInterop::InitInternal)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRInitError")->this_arg;
    static auto* eApplicationType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "InitInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, eApplicationType});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::InitInternal2
// Il2CppName: InitInternal2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(OVR::OpenVR::EVRInitError&, OVR::OpenVR::EVRApplicationType, ::Il2CppString*&)>(&OVR::OpenVR::OpenVRInterop::InitInternal2)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRInitError")->this_arg;
    static auto* eApplicationType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationType")->byval_arg;
    static auto* pStartupInfo = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "InitInternal2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, eApplicationType, pStartupInfo});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::ShutdownInternal
// Il2CppName: ShutdownInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OVR::OpenVR::OpenVRInterop::ShutdownInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "ShutdownInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::IsHmdPresent
// Il2CppName: IsHmdPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&OVR::OpenVR::OpenVRInterop::IsHmdPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "IsHmdPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled
// Il2CppName: IsRuntimeInstalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "IsRuntimeInstalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::GetStringForHmdError
// Il2CppName: GetStringForHmdError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(OVR::OpenVR::EVRInitError)>(&OVR::OpenVR::OpenVRInterop::GetStringForHmdError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRInitError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "GetStringForHmdError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::GetGenericInterface
// Il2CppName: GetGenericInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*&, OVR::OpenVR::EVRInitError&)>(&OVR::OpenVR::OpenVRInterop::GetGenericInterface)> {
  static const MethodInfo* get() {
    static auto* pchInterfaceVersion = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRInitError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "GetGenericInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInterfaceVersion, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid
// Il2CppName: IsInterfaceVersionValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*&)>(&OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid)> {
  static const MethodInfo* get() {
    static auto* pchInterfaceVersion = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "IsInterfaceVersionValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInterfaceVersion});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::GetInitToken
// Il2CppName: GetInitToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&OVR::OpenVR::OpenVRInterop::GetInitToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVRInterop*), "GetInitToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVRInterop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
