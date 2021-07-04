// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GameplayServerFilter
  struct GameplayServerFilter/*, public System::ValueType, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GameplayServerFilter>, public System::IEquatable_1<GlobalNamespace::GameplayServerFilter>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerFilter>*/ {
    public:
    // public readonly System.Boolean includePasswordProtected
    // Size: 0x1
    // Offset: 0x0
    bool includePasswordProtected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean includeEmpty
    // Size: 0x1
    // Offset: 0x1
    bool includeEmpty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean includeFull
    // Size: 0x1
    // Offset: 0x2
    bool includeFull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean filterNames
    // Size: 0x1
    // Offset: 0x3
    bool filterNames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterNames and: nameFilter
    char __padding3[0x4] = {};
    // public readonly System.String nameFilter
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* nameFilter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Boolean filterDifficulties
    // Size: 0x1
    // Offset: 0x10
    bool filterDifficulties;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly BeatmapDifficultyMask difficultyFilter
    // Size: 0x1
    // Offset: 0x11
    GlobalNamespace::BeatmapDifficultyMask difficultyFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // public readonly System.Boolean filterModifiers
    // Size: 0x1
    // Offset: 0x12
    bool filterModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterModifiers and: modifierFilter
    char __padding7[0x1] = {};
    // public readonly GameplayModifierMask modifierFilter
    // Size: 0x2
    // Offset: 0x14
    GlobalNamespace::GameplayModifierMask modifierFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // public readonly System.Boolean filterSongPacks
    // Size: 0x1
    // Offset: 0x16
    bool filterSongPacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterSongPacks and: songPackFilter
    char __padding9[0x1] = {};
    // public readonly SongPackMask songPackFilter
    // Size: 0x10
    // Offset: 0x18
    GlobalNamespace::SongPackMask songPackFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // Creating value type constructor for type: GameplayServerFilter
    constexpr GameplayServerFilter(bool includePasswordProtected_ = {}, bool includeEmpty_ = {}, bool includeFull_ = {}, bool filterNames_ = {}, ::Il2CppString* nameFilter_ = {}, bool filterDifficulties_ = {}, GlobalNamespace::BeatmapDifficultyMask difficultyFilter_ = {}, bool filterModifiers_ = {}, GlobalNamespace::GameplayModifierMask modifierFilter_ = {}, bool filterSongPacks_ = {}, GlobalNamespace::SongPackMask songPackFilter_ = {}) noexcept : includePasswordProtected{includePasswordProtected_}, includeEmpty{includeEmpty_}, includeFull{includeFull_}, filterNames{filterNames_}, nameFilter{nameFilter_}, filterDifficulties{filterDifficulties_}, difficultyFilter{difficultyFilter_}, filterModifiers{filterModifiers_}, modifierFilter{modifierFilter_}, filterSongPacks{filterSongPacks_}, songPackFilter{songPackFilter_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GameplayServerFilter>
    operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GameplayServerFilter>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GameplayServerFilter>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::GameplayServerFilter>
    operator System::IEquatable_1<GlobalNamespace::GameplayServerFilter>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::GameplayServerFilter>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerFilter>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerFilter>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerFilter>*>(this);
    }
    // public System.Void .ctor(System.Boolean includePasswordProtected, System.Boolean includeEmpty, System.Boolean includeFull, System.Boolean filterNames, System.String nameFilter, System.Boolean filterDifficulties, BeatmapDifficultyMask difficultyFilter, System.Boolean filterModifiers, GameplayModifierMask modifierFilter, System.Boolean filterSongPacks, SongPackMask songPackFilter)
    // Offset: 0xEE8CF4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GameplayServerFilter(bool includePasswordProtected, bool includeEmpty, bool includeFull, bool filterNames, ::Il2CppString* nameFilter, bool filterDifficulties, GlobalNamespace::BeatmapDifficultyMask difficultyFilter, bool filterModifiers, GlobalNamespace::GameplayModifierMask modifierFilter, bool filterSongPacks, GlobalNamespace::SongPackMask songPackFilter)
    // static public GameplayServerFilter get_defaultFilter()
    // Offset: 0x132E584
    static GlobalNamespace::GameplayServerFilter get_defaultFilter();
    // public System.Boolean Equals(in GameplayServerFilter other)
    // Offset: 0xEE8D38
    bool Equals(GlobalNamespace::GameplayServerFilter& other);
    // public System.Boolean Equals(GameplayServerFilter other)
    // Offset: 0xEE8D40
    bool Equals_(GlobalNamespace::GameplayServerFilter other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xEE8D88
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // static public GameplayServerFilter Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x132E918
    static GlobalNamespace::GameplayServerFilter Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public GameplayServerFilter CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xEE8D90
    GlobalNamespace::GameplayServerFilter CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean IncludesServerName(System.String lowerInvariantName)
    // Offset: 0xEE8D98
    bool IncludesServerName(::Il2CppString* lowerInvariantName);
    // public System.Boolean IncludesPassword(System.String password)
    // Offset: 0xEE8DC8
    bool IncludesPassword(::Il2CppString* password);
    // public System.Boolean IncludesPlayerCount(System.Int32 currentPlayerCount, System.Int32 maxPlayerCount)
    // Offset: 0xEE8DE4
    bool IncludesPlayerCount(int currentPlayerCount, int maxPlayerCount);
    // public System.Boolean IncludesConfiguration(GameplayServerConfiguration configuration)
    // Offset: 0xEE8E18
    bool IncludesConfiguration(GlobalNamespace::GameplayServerConfiguration configuration);
    // public GameplayServerFilter WithIncludePasswordProtected(System.Boolean includePasswordProtected)
    // Offset: 0xEE8E50
    GlobalNamespace::GameplayServerFilter WithIncludePasswordProtected(bool includePasswordProtected);
    // public GameplayServerFilter WithIncludeEmpty(System.Boolean includeEmpty)
    // Offset: 0xEE8E5C
    GlobalNamespace::GameplayServerFilter WithIncludeEmpty(bool includeEmpty);
    // public GameplayServerFilter WithIncludeFull(System.Boolean includeFull)
    // Offset: 0xEE8E68
    GlobalNamespace::GameplayServerFilter WithIncludeFull(bool includeFull);
    // public GameplayServerFilter WithFilterNames(System.Boolean filterNames, System.String nameFilter)
    // Offset: 0xEE8E74
    GlobalNamespace::GameplayServerFilter WithFilterNames(bool filterNames, ::Il2CppString* nameFilter);
    // public GameplayServerFilter WithFilterDifficulties(System.Boolean filterDifficulties, BeatmapDifficultyMask difficultyFilter)
    // Offset: 0xEE8E80
    GlobalNamespace::GameplayServerFilter WithFilterDifficulties(bool filterDifficulties, GlobalNamespace::BeatmapDifficultyMask difficultyFilter);
    // public GameplayServerFilter WithFilterModifiers(System.Boolean filterModifiers, GameplayModifierMask modifierFilter)
    // Offset: 0xEE8E8C
    GlobalNamespace::GameplayServerFilter WithFilterModifiers(bool filterModifiers, GlobalNamespace::GameplayModifierMask modifierFilter);
    // public GameplayServerFilter WithFilterSongPacks(System.Boolean filterSongPacks, SongPackMask songPackFilter)
    // Offset: 0xEE8E98
    GlobalNamespace::GameplayServerFilter WithFilterSongPacks(bool filterSongPacks, GlobalNamespace::SongPackMask songPackFilter);
    // private System.Boolean IEquatableByReference<GameplayServerFilter>.Equals(in GameplayServerFilter other)
    // Offset: 0xEE8EA4
    bool IEquatableByReference$GameplayServerFilter$_Equals(GlobalNamespace::GameplayServerFilter& other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEE8D78
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEE8D80
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // GameplayServerFilter
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerFilter), 24 + sizeof(GlobalNamespace::SongPackMask)> __GlobalNamespace_GameplayServerFilterSizeCheck;
  static_assert(sizeof(GameplayServerFilter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFilter, "", "GameplayServerFilter");
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::GameplayServerFilter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::get_defaultFilter
// Il2CppName: get_defaultFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (*)()>(&GlobalNamespace::GameplayServerFilter::get_defaultFilter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "get_defaultFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(GlobalNamespace::GameplayServerFilter&)>(&GlobalNamespace::GameplayServerFilter::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayServerFilter")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::Equals_
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(GlobalNamespace::GameplayServerFilter)>(&GlobalNamespace::GameplayServerFilter::Equals_)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayServerFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFilter::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::GameplayServerFilter::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerFilter::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayServerFilter::CreateFromSerializedData)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::IncludesServerName
// Il2CppName: IncludesServerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(::Il2CppString*)>(&GlobalNamespace::GameplayServerFilter::IncludesServerName)> {
  const MethodInfo* get() {
    static auto* lowerInvariantName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "IncludesServerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowerInvariantName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::IncludesPassword
// Il2CppName: IncludesPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(::Il2CppString*)>(&GlobalNamespace::GameplayServerFilter::IncludesPassword)> {
  const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "IncludesPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::IncludesPlayerCount
// Il2CppName: IncludesPlayerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(int, int)>(&GlobalNamespace::GameplayServerFilter::IncludesPlayerCount)> {
  const MethodInfo* get() {
    static auto* currentPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "IncludesPlayerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPlayerCount, maxPlayerCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::IncludesConfiguration
// Il2CppName: IncludesConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GameplayServerFilter::IncludesConfiguration)> {
  const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "IncludesConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithIncludePasswordProtected
// Il2CppName: WithIncludePasswordProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool)>(&GlobalNamespace::GameplayServerFilter::WithIncludePasswordProtected)> {
  const MethodInfo* get() {
    static auto* includePasswordProtected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithIncludePasswordProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePasswordProtected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithIncludeEmpty
// Il2CppName: WithIncludeEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool)>(&GlobalNamespace::GameplayServerFilter::WithIncludeEmpty)> {
  const MethodInfo* get() {
    static auto* includeEmpty = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithIncludeEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includeEmpty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithIncludeFull
// Il2CppName: WithIncludeFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool)>(&GlobalNamespace::GameplayServerFilter::WithIncludeFull)> {
  const MethodInfo* get() {
    static auto* includeFull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithIncludeFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includeFull});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithFilterNames
// Il2CppName: WithFilterNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool, ::Il2CppString*)>(&GlobalNamespace::GameplayServerFilter::WithFilterNames)> {
  const MethodInfo* get() {
    static auto* filterNames = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* nameFilter = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithFilterNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filterNames, nameFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithFilterDifficulties
// Il2CppName: WithFilterDifficulties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool, GlobalNamespace::BeatmapDifficultyMask)>(&GlobalNamespace::GameplayServerFilter::WithFilterDifficulties)> {
  const MethodInfo* get() {
    static auto* filterDifficulties = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* difficultyFilter = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultyMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithFilterDifficulties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filterDifficulties, difficultyFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithFilterModifiers
// Il2CppName: WithFilterModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool, GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayServerFilter::WithFilterModifiers)> {
  const MethodInfo* get() {
    static auto* filterModifiers = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* modifierFilter = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithFilterModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filterModifiers, modifierFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::WithFilterSongPacks
// Il2CppName: WithFilterSongPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFilter (GlobalNamespace::GameplayServerFilter::*)(bool, GlobalNamespace::SongPackMask)>(&GlobalNamespace::GameplayServerFilter::WithFilterSongPacks)> {
  const MethodInfo* get() {
    static auto* filterSongPacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* songPackFilter = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "WithFilterSongPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filterSongPacks, songPackFilter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::IEquatableByReference$GameplayServerFilter$_Equals
// Il2CppName: IEquatableByReference<GameplayServerFilter>.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(GlobalNamespace::GameplayServerFilter&)>(&GlobalNamespace::GameplayServerFilter::IEquatableByReference$GameplayServerFilter$_Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayServerFilter")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "IEquatableByReference<GameplayServerFilter>.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayServerFilter::*)(::Il2CppObject*)>(&GlobalNamespace::GameplayServerFilter::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFilter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayServerFilter::*)()>(&GlobalNamespace::GameplayServerFilter::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFilter), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
