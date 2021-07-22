// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: FlickeringNeonSign
  // [TokenAttribute] Offset: FFFFFFFF
  class FlickeringNeonSign : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16
    class $FlickeringCoroutine$d__16;
    // private UnityEngine.SpriteRenderer _flickeringSprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::SpriteRenderer* flickeringSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private TubeBloomPrePassLight _light
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TubeBloomPrePassLight* light;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // private System.Single _minOnDelay
    // Size: 0x4
    // Offset: 0x30
    float minOnDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxOnDelay
    // Size: 0x4
    // Offset: 0x34
    float maxOnDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOffDelay
    // Size: 0x4
    // Offset: 0x38
    float minOffDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxOffDelay
    // Size: 0x4
    // Offset: 0x3C
    float maxOffDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _spriteOnColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color spriteOnColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightOnColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color lightOnColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Material _onMaterial
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Material* onMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _offMaterial
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Material* offMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.AudioClip[] _sparksAudioClips
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::AudioClip*>* sparksAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _sparksAudioClipPicker
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* sparksAudioClipPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // Creating value type constructor for type: FlickeringNeonSign
    FlickeringNeonSign(UnityEngine::SpriteRenderer* flickeringSprite_ = {}, GlobalNamespace::TubeBloomPrePassLight* light_ = {}, ::Array<UnityEngine::ParticleSystem*>* particleSystems_ = {}, float minOnDelay_ = {}, float maxOnDelay_ = {}, float minOffDelay_ = {}, float maxOffDelay_ = {}, UnityEngine::Color spriteOnColor_ = {}, UnityEngine::Color lightOnColor_ = {}, UnityEngine::Material* onMaterial_ = {}, UnityEngine::Material* offMaterial_ = {}, ::Array<UnityEngine::AudioClip*>* sparksAudioClips_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* sparksAudioClipPicker_ = {}) noexcept : flickeringSprite{flickeringSprite_}, light{light_}, particleSystems{particleSystems_}, minOnDelay{minOnDelay_}, maxOnDelay{maxOnDelay_}, minOffDelay{minOffDelay_}, maxOffDelay{maxOffDelay_}, spriteOnColor{spriteOnColor_}, lightOnColor{lightOnColor_}, onMaterial{onMaterial_}, offMaterial{offMaterial_}, sparksAudioClips{sparksAudioClips_}, sparksAudioClipPicker{sparksAudioClipPicker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1029428
    void Awake();
    // protected System.Void Start()
    // Offset: 0x10294A8
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x10294F0
    void OnEnable();
    // private System.Collections.IEnumerator FlickeringCoroutine()
    // Offset: 0x102951C
    System::Collections::IEnumerator* FlickeringCoroutine();
    // private System.Void SetOn(System.Boolean on)
    // Offset: 0x10295B8
    void SetOn(bool on);
    // public System.Void .ctor()
    // Offset: 0x10296D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlickeringNeonSign* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlickeringNeonSign::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlickeringNeonSign*, creationType>()));
    }
  }; // FlickeringNeonSign
  #pragma pack(pop)
  static check_size<sizeof(FlickeringNeonSign), 120 + sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*)> __GlobalNamespace_FlickeringNeonSignSizeCheck;
  static_assert(sizeof(FlickeringNeonSign) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlickeringNeonSign*, "", "FlickeringNeonSign");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::FlickeringCoroutine
// Il2CppName: FlickeringCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::FlickeringCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "FlickeringCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::SetOn
// Il2CppName: SetOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)(bool)>(&GlobalNamespace::FlickeringNeonSign::SetOn)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "SetOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
