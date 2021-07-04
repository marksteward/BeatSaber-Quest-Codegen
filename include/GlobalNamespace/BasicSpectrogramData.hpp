// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BasicSpectrogramData
  class BasicSpectrogramData : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _instantChangeThreshold
    // Size: 0x4
    // Offset: 0x20
    float instantChangeThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hasData
    // Size: 0x1
    // Offset: 0x24
    bool hasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasProcessedData
    // Size: 0x1
    // Offset: 0x25
    bool hasProcessedData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasProcessedData and: samples
    char __padding3[0x2] = {};
    // private System.Single[] _samples
    // Size: 0x8
    // Offset: 0x28
    ::Array<float>* samples;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> _processedSamples
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<float>* processedSamples;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<float>*) == 0x8);
    // Creating value type constructor for type: BasicSpectrogramData
    BasicSpectrogramData(UnityEngine::AudioSource* audioSource_ = {}, float instantChangeThreshold_ = {}, bool hasData_ = {}, bool hasProcessedData_ = {}, ::Array<float>* samples_ = {}, System::Collections::Generic::List_1<float>* processedSamples_ = {}) noexcept : audioSource{audioSource_}, instantChangeThreshold{instantChangeThreshold_}, hasData{hasData_}, hasProcessedData{hasProcessedData_}, samples{samples_}, processedSamples{processedSamples_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kNumberOfSamples
    static constexpr const int kNumberOfSamples = 64;
    // Get static field: static public System.Int32 kNumberOfSamples
    static int _get_kNumberOfSamples();
    // Set static field: static public System.Int32 kNumberOfSamples
    static void _set_kNumberOfSamples(int value);
    // public System.Single[] get_Samples()
    // Offset: 0x11BA75C
    ::Array<float>* get_Samples();
    // public System.Collections.Generic.List`1<System.Single> get_ProcessedSamples()
    // Offset: 0x11BA804
    System::Collections::Generic::List_1<float>* get_ProcessedSamples();
    // protected System.Void Awake()
    // Offset: 0x11BAA64
    void Awake();
    // protected System.Void LateUpdate()
    // Offset: 0x11BAAE0
    void LateUpdate();
    // private System.Void ProcessSamples(System.Single[] sourceSamples, System.Collections.Generic.List`1<System.Single> processedSamples)
    // Offset: 0x11BA858
    void ProcessSamples(::Array<float>* sourceSamples, System::Collections::Generic::List_1<float>* processedSamples);
    // public System.Void .ctor()
    // Offset: 0x11BAAE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicSpectrogramData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicSpectrogramData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicSpectrogramData*, creationType>()));
    }
  }; // BasicSpectrogramData
  #pragma pack(pop)
  static check_size<sizeof(BasicSpectrogramData), 48 + sizeof(System::Collections::Generic::List_1<float>*)> __GlobalNamespace_BasicSpectrogramDataSizeCheck;
  static_assert(sizeof(BasicSpectrogramData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicSpectrogramData*, "", "BasicSpectrogramData");
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::get_Samples
// Il2CppName: get_Samples
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples
// Il2CppName: get_ProcessedSamples
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::LateUpdate
// Il2CppName: LateUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::ProcessSamples
// Il2CppName: ProcessSamples
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BasicSpectrogramData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
