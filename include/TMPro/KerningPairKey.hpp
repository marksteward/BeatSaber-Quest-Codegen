// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.KerningPairKey
  // [] Offset: FFFFFFFF
  struct KerningPairKey/*, public System::ValueType*/ {
    public:
    // public System.UInt32 ascii_Left
    // Size: 0x4
    // Offset: 0x0
    uint ascii_Left;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 ascii_Right
    // Size: 0x4
    // Offset: 0x4
    uint ascii_Right;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 key
    // Size: 0x4
    // Offset: 0x8
    uint key;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: KerningPairKey
    constexpr KerningPairKey(uint ascii_Left_ = {}, uint ascii_Right_ = {}, uint key_ = {}) noexcept : ascii_Left{ascii_Left_}, ascii_Right{ascii_Right_}, key{key_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.UInt32 ascii_left, System.UInt32 ascii_right)
    // Offset: 0xC92A18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    KerningPairKey(uint ascii_left, uint ascii_right) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningPairKey::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ascii_left, ascii_right)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ascii_left, ascii_right);
    }
  }; // TMPro.KerningPairKey
  static check_size<sizeof(KerningPairKey), 8 + sizeof(uint)> __TMPro_KerningPairKeySizeCheck;
  static_assert(sizeof(KerningPairKey) == 0xC);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningPairKey, "TMPro", "KerningPairKey");
