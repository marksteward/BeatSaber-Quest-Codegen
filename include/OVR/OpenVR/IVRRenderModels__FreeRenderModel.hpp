// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_FreeRenderModel
  // [UnmanagedFunctionPointerAttribute] Offset: DCE458
  class IVRRenderModels::_FreeRenderModel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FreeRenderModel
    _FreeRenderModel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A156C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_FreeRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_FreeRenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_FreeRenderModel*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pRenderModel)
    // Offset: 0x20A157C
    void Invoke(System::IntPtr pRenderModel);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A17D8
    System::IAsyncResult* BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x20A1864
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_FreeRenderModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_FreeRenderModel*, "OVR.OpenVR", "IVRRenderModels/_FreeRenderModel");
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeRenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeRenderModel::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRRenderModels::_FreeRenderModel::*)(System::IntPtr)>(&OVR::OpenVR::IVRRenderModels::_FreeRenderModel::Invoke)> {
  const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeRenderModel*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeRenderModel::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_FreeRenderModel::*)(System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_FreeRenderModel::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeRenderModel*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeRenderModel::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRRenderModels::_FreeRenderModel::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_FreeRenderModel::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeRenderModel*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
