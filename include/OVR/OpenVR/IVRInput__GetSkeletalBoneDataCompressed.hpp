// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
  // Forward declaring type: EVRSkeletalMotionRange
  struct EVRSkeletalMotionRange;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed
  // [UnmanagedFunctionPointerAttribute] Offset: DCE890
  class IVRInput::_GetSkeletalBoneDataCompressed : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSkeletalBoneDataCompressed
    _GetSkeletalBoneDataCompressed() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEA560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetSkeletalBoneDataCompressed* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetSkeletalBoneDataCompressed*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, System.IntPtr pvCompressedData, System.UInt32 unCompressedSize, ref System.UInt32 punRequiredCompressedSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1EEA570
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, System::IntPtr pvCompressedData, uint unCompressedSize, uint& punRequiredCompressedSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, System.IntPtr pvCompressedData, System.UInt32 unCompressedSize, ref System.UInt32 punRequiredCompressedSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEA894
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, System::IntPtr pvCompressedData, uint unCompressedSize, uint& punRequiredCompressedSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref System.UInt32 punRequiredCompressedSize, System.IAsyncResult result)
    // Offset: 0x1EEA9D0
    OVR::OpenVR::EVRInputError EndInvoke(uint& punRequiredCompressedSize, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneDataCompressed::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
