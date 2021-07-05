// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataSO
  class BeatmapLevelDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private BeatmapLevelDataSO/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>*) == 0x8);
    // private BeatmapLevelDataSO/DifficultyBeatmapSet[] _no360MovementDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelDataSO
    BeatmapLevelDataSO(UnityEngine::AudioClip* audioClip_ = {}, ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}, ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets_ = {}) noexcept : audioClip{audioClip_}, difficultyBeatmapSets{difficultyBeatmapSets_}, no360MovementDifficultyBeatmapSets{no360MovementDifficultyBeatmapSets_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x11CBA94
    UnityEngine::AudioClip* get_audioClip();
    // public BeatmapLevelDataSO/DifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x11CBA9C
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor()
    // Offset: 0x11CBAA4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataSO*, creationType>()));
    }
  }; // BeatmapLevelDataSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataSO), 40 + sizeof(::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>*)> __GlobalNamespace_BeatmapLevelDataSOSizeCheck;
  static_assert(sizeof(BeatmapLevelDataSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO*, "", "BeatmapLevelDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::BeatmapLevelDataSO::*)()>(&GlobalNamespace::BeatmapLevelDataSO::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataSO*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* (GlobalNamespace::BeatmapLevelDataSO::*)()>(&GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataSO*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
