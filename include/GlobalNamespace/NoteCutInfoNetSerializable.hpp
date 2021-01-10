// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: UnitVector3Serializable
#include "GlobalNamespace/UnitVector3Serializable.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  // Autogenerated type: NoteCutInfoNetSerializable
  // [] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: DA3980
  class NoteCutInfoNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // public System.Single saberSpeed
    // Size: 0x4
    // Offset: 0x10
    float saberSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean cutWasOk
    // Size: 0x1
    // Offset: 0x14
    bool cutWasOk;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cutWasOk and: saberDir
    char __padding1[0x3] = {};
    // public UnitVector3Serializable saberDir
    // Size: 0xC
    // Offset: 0x18
    GlobalNamespace::UnitVector3Serializable saberDir;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnitVector3Serializable) == 0xC);
    // public Vector3Serializable cutPoint
    // Size: 0xC
    // Offset: 0x24
    GlobalNamespace::Vector3Serializable cutPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public UnitVector3Serializable cutNormal
    // Size: 0xC
    // Offset: 0x30
    GlobalNamespace::UnitVector3Serializable cutNormal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnitVector3Serializable) == 0xC);
    // public Vector3Serializable notePosition
    // Size: 0xC
    // Offset: 0x3C
    GlobalNamespace::Vector3Serializable notePosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable noteRotation
    // Size: 0x10
    // Offset: 0x48
    GlobalNamespace::QuaternionSerializable noteRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuaternionSerializable) == 0x10);
    // public ColorType colorType
    // Size: 0x4
    // Offset: 0x58
    GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorType) == 0x4);
    // public System.Single noteTime
    // Size: 0x4
    // Offset: 0x5C
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 noteLineIndex
    // Size: 0x4
    // Offset: 0x60
    int noteLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer noteLineLayer
    // Size: 0x4
    // Offset: 0x64
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single timeToNextColorNote
    // Size: 0x4
    // Offset: 0x68
    float timeToNextColorNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable moveVec
    // Size: 0xC
    // Offset: 0x6C
    GlobalNamespace::Vector3Serializable moveVec;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // Creating value type constructor for type: NoteCutInfoNetSerializable
    NoteCutInfoNetSerializable(float saberSpeed_ = {}, bool cutWasOk_ = {}, GlobalNamespace::UnitVector3Serializable saberDir_ = {}, GlobalNamespace::Vector3Serializable cutPoint_ = {}, GlobalNamespace::UnitVector3Serializable cutNormal_ = {}, GlobalNamespace::Vector3Serializable notePosition_ = {}, GlobalNamespace::QuaternionSerializable noteRotation_ = {}, GlobalNamespace::ColorType colorType_ = {}, float noteTime_ = {}, int noteLineIndex_ = {}, GlobalNamespace::NoteLineLayer noteLineLayer_ = {}, float timeToNextColorNote_ = {}, GlobalNamespace::Vector3Serializable moveVec_ = {}) noexcept : saberSpeed{saberSpeed_}, cutWasOk{cutWasOk_}, saberDir{saberDir_}, cutPoint{cutPoint_}, cutNormal{cutNormal_}, notePosition{notePosition_}, noteRotation{noteRotation_}, colorType{colorType_}, noteTime{noteTime_}, noteLineIndex{noteLineIndex_}, noteLineLayer{noteLineLayer_}, timeToNextColorNote{timeToNextColorNote_}, moveVec{moveVec_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // public System.Void .ctor(NoteCutInfo noteCutInfo, NoteData noteData, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 moveVec)
    // Offset: 0x19A6BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor(GlobalNamespace::NoteCutInfo* noteCutInfo, GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 moveVec) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>(noteCutInfo, noteData, notePosition, noteRotation, moveVec)));
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A6204
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x19A661C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void .ctor()
    // Offset: 0x19A6BDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>()));
    }
  }; // NoteCutInfoNetSerializable
  static check_size<sizeof(NoteCutInfoNetSerializable), 108 + sizeof(GlobalNamespace::Vector3Serializable)> __GlobalNamespace_NoteCutInfoNetSerializableSizeCheck;
  static_assert(sizeof(NoteCutInfoNetSerializable) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfoNetSerializable*, "", "NoteCutInfoNetSerializable");
#pragma pack(pop)
