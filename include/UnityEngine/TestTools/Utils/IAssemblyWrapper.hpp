// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.IAssemblyWrapper
  class IAssemblyWrapper {
    public:
    // Creating value type constructor for type: IAssemblyWrapper
    IAssemblyWrapper() noexcept {}
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xFFFFFFFF
    System::Reflection::Assembly* get_Assembly();
  }; // UnityEngine.TestTools.Utils.IAssemblyWrapper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::IAssemblyWrapper*, "UnityEngine.TestTools.Utils", "IAssemblyWrapper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::IAssemblyWrapper::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (UnityEngine::TestTools::Utils::IAssemblyWrapper::*)()>(&UnityEngine::TestTools::Utils::IAssemblyWrapper::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::IAssemblyWrapper*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
