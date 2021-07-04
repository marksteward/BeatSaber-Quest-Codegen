// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ZenjectSettings
#include "Zenject/ZenjectSettings.hpp"
// Including type: Zenject.SignalDefaultSyncModes
#include "Zenject/SignalDefaultSyncModes.hpp"
// Including type: Zenject.SignalMissingHandlerResponses
#include "Zenject/SignalMissingHandlerResponses.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectSettings/SignalSettings
  class ZenjectSettings::SignalSettings : public ::Il2CppObject {
    public:
    // private Zenject.SignalDefaultSyncModes _defaultSyncMode
    // Size: 0x4
    // Offset: 0x10
    Zenject::SignalDefaultSyncModes defaultSyncMode;
    // Field size check
    static_assert(sizeof(Zenject::SignalDefaultSyncModes) == 0x4);
    // private Zenject.SignalMissingHandlerResponses _missingHandlerDefaultResponse
    // Size: 0x4
    // Offset: 0x14
    Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse;
    // Field size check
    static_assert(sizeof(Zenject::SignalMissingHandlerResponses) == 0x4);
    // private System.Boolean _requireStrictUnsubscribe
    // Size: 0x1
    // Offset: 0x18
    bool requireStrictUnsubscribe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: requireStrictUnsubscribe and: defaultAsyncTickPriority
    char __padding2[0x3] = {};
    // private System.Int32 _defaultAsyncTickPriority
    // Size: 0x4
    // Offset: 0x1C
    int defaultAsyncTickPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SignalSettings
    SignalSettings(Zenject::SignalDefaultSyncModes defaultSyncMode_ = {}, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse_ = {}, bool requireStrictUnsubscribe_ = {}, int defaultAsyncTickPriority_ = {}) noexcept : defaultSyncMode{defaultSyncMode_}, missingHandlerDefaultResponse{missingHandlerDefaultResponse_}, requireStrictUnsubscribe{requireStrictUnsubscribe_}, defaultAsyncTickPriority{defaultAsyncTickPriority_} {}
    // Get static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static Zenject::ZenjectSettings::SignalSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings/SignalSettings Default
    static void _set_Default(Zenject::ZenjectSettings::SignalSettings* value);
    // public System.Void .ctor(Zenject.SignalDefaultSyncModes defaultSyncMode, Zenject.SignalMissingHandlerResponses missingHandlerDefaultResponse, System.Boolean requireStrictUnsubscribe, System.Int32 defaultAsyncTickPriority)
    // Offset: 0x23BC4EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings::SignalSettings* New_ctor(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int defaultAsyncTickPriority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectSettings::SignalSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings::SignalSettings*, creationType>(defaultSyncMode, missingHandlerDefaultResponse, requireStrictUnsubscribe, defaultAsyncTickPriority)));
    }
    // public System.Int32 get_DefaultAsyncTickPriority()
    // Offset: 0x23BC57C
    int get_DefaultAsyncTickPriority();
    // public Zenject.SignalDefaultSyncModes get_DefaultSyncMode()
    // Offset: 0x23BC584
    Zenject::SignalDefaultSyncModes get_DefaultSyncMode();
    // public Zenject.SignalMissingHandlerResponses get_MissingHandlerDefaultResponse()
    // Offset: 0x23BC58C
    Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse();
    // public System.Boolean get_RequireStrictUnsubscribe()
    // Offset: 0x23BC594
    bool get_RequireStrictUnsubscribe();
    // static private System.Void .cctor()
    // Offset: 0x23BC59C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x23BC540
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSettings::SignalSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectSettings::SignalSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSettings::SignalSettings*, creationType>()));
    }
  }; // Zenject.ZenjectSettings/SignalSettings
  #pragma pack(pop)
  static check_size<sizeof(ZenjectSettings::SignalSettings), 28 + sizeof(int)> __Zenject_ZenjectSettings_SignalSettingsSizeCheck;
  static_assert(sizeof(ZenjectSettings::SignalSettings) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings::SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_DefaultAsyncTickPriority
// Il2CppName: get_DefaultAsyncTickPriority
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_DefaultSyncMode
// Il2CppName: get_DefaultSyncMode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_MissingHandlerDefaultResponse
// Il2CppName: get_MissingHandlerDefaultResponse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::get_RequireStrictUnsubscribe
// Il2CppName: get_RequireStrictUnsubscribe
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ZenjectSettings::SignalSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
