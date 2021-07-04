// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.PingResult
  class PingResult : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE014F4
    // private System.UInt64 <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Nullable`1<System.UInt64> pingTimeUsec
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Nullable_1<uint64_t> pingTimeUsec;
    // Creating value type constructor for type: PingResult
    PingResult(uint64_t _ID_ = {}, System::Nullable_1<uint64_t> pingTimeUsec_ = {}) noexcept : _ID{_ID_}, pingTimeUsec{pingTimeUsec_} {}
    // public System.Void .ctor(System.UInt64 id, System.Nullable`1<System.UInt64> pingTimeUsec)
    // Offset: 0x14D383C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PingResult* New_ctor(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::PingResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PingResult*, creationType>(id, pingTimeUsec)));
    }
    // public System.UInt64 get_ID()
    // Offset: 0x14D7138
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0x14D7140
    void set_ID(uint64_t value);
    // public System.UInt64 get_PingTimeUsec()
    // Offset: 0x14D7148
    uint64_t get_PingTimeUsec();
    // public System.Boolean get_IsTimeout()
    // Offset: 0x14D71B0
    bool get_IsTimeout();
  }; // Oculus.Platform.Models.PingResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PingResult*, "Oculus.Platform.Models", "PingResult");
// Writing MetadataGetter for method: Oculus::Platform::Models::PingResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Models::PingResult::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Models::PingResult::*)()>(&Oculus::Platform::Models::PingResult::get_ID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::PingResult*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::PingResult::set_ID
// Il2CppName: set_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::PingResult::*)(uint64_t)>(&Oculus::Platform::Models::PingResult::set_ID)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::PingResult*), "set_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::PingResult::get_PingTimeUsec
// Il2CppName: get_PingTimeUsec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Models::PingResult::*)()>(&Oculus::Platform::Models::PingResult::get_PingTimeUsec)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::PingResult*), "get_PingTimeUsec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::PingResult::get_IsTimeout
// Il2CppName: get_IsTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Models::PingResult::*)()>(&Oculus::Platform::Models::PingResult::get_IsTimeout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::PingResult*), "get_IsTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
