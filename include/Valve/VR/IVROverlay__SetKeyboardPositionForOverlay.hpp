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
  // Forward declaring type: HmdRect2_t
  struct HmdRect2_t;
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
  // Autogenerated type: Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: DD44DC
  class IVROverlay::_SetKeyboardPositionForOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetKeyboardPositionForOverlay
    _SetKeyboardPositionForOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCEDFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetKeyboardPositionForOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetKeyboardPositionForOverlay*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdRect2_t avoidRect)
    // Offset: 0x1FCEE0C
    void Invoke(uint64_t ulOverlayHandle, Valve::VR::HmdRect2_t avoidRect);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdRect2_t avoidRect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCF0D8
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::HmdRect2_t avoidRect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FCF188
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay*, "Valve.VR", "IVROverlay/_SetKeyboardPositionForOverlay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::*)(uint64_t, Valve::VR::HmdRect2_t)>(&Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* avoidRect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdRect2_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, avoidRect});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::*)(uint64_t, Valve::VR::HmdRect2_t, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* avoidRect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdRect2_t")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, avoidRect, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
