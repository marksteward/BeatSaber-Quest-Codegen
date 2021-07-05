// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SavWav
  class SavWav : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SavWav
    SavWav() noexcept {}
    // static field const value: static private System.UInt32 HeaderSize
    static constexpr const uint HeaderSize = 44u;
    // Get static field: static private System.UInt32 HeaderSize
    static uint _get_HeaderSize();
    // Set static field: static private System.UInt32 HeaderSize
    static void _set_HeaderSize(uint value);
    // static field const value: static private System.Single RescaleFactor
    static constexpr const float RescaleFactor = 32767;
    // Get static field: static private System.Single RescaleFactor
    static float _get_RescaleFactor();
    // Set static field: static private System.Single RescaleFactor
    static void _set_RescaleFactor(float value);
    // static public System.Void Save(System.String filepath, UnityEngine.AudioClip clip, System.Single start, System.Single duration)
    // Offset: 0x10D4174
    static void Save(::Il2CppString* filepath, UnityEngine::AudioClip* clip, float start, float duration);
    // static public System.Byte[] GetWav(UnityEngine.AudioClip clip, out System.UInt32 length, System.Single start, System.Single duration)
    // Offset: 0x10D4410
    static ::Array<uint8_t>* GetWav(UnityEngine::AudioClip* clip, uint& length, float start, float duration);
    // static private System.Byte[] ConvertAndWrite(UnityEngine.AudioClip clip, out System.UInt32 length, out System.UInt32 samplesAfterTrimming, System.Single start, System.Single duration)
    // Offset: 0x10D445C
    static ::Array<uint8_t>* ConvertAndWrite(UnityEngine::AudioClip* clip, uint& length, uint& samplesAfterTrimming, float start, float duration);
    // static private System.Void AddDataToBuffer(System.Byte[] buffer, ref System.UInt32 offset, System.Byte[] addBytes)
    // Offset: 0x10D4910
    static void AddDataToBuffer(::Array<uint8_t>* buffer, uint& offset, ::Array<uint8_t>* addBytes);
    // static private System.Void WriteHeader(System.Byte[] stream, UnityEngine.AudioClip clip, System.UInt32 length, System.UInt32 samples)
    // Offset: 0x10D4680
    static void WriteHeader(::Array<uint8_t>* stream, UnityEngine::AudioClip* clip, uint length, uint samples);
  }; // SavWav
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SavWav*, "", "SavWav");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SavWav::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::AudioClip*, float, float)>(&GlobalNamespace::SavWav::Save)> {
  static const MethodInfo* get() {
    static auto* filepath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SavWav*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filepath, clip, start, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SavWav::GetWav
// Il2CppName: GetWav
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(UnityEngine::AudioClip*, uint&, float, float)>(&GlobalNamespace::SavWav::GetWav)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SavWav*), "GetWav", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, length, start, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SavWav::ConvertAndWrite
// Il2CppName: ConvertAndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(UnityEngine::AudioClip*, uint&, uint&, float, float)>(&GlobalNamespace::SavWav::ConvertAndWrite)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* samplesAfterTrimming = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SavWav*), "ConvertAndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, length, samplesAfterTrimming, start, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SavWav::AddDataToBuffer
// Il2CppName: AddDataToBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, uint&, ::Array<uint8_t>*)>(&GlobalNamespace::SavWav::AddDataToBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* addBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SavWav*), "AddDataToBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, addBytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SavWav::WriteHeader
// Il2CppName: WriteHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, UnityEngine::AudioClip*, uint, uint)>(&GlobalNamespace::SavWav::WriteHeader)> {
  static const MethodInfo* get() {
    static auto* stream = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* samples = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SavWav*), "WriteHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, clip, length, samples});
  }
};
