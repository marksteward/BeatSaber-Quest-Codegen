// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IEqualityComparer
  // [ComVisibleAttribute] Offset: D7FE88
  class IEqualityComparer {
    public:
    // Creating value type constructor for type: IEqualityComparer
    IEqualityComparer() noexcept {}
    // public System.Boolean Equals(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    bool Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.IEqualityComparer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IEqualityComparer*, "System.Collections", "IEqualityComparer");
// Writing MetadataGetter for method: System::Collections::IEqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::IEqualityComparer::Equals)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IEqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::IEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::IEqualityComparer::*)(::Il2CppObject*)>(&System::Collections::IEqualityComparer::GetHashCode)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IEqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
