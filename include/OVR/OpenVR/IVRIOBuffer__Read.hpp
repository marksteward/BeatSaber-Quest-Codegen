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
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Read
  // [UnmanagedFunctionPointerAttribute] Offset: DCE958
  class IVRIOBuffer::_Read : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _Read
    _Read() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE6BDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_Read* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRIOBuffer::_Read::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_Read*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0x1EE6BEC
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE6EA4
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(ref System.UInt32 punRead, System.IAsyncResult result)
    // Offset: 0x1EE6F8C
    OVR::OpenVR::EIOBufferError EndInvoke(uint& punRead, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Read
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
