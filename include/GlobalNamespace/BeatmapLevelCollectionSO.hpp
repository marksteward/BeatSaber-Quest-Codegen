// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelCollectionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelCollectionSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    // private BeatmapLevelSO[] _beatmapLevels
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO*>* beatmapLevels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelCollectionSO
    BeatmapLevelCollectionSO(::Array<GlobalNamespace::BeatmapLevelSO*>* beatmapLevels_ = {}) noexcept : beatmapLevels{beatmapLevels_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelCollection
    operator GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private BeatmapLevelSO[] _beatmapLevels
    ::Array<GlobalNamespace::BeatmapLevelSO*>* _get__beatmapLevels();
    // Set instance field: private BeatmapLevelSO[] _beatmapLevels
    void _set__beatmapLevels(::Array<GlobalNamespace::BeatmapLevelSO*>* value);
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0x119533C
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor()
    // Offset: 0x1195344
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelCollectionSO*, creationType>()));
    }
  }; // BeatmapLevelCollectionSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelCollectionSO), 24 + sizeof(::Array<GlobalNamespace::BeatmapLevelSO*>*)> __GlobalNamespace_BeatmapLevelCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapLevelCollectionSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelCollectionSO*, "", "BeatmapLevelCollectionSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels
// Il2CppName: get_beatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelCollectionSO*), "get_beatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollectionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
