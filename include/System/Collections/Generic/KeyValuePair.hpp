// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.KeyValuePair
  class KeyValuePair : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: KeyValuePair
    KeyValuePair() noexcept {}
    // static System.String PairToString(System.Object key, System.Object value)
    // Offset: 0x1786BC8
    static ::Il2CppString* PairToString(::Il2CppObject* key, ::Il2CppObject* value);
  }; // System.Collections.Generic.KeyValuePair
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::KeyValuePair*, "System.Collections.Generic", "KeyValuePair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::KeyValuePair::PairToString
// Il2CppName: PairToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Generic::KeyValuePair::PairToString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::KeyValuePair*), "PairToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
