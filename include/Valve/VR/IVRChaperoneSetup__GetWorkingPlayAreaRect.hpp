// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  // [UnmanagedFunctionPointerAttribute] Offset: DD3A28
  class IVRChaperoneSetup::_GetWorkingPlayAreaRect : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingPlayAreaRect
    _GetWorkingPlayAreaRect() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FB7448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1FB7458
    bool Invoke(Valve::VR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FB76B8
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x1FB774C
    bool EndInvoke(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(Valve::VR::HmdQuad_t&)>(&Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::Invoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(Valve::VR::HmdQuad_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(Valve::VR::HmdQuad_t&, System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, result});
  }
};
