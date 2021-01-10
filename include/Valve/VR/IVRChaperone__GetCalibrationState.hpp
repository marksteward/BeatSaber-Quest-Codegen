// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
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
  // Autogenerated type: Valve.VR.IVRChaperone/_GetCalibrationState
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D893A8
  class IVRChaperone::_GetCalibrationState : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCalibrationState
    _GetCalibrationState() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136EF74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetCalibrationState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperone::_GetCalibrationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetCalibrationState*, creationType>(object, method)));
    }
    // public Valve.VR.ChaperoneCalibrationState Invoke()
    // Offset: 0x1367090
    Valve::VR::ChaperoneCalibrationState Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x136EF88
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ChaperoneCalibrationState EndInvoke(System.IAsyncResult result)
    // Offset: 0x136EFB4
    Valve::VR::ChaperoneCalibrationState EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_GetCalibrationState
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_GetCalibrationState*, "Valve.VR", "IVRChaperone/_GetCalibrationState");
#pragma pack(pop)
