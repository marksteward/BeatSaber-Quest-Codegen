// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Debug
  class Debug : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Debug
    Debug() noexcept {}
    // static public System.Void Assert(System.Boolean condition)
    // Offset: 0x186971C
    static void Assert_(bool condition);
  }; // System.Diagnostics.Debug
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Debug*, "System.Diagnostics", "Debug");
// Writing MetadataGetter for method: System::Diagnostics::Debug::Assert_
// Il2CppName: Assert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&System::Diagnostics::Debug::Assert_)> {
  const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debug*), "Assert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
