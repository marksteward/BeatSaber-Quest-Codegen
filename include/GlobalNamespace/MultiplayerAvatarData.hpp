// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MultiplayerAvatarData
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct MultiplayerAvatarData/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>, public System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>*/ {
    public:
    // public readonly System.String headTopId
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* headTopId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly UnityEngine.Color32 headTopPrimaryColor
    // Size: 0x4
    // Offset: 0x8
    UnityEngine::Color32 headTopPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 headTopSecondaryColor
    // Size: 0x4
    // Offset: 0xC
    UnityEngine::Color32 headTopSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly System.String glassesId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* glassesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly UnityEngine.Color32 glassesColor
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Color32 glassesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: glassesColor and: facialHairId
    char __padding4[0x4] = {};
    // public readonly System.String facialHairId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* facialHairId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly UnityEngine.Color32 facialHairColor
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::Color32 facialHairColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: facialHairColor and: handsId
    char __padding6[0x4] = {};
    // public readonly System.String handsId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* handsId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly UnityEngine.Color32 handsColor
    // Size: 0x4
    // Offset: 0x38
    UnityEngine::Color32 handsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: handsColor and: clothesId
    char __padding8[0x4] = {};
    // public readonly System.String clothesId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* clothesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly UnityEngine.Color32 clothesPrimaryColor
    // Size: 0x4
    // Offset: 0x48
    UnityEngine::Color32 clothesPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 clothesSecondaryColor
    // Size: 0x4
    // Offset: 0x4C
    UnityEngine::Color32 clothesSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public readonly UnityEngine.Color32 clothesDetailColor
    // Size: 0x4
    // Offset: 0x50
    UnityEngine::Color32 clothesDetailColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // Padding between fields: clothesDetailColor and: skinColorId
    char __padding12[0x4] = {};
    // public readonly System.String skinColorId
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* skinColorId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String eyesId
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* eyesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String mouthId
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* mouthId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MultiplayerAvatarData
    constexpr MultiplayerAvatarData(::Il2CppString* headTopId_ = {}, UnityEngine::Color32 headTopPrimaryColor_ = {}, UnityEngine::Color32 headTopSecondaryColor_ = {}, ::Il2CppString* glassesId_ = {}, UnityEngine::Color32 glassesColor_ = {}, ::Il2CppString* facialHairId_ = {}, UnityEngine::Color32 facialHairColor_ = {}, ::Il2CppString* handsId_ = {}, UnityEngine::Color32 handsColor_ = {}, ::Il2CppString* clothesId_ = {}, UnityEngine::Color32 clothesPrimaryColor_ = {}, UnityEngine::Color32 clothesSecondaryColor_ = {}, UnityEngine::Color32 clothesDetailColor_ = {}, ::Il2CppString* skinColorId_ = {}, ::Il2CppString* eyesId_ = {}, ::Il2CppString* mouthId_ = {}) noexcept : headTopId{headTopId_}, headTopPrimaryColor{headTopPrimaryColor_}, headTopSecondaryColor{headTopSecondaryColor_}, glassesId{glassesId_}, glassesColor{glassesColor_}, facialHairId{facialHairId_}, facialHairColor{facialHairColor_}, handsId{handsId_}, handsColor{handsColor_}, clothesId{clothesId_}, clothesPrimaryColor{clothesPrimaryColor_}, clothesSecondaryColor{clothesSecondaryColor_}, clothesDetailColor{clothesDetailColor_}, skinColorId{skinColorId_}, eyesId{eyesId_}, mouthId{mouthId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>
    operator System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>*>(this);
    }
    // Get instance field: public readonly System.String headTopId
    ::Il2CppString* _get_headTopId();
    // Set instance field: public readonly System.String headTopId
    void _set_headTopId(::Il2CppString* value);
    // Get instance field: public readonly UnityEngine.Color32 headTopPrimaryColor
    UnityEngine::Color32 _get_headTopPrimaryColor();
    // Set instance field: public readonly UnityEngine.Color32 headTopPrimaryColor
    void _set_headTopPrimaryColor(UnityEngine::Color32 value);
    // Get instance field: public readonly UnityEngine.Color32 headTopSecondaryColor
    UnityEngine::Color32 _get_headTopSecondaryColor();
    // Set instance field: public readonly UnityEngine.Color32 headTopSecondaryColor
    void _set_headTopSecondaryColor(UnityEngine::Color32 value);
    // Get instance field: public readonly System.String glassesId
    ::Il2CppString* _get_glassesId();
    // Set instance field: public readonly System.String glassesId
    void _set_glassesId(::Il2CppString* value);
    // Get instance field: public readonly UnityEngine.Color32 glassesColor
    UnityEngine::Color32 _get_glassesColor();
    // Set instance field: public readonly UnityEngine.Color32 glassesColor
    void _set_glassesColor(UnityEngine::Color32 value);
    // Get instance field: public readonly System.String facialHairId
    ::Il2CppString* _get_facialHairId();
    // Set instance field: public readonly System.String facialHairId
    void _set_facialHairId(::Il2CppString* value);
    // Get instance field: public readonly UnityEngine.Color32 facialHairColor
    UnityEngine::Color32 _get_facialHairColor();
    // Set instance field: public readonly UnityEngine.Color32 facialHairColor
    void _set_facialHairColor(UnityEngine::Color32 value);
    // Get instance field: public readonly System.String handsId
    ::Il2CppString* _get_handsId();
    // Set instance field: public readonly System.String handsId
    void _set_handsId(::Il2CppString* value);
    // Get instance field: public readonly UnityEngine.Color32 handsColor
    UnityEngine::Color32 _get_handsColor();
    // Set instance field: public readonly UnityEngine.Color32 handsColor
    void _set_handsColor(UnityEngine::Color32 value);
    // Get instance field: public readonly System.String clothesId
    ::Il2CppString* _get_clothesId();
    // Set instance field: public readonly System.String clothesId
    void _set_clothesId(::Il2CppString* value);
    // Get instance field: public readonly UnityEngine.Color32 clothesPrimaryColor
    UnityEngine::Color32 _get_clothesPrimaryColor();
    // Set instance field: public readonly UnityEngine.Color32 clothesPrimaryColor
    void _set_clothesPrimaryColor(UnityEngine::Color32 value);
    // Get instance field: public readonly UnityEngine.Color32 clothesSecondaryColor
    UnityEngine::Color32 _get_clothesSecondaryColor();
    // Set instance field: public readonly UnityEngine.Color32 clothesSecondaryColor
    void _set_clothesSecondaryColor(UnityEngine::Color32 value);
    // Get instance field: public readonly UnityEngine.Color32 clothesDetailColor
    UnityEngine::Color32 _get_clothesDetailColor();
    // Set instance field: public readonly UnityEngine.Color32 clothesDetailColor
    void _set_clothesDetailColor(UnityEngine::Color32 value);
    // Get instance field: public readonly System.String skinColorId
    ::Il2CppString* _get_skinColorId();
    // Set instance field: public readonly System.String skinColorId
    void _set_skinColorId(::Il2CppString* value);
    // Get instance field: public readonly System.String eyesId
    ::Il2CppString* _get_eyesId();
    // Set instance field: public readonly System.String eyesId
    void _set_eyesId(::Il2CppString* value);
    // Get instance field: public readonly System.String mouthId
    ::Il2CppString* _get_mouthId();
    // Set instance field: public readonly System.String mouthId
    void _set_mouthId(::Il2CppString* value);
    // public System.Void .ctor(System.String headTopId, UnityEngine.Color32 headTopPrimaryColor, UnityEngine.Color32 headTopSecondaryColor, System.String glassesId, UnityEngine.Color32 glassesColor, System.String facialHairId, UnityEngine.Color32 facialHairColor, System.String handsId, UnityEngine.Color32 handsColor, System.String clothesId, UnityEngine.Color32 clothesPrimaryColor, UnityEngine.Color32 clothesSecondaryColor, UnityEngine.Color32 clothesDetailColor, System.String skinColorId, System.String eyesId, System.String mouthId)
    // Offset: 0xF0BF18
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  MultiplayerAvatarData(::Il2CppString* headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::Il2CppString* glassesId, UnityEngine::Color32 glassesColor, ::Il2CppString* facialHairId, UnityEngine::Color32 facialHairColor, ::Il2CppString* handsId, UnityEngine::Color32 handsColor, ::Il2CppString* clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::Il2CppString* skinColorId, ::Il2CppString* eyesId, ::Il2CppString* mouthId)
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF0BF64
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public MultiplayerAvatarData CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF0BF6C
    GlobalNamespace::MultiplayerAvatarData CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public MultiplayerAvatarData Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2327634
    static GlobalNamespace::MultiplayerAvatarData Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(MultiplayerAvatarData other)
    // Offset: 0xF0BF74
    bool Equals(GlobalNamespace::MultiplayerAvatarData other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0BFB4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF0BFBC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // MultiplayerAvatarData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerAvatarData), 104 + sizeof(::Il2CppString*)> __GlobalNamespace_MultiplayerAvatarDataSizeCheck;
  static_assert(sizeof(MultiplayerAvatarData) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::MultiplayerAvatarData::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::MultiplayerAvatarData::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MultiplayerAvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(::Il2CppObject*)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerAvatarData::*)()>(&GlobalNamespace::MultiplayerAvatarData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarData), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
