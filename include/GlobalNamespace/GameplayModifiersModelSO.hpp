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
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersModelSO
  // [] Offset: FFFFFFFF
  class GameplayModifiersModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter
    class GameplayModifierBoolGetter;
    // Nested type: GlobalNamespace::GameplayModifiersModelSO::$$c
    class $$c;
    // private GameplayModifierParamsSO _batteryEnergy
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifierParamsSO* batteryEnergy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noFail
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifierParamsSO* noFail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _instaFail
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifierParamsSO* instaFail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noObstacles
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameplayModifierParamsSO* noObstacles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noBombs
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifierParamsSO* noBombs;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _fastNotes
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameplayModifierParamsSO* fastNotes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _strictAngles
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameplayModifierParamsSO* strictAngles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _disappearingArrows
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameplayModifierParamsSO* disappearingArrows;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _fasterSong
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::GameplayModifierParamsSO* fasterSong;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _slowerSong
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayModifierParamsSO* slowerSong;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noArrows
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::GameplayModifierParamsSO* noArrows;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _ghostNotes
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayModifierParamsSO* ghostNotes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC2D1C
    // private GameplayModifierParamsSO _demoNoObstacles
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameplayModifierParamsSO* demoNoObstacles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _demoNoFail
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::GameplayModifierParamsSO* demoNoFail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<GameplayModifierParamsSO,GameplayModifiersModelSO/GameplayModifierBoolGetter> _gameplayModifierGetters
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>* gameplayModifierGetters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>*) == 0x8);
    // Creating value type constructor for type: GameplayModifiersModelSO
    GameplayModifiersModelSO(GlobalNamespace::GameplayModifierParamsSO* batteryEnergy_ = {}, GlobalNamespace::GameplayModifierParamsSO* noFail_ = {}, GlobalNamespace::GameplayModifierParamsSO* instaFail_ = {}, GlobalNamespace::GameplayModifierParamsSO* noObstacles_ = {}, GlobalNamespace::GameplayModifierParamsSO* noBombs_ = {}, GlobalNamespace::GameplayModifierParamsSO* fastNotes_ = {}, GlobalNamespace::GameplayModifierParamsSO* strictAngles_ = {}, GlobalNamespace::GameplayModifierParamsSO* disappearingArrows_ = {}, GlobalNamespace::GameplayModifierParamsSO* fasterSong_ = {}, GlobalNamespace::GameplayModifierParamsSO* slowerSong_ = {}, GlobalNamespace::GameplayModifierParamsSO* noArrows_ = {}, GlobalNamespace::GameplayModifierParamsSO* ghostNotes_ = {}, GlobalNamespace::GameplayModifierParamsSO* demoNoObstacles_ = {}, GlobalNamespace::GameplayModifierParamsSO* demoNoFail_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>* gameplayModifierGetters_ = {}) noexcept : batteryEnergy{batteryEnergy_}, noFail{noFail_}, instaFail{instaFail_}, noObstacles{noObstacles_}, noBombs{noBombs_}, fastNotes{fastNotes_}, strictAngles{strictAngles_}, disappearingArrows{disappearingArrows_}, fasterSong{fasterSong_}, slowerSong{slowerSong_}, noArrows{noArrows_}, ghostNotes{ghostNotes_}, demoNoObstacles{demoNoObstacles_}, demoNoFail{demoNoFail_}, gameplayModifierGetters{gameplayModifierGetters_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public GameplayModifiers CreateGameplayModifiers(System.Func`2<GameplayModifierParamsSO,System.Boolean> valueGetter)
    // Offset: 0xF0EADC
    GlobalNamespace::GameplayModifiers* CreateGameplayModifiers(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter);
    // public System.Boolean GetModifierBoolValue(GameplayModifiers gameplayModifiers, GameplayModifierParamsSO gameplayModifierParams)
    // Offset: 0xF0ED14
    bool GetModifierBoolValue(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> GetModifierParams(GameplayModifiers gameplayModifiers)
    // Offset: 0xF0F178
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* GetModifierParams(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Single GetTotalMultiplier(GameplayModifiers gameplayModifiers)
    // Offset: 0xF0F324
    float GetTotalMultiplier(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Int32 MaxModifiedScoreForMaxRawScore(System.Int32 maxRawScore, GameplayModifiers gameplayModifiers)
    // Offset: 0xF0F440
    int MaxModifiedScoreForMaxRawScore(int maxRawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Int32 MaxModifiedScoreForMaxRawScore(System.Int32 maxRawScore, GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel)
    // Offset: 0xF0F498
    int MaxModifiedScoreForMaxRawScore(int maxRawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel);
    // private System.Int32 GetModifiedScoreForGameplayModifiers(System.Int32 rawScore, GameplayModifiers gameplayModifiers)
    // Offset: 0xF0F46C
    int GetModifiedScoreForGameplayModifiers(int rawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public GameplayModifierParamsSO GetGameplayModifierParams(GameplayModifierMask modifier)
    // Offset: 0xF0F4C4
    GlobalNamespace::GameplayModifierParamsSO* GetGameplayModifierParams(GlobalNamespace::GameplayModifierMask modifier);
    // protected override System.Void OnEnable()
    // Offset: 0xF0E0B4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xF0F5C0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiersModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersModelSO*, creationType>()));
    }
  }; // GameplayModifiersModelSO
  static check_size<sizeof(GameplayModifiersModelSO), 136 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>*)> __GlobalNamespace_GameplayModifiersModelSOSizeCheck;
  static_assert(sizeof(GameplayModifiersModelSO) == 0x90);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersModelSO*, "", "GameplayModifiersModelSO");
