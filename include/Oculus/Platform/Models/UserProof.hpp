// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.UserProof
  // [TokenAttribute] Offset: FFFFFFFF
  class UserProof : public ::Il2CppObject {
    public:
    // public readonly System.String Value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UserProof
    UserProof(::Il2CppString* Value_ = {}) noexcept : Value{Value_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Value;
    }
    // Get instance field: public readonly System.String Value
    ::Il2CppString* _get_Value();
    // Set instance field: public readonly System.String Value
    void _set_Value(::Il2CppString* value);
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14A8F50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserProof* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::UserProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserProof*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.UserProof
  #pragma pack(pop)
  static check_size<sizeof(UserProof), 16 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_UserProofSizeCheck;
  static_assert(sizeof(UserProof) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserProof*, "Oculus.Platform.Models", "UserProof");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::UserProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
