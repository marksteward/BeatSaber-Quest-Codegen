// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelSO::DifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristic{beatmapCharacteristic_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x108EDE4
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x108EDEC
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x108EDF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelSO::DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelSO::DifficultyBeatmapSet*, creationType>(beatmapCharacteristic, difficultyBeatmaps)));
    }
    // public System.Void SetParentLevel(IBeatmapLevel level)
    // Offset: 0x108DB74
    void SetParentLevel(GlobalNamespace::IBeatmapLevel* level);
  }; // BeatmapLevelSO/DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelSO::DifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*)> __GlobalNamespace_BeatmapLevelSO_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(BeatmapLevelSO::DifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*, "", "BeatmapLevelSO/DifficultyBeatmapSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::SetParentLevel
// Il2CppName: SetParentLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::*)(GlobalNamespace::IBeatmapLevel*)>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet::SetParentLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*), "SetParentLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
