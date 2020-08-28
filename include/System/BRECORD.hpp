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
// Type namespace: System
namespace System {
  // Autogenerated type: System.BRECORD
  struct BRECORD : public System::ValueType {
    public:
    // private System.IntPtr pvRecord
    // Offset: 0x0
    System::IntPtr pvRecord;
    // private System.IntPtr pRecInfo
    // Offset: 0x8
    System::IntPtr pRecInfo;
    // Creating value type constructor for type: BRECORD
    constexpr BRECORD(System::IntPtr pvRecord_ = {}, System::IntPtr pRecInfo_ = {}) : pvRecord{pvRecord_}, pRecInfo{pRecInfo_} {}
  }; // System.BRECORD
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::BRECORD, "System", "BRECORD");
#pragma pack(pop)
