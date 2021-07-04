// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset
    class Preset;
    // private MainEffectGraphicsSettingsPresetsSO/Preset[] _presets
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>* presets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>*) == 0x8);
    // Creating value type constructor for type: MainEffectGraphicsSettingsPresetsSO
    MainEffectGraphicsSettingsPresetsSO(::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>* presets_ = {}) noexcept : presets{presets_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MainEffectGraphicsSettingsPresetsSO/Preset[] get_presets()
    // Offset: 0x240032C
    ::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>* get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0x2400334
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0x240033C
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectGraphicsSettingsPresetsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectGraphicsSettingsPresetsSO*, creationType>()));
    }
  }; // MainEffectGraphicsSettingsPresetsSO
  #pragma pack(pop)
  static check_size<sizeof(MainEffectGraphicsSettingsPresetsSO), 24 + sizeof(::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>*)> __GlobalNamespace_MainEffectGraphicsSettingsPresetsSOSizeCheck;
  static_assert(sizeof(MainEffectGraphicsSettingsPresetsSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, "", "MainEffectGraphicsSettingsPresetsSO");
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets
// Il2CppName: get_presets
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets
// Il2CppName: get_namedPresets
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
