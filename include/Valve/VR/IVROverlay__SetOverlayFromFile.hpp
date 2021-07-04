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
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayFromFile
  // [UnmanagedFunctionPointerAttribute] Offset: DD439C
  class IVROverlay::_SetOverlayFromFile : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayFromFile
    _SetOverlayFromFile() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FD0780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayFromFile* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetOverlayFromFile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayFromFile*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.String pchFilePath)
    // Offset: 0x1FD0790
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.String pchFilePath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FD0A14
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FD0AA8
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayFromFile
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayFromFile*, "Valve.VR", "IVROverlay/_SetOverlayFromFile");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFromFile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFromFile::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFromFile::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFromFile::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
