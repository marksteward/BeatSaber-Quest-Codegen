// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_PropertyContainer
  // [UnmanagedFunctionPointerAttribute] Offset: DCE980
  class IVRIOBuffer::_PropertyContainer : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PropertyContainer
    _PropertyContainer() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE68B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_PropertyContainer* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRIOBuffer::_PropertyContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_PropertyContainer*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.UInt64 ulBuffer)
    // Offset: 0x1EE68C0
    uint64_t Invoke(uint64_t ulBuffer);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE6B24
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EE6BB0
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_PropertyContainer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_PropertyContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_PropertyContainer::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRIOBuffer::_PropertyContainer::*)(uint64_t)>(&OVR::OpenVR::IVRIOBuffer::_PropertyContainer::Invoke)> {
  const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_PropertyContainer::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRIOBuffer::_PropertyContainer::*)(uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRIOBuffer::_PropertyContainer::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_PropertyContainer::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRIOBuffer::_PropertyContainer::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRIOBuffer::_PropertyContainer::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
