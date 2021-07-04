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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProviderUtil
  class ProviderUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ProviderUtil
    ProviderUtil() noexcept {}
    // static public System.Type GetTypeToInstantiate(System.Type contractType, System.Type concreteType)
    // Offset: 0x16E3304
    static System::Type* GetTypeToInstantiate(System::Type* contractType, System::Type* concreteType);
  }; // Zenject.ProviderUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderUtil*, "Zenject", "ProviderUtil");
// Writing MetadataGetter for method: Zenject::ProviderUtil::GetTypeToInstantiate
// Il2CppName: GetTypeToInstantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Type*, System::Type*)>(&Zenject::ProviderUtil::GetTypeToInstantiate)> {
  const MethodInfo* get() {
    static auto* contractType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderUtil*), "GetTypeToInstantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contractType, concreteType});
  }
};
