// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: Valve.VR.IVROverlay/_IsDashboardVisible
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89E5C
  class IVROverlay::_IsDashboardVisible : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsDashboardVisible
    _IsDashboardVisible() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18F7358
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_IsDashboardVisible* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_IsDashboardVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_IsDashboardVisible*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x18F736C
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x18F7584
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x18F75B0
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_IsDashboardVisible
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_IsDashboardVisible*, "Valve.VR", "IVROverlay/_IsDashboardVisible");
#pragma pack(pop)
