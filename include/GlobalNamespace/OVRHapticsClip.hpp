// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRHapticsClip
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHapticsClip : public ::Il2CppObject {
    public:
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <Capacity>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int Capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] <Samples>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* Samples;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: OVRHapticsClip
    OVRHapticsClip(int Count_ = {}, int Capacity_ = {}, ::Array<uint8_t>* Samples_ = {}) noexcept : Count{Count_}, Capacity{Capacity_}, Samples{Samples_} {}
    // public System.Int32 get_Count()
    // Offset: 0x14E557C
    int get_Count();
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0x14E5584
    void set_Count(int value);
    // public System.Int32 get_Capacity()
    // Offset: 0x14E558C
    int get_Capacity();
    // private System.Void set_Capacity(System.Int32 value)
    // Offset: 0x14E5594
    void set_Capacity(int value);
    // public System.Byte[] get_Samples()
    // Offset: 0x14E559C
    ::Array<uint8_t>* get_Samples();
    // private System.Void set_Samples(System.Byte[] value)
    // Offset: 0x14E55A4
    void set_Samples(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x14E530C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Byte[] samples, System.Int32 samplesCount)
    // Offset: 0x14E55AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(::Array<uint8_t>* samples, int samplesCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(samples, samplesCount)));
    }
    // public System.Void .ctor(OVRHapticsClip a, OVRHapticsClip b)
    // Offset: 0x14E5694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(GlobalNamespace::OVRHapticsClip* a, GlobalNamespace::OVRHapticsClip* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(a, b)));
    }
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Int32 channel)
    // Offset: 0x14E5904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor(UnityEngine::AudioClip* audioClip, int channel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>(audioClip, channel)));
    }
    // public System.Void WriteSample(System.Byte sample)
    // Offset: 0x14E53F4
    void WriteSample(uint8_t sample);
    // public System.Void Reset()
    // Offset: 0x14E5CA4
    void Reset();
    // private System.Void InitializeFromAudioFloatTrack(System.Single[] sourceData, System.Double sourceFrequency, System.Int32 sourceChannelCount, System.Int32 sourceChannel)
    // Offset: 0x14E59EC
    void InitializeFromAudioFloatTrack(::Array<float>* sourceData, double sourceFrequency, int sourceChannelCount, int sourceChannel);
    // public System.Void .ctor()
    // Offset: 0x14E51C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHapticsClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHapticsClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHapticsClip*, creationType>()));
    }
  }; // OVRHapticsClip
  #pragma pack(pop)
  static check_size<sizeof(OVRHapticsClip), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_OVRHapticsClipSizeCheck;
  static_assert(sizeof(OVRHapticsClip) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHapticsClip*, "", "OVRHapticsClip");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRHapticsClip::*)()>(&GlobalNamespace::OVRHapticsClip::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::set_Count
// Il2CppName: set_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)(int)>(&GlobalNamespace::OVRHapticsClip::set_Count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "set_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRHapticsClip::*)()>(&GlobalNamespace::OVRHapticsClip::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)(int)>(&GlobalNamespace::OVRHapticsClip::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::get_Samples
// Il2CppName: get_Samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::OVRHapticsClip::*)()>(&GlobalNamespace::OVRHapticsClip::get_Samples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "get_Samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::set_Samples
// Il2CppName: set_Samples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)(::Array<uint8_t>*)>(&GlobalNamespace::OVRHapticsClip::set_Samples)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "set_Samples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::WriteSample
// Il2CppName: WriteSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)(uint8_t)>(&GlobalNamespace::OVRHapticsClip::WriteSample)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "WriteSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)()>(&GlobalNamespace::OVRHapticsClip::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::InitializeFromAudioFloatTrack
// Il2CppName: InitializeFromAudioFloatTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHapticsClip::*)(::Array<float>*, double, int, int)>(&GlobalNamespace::OVRHapticsClip::InitializeFromAudioFloatTrack)> {
  static const MethodInfo* get() {
    static auto* sourceData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* sourceFrequency = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* sourceChannelCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sourceChannel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHapticsClip*), "InitializeFromAudioFloatTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceData, sourceFrequency, sourceChannelCount, sourceChannel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHapticsClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
