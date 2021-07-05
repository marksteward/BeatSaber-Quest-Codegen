// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
  // Forward declaring type: NetManager
  class NetManager;
  // Forward declaring type: NetEvent
  class NetEvent;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPacketReader
  class NetPacketReader : public LiteNetLib::Utils::NetDataReader {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    // private LiteNetLib.NetPacket _packet
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::NetPacket* packet;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacket*) == 0x8);
    // private readonly LiteNetLib.NetManager _manager
    // Size: 0x8
    // Offset: 0x30
    LiteNetLib::NetManager* manager;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetManager*) == 0x8);
    // private readonly LiteNetLib.NetEvent _evt
    // Size: 0x8
    // Offset: 0x38
    LiteNetLib::NetEvent* evt;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetEvent*) == 0x8);
    // Creating value type constructor for type: NetPacketReader
    NetPacketReader(LiteNetLib::NetPacket* packet_ = {}, LiteNetLib::NetManager* manager_ = {}, LiteNetLib::NetEvent* evt_ = {}) noexcept : packet{packet_}, manager{manager_}, evt{evt_} {}
    // System.Void .ctor(LiteNetLib.NetManager manager, LiteNetLib.NetEvent evt)
    // Offset: 0x1B3FD80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketReader* New_ctor(LiteNetLib::NetManager* manager, LiteNetLib::NetEvent* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacketReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketReader*, creationType>(manager, evt)));
    }
    // System.Void SetSource(LiteNetLib.NetPacket packet)
    // Offset: 0x1B41448
    void SetSource(LiteNetLib::NetPacket* packet);
    // System.Void RecycleInternal()
    // Offset: 0x1B41AE4
    void RecycleInternal();
    // public System.Void Recycle()
    // Offset: 0x1B463D8
    void Recycle();
  }; // LiteNetLib.NetPacketReader
  #pragma pack(pop)
  static check_size<sizeof(NetPacketReader), 56 + sizeof(LiteNetLib::NetEvent*)> __LiteNetLib_NetPacketReaderSizeCheck;
  static_assert(sizeof(NetPacketReader) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacketReader*, "LiteNetLib", "NetPacketReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetPacketReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetPacketReader::SetSource
// Il2CppName: SetSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacketReader::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::NetPacketReader::SetSource)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketReader*), "SetSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketReader::RecycleInternal
// Il2CppName: RecycleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacketReader::*)()>(&LiteNetLib::NetPacketReader::RecycleInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketReader*), "RecycleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetPacketReader::Recycle
// Il2CppName: Recycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPacketReader::*)()>(&LiteNetLib::NetPacketReader::Recycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetPacketReader*), "Recycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
