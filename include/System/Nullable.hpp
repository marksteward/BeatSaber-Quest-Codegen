// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Nullable
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D689F8
  class Nullable : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nullable
    Nullable() noexcept {}
    // static public System.Type GetUnderlyingType(System.Type nullableType)
    // Offset: 0x1800458
    static System::Type* GetUnderlyingType(System::Type* nullableType);
  }; // System.Nullable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Nullable*, "System", "Nullable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Nullable::GetUnderlyingType
// Il2CppName: GetUnderlyingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Type*)>(&System::Nullable::GetUnderlyingType)> {
  static const MethodInfo* get() {
    static auto* nullableType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Nullable*), "GetUnderlyingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nullableType});
  }
};
