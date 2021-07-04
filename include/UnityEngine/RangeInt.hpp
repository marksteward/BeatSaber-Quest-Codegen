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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RangeInt
  struct RangeInt/*, public System::ValueType*/ {
    public:
    // public System.Int32 start
    // Size: 0x4
    // Offset: 0x0
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x4
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RangeInt
    constexpr RangeInt(int start_ = {}, int length_ = {}) noexcept : start{start_}, length{length_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Int32 get_end()
    // Offset: 0xF05F2C
    int get_end();
    // public System.Void .ctor(System.Int32 start, System.Int32 length)
    // Offset: 0xF05F38
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RangeInt(int start, int length)
  }; // UnityEngine.RangeInt
  #pragma pack(pop)
  static check_size<sizeof(RangeInt), 4 + sizeof(int)> __UnityEngine_RangeIntSizeCheck;
  static_assert(sizeof(RangeInt) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeInt, "UnityEngine", "RangeInt");
// Writing MetadataGetter for method: UnityEngine::RangeInt::get_end
// Il2CppName: get_end
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RangeInt::RangeInt
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
