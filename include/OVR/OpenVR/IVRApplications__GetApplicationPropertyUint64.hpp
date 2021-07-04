// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
  // [UnmanagedFunctionPointerAttribute] Offset: DCD724
  class IVRApplications::_GetApplicationPropertyUint64 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationPropertyUint64
    _GetApplicationPropertyUint64() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B475C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyUint64* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyUint64*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, ref OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0x15A7180
    uint64_t Invoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, ref OVR.OpenVR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B476C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, OVR::OpenVR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(ref OVR.OpenVR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x15B4828
    uint64_t EndInvoke(OVR::OpenVR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
