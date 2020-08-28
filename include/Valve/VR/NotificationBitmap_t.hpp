// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.NotificationBitmap_t
  struct NotificationBitmap_t : public System::ValueType {
    public:
    // public System.IntPtr m_pImageData
    // Offset: 0x0
    System::IntPtr m_pImageData;
    // public System.Int32 m_nWidth
    // Offset: 0x8
    int m_nWidth;
    // public System.Int32 m_nHeight
    // Offset: 0xC
    int m_nHeight;
    // public System.Int32 m_nBytesPerPixel
    // Offset: 0x10
    int m_nBytesPerPixel;
    // Creating value type constructor for type: NotificationBitmap_t
    constexpr NotificationBitmap_t(System::IntPtr m_pImageData_ = {}, int m_nWidth_ = {}, int m_nHeight_ = {}, int m_nBytesPerPixel_ = {}) : m_pImageData{m_pImageData_}, m_nWidth{m_nWidth_}, m_nHeight{m_nHeight_}, m_nBytesPerPixel{m_nBytesPerPixel_} {}
  }; // Valve.VR.NotificationBitmap_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::NotificationBitmap_t, "Valve.VR", "NotificationBitmap_t");
#pragma pack(pop)
