// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PracticeSettings
  class PracticeSettings : public ::Il2CppObject {
    public:
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songSpeedMul
    // Size: 0x4
    // Offset: 0x14
    float songSpeedMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _startInAdvanceAndClearNotes
    // Size: 0x1
    // Offset: 0x18
    bool startInAdvanceAndClearNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PracticeSettings
    PracticeSettings(float startSongTime_ = {}, float songSpeedMul_ = {}, bool startInAdvanceAndClearNotes_ = {}) noexcept : startSongTime{startSongTime_}, songSpeedMul{songSpeedMul_}, startInAdvanceAndClearNotes{startInAdvanceAndClearNotes_} {}
    // static field const value: static public System.Single kDelayBeforeStart
    static constexpr const float kDelayBeforeStart = 1;
    // Get static field: static public System.Single kDelayBeforeStart
    static float _get_kDelayBeforeStart();
    // Set static field: static public System.Single kDelayBeforeStart
    static void _set_kDelayBeforeStart(float value);
    // public System.Single get_startSongTime()
    // Offset: 0xF7F51C
    float get_startSongTime();
    // public System.Void set_startSongTime(System.Single value)
    // Offset: 0xF7F524
    void set_startSongTime(float value);
    // public System.Single get_songSpeedMul()
    // Offset: 0xF7F52C
    float get_songSpeedMul();
    // public System.Void set_songSpeedMul(System.Single value)
    // Offset: 0xF7F534
    void set_songSpeedMul(float value);
    // public System.Boolean get_startInAdvanceAndClearNotes()
    // Offset: 0xF7F53C
    bool get_startInAdvanceAndClearNotes();
    // public System.Void set_startInAdvanceAndClearNotes(System.Boolean value)
    // Offset: 0xF7F544
    void set_startInAdvanceAndClearNotes(bool value);
    // static public PracticeSettings get_defaultPracticeSettings()
    // Offset: 0xF7F550
    static GlobalNamespace::PracticeSettings* get_defaultPracticeSettings();
    // public System.Void .ctor(PracticeSettings practiceSettings)
    // Offset: 0xF7F5DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor(GlobalNamespace::PracticeSettings* practiceSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>(practiceSettings)));
    }
    // public System.Void .ctor(System.Single startSongTime, System.Single songSpeedMul)
    // Offset: 0xF7A3E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor(float startSongTime, float songSpeedMul) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>(startSongTime, songSpeedMul)));
    }
    // public System.Void ResetToDefault()
    // Offset: 0xF7F5C4
    void ResetToDefault();
    // public System.Void .ctor()
    // Offset: 0xF7A9D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>()));
    }
  }; // PracticeSettings
  #pragma pack(pop)
  static check_size<sizeof(PracticeSettings), 24 + sizeof(bool)> __GlobalNamespace_PracticeSettingsSizeCheck;
  static_assert(sizeof(PracticeSettings) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeSettings*, "", "PracticeSettings");
