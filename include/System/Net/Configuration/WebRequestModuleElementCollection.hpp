// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.WebRequestModuleElementCollection
  // [ConfigurationCollectionAttribute] Offset: D8868C
  // [DefaultMemberAttribute] Offset: D8868C
  class WebRequestModuleElementCollection : public System::Configuration::ConfigurationElementCollection {
    public:
    // Creating value type constructor for type: WebRequestModuleElementCollection
    WebRequestModuleElementCollection() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16ACC7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestModuleElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::WebRequestModuleElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestModuleElementCollection*, creationType>()));
    }
  }; // System.Net.Configuration.WebRequestModuleElementCollection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebRequestModuleElementCollection*, "System.Net.Configuration", "WebRequestModuleElementCollection");
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModuleElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
