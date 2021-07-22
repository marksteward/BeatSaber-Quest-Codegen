// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
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
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetCurrentFadeColor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DC01A0
  class IVRCompositor::_GetCurrentFadeColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCurrentFadeColor
    _GetCurrentFadeColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FFB8E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCurrentFadeColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetCurrentFadeColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCurrentFadeColor*, creationType>(object, method)));
    }
    // public Valve.VR.HmdColor_t Invoke(System.Boolean bBackground)
    // Offset: 0x1FFB8F8
    Valve::VR::HmdColor_t Invoke(bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FFBB7C
    System::IAsyncResult* BeginInvoke(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdColor_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FFBC0C
    Valve::VR::HmdColor_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetCurrentFadeColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCurrentFadeColor*, "Valve.VR", "IVRCompositor/_GetCurrentFadeColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCurrentFadeColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCurrentFadeColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdColor_t (Valve::VR::IVRCompositor::_GetCurrentFadeColor::*)(bool)>(&Valve::VR::IVRCompositor::_GetCurrentFadeColor::Invoke)> {
  static const MethodInfo* get() {
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCurrentFadeColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bBackground});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRCompositor::_GetCurrentFadeColor::*)(bool, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCurrentFadeColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bBackground, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCurrentFadeColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdColor_t (Valve::VR::IVRCompositor::_GetCurrentFadeColor::*)(System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetCurrentFadeColor::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCurrentFadeColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
