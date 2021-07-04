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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
  // [UnmanagedFunctionPointerAttribute] Offset: DCD6AC
  class IVRApplications::_CancelApplicationLaunch : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CancelApplicationLaunch
    _CancelApplicationLaunch() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B40DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_CancelApplicationLaunch* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_CancelApplicationLaunch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_CancelApplicationLaunch*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey)
    // Offset: 0x15A5B70
    bool Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B40EC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B4110
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_CancelApplicationLaunch*, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_CancelApplicationLaunch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_CancelApplicationLaunch::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_CancelApplicationLaunch::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_CancelApplicationLaunch::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
