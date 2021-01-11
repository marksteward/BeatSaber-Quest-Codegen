// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.CertificateHandler
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D905F0
  class CertificateHandler : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: CertificateHandler
    CertificateHandler(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Void Release()
    // Offset: 0x19DD93C
    void Release();
    // protected System.Boolean ValidateCertificate(System.Byte[] certificateData)
    // Offset: 0x19DD97C
    bool ValidateCertificate(::Array<uint8_t>* certificateData);
    // System.Boolean ValidateCertificateNative(System.Byte[] certificateData)
    // Offset: 0x19DD984
    bool ValidateCertificateNative(::Array<uint8_t>* certificateData);
    // public System.Void Dispose()
    // Offset: 0x19DD990
    void Dispose();
  }; // UnityEngine.Networking.CertificateHandler
  static check_size<sizeof(CertificateHandler), 16 + sizeof(System::IntPtr)> __UnityEngine_Networking_CertificateHandlerSizeCheck;
  static_assert(sizeof(CertificateHandler) == 0x18);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
