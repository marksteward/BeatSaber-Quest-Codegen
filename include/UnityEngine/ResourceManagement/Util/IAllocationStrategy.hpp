// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.IAllocationStrategy
  class IAllocationStrategy {
    public:
    // Creating value type constructor for type: IAllocationStrategy
    IAllocationStrategy() noexcept {}
    // public System.Object New(System.Type type, System.Int32 typeHash)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* New(System::Type* type, int typeHash);
    // public System.Void Release(System.Int32 typeHash, System.Object obj)
    // Offset: 0xFFFFFFFF
    void Release(int typeHash, ::Il2CppObject* obj);
  }; // UnityEngine.ResourceManagement.Util.IAllocationStrategy
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "IAllocationStrategy");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IAllocationStrategy::New
// Il2CppName: New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(System::Type*, int)>(&UnityEngine::ResourceManagement::Util::IAllocationStrategy::New)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IAllocationStrategy*), "New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, typeHash});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(int, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release)> {
  const MethodInfo* get() {
    static auto* typeHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IAllocationStrategy*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeHash, obj});
  }
};
