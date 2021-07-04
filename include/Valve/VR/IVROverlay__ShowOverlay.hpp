// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_ShowOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: DD420C
  class IVROverlay::_ShowOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShowOverlay
    _ShowOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C894E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_ShowOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowOverlay*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle)
    // Offset: 0x1C894F0
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C89754
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C897E0
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowOverlay*, "Valve.VR", "IVROverlay/_ShowOverlay");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowOverlay::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowOverlay::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowOverlay::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
