// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRResources
#include "OVR/OpenVR/IVRResources.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRResources
  class CVRResources : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRResources FnTable
    // Size: 0x10
    // Offset: 0x10
    OVR::OpenVR::IVRResources FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRResources) == 0x10);
    // Creating value type constructor for type: CVRResources
    CVRResources(OVR::OpenVR::IVRResources FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRResources
    constexpr operator OVR::OpenVR::IVRResources() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x141BA0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRResources* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRResources*, creationType>(pInterface)));
    }
    // public System.UInt32 LoadSharedResource(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x141BB0C
    uint LoadSharedResource(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.UInt32 GetResourceFullPath(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x141BB28
    uint GetResourceFullPath(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
  }; // OVR.OpenVR.CVRResources
  #pragma pack(pop)
  static check_size<sizeof(CVRResources), 16 + sizeof(OVR::OpenVR::IVRResources)> __OVR_OpenVR_CVRResourcesSizeCheck;
  static_assert(sizeof(CVRResources) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRResources*, "OVR.OpenVR", "CVRResources");
