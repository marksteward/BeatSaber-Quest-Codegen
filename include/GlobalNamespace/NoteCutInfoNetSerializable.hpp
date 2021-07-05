// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutInfoNetSerializable
  // [PreserveAttribute] Offset: DE26F0
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
    // public Vector3Serializable saberDir
    // Size: 0xC
    // Offset: 0x18
    GlobalNamespace::Vector3Serializable saberDir;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable cutPoint
    // Size: 0xC
    // Offset: 0x24
    GlobalNamespace::Vector3Serializable cutPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable cutNormal
    // Size: 0xC
    // Offset: 0x30
    GlobalNamespace::Vector3Serializable cutNormal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable notePosition
    // Size: 0xC
    // Offset: 0x3C
    GlobalNamespace::Vector3Serializable notePosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable noteScale
    // Size: 0xC
    // Offset: 0x48
    GlobalNamespace::Vector3Serializable noteScale;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable noteRotation
    // Size: 0xC
    // Offset: 0x54
    GlobalNamespace::QuaternionSerializable noteRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuaternionSerializable) == 0xC);
    // public ColorType colorType
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorType) == 0x4);
    // public System.Single noteTime
    // Size: 0x4
    // Offset: 0x64
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 noteLineIndex
    // Size: 0x4
    // Offset: 0x68
    int noteLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer noteLineLayer
    // Size: 0x4
    // Offset: 0x6C
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single timeToNextColorNote
    // Size: 0x4
    // Offset: 0x70
    float timeToNextColorNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable moveVec
    // Size: 0xC
    // Offset: 0x74
    GlobalNamespace::Vector3Serializable moveVec;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // Creating value type constructor for type: NoteCutInfoNetSerializable
    NoteCutInfoNetSerializable(float saberSpeed_ = {}, bool cutWasOk_ = {}, GlobalNamespace::Vector3Serializable saberDir_ = {}, GlobalNamespace::Vector3Serializable cutPoint_ = {}, GlobalNamespace::Vector3Serializable cutNormal_ = {}, GlobalNamespace::Vector3Serializable notePosition_ = {}, GlobalNamespace::Vector3Serializable noteScale_ = {}, GlobalNamespace::QuaternionSerializable noteRotation_ = {}, GlobalNamespace::ColorType colorType_ = {}, float noteTime_ = {}, int noteLineIndex_ = {}, GlobalNamespace::NoteLineLayer noteLineLayer_ = {}, float timeToNextColorNote_ = {}, GlobalNamespace::Vector3Serializable moveVec_ = {}) noexcept : saberSpeed{saberSpeed_}, cutWasOk{cutWasOk_}, saberDir{saberDir_}, cutPoint{cutPoint_}, cutNormal{cutNormal_}, notePosition{notePosition_}, noteScale{noteScale_}, noteRotation{noteRotation_}, colorType{colorType_}, noteTime{noteTime_}, noteLineIndex{noteLineIndex_}, noteLineLayer{noteLineLayer_}, timeToNextColorNote{timeToNextColorNote_}, moveVec{moveVec_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2349578
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x234974C
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void .ctor(in NoteCutInfo noteCutInfo, NoteData noteData, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 moveVec)
    // Offset: 0x2349988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor(GlobalNamespace::NoteCutInfo& noteCutInfo, GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>(noteCutInfo, noteData, notePosition, noteRotation, noteScale, moveVec)));
    }
    // public System.Void .ctor(System.Single saberSpeed, System.Boolean cutWasOk, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, ColorType colorType, NoteLineLayer noteLineLayer, System.Int32 noteLineIndex, System.Single noteTime, System.Single timeToNextColorNote, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 moveVec)
    // Offset: 0x2349A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor(float saberSpeed, bool cutWasOk, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteLineLayer noteLineLayer, int noteLineIndex, float noteTime, float timeToNextColorNote, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>(saberSpeed, cutWasOk, saberDir, cutPoint, cutNormal, colorType, noteLineLayer, noteLineIndex, noteTime, timeToNextColorNote, notePosition, noteRotation, noteScale, moveVec)));
    }
    // public System.Void .ctor()
    // Offset: 0x2349980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>()));
    }
  }; // NoteCutInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NoteCutInfoNetSerializable), 116 + sizeof(GlobalNamespace::Vector3Serializable)> __GlobalNamespace_NoteCutInfoNetSerializableSizeCheck;
  static_assert(sizeof(NoteCutInfoNetSerializable) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfoNetSerializable*, "", "NoteCutInfoNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "LiteNetLib.Utils.INetSerializable.Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NoteCutInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "LiteNetLib.Utils.INetSerializable.Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
