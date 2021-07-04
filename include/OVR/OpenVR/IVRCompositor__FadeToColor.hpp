// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_FadeToColor
  // [UnmanagedFunctionPointerAttribute] Offset: DCDB70
  class IVRCompositor::_FadeToColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FadeToColor
    _FadeToColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EDDDB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_FadeToColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_FadeToColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_FadeToColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground)
    // Offset: 0x1EDDDC8
    void Invoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EDE0B8
    System::IAsyncResult* BeginInvoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EDE1C0
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_FadeToColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_FadeToColor*, "OVR.OpenVR", "IVRCompositor/_FadeToColor");
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_FadeToColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_FadeToColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRCompositor::_FadeToColor::*)(float, float, float, float, float, bool)>(&OVR::OpenVR::IVRCompositor::_FadeToColor::Invoke)> {
  const MethodInfo* get() {
    static auto* fSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fRed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fGreen = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fBlue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_FadeToColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_FadeToColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_FadeToColor::*)(float, float, float, float, float, bool, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_FadeToColor::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* fSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fRed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fGreen = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fBlue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bBackground = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_FadeToColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_FadeToColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRCompositor::_FadeToColor::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_FadeToColor::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_FadeToColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
