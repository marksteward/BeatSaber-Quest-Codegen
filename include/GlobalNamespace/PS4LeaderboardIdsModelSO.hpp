// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: PS4LeaderboardIdsModelSO
  // [] Offset: FFFFFFFF
  class PS4LeaderboardIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData
    class LeaderboardIdData;
    // private System.Collections.Generic.List`1<PS4LeaderboardIdsModelSO/LeaderboardIdData> _leaderboardIds
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* leaderboardIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.UInt32> _leaderboardIdToPs4Id
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>* leaderboardIdToPs4Id;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>*) == 0x8);
    // Creating value type constructor for type: PS4LeaderboardIdsModelSO
    PS4LeaderboardIdsModelSO(System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* leaderboardIds_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>* leaderboardIdToPs4Id_ = {}) noexcept : leaderboardIds{leaderboardIds_}, leaderboardIdToPs4Id{leaderboardIdToPs4Id_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.List`1<PS4LeaderboardIdsModelSO/LeaderboardIdData> get_leaderboardIds()
    // Offset: 0xF029EC
    System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* get_leaderboardIds();
    // public System.Boolean GetPS4LeaderboardId(System.String leaderboardId, out System.UInt32 ps4LeaderboardId)
    // Offset: 0xF02B38
    bool GetPS4LeaderboardId(::Il2CppString* leaderboardId, uint& ps4LeaderboardId);
    // protected override System.Void OnEnable()
    // Offset: 0xF029F4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xF02BAC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LeaderboardIdsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LeaderboardIdsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LeaderboardIdsModelSO*, creationType>()));
    }
  }; // PS4LeaderboardIdsModelSO
  static check_size<sizeof(PS4LeaderboardIdsModelSO), 32 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, uint>*)> __GlobalNamespace_PS4LeaderboardIdsModelSOSizeCheck;
  static_assert(sizeof(PS4LeaderboardIdsModelSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LeaderboardIdsModelSO*, "", "PS4LeaderboardIdsModelSO");
#pragma pack(pop)
