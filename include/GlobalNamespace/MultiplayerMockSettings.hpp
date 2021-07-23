// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerSettings
  class MockPlayerSettings;
  // Forward declaring type: MockServerSettings
  class MockServerSettings;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerMockSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerMockSettings : public UnityEngine::ScriptableObject {
    public:
    // private System.Boolean _isEnabled
    // Size: 0x1
    // Offset: 0x18
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: localPlayer
    char __padding0[0x7] = {};
    // private MockPlayerSettings _localPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MockPlayerSettings* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayerSettings*) == 0x8);
    // private System.Collections.Generic.List`1<MockPlayerSettings> _otherPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* otherPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>*) == 0x8);
    // private MockServerSettings _quickplayServer
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockServerSettings* quickplayServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServerSettings*) == 0x8);
    // private MasterServerAvailabilityData _masterServerAvailabilityData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerAvailabilityData*) == 0x8);
    // private MasterServerQuickPlaySetupData _masterServerQuickPlaySetupData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerQuickPlaySetupData*) == 0x8);
    // Creating value type constructor for type: MultiplayerMockSettings
    MultiplayerMockSettings(bool isEnabled_ = {}, GlobalNamespace::MockPlayerSettings* localPlayer_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* otherPlayers_ = {}, GlobalNamespace::MockServerSettings* quickplayServer_ = {}, GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData_ = {}, GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData_ = {}) noexcept : isEnabled{isEnabled_}, localPlayer{localPlayer_}, otherPlayers{otherPlayers_}, quickplayServer{quickplayServer_}, masterServerAvailabilityData{masterServerAvailabilityData_}, masterServerQuickPlaySetupData{masterServerQuickPlaySetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Boolean _isEnabled
    bool _get__isEnabled();
    // Set instance field: private System.Boolean _isEnabled
    void _set__isEnabled(bool value);
    // Get instance field: private MockPlayerSettings _localPlayer
    GlobalNamespace::MockPlayerSettings* _get__localPlayer();
    // Set instance field: private MockPlayerSettings _localPlayer
    void _set__localPlayer(GlobalNamespace::MockPlayerSettings* value);
    // Get instance field: private System.Collections.Generic.List`1<MockPlayerSettings> _otherPlayers
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* _get__otherPlayers();
    // Set instance field: private System.Collections.Generic.List`1<MockPlayerSettings> _otherPlayers
    void _set__otherPlayers(System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* value);
    // Get instance field: private MockServerSettings _quickplayServer
    GlobalNamespace::MockServerSettings* _get__quickplayServer();
    // Set instance field: private MockServerSettings _quickplayServer
    void _set__quickplayServer(GlobalNamespace::MockServerSettings* value);
    // Get instance field: private MasterServerAvailabilityData _masterServerAvailabilityData
    GlobalNamespace::MasterServerAvailabilityData* _get__masterServerAvailabilityData();
    // Set instance field: private MasterServerAvailabilityData _masterServerAvailabilityData
    void _set__masterServerAvailabilityData(GlobalNamespace::MasterServerAvailabilityData* value);
    // Get instance field: private MasterServerQuickPlaySetupData _masterServerQuickPlaySetupData
    GlobalNamespace::MasterServerQuickPlaySetupData* _get__masterServerQuickPlaySetupData();
    // Set instance field: private MasterServerQuickPlaySetupData _masterServerQuickPlaySetupData
    void _set__masterServerQuickPlaySetupData(GlobalNamespace::MasterServerQuickPlaySetupData* value);
    // public MockServerSettings get_quickplayServer()
    // Offset: 0x23D932C
    GlobalNamespace::MockServerSettings* get_quickplayServer();
    // public MockPlayerSettings get_localPlayer()
    // Offset: 0x23D9334
    GlobalNamespace::MockPlayerSettings* get_localPlayer();
    // public MasterServerQuickPlaySetupData get_masterServerQuickPlaySetupData()
    // Offset: 0x23D9400
    GlobalNamespace::MasterServerQuickPlaySetupData* get_masterServerQuickPlaySetupData();
    // public System.Void set_masterServerQuickPlaySetupData(MasterServerQuickPlaySetupData value)
    // Offset: 0x23D9408
    void set_masterServerQuickPlaySetupData(GlobalNamespace::MasterServerQuickPlaySetupData* value);
    // public MasterServerAvailabilityData get_masterServerAvailabilityData()
    // Offset: 0x23D9410
    GlobalNamespace::MasterServerAvailabilityData* get_masterServerAvailabilityData();
    // public System.Void set_masterServerAvailabilityData(MasterServerAvailabilityData value)
    // Offset: 0x23D9418
    void set_masterServerAvailabilityData(GlobalNamespace::MasterServerAvailabilityData* value);
    // public System.Collections.Generic.List`1<MockPlayerSettings> get_otherPlayers()
    // Offset: 0x23D9420
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* get_otherPlayers();
    // public System.Boolean get_isEnabled()
    // Offset: 0x23D9428
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x23D9430
    void set_isEnabled(bool value);
    // static public MultiplayerMockSettings SharedSettings()
    // Offset: 0x23D943C
    static GlobalNamespace::MultiplayerMockSettings* SharedSettings();
    // public System.Void .ctor()
    // Offset: 0x23D9444
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerMockSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerMockSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerMockSettings*, creationType>()));
    }
  }; // MultiplayerMockSettings
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerMockSettings), 64 + sizeof(GlobalNamespace::MasterServerQuickPlaySetupData*)> __GlobalNamespace_MultiplayerMockSettingsSizeCheck;
  static_assert(sizeof(MultiplayerMockSettings) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMockSettings*, "", "MultiplayerMockSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_quickplayServer
// Il2CppName: get_quickplayServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockServerSettings* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_quickplayServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_quickplayServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_localPlayer
// Il2CppName: get_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockPlayerSettings* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_localPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_masterServerQuickPlaySetupData
// Il2CppName: get_masterServerQuickPlaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MasterServerQuickPlaySetupData* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_masterServerQuickPlaySetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_masterServerQuickPlaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_masterServerQuickPlaySetupData
// Il2CppName: set_masterServerQuickPlaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(GlobalNamespace::MasterServerQuickPlaySetupData*)>(&GlobalNamespace::MultiplayerMockSettings::set_masterServerQuickPlaySetupData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_masterServerQuickPlaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_masterServerAvailabilityData
// Il2CppName: get_masterServerAvailabilityData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MasterServerAvailabilityData* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_masterServerAvailabilityData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_masterServerAvailabilityData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_masterServerAvailabilityData
// Il2CppName: set_masterServerAvailabilityData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(GlobalNamespace::MasterServerAvailabilityData*)>(&GlobalNamespace::MultiplayerMockSettings::set_masterServerAvailabilityData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MasterServerAvailabilityData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_masterServerAvailabilityData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_otherPlayers
// Il2CppName: get_otherPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings*>* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_otherPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_otherPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_isEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(bool)>(&GlobalNamespace::MultiplayerMockSettings::set_isEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::SharedSettings
// Il2CppName: SharedSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerMockSettings* (*)()>(&GlobalNamespace::MultiplayerMockSettings::SharedSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "SharedSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
