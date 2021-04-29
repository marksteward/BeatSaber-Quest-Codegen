// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.WaitForSeconds
  // [RequiredByNativeCodeAttribute] Offset: CBB0CC
  class WaitForSeconds : public UnityEngine::YieldInstruction {
    public:
    // System.Single m_Seconds
    // Size: 0x4
    // Offset: 0x10
    float m_Seconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: WaitForSeconds
    WaitForSeconds(float m_Seconds_ = {}) noexcept : m_Seconds{m_Seconds_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return m_Seconds;
    }
    // public System.Void .ctor(System.Single seconds)
    // Offset: 0x21B2CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForSeconds* New_ctor(float seconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::WaitForSeconds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForSeconds*, creationType>(seconds)));
    }
  }; // UnityEngine.WaitForSeconds
  #pragma pack(pop)
  static check_size<sizeof(WaitForSeconds), 16 + sizeof(float)> __UnityEngine_WaitForSecondsSizeCheck;
  static_assert(sizeof(WaitForSeconds) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForSeconds*, "UnityEngine", "WaitForSeconds");
