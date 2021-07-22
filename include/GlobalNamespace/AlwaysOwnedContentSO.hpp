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
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AlwaysOwnedContentSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AlwaysOwnedContentSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelPackSO[] _alwaysOwnedPacks
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* alwaysOwnedPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelPackSO*>*) == 0x8);
    // private BeatmapLevelSO[] _alwaysOwnedBeatmapLevels
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLevelSO*>* alwaysOwnedBeatmapLevels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // Creating value type constructor for type: AlwaysOwnedContentSO
    AlwaysOwnedContentSO(::Array<GlobalNamespace::BeatmapLevelPackSO*>* alwaysOwnedPacks_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO*>* alwaysOwnedBeatmapLevels_ = {}) noexcept : alwaysOwnedPacks{alwaysOwnedPacks_}, alwaysOwnedBeatmapLevels{alwaysOwnedBeatmapLevels_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapLevelPackSO[] get_alwaysOwnedPacks()
    // Offset: 0x10D6F5C
    ::Array<GlobalNamespace::BeatmapLevelPackSO*>* get_alwaysOwnedPacks();
    // public BeatmapLevelSO[] get_alwaysOwnedBeatmapLevels()
    // Offset: 0x10D6F64
    ::Array<GlobalNamespace::BeatmapLevelSO*>* get_alwaysOwnedBeatmapLevels();
    // public System.Void .ctor()
    // Offset: 0x10D6F6C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlwaysOwnedContentSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AlwaysOwnedContentSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlwaysOwnedContentSO*, creationType>()));
    }
  }; // AlwaysOwnedContentSO
  #pragma pack(pop)
  static check_size<sizeof(AlwaysOwnedContentSO), 32 + sizeof(::Array<GlobalNamespace::BeatmapLevelSO*>*)> __GlobalNamespace_AlwaysOwnedContentSOSizeCheck;
  static_assert(sizeof(AlwaysOwnedContentSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysOwnedContentSO*, "", "AlwaysOwnedContentSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks
// Il2CppName: get_alwaysOwnedPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapLevelPackSO*>* (GlobalNamespace::AlwaysOwnedContentSO::*)()>(&GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysOwnedContentSO*), "get_alwaysOwnedPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels
// Il2CppName: get_alwaysOwnedBeatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapLevelSO*>* (GlobalNamespace::AlwaysOwnedContentSO::*)()>(&GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlwaysOwnedContentSO*), "get_alwaysOwnedBeatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlwaysOwnedContentSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
