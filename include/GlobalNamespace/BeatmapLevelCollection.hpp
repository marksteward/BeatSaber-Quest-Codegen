// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelCollection
  class BeatmapLevelCollection : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    // private IPreviewBeatmapLevel[] _levels
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* levels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelCollection
    BeatmapLevelCollection(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* levels_ = {}) noexcept : levels{levels_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelCollection
    operator GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Creating conversion operator: operator ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*
    constexpr operator ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*() const noexcept {
      return levels;
    }
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0x11C8970
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor(IPreviewBeatmapLevel[] levels)
    // Offset: 0x11C8978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelCollection* New_ctor(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* levels) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelCollection*, creationType>(levels)));
    }
    // static public BeatmapLevelCollection CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(IBeatmapLevelCollection beatmapLevelCollection, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x11C89A4
    static GlobalNamespace::BeatmapLevelCollection* CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // BeatmapLevelCollection
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelCollection), 16 + sizeof(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*)> __GlobalNamespace_BeatmapLevelCollectionSizeCheck;
  static_assert(sizeof(BeatmapLevelCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelCollection*, "", "BeatmapLevelCollection");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels
// Il2CppName: get_beatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::BeatmapLevelCollection::*)()>(&GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelCollection*), "get_beatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering
// Il2CppName: CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelCollection* (*)(GlobalNamespace::IBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering)> {
  const MethodInfo* get() {
    static auto* beatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelCollection")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelCollection*), "CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelCollection, beatmapCharacteristic});
  }
};
