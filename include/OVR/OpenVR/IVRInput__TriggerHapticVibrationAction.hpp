// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
  // [UnmanagedFunctionPointerAttribute] Offset: CF421C
  class IVRInput::_TriggerHapticVibrationAction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _TriggerHapticVibrationAction
    _TriggerHapticVibrationAction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D79498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_TriggerHapticVibrationAction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_TriggerHapticVibrationAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_TriggerHapticVibrationAction*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, System.Single fStartSecondsFromNow, System.Single fDurationSeconds, System.Single fFrequency, System.Single fAmplitude, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1D794A8
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, System.Single fStartSecondsFromNow, System.Single fDurationSeconds, System.Single fFrequency, System.Single fAmplitude, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D7979C
    System::IAsyncResult* BeginInvoke(uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D798AC
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
