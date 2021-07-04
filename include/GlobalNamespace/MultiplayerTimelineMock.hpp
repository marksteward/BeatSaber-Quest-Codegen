// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerTimelineMock
  class MultiplayerTimelineMock : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE2854C
    // private UnityEngine.GameObject[] _connectedPlayerIntroAnimators
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* connectedPlayerIntroAnimators;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject[] _connectedPlayerScoreRingItems
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::GameObject*>* connectedPlayerScoreRingItems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject[] _connectedPlayerOutroAnimators
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::GameObject*>* connectedPlayerOutroAnimators;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE285B8
    // private UnityEngine.GameObject _localPlayerIntroAnimator
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* localPlayerIntroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _localPlayerScoreRingItem
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* localPlayerScoreRingItem;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _localPlayerOutroAnimator
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* localPlayerOutroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [HeaderAttribute] Offset: 0xE28624
    // private UnityEngine.GameObject _connectedDuelIntroAnimator
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GameObject* connectedDuelIntroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _connectedDuelOutroAnimator
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* connectedDuelOutroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _localDuelIntroAnimator
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* localDuelIntroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _localDuelOutroAnimator
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::GameObject* localDuelOutroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [HeaderAttribute] Offset: 0xE286A0
    // private UnityEngine.GameObject[] _resultAvatars
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::GameObject*>* resultAvatars;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject[] _badgeTimelines
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::GameObject*>* badgeTimelines;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE286FC
    // private UnityEngine.GameObject _resultsMocks
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* resultsMocks;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _ringsGroup
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* ringsGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _playersGroup
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* playersGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _duelGroup
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::GameObject* duelGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: MultiplayerTimelineMock
    MultiplayerTimelineMock(::Array<UnityEngine::GameObject*>* connectedPlayerIntroAnimators_ = {}, ::Array<UnityEngine::GameObject*>* connectedPlayerScoreRingItems_ = {}, ::Array<UnityEngine::GameObject*>* connectedPlayerOutroAnimators_ = {}, UnityEngine::GameObject* localPlayerIntroAnimator_ = {}, UnityEngine::GameObject* localPlayerScoreRingItem_ = {}, UnityEngine::GameObject* localPlayerOutroAnimator_ = {}, UnityEngine::GameObject* connectedDuelIntroAnimator_ = {}, UnityEngine::GameObject* connectedDuelOutroAnimator_ = {}, UnityEngine::GameObject* localDuelIntroAnimator_ = {}, UnityEngine::GameObject* localDuelOutroAnimator_ = {}, ::Array<UnityEngine::GameObject*>* resultAvatars_ = {}, ::Array<UnityEngine::GameObject*>* badgeTimelines_ = {}, UnityEngine::GameObject* resultsMocks_ = {}, UnityEngine::GameObject* ringsGroup_ = {}, UnityEngine::GameObject* playersGroup_ = {}, UnityEngine::GameObject* duelGroup_ = {}) noexcept : connectedPlayerIntroAnimators{connectedPlayerIntroAnimators_}, connectedPlayerScoreRingItems{connectedPlayerScoreRingItems_}, connectedPlayerOutroAnimators{connectedPlayerOutroAnimators_}, localPlayerIntroAnimator{localPlayerIntroAnimator_}, localPlayerScoreRingItem{localPlayerScoreRingItem_}, localPlayerOutroAnimator{localPlayerOutroAnimator_}, connectedDuelIntroAnimator{connectedDuelIntroAnimator_}, connectedDuelOutroAnimator{connectedDuelOutroAnimator_}, localDuelIntroAnimator{localDuelIntroAnimator_}, localDuelOutroAnimator{localDuelOutroAnimator_}, resultAvatars{resultAvatars_}, badgeTimelines{badgeTimelines_}, resultsMocks{resultsMocks_}, ringsGroup{ringsGroup_}, playersGroup{playersGroup_}, duelGroup{duelGroup_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.GameObject[] get_connectedPlayerIntroAnimators()
    // Offset: 0x1013BBC
    ::Array<UnityEngine::GameObject*>* get_connectedPlayerIntroAnimators();
    // public UnityEngine.GameObject[] get_connectedPlayerScoreRings()
    // Offset: 0x1013BC4
    ::Array<UnityEngine::GameObject*>* get_connectedPlayerScoreRings();
    // public UnityEngine.GameObject[] get_connectedPlayerOutroAnimators()
    // Offset: 0x1013BCC
    ::Array<UnityEngine::GameObject*>* get_connectedPlayerOutroAnimators();
    // public UnityEngine.GameObject get_localPlayerIntroAnimator()
    // Offset: 0x1013BD4
    UnityEngine::GameObject* get_localPlayerIntroAnimator();
    // public UnityEngine.GameObject get_localPlayerScoreRingItem()
    // Offset: 0x1013BDC
    UnityEngine::GameObject* get_localPlayerScoreRingItem();
    // public UnityEngine.GameObject get_localPlayerOutroAnimator()
    // Offset: 0x1013BE4
    UnityEngine::GameObject* get_localPlayerOutroAnimator();
    // public UnityEngine.GameObject get_connectedDuelIntroAnimator()
    // Offset: 0x1013BEC
    UnityEngine::GameObject* get_connectedDuelIntroAnimator();
    // public UnityEngine.GameObject get_connectedDuelOutroAnimator()
    // Offset: 0x1013BF4
    UnityEngine::GameObject* get_connectedDuelOutroAnimator();
    // public UnityEngine.GameObject get_localDuelIntroAnimator()
    // Offset: 0x1013BFC
    UnityEngine::GameObject* get_localDuelIntroAnimator();
    // public UnityEngine.GameObject get_localDuelOutroAnimator()
    // Offset: 0x1013C04
    UnityEngine::GameObject* get_localDuelOutroAnimator();
    // public UnityEngine.GameObject[] get_resultAvatars()
    // Offset: 0x1013C0C
    ::Array<UnityEngine::GameObject*>* get_resultAvatars();
    // public UnityEngine.GameObject[] get_badgeTimelines()
    // Offset: 0x1013C14
    ::Array<UnityEngine::GameObject*>* get_badgeTimelines();
    // public UnityEngine.GameObject get_resultsMocks()
    // Offset: 0x1013C1C
    UnityEngine::GameObject* get_resultsMocks();
    // public System.Void HandleActivations(System.Boolean isDuel)
    // Offset: 0x1013C24
    void HandleActivations(bool isDuel);
    // public System.Void .ctor()
    // Offset: 0x1013C88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerTimelineMock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerTimelineMock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerTimelineMock*, creationType>()));
    }
  }; // MultiplayerTimelineMock
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerTimelineMock), 144 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_MultiplayerTimelineMockSizeCheck;
  static_assert(sizeof(MultiplayerTimelineMock) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerTimelineMock*, "", "MultiplayerTimelineMock");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_connectedPlayerIntroAnimators
// Il2CppName: get_connectedPlayerIntroAnimators
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_connectedPlayerScoreRings
// Il2CppName: get_connectedPlayerScoreRings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_connectedPlayerOutroAnimators
// Il2CppName: get_connectedPlayerOutroAnimators
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_localPlayerIntroAnimator
// Il2CppName: get_localPlayerIntroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_localPlayerScoreRingItem
// Il2CppName: get_localPlayerScoreRingItem
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_localPlayerOutroAnimator
// Il2CppName: get_localPlayerOutroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_connectedDuelIntroAnimator
// Il2CppName: get_connectedDuelIntroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_connectedDuelOutroAnimator
// Il2CppName: get_connectedDuelOutroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_localDuelIntroAnimator
// Il2CppName: get_localDuelIntroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_localDuelOutroAnimator
// Il2CppName: get_localDuelOutroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_resultAvatars
// Il2CppName: get_resultAvatars
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_badgeTimelines
// Il2CppName: get_badgeTimelines
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::get_resultsMocks
// Il2CppName: get_resultsMocks
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::HandleActivations
// Il2CppName: HandleActivations
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerTimelineMock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
