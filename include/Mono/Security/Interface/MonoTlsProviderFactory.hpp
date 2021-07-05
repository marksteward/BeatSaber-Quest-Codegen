// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoTlsProviderFactory
  class MonoTlsProviderFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MonoTlsProviderFactory
    MonoTlsProviderFactory() noexcept {}
    // static public Mono.Security.Interface.MonoTlsProvider GetProvider()
    // Offset: 0x1D78BF8
    static Mono::Security::Interface::MonoTlsProvider* GetProvider();
  }; // Mono.Security.Interface.MonoTlsProviderFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsProviderFactory*, "Mono.Security.Interface", "MonoTlsProviderFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProviderFactory::GetProvider
// Il2CppName: GetProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsProvider* (*)()>(&Mono::Security::Interface::MonoTlsProviderFactory::GetProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProviderFactory*), "GetProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
