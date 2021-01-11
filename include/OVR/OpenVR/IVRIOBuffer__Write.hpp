// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
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
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Write
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85794
  class IVRIOBuffer::_Write : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _Write
    _Write() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18628C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_Write* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRIOBuffer::_Write::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_Write*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes)
    // Offset: 0x18628D8
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1862B70
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1862C3C
    OVR::OpenVR::EIOBufferError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Write
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Write*, "OVR.OpenVR", "IVRIOBuffer/_Write");
