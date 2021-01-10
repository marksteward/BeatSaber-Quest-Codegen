// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystemDescriptor
  class XRDisplaySubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D6E838
  // [NativeConditionalAttribute] Offset: D6E838
  // [NativeTypeAttribute] Offset: D6E838
  // [UsedByNativeCodeAttribute] Offset: D6E838
  class XRDisplaySubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRDisplaySubsystemDescriptor*> {
    public:
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass
    struct XRRenderPass;
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRMirrorViewBlitDesc
    struct XRMirrorViewBlitDesc;
    // Creating value type constructor for type: XRDisplaySubsystem
    XRDisplaySubsystem() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xD6EF34
    // [CompilerGeneratedAttribute] Offset: 0xD6EF34
    // Get static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static System::Action_1<bool>* _get_displayFocusChanged();
    // Set static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static void _set_displayFocusChanged(System::Action_1<bool>* value);
    // static private System.Void InvokeDisplayFocusChanged(System.Boolean focus)
    // Offset: 0x19F0D10
    static void InvokeDisplayFocusChanged(bool focus);
    // public System.Void .ctor()
    // Offset: 0x19F0D84
    // Implemented from: UnityEngine.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem_1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDisplaySubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRDisplaySubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDisplaySubsystem*, creationType>()));
    }
  }; // UnityEngine.XR.XRDisplaySubsystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem*, "UnityEngine.XR", "XRDisplaySubsystem");
