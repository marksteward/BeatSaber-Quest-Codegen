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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired
  // [UnmanagedFunctionPointerAttribute] Offset: DD3E9C
  class IVRCompositor::_GetVulkanDeviceExtensionsRequired : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVulkanDeviceExtensionsRequired
    _GetVulkanDeviceExtensionsRequired() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FBE520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetVulkanDeviceExtensionsRequired* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetVulkanDeviceExtensionsRequired*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1FBE530
    uint Invoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FBE7CC
    System::IAsyncResult* BeginInvoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FBE884
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*, "Valve.VR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired");
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
