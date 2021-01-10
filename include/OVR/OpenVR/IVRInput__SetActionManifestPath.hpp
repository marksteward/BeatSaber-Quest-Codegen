// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_SetActionManifestPath
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D855F0
  class IVRInput::_SetActionManifestPath : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetActionManifestPath
    _SetActionManifestPath() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18662E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_SetActionManifestPath* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_SetActionManifestPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_SetActionManifestPath*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionManifestPath)
    // Offset: 0x18662FC
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionManifestPath);
    // public System.IAsyncResult BeginInvoke(System.String pchActionManifestPath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18666BC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionManifestPath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x18666E0
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_SetActionManifestPath
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
#pragma pack(pop)
