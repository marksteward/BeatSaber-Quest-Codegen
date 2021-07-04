// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer/EncryptionStatistics
  class PacketEncryptionLayer::EncryptionStatistics : public ::Il2CppObject {
    public:
    // private System.Int64 _packetsReceivedPlaintext
    // Size: 0x8
    // Offset: 0x10
    int64_t packetsReceivedPlaintext;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsReceivedEncrypted
    // Size: 0x8
    // Offset: 0x18
    int64_t packetsReceivedEncrypted;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsReceivedRejected
    // Size: 0x8
    // Offset: 0x20
    int64_t packetsReceivedRejected;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsSentPlaintext
    // Size: 0x8
    // Offset: 0x28
    int64_t packetsSentPlaintext;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsSentEncrypted
    // Size: 0x8
    // Offset: 0x30
    int64_t packetsSentEncrypted;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsSentRejected
    // Size: 0x8
    // Offset: 0x38
    int64_t packetsSentRejected;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _encryptionProcessingTime
    // Size: 0x8
    // Offset: 0x40
    int64_t encryptionProcessingTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _decryptionProcessingTime
    // Size: 0x8
    // Offset: 0x48
    int64_t decryptionProcessingTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: EncryptionStatistics
    EncryptionStatistics(int64_t packetsReceivedPlaintext_ = {}, int64_t packetsReceivedEncrypted_ = {}, int64_t packetsReceivedRejected_ = {}, int64_t packetsSentPlaintext_ = {}, int64_t packetsSentEncrypted_ = {}, int64_t packetsSentRejected_ = {}, int64_t encryptionProcessingTime_ = {}, int64_t decryptionProcessingTime_ = {}) noexcept : packetsReceivedPlaintext{packetsReceivedPlaintext_}, packetsReceivedEncrypted{packetsReceivedEncrypted_}, packetsReceivedRejected{packetsReceivedRejected_}, packetsSentPlaintext{packetsSentPlaintext_}, packetsSentEncrypted{packetsSentEncrypted_}, packetsSentRejected{packetsSentRejected_}, encryptionProcessingTime{encryptionProcessingTime_}, decryptionProcessingTime{decryptionProcessingTime_} {}
    // public System.Int64 get_packetsReceivedPlaintext()
    // Offset: 0x1507C04
    int64_t get_packetsReceivedPlaintext();
    // public System.Int64 get_packetsReceivedEncrypted()
    // Offset: 0x1507C10
    int64_t get_packetsReceivedEncrypted();
    // public System.Int64 get_packetsReceivedRejected()
    // Offset: 0x1507C1C
    int64_t get_packetsReceivedRejected();
    // public System.Int64 get_packetsSentPlaintext()
    // Offset: 0x1507C28
    int64_t get_packetsSentPlaintext();
    // public System.Int64 get_packetsSentEncrypted()
    // Offset: 0x1507C34
    int64_t get_packetsSentEncrypted();
    // public System.Int64 get_packetsSentRejected()
    // Offset: 0x1507C40
    int64_t get_packetsSentRejected();
    // public System.Int64 get_encryptionProcessingTime()
    // Offset: 0x1507C4C
    int64_t get_encryptionProcessingTime();
    // public System.Int64 get_decryptionProcessingTime()
    // Offset: 0x1507CD8
    int64_t get_decryptionProcessingTime();
    // public System.Void IncrementPacketsReceivedPlaintext()
    // Offset: 0x1505D64
    void IncrementPacketsReceivedPlaintext();
    // public System.Void IncrementPacketsReceivedEncrypted()
    // Offset: 0x1505D4C
    void IncrementPacketsReceivedEncrypted();
    // public System.Void IncrementPacketsReceivedRejected()
    // Offset: 0x1505D70
    void IncrementPacketsReceivedRejected();
    // public System.Void IncrementPacketsSentPlaintext()
    // Offset: 0x150612C
    void IncrementPacketsSentPlaintext();
    // public System.Void IncrementPacketsSentEncrypted()
    // Offset: 0x1506114
    void IncrementPacketsSentEncrypted();
    // public System.Void IncrementPacketsSentRejected()
    // Offset: 0x1506138
    void IncrementPacketsSentRejected();
    // public System.Void AddEncryptionProcessingTime(System.Int64 time)
    // Offset: 0x1506120
    void AddEncryptionProcessingTime(int64_t time);
    // public System.Void AddDecryptionProcessingTime(System.Int64 time)
    // Offset: 0x1505D58
    void AddDecryptionProcessingTime(int64_t time);
    // public System.Void .ctor()
    // Offset: 0x1505864
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::EncryptionStatistics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::EncryptionStatistics*, creationType>()));
    }
  }; // PacketEncryptionLayer/EncryptionStatistics
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer::EncryptionStatistics), 72 + sizeof(int64_t)> __GlobalNamespace_PacketEncryptionLayer_EncryptionStatisticsSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::EncryptionStatistics) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*, "", "PacketEncryptionLayer/EncryptionStatistics");
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedPlaintext
// Il2CppName: get_packetsReceivedPlaintext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedPlaintext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsReceivedPlaintext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedEncrypted
// Il2CppName: get_packetsReceivedEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedEncrypted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsReceivedEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedRejected
// Il2CppName: get_packetsReceivedRejected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsReceivedRejected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsReceivedRejected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentPlaintext
// Il2CppName: get_packetsSentPlaintext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentPlaintext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsSentPlaintext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentEncrypted
// Il2CppName: get_packetsSentEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentEncrypted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsSentEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentRejected
// Il2CppName: get_packetsSentRejected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_packetsSentRejected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_packetsSentRejected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_encryptionProcessingTime
// Il2CppName: get_encryptionProcessingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_encryptionProcessingTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_encryptionProcessingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_decryptionProcessingTime
// Il2CppName: get_decryptionProcessingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::get_decryptionProcessingTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "get_decryptionProcessingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedPlaintext
// Il2CppName: IncrementPacketsReceivedPlaintext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedPlaintext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsReceivedPlaintext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedEncrypted
// Il2CppName: IncrementPacketsReceivedEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedEncrypted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsReceivedEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedRejected
// Il2CppName: IncrementPacketsReceivedRejected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsReceivedRejected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsReceivedRejected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentPlaintext
// Il2CppName: IncrementPacketsSentPlaintext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentPlaintext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsSentPlaintext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentEncrypted
// Il2CppName: IncrementPacketsSentEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentEncrypted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsSentEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentRejected
// Il2CppName: IncrementPacketsSentRejected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)()>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::IncrementPacketsSentRejected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "IncrementPacketsSentRejected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::AddEncryptionProcessingTime
// Il2CppName: AddEncryptionProcessingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)(int64_t)>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::AddEncryptionProcessingTime)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "AddEncryptionProcessingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::AddDecryptionProcessingTime
// Il2CppName: AddDecryptionProcessingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::*)(int64_t)>(&GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::AddDecryptionProcessingTime)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*), "AddDecryptionProcessingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
