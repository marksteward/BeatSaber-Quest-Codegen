// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
  // [UnmanagedFunctionPointerAttribute] Offset: DCD864
  class IVRChaperone::_GetPlayAreaSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPlayAreaSize
    _GetPlayAreaSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B57D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x15AAA0C
    bool Invoke(float& pSizeX, float& pSizeZ);
    // public System.IAsyncResult BeginInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B57E0
    System::IAsyncResult* BeginInvoke(float& pSizeX, float& pSizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0x15B588C
    bool EndInvoke(float& pSizeX, float& pSizeZ, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
