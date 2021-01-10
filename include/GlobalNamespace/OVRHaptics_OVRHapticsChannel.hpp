// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHaptics
#include "GlobalNamespace/OVRHaptics.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: OVRHaptics/OVRHapticsChannel
  // [] Offset: FFFFFFFF
  class OVRHaptics::OVRHapticsChannel : public ::Il2CppObject {
    public:
    // private OVRHaptics/OVRHapticsOutput m_output
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OVRHaptics::OVRHapticsOutput* m_output;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*) == 0x8);
    // Creating value type constructor for type: OVRHapticsChannel
    OVRHapticsChannel(GlobalNamespace::OVRHaptics::OVRHapticsOutput* m_output_ = {}) noexcept : m_output{m_output_} {}
    // Creating conversion operator: operator GlobalNamespace::OVRHaptics::OVRHapticsOutput*
    constexpr operator GlobalNamespace::OVRHaptics::OVRHapticsOutput*() const noexcept {
      return m_output;
    }
    // public System.Void .ctor(System.UInt32 outputIndex)
    // Offset: 0x11B85BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsChannel* New_ctor(uint outputIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHaptics::OVRHapticsChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsChannel*, creationType>(outputIndex)));
    }
    // public System.Void Preempt(OVRHapticsClip clip)
    // Offset: 0x11B9714
    void Preempt(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Queue(OVRHapticsClip clip)
    // Offset: 0x11B97DC
    void Queue(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Mix(OVRHapticsClip clip)
    // Offset: 0x11B988C
    void Mix(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Clear()
    // Offset: 0x11B9D8C
    void Clear();
  }; // OVRHaptics/OVRHapticsChannel
  static check_size<sizeof(OVRHaptics::OVRHapticsChannel), 16 + sizeof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*)> __GlobalNamespace_OVRHaptics_OVRHapticsChannelSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsChannel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
#pragma pack(pop)
