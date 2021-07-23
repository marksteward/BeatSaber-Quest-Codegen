// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: OVRHaptics/OVRHapticsChannel
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private OVRHaptics/OVRHapticsOutput m_output
    GlobalNamespace::OVRHaptics::OVRHapticsOutput* _get_m_output();
    // Set instance field: private OVRHaptics/OVRHapticsOutput m_output
    void _set_m_output(GlobalNamespace::OVRHaptics::OVRHapticsOutput* value);
    // public System.Void .ctor(System.UInt32 outputIndex)
    // Offset: 0x14E3A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsChannel* New_ctor(uint outputIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHaptics::OVRHapticsChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsChannel*, creationType>(outputIndex)));
    }
    // public System.Void Preempt(OVRHapticsClip clip)
    // Offset: 0x14E4B08
    void Preempt(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Queue(OVRHapticsClip clip)
    // Offset: 0x14E4BC4
    void Queue(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Mix(OVRHapticsClip clip)
    // Offset: 0x14E4C68
    void Mix(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Clear()
    // Offset: 0x14E5150
    void Clear();
  }; // OVRHaptics/OVRHapticsChannel
  #pragma pack(pop)
  static check_size<sizeof(OVRHaptics::OVRHapticsChannel), 16 + sizeof(GlobalNamespace::OVRHaptics::OVRHapticsOutput*)> __GlobalNamespace_OVRHaptics_OVRHapticsChannelSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsChannel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsChannel::Preempt
// Il2CppName: Preempt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsChannel::*)(GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsChannel::Preempt)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsChannel*), "Preempt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsChannel::Queue
// Il2CppName: Queue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsChannel::*)(GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsChannel::Queue)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsChannel*), "Queue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsChannel::Mix
// Il2CppName: Mix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsChannel::*)(GlobalNamespace::OVRHapticsClip*)>(&GlobalNamespace::OVRHaptics::OVRHapticsChannel::Mix)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("", "OVRHapticsClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsChannel*), "Mix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::OVRHapticsChannel::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHaptics::OVRHapticsChannel::*)()>(&GlobalNamespace::OVRHaptics::OVRHapticsChannel::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics::OVRHapticsChannel*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
