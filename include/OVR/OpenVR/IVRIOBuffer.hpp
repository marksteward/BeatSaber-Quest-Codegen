// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer
  // [] Offset: FFFFFFFF
  struct IVRIOBuffer/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRIOBuffer::_Open
    class _Open;
    // Nested type: OVR::OpenVR::IVRIOBuffer::_Close
    class _Close;
    // Nested type: OVR::OpenVR::IVRIOBuffer::_Read
    class _Read;
    // Nested type: OVR::OpenVR::IVRIOBuffer::_Write
    class _Write;
    // Nested type: OVR::OpenVR::IVRIOBuffer::_PropertyContainer
    class _PropertyContainer;
    // OVR.OpenVR.IVRIOBuffer/_Open Open
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRIOBuffer::_Open* Open;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer::_Open*) == 0x8);
    // OVR.OpenVR.IVRIOBuffer/_Close Close
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRIOBuffer::_Close* Close;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer::_Close*) == 0x8);
    // OVR.OpenVR.IVRIOBuffer/_Read Read
    // Size: 0x8
    // Offset: 0x10
    OVR::OpenVR::IVRIOBuffer::_Read* Read;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer::_Read*) == 0x8);
    // OVR.OpenVR.IVRIOBuffer/_Write Write
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::IVRIOBuffer::_Write* Write;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer::_Write*) == 0x8);
    // OVR.OpenVR.IVRIOBuffer/_PropertyContainer PropertyContainer
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::IVRIOBuffer::_PropertyContainer* PropertyContainer;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*) == 0x8);
    // Creating value type constructor for type: IVRIOBuffer
    constexpr IVRIOBuffer(OVR::OpenVR::IVRIOBuffer::_Open* Open_ = {}, OVR::OpenVR::IVRIOBuffer::_Close* Close_ = {}, OVR::OpenVR::IVRIOBuffer::_Read* Read_ = {}, OVR::OpenVR::IVRIOBuffer::_Write* Write_ = {}, OVR::OpenVR::IVRIOBuffer::_PropertyContainer* PropertyContainer_ = {}) noexcept : Open{Open_}, Close{Close_}, Read{Read_}, Write{Write_}, PropertyContainer{PropertyContainer_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.IVRIOBuffer
  static check_size<sizeof(IVRIOBuffer), 32 + sizeof(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*)> __OVR_OpenVR_IVRIOBufferSizeCheck;
  static_assert(sizeof(IVRIOBuffer) == 0x28);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer, "OVR.OpenVR", "IVRIOBuffer");
