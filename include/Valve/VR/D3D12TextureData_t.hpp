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
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.D3D12TextureData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct D3D12TextureData_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr m_pResource
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_pResource;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pCommandQueue
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr m_pCommandQueue;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 m_nNodeMask
    // Size: 0x4
    // Offset: 0x10
    uint m_nNodeMask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: D3D12TextureData_t
    constexpr D3D12TextureData_t(System::IntPtr m_pResource_ = {}, System::IntPtr m_pCommandQueue_ = {}, uint m_nNodeMask_ = {}) noexcept : m_pResource{m_pResource_}, m_pCommandQueue{m_pCommandQueue_}, m_nNodeMask{m_nNodeMask_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.D3D12TextureData_t
  #pragma pack(pop)
  static check_size<sizeof(D3D12TextureData_t), 16 + sizeof(uint)> __Valve_VR_D3D12TextureData_tSizeCheck;
  static_assert(sizeof(D3D12TextureData_t) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::D3D12TextureData_t, "Valve.VR", "D3D12TextureData_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
