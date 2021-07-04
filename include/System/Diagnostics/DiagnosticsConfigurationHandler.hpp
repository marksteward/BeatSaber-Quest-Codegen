// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.IConfigurationSectionHandler
#include "System/Configuration/IConfigurationSectionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DiagnosticsConfigurationHandler
  // [ObsoleteAttribute] Offset: D88714
  class DiagnosticsConfigurationHandler : public ::Il2CppObject/*, public System::Configuration::IConfigurationSectionHandler*/ {
    public:
    // Creating value type constructor for type: DiagnosticsConfigurationHandler
    DiagnosticsConfigurationHandler() noexcept {}
    // Creating interface conversion operator: operator System::Configuration::IConfigurationSectionHandler
    operator System::Configuration::IConfigurationSectionHandler() noexcept {
      return *reinterpret_cast<System::Configuration::IConfigurationSectionHandler*>(this);
    }
    // public System.Object Create(System.Object parent, System.Object configContext, System.Xml.XmlNode section)
    // Offset: 0x186A2DC
    ::Il2CppObject* Create(::Il2CppObject* parent, ::Il2CppObject* configContext, System::Xml::XmlNode* section);
    // public System.Void .ctor()
    // Offset: 0x186A29C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticsConfigurationHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::DiagnosticsConfigurationHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticsConfigurationHandler*, creationType>()));
    }
  }; // System.Diagnostics.DiagnosticsConfigurationHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DiagnosticsConfigurationHandler*, "System.Diagnostics", "DiagnosticsConfigurationHandler");
// Writing MetadataGetter for method: System::Diagnostics::DiagnosticsConfigurationHandler::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::DiagnosticsConfigurationHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
