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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
  // [UnmanagedFunctionPointerAttribute] Offset: DCE3CC
  class IVROverlay::_SetKeyboardTransformAbsolute : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetKeyboardTransformAbsolute
    _SetKeyboardTransformAbsolute() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EF7DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetKeyboardTransformAbsolute* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetKeyboardTransformAbsolute*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform)
    // Offset: 0x1EF7DD8
    void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EF8068
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.IAsyncResult result)
    // Offset: 0x1EF811C
    void EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::*)(OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::Invoke)> {
  static const MethodInfo* get() {
    static auto* eTrackingOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pmatTrackingOriginToKeyboardTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eTrackingOrigin, pmatTrackingOriginToKeyboardTransform});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::*)(OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::HmdMatrix34_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eTrackingOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pmatTrackingOriginToKeyboardTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::*)(OVR::OpenVR::HmdMatrix34_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pmatTrackingOriginToKeyboardTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pmatTrackingOriginToKeyboardTransform, result});
  }
};
