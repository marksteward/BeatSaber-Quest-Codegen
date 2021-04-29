// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationElement
  // [DefaultMemberAttribute] Offset: CB1094
  class ConfigurationElement : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConfigurationElement
    ConfigurationElement() noexcept {}
    // protected internal System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x21B63EC
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal System.Boolean IsModified()
    // Offset: 0x21B642C
    bool IsModified();
    // protected internal System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x21B646C
    void Reset(System::Configuration::ConfigurationElement* parentElement);
    // protected internal System.Void ResetModified()
    // Offset: 0x21B64AC
    void ResetModified();
  }; // System.Configuration.ConfigurationElement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
