// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.IAssemblyWrapper
#include "UnityEngine/TestTools/Utils/IAssemblyWrapper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyWrapper
  class AssemblyWrapper : public ::Il2CppObject/*, public UnityEngine::TestTools::Utils::IAssemblyWrapper*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE3DE20
    // private readonly System.Reflection.Assembly <Assembly>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::Assembly* Assembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE3DE30
    // private readonly System.Reflection.AssemblyName <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::AssemblyName* Name;
    // Field size check
    static_assert(sizeof(System::Reflection::AssemblyName*) == 0x8);
    // Creating value type constructor for type: AssemblyWrapper
    AssemblyWrapper(System::Reflection::Assembly* Assembly_ = {}, System::Reflection::AssemblyName* Name_ = {}) noexcept : Assembly{Assembly_}, Name{Name_} {}
    // Creating interface conversion operator: operator UnityEngine::TestTools::Utils::IAssemblyWrapper
    operator UnityEngine::TestTools::Utils::IAssemblyWrapper() noexcept {
      return *reinterpret_cast<UnityEngine::TestTools::Utils::IAssemblyWrapper*>(this);
    }
    // public System.Void .ctor(System.Reflection.Assembly assembly)
    // Offset: 0x23DE718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyWrapper* New_ctor(System::Reflection::Assembly* assembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::AssemblyWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyWrapper*, creationType>(assembly)));
    }
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x23DE76C
    System::Reflection::Assembly* get_Assembly();
  }; // UnityEngine.TestTools.Utils.AssemblyWrapper
  #pragma pack(pop)
  static check_size<sizeof(AssemblyWrapper), 24 + sizeof(System::Reflection::AssemblyName*)> __UnityEngine_TestTools_Utils_AssemblyWrapperSizeCheck;
  static_assert(sizeof(AssemblyWrapper) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::AssemblyWrapper*, "UnityEngine.TestTools.Utils", "AssemblyWrapper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::AssemblyWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::AssemblyWrapper::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (UnityEngine::TestTools::Utils::AssemblyWrapper::*)()>(&UnityEngine::TestTools::Utils::AssemblyWrapper::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::AssemblyWrapper*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
