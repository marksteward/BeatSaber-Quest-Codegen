// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/OVR.OpenVR._GetPlayAreaRect
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBAD98
  class IVRChaperone::_GetPlayAreaRect : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPlayAreaRect
    _GetPlayAreaRect() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1587BCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x157D174
    bool Invoke(OVR::OpenVR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1587BDC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x1587C70
    bool EndInvoke(OVR::OpenVR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/OVR.OpenVR._GetPlayAreaRect
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::*)(OVR::OpenVR::HmdQuad_t&)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::Invoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::*)(OVR::OpenVR::HmdQuad_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::*)(OVR::OpenVR::HmdQuad_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, result});
  }
};
