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
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IFormattable
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D67FF0
  class IFormattable : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IFormattable
    IFormattable() noexcept {}
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
  }; // System.IFormattable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IFormattable*, "System", "IFormattable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IFormattable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IFormattable::*)(::Il2CppString*, System::IFormatProvider*)>(&System::IFormattable::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IFormattable*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
