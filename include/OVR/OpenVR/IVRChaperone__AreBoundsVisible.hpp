// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_AreBoundsVisible
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D846F0
  class IVRChaperone::_AreBoundsVisible : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _AreBoundsVisible
    _AreBoundsVisible() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FAC24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_AreBoundsVisible* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_AreBoundsVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_AreBoundsVisible*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x11F0C78
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FAC38
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FAC64
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_AreBoundsVisible
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_AreBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_AreBoundsVisible");
#pragma pack(pop)
