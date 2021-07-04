// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRResources
  class CVRResources : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRResources FnTable
    // Size: 0x10
    // Offset: 0x10
    Valve::VR::IVRResources FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRResources) == 0x10);
    // Creating value type constructor for type: CVRResources
    CVRResources(Valve::VR::IVRResources FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRResources
    constexpr operator Valve::VR::IVRResources() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x16D5C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRResources* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRResources*, creationType>(pInterface)));
    }
    // public System.UInt32 LoadSharedResource(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x16D5D4C
    uint LoadSharedResource(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.UInt32 GetResourceFullPath(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x16D5D68
    uint GetResourceFullPath(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
  }; // Valve.VR.CVRResources
  #pragma pack(pop)
  static check_size<sizeof(CVRResources), 16 + sizeof(Valve::VR::IVRResources)> __Valve_VR_CVRResourcesSizeCheck;
  static_assert(sizeof(CVRResources) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRResources*, "Valve.VR", "CVRResources");
// Writing MetadataGetter for method: Valve::VR::CVRResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRResources::LoadSharedResource
// Il2CppName: LoadSharedResource
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::CVRResources::GetResourceFullPath
// Il2CppName: GetResourceFullPath
// Cannot perform method pointer template specialization from operators!
