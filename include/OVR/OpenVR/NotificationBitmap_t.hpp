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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.NotificationBitmap_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct NotificationBitmap_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr m_pImageData
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_pImageData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 m_nWidth
    // Size: 0x4
    // Offset: 0x8
    int m_nWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 m_nHeight
    // Size: 0x4
    // Offset: 0xC
    int m_nHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 m_nBytesPerPixel
    // Size: 0x4
    // Offset: 0x10
    int m_nBytesPerPixel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NotificationBitmap_t
    constexpr NotificationBitmap_t(System::IntPtr m_pImageData_ = {}, int m_nWidth_ = {}, int m_nHeight_ = {}, int m_nBytesPerPixel_ = {}) noexcept : m_pImageData{m_pImageData_}, m_nWidth{m_nWidth_}, m_nHeight{m_nHeight_}, m_nBytesPerPixel{m_nBytesPerPixel_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.IntPtr m_pImageData
    System::IntPtr _get_m_pImageData();
    // Set instance field: public System.IntPtr m_pImageData
    void _set_m_pImageData(System::IntPtr value);
    // Get instance field: public System.Int32 m_nWidth
    int _get_m_nWidth();
    // Set instance field: public System.Int32 m_nWidth
    void _set_m_nWidth(int value);
    // Get instance field: public System.Int32 m_nHeight
    int _get_m_nHeight();
    // Set instance field: public System.Int32 m_nHeight
    void _set_m_nHeight(int value);
    // Get instance field: public System.Int32 m_nBytesPerPixel
    int _get_m_nBytesPerPixel();
    // Set instance field: public System.Int32 m_nBytesPerPixel
    void _set_m_nBytesPerPixel(int value);
  }; // OVR.OpenVR.NotificationBitmap_t
  #pragma pack(pop)
  static check_size<sizeof(NotificationBitmap_t), 16 + sizeof(int)> __OVR_OpenVR_NotificationBitmap_tSizeCheck;
  static_assert(sizeof(NotificationBitmap_t) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::NotificationBitmap_t, "OVR.OpenVR", "NotificationBitmap_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
