// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetComponentButtonMask
  // [UnmanagedFunctionPointerAttribute] Offset: DD461C
  class IVRRenderModels::_GetComponentButtonMask : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentButtonMask
    _GetComponentButtonMask() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8A118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentButtonMask* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_GetComponentButtonMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentButtonMask*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x1C8A128
    uint64_t Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8A518
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C8A548
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetComponentButtonMask
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetComponentButtonMask*, "Valve.VR", "IVRRenderModels/_GetComponentButtonMask");
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
