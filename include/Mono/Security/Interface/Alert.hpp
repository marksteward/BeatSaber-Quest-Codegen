// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Interface.AlertLevel
#include "Mono/Security/Interface/AlertLevel.hpp"
// Including type: Mono.Security.Interface.AlertDescription
#include "Mono/Security/Interface/AlertDescription.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.Alert
  class Alert : public ::Il2CppObject {
    public:
    // private Mono.Security.Interface.AlertLevel level
    // Size: 0x1
    // Offset: 0x10
    Mono::Security::Interface::AlertLevel level;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::AlertLevel) == 0x1);
    // private Mono.Security.Interface.AlertDescription description
    // Size: 0x1
    // Offset: 0x11
    Mono::Security::Interface::AlertDescription description;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::AlertDescription) == 0x1);
    // Creating value type constructor for type: Alert
    Alert(Mono::Security::Interface::AlertLevel level_ = {}, Mono::Security::Interface::AlertDescription description_ = {}) noexcept : level{level_}, description{description_} {}
    // public Mono.Security.Interface.AlertLevel get_Level()
    // Offset: 0x1D77EF4
    Mono::Security::Interface::AlertLevel get_Level();
    // public Mono.Security.Interface.AlertDescription get_Description()
    // Offset: 0x1D77EFC
    Mono::Security::Interface::AlertDescription get_Description();
    // public System.Void .ctor(Mono.Security.Interface.AlertDescription description)
    // Offset: 0x1D77F04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Alert* New_ctor(Mono::Security::Interface::AlertDescription description) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::Alert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Alert*, creationType>(description)));
    }
    // private System.Void inferAlertLevel()
    // Offset: 0x1D77F7C
    void inferAlertLevel();
    // public override System.String ToString()
    // Offset: 0x1D77FBC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.Interface.Alert
  #pragma pack(pop)
  static check_size<sizeof(Alert), 17 + sizeof(Mono::Security::Interface::AlertDescription)> __Mono_Security_Interface_AlertSizeCheck;
  static_assert(sizeof(Alert) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::Alert*, "Mono.Security.Interface", "Alert");
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::get_Level
// Il2CppName: get_Level
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::get_Description
// Il2CppName: get_Description
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::inferAlertLevel
// Il2CppName: inferAlertLevel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Interface::Alert::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
