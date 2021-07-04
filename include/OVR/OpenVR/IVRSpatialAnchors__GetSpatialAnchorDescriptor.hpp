// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
  // [UnmanagedFunctionPointerAttribute] Offset: DCE9D0
  class IVRSpatialAnchors::_GetSpatialAnchorDescriptor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSpatialAnchorDescriptor
    _GetSpatialAnchorDescriptor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20ACA60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_GetSpatialAnchorDescriptor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_GetSpatialAnchorDescriptor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut)
    // Offset: 0x20ACA70
    OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20ACD10
    System::IAsyncResult* BeginInvoke(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref System.UInt32 punDescriptorBufferLenInOut, System.IAsyncResult result)
    // Offset: 0x20ACDC0
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(uint& punDescriptorBufferLenInOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::*)(uint, System::Text::StringBuilder*, uint&)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::Invoke)> {
  const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchDescriptorOut = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* punDescriptorBufferLenInOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, pchDescriptorOut, punDescriptorBufferLenInOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::*)(uint, System::Text::StringBuilder*, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchDescriptorOut = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* punDescriptorBufferLenInOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, pchDescriptorOut, punDescriptorBufferLenInOut, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::*)(uint&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::EndInvoke)> {
  const MethodInfo* get() {
    static auto* punDescriptorBufferLenInOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punDescriptorBufferLenInOut, result});
  }
};
