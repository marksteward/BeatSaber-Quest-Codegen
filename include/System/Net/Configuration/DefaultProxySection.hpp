// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationSection
#include "System/Configuration/ConfigurationSection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
  // Skipping declaration: ConfigurationElement because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.DefaultProxySection
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultProxySection : public System::Configuration::ConfigurationSection {
    public:
    // Creating value type constructor for type: DefaultProxySection
    DefaultProxySection() noexcept {}
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x1694BEC
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // public System.Void .ctor()
    // Offset: 0x1694BAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultProxySection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::DefaultProxySection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultProxySection*, creationType>()));
    }
    // protected override System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x1694C2C
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::Reset(System.Configuration.ConfigurationElement parentElement)
    void Reset(System::Configuration::ConfigurationElement* parentElement);
  }; // System.Net.Configuration.DefaultProxySection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::DefaultProxySection*, "System.Net.Configuration", "DefaultProxySection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::DefaultProxySection::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::DefaultProxySection::*)()>(&System::Net::Configuration::DefaultProxySection::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::DefaultProxySection*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::DefaultProxySection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::DefaultProxySection::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::DefaultProxySection::*)(System::Configuration::ConfigurationElement*)>(&System::Net::Configuration::DefaultProxySection::Reset)> {
  static const MethodInfo* get() {
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::DefaultProxySection*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentElement});
  }
};
