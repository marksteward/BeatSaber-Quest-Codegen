// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoInstallerBase
  class MonoInstallerBase;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoInstallerUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoInstallerUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MonoInstallerUtil
    MonoInstallerUtil() noexcept {}
    // static public System.String GetDefaultResourcePath()
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    static ::Il2CppString* GetDefaultResourcePath() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::MonoInstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstallerUtil::GetDefaultResourcePath");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "MonoInstallerUtil", "GetDefaultResourcePath", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public TInstaller CreateInstaller(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    static TInstaller CreateInstaller(::Il2CppString* resourcePath, Zenject::DiContainer* container) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::MonoInstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstallerUtil::CreateInstaller");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "MonoInstallerUtil", "CreateInstaller", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath), ::il2cpp_utils::ExtractType(container)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TInstaller, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, resourcePath, container);
    }
  }; // Zenject.MonoInstallerUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstallerUtil*, "Zenject", "MonoInstallerUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MonoInstallerUtil::GetDefaultResourcePath
// Il2CppName: GetDefaultResourcePath
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::MonoInstallerUtil::CreateInstaller
// Il2CppName: CreateInstaller
// Cannot write MetadataGetter for generic methods!
