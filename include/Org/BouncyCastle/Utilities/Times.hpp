// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Times
  // [TokenAttribute] Offset: FFFFFFFF
  class Times : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Times
    Times() noexcept {}
    // Get static field: static private System.Int64 NanosecondsPerTick
    static int64_t _get_NanosecondsPerTick();
    // Set static field: static private System.Int64 NanosecondsPerTick
    static void _set_NanosecondsPerTick(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x1F7E208
    static void _cctor();
    // static public System.Int64 NanoTime()
    // Offset: 0x1F7E150
    static int64_t NanoTime();
  }; // Org.BouncyCastle.Utilities.Times
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Times*, "Org.BouncyCastle.Utilities", "Times");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Times::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Times::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Times*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Times::NanoTime
// Il2CppName: NanoTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Org::BouncyCastle::Utilities::Times::NanoTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Times*), "NanoTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
