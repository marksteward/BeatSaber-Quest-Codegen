// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.BootConfigData
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4B4E4
  class BootConfigData : public ::Il2CppObject {
    public:
    // private System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: BootConfigData
    BootConfigData(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private UnityEngine.BootConfigData WrapBootConfigData(System.IntPtr nativeHandle)
    // Offset: 0x167E0CC
    static UnityEngine::BootConfigData* WrapBootConfigData(System::IntPtr nativeHandle);
    // private System.Void .ctor(System.IntPtr nativeHandle)
    // Offset: 0x167E12C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BootConfigData* New_ctor(System::IntPtr nativeHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::BootConfigData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BootConfigData*, creationType>(nativeHandle)));
    }
  }; // UnityEngine.BootConfigData
  static check_size<sizeof(BootConfigData), 16 + sizeof(System::IntPtr)> __UnityEngine_BootConfigDataSizeCheck;
  static_assert(sizeof(BootConfigData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BootConfigData*, "UnityEngine", "BootConfigData");
#pragma pack(pop)
