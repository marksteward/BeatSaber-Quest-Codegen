// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRSystem/OVR.OpenVR._PollNextEventPacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBBF04
  class CVRSystem::_PollNextEventPacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEventPacked
    _PollNextEventPacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15860EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_PollNextEventPacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRSystem::_PollNextEventPacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_PollNextEventPacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1585038
    bool Invoke(OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15860FC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0x15861B0
    bool EndInvoke(OVR::OpenVR::VREvent_t_Packed& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRSystem/OVR.OpenVR._PollNextEventPacked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::_PollNextEventPacked*, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_PollNextEventPacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_PollNextEventPacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::_PollNextEventPacked::*)(OVR::OpenVR::VREvent_t_Packed&, uint)>(&OVR::OpenVR::CVRSystem::_PollNextEventPacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t_Packed")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_PollNextEventPacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_PollNextEventPacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::CVRSystem::_PollNextEventPacked::*)(OVR::OpenVR::VREvent_t_Packed&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::CVRSystem::_PollNextEventPacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t_Packed")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_PollNextEventPacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSystem::_PollNextEventPacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::_PollNextEventPacked::*)(OVR::OpenVR::VREvent_t_Packed&, System::IAsyncResult*)>(&OVR::OpenVR::CVRSystem::_PollNextEventPacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t_Packed")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSystem::_PollNextEventPacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, result});
  }
};
