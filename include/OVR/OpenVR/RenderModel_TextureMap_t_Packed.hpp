// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.RenderModel_TextureMap_t
#include "OVR/OpenVR/RenderModel_TextureMap_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.RenderModel_TextureMap_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_TextureMap_t_Packed/*, public System::ValueType*/ {
    public:
    // public System.UInt16 unWidth
    // Size: 0x2
    // Offset: 0x0
    uint16_t unWidth;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 unHeight
    // Size: 0x2
    // Offset: 0x2
    uint16_t unHeight;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.IntPtr rubTextureMapData
    // Size: 0x8
    // Offset: 0x4
    System::IntPtr rubTextureMapData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RenderModel_TextureMap_t_Packed
    constexpr RenderModel_TextureMap_t_Packed(uint16_t unWidth_ = {}, uint16_t unHeight_ = {}, System::IntPtr rubTextureMapData_ = {}) noexcept : unWidth{unWidth_}, unHeight{unHeight_}, rubTextureMapData{rubTextureMapData_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(OVR.OpenVR.RenderModel_TextureMap_t unpacked)
    // Offset: 0xED1CD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderModel_TextureMap_t_Packed(OVR::OpenVR::RenderModel_TextureMap_t unpacked) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::RenderModel_TextureMap_t_Packed::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(unpacked)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, unpacked);
    }
    // public System.Void Unpack(ref OVR.OpenVR.RenderModel_TextureMap_t unpacked)
    // Offset: 0xED1CE8
    void Unpack(OVR::OpenVR::RenderModel_TextureMap_t& unpacked);
  }; // OVR.OpenVR.RenderModel_TextureMap_t_Packed
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_TextureMap_t_Packed), 4 + sizeof(System::IntPtr)> __OVR_OpenVR_RenderModel_TextureMap_t_PackedSizeCheck;
  static_assert(sizeof(RenderModel_TextureMap_t_Packed) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_TextureMap_t_Packed, "OVR.OpenVR", "RenderModel_TextureMap_t_Packed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::RenderModel_TextureMap_t_Packed::RenderModel_TextureMap_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(OVR::OpenVR::RenderModel_TextureMap_t&)>(&OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_TextureMap_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::RenderModel_TextureMap_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
