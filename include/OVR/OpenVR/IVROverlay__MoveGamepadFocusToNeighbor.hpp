// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85050
  class IVROverlay::_MoveGamepadFocusToNeighbor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _MoveGamepadFocusToNeighbor
    _MoveGamepadFocusToNeighbor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1871F1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_MoveGamepadFocusToNeighbor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_MoveGamepadFocusToNeighbor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom)
    // Offset: 0x1871F30
    OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18721C0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x187226C
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor*, "OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor");
