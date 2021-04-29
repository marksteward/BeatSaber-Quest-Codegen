// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IStateTable`3
#include "GlobalNamespace/IStateTable_3.hpp"
// Including type: StandardScoreSyncState/Score
#include "GlobalNamespace/StandardScoreSyncState_Score.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: StandardScoreSyncState
  struct StandardScoreSyncState/*, public System::ValueType, public GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    // private System.Int32 _modifiedScore
    // Size: 0x4
    // Offset: 0x0
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rawScore
    // Size: 0x4
    // Offset: 0x4
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _immediateMaxPossibleRawScore
    // Size: 0x4
    // Offset: 0x8
    int immediateMaxPossibleRawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _combo
    // Size: 0x4
    // Offset: 0xC
    int combo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0x10
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StandardScoreSyncState
    constexpr StandardScoreSyncState(int modifiedScore_ = {}, int rawScore_ = {}, int immediateMaxPossibleRawScore_ = {}, int combo_ = {}, int multiplier_ = {}) noexcept : modifiedScore{modifiedScore_}, rawScore{rawScore_}, immediateMaxPossibleRawScore{immediateMaxPossibleRawScore_}, combo{combo_}, multiplier{multiplier_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>
    operator GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>
    operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // public System.Void SetState(StandardScoreSyncState/Score s, System.Int32 value)
    // Offset: 0xE09120
    void SetState(GlobalNamespace::StandardScoreSyncState_Score s, int value);
    // public StandardScoreSyncState GetDelta(in StandardScoreSyncState stateTable)
    // Offset: 0xE09168
    GlobalNamespace::StandardScoreSyncState GetDelta(GlobalNamespace::StandardScoreSyncState& stateTable);
    // public StandardScoreSyncState ApplyDelta(in StandardScoreSyncState delta)
    // Offset: 0xE0918C
    GlobalNamespace::StandardScoreSyncState ApplyDelta(GlobalNamespace::StandardScoreSyncState& delta);
    // public System.Int32 GetState(StandardScoreSyncState/Score s)
    // Offset: 0xE091B0
    int GetState(GlobalNamespace::StandardScoreSyncState_Score s);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE09200
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE09208
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(in StandardScoreSyncState other)
    // Offset: 0xE09210
    bool Equals(GlobalNamespace::StandardScoreSyncState& other);
    // public System.Int32 GetSize()
    // Offset: 0xE09218
    int GetSize();
    // private StandardScoreSyncState IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta(in StandardScoreSyncState stateTable)
    // Offset: 0xE09220
    GlobalNamespace::StandardScoreSyncState IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_GetDelta(GlobalNamespace::StandardScoreSyncState& stateTable);
    // private StandardScoreSyncState IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta(in StandardScoreSyncState delta)
    // Offset: 0xE09244
    GlobalNamespace::StandardScoreSyncState IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_ApplyDelta(GlobalNamespace::StandardScoreSyncState& delta);
    // private System.Boolean IEquatableByReference<StandardScoreSyncState>.Equals(in StandardScoreSyncState other)
    // Offset: 0xE09268
    bool IEquatableByReference$StandardScoreSyncState$_Equals(GlobalNamespace::StandardScoreSyncState& other);
  }; // StandardScoreSyncState
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncState), 16 + sizeof(int)> __GlobalNamespace_StandardScoreSyncStateSizeCheck;
  static_assert(sizeof(StandardScoreSyncState) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
