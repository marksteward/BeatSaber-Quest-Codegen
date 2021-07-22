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
// Including type: Valve.VR.RenderModel_t
#include "Valve/VR/RenderModel_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_t_Packed/*, public System::ValueType*/ {
    public:
    // public System.IntPtr rVertexData
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr rVertexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 unVertexCount
    // Size: 0x4
    // Offset: 0x8
    uint unVertexCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr rIndexData
    // Size: 0x8
    // Offset: 0xC
    System::IntPtr rIndexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 unTriangleCount
    // Size: 0x4
    // Offset: 0x14
    uint unTriangleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 diffuseTextureId
    // Size: 0x4
    // Offset: 0x18
    int diffuseTextureId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderModel_t_Packed
    constexpr RenderModel_t_Packed(System::IntPtr rVertexData_ = {}, uint unVertexCount_ = {}, System::IntPtr rIndexData_ = {}, uint unTriangleCount_ = {}, int diffuseTextureId_ = {}) noexcept : rVertexData{rVertexData_}, unVertexCount{unVertexCount_}, rIndexData{rIndexData_}, unTriangleCount{unTriangleCount_}, diffuseTextureId{diffuseTextureId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(Valve.VR.RenderModel_t unpacked)
    // Offset: 0xF0D5AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderModel_t_Packed(Valve::VR::RenderModel_t unpacked) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::RenderModel_t_Packed::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(unpacked)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, unpacked);
    }
    // public System.Void Unpack(ref Valve.VR.RenderModel_t unpacked)
    // Offset: 0xF0D5CC
    void Unpack(Valve::VR::RenderModel_t& unpacked);
  }; // Valve.VR.RenderModel_t_Packed
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_t_Packed), 24 + sizeof(int)> __Valve_VR_RenderModel_t_PackedSizeCheck;
  static_assert(sizeof(RenderModel_t_Packed) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_t_Packed, "Valve.VR", "RenderModel_t_Packed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::RenderModel_t_Packed::RenderModel_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::RenderModel_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::RenderModel_t_Packed::*)(Valve::VR::RenderModel_t&)>(&Valve::VR::RenderModel_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::RenderModel_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
