// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AlwaysOwnedContentSO
  class AlwaysOwnedContentSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AlwaysOwnedContentContainerSO
  class AlwaysOwnedContentContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private AlwaysOwnedContentSO _alwaysOwnedContent
    // Offset: 0x18
    GlobalNamespace::AlwaysOwnedContentSO* alwaysOwnedContent;
    // private System.Collections.Generic.HashSet`1<System.String> _alwaysOwnedBeatmapLevelIds
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedBeatmapLevelIds;
    // private System.Collections.Generic.HashSet`1<System.String> _alwaysOwnedPacksIds
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* alwaysOwnedPacksIds;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Collections.Generic.HashSet`1<System.String> get_alwaysOwnedBeatmapLevelIds()
    // Offset: 0xB849E8
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_alwaysOwnedBeatmapLevelIds();
    // public System.Collections.Generic.HashSet`1<System.String> get_alwaysOwnedPacksIds()
    // Offset: 0xB84CA4
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_alwaysOwnedPacksIds();
    // private System.Void InitAlwaysOwnedItems()
    // Offset: 0xB852E8
    void InitAlwaysOwnedItems();
    // protected override System.Void OnEnable()
    // Offset: 0xB855B4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xB855DC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AlwaysOwnedContentContainerSO* New_ctor();
  }; // AlwaysOwnedContentContainerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysOwnedContentContainerSO*, "", "AlwaysOwnedContentContainerSO");
#pragma pack(pop)
