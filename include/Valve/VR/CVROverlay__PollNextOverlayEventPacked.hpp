// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVROverlay
#include "Valve/VR/CVROverlay.hpp"
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
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
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
  // Autogenerated type: Valve.VR.CVROverlay/_PollNextOverlayEventPacked
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A334
  class CVROverlay::_PollNextOverlayEventPacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextOverlayEventPacked
    _PollNextOverlayEventPacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136AC20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVROverlay::_PollNextOverlayEventPacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVROverlay::_PollNextOverlayEventPacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVROverlay::_PollNextOverlayEventPacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x136A54C
    bool Invoke(uint64_t ulOverlayHandle, Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136AC34
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0x136AD08
    bool EndInvoke(Valve::VR::VREvent_t_Packed& pEvent, System::IAsyncResult* result);
  }; // Valve.VR.CVROverlay/_PollNextOverlayEventPacked
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVROverlay::_PollNextOverlayEventPacked*, "Valve.VR", "CVROverlay/_PollNextOverlayEventPacked");
