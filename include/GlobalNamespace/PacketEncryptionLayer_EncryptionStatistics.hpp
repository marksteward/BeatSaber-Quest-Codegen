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
  // [] Offset: FFFFFFFF
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
    // Offset: 0x1E50C64
    int64_t get_packetsReceivedPlaintext();
    // public System.Int64 get_packetsReceivedEncrypted()
    // Offset: 0x1E50C70
    int64_t get_packetsReceivedEncrypted();
    // public System.Int64 get_packetsReceivedRejected()
    // Offset: 0x1E50C7C
    int64_t get_packetsReceivedRejected();
    // public System.Int64 get_packetsSentPlaintext()
    // Offset: 0x1E50C88
    int64_t get_packetsSentPlaintext();
    // public System.Int64 get_packetsSentEncrypted()
    // Offset: 0x1E50C94
    int64_t get_packetsSentEncrypted();
    // public System.Int64 get_packetsSentRejected()
    // Offset: 0x1E50CA0
    int64_t get_packetsSentRejected();
    // public System.Int64 get_encryptionProcessingTime()
    // Offset: 0x1E50CAC
    int64_t get_encryptionProcessingTime();
    // public System.Int64 get_decryptionProcessingTime()
    // Offset: 0x1E50D38
    int64_t get_decryptionProcessingTime();
    // public System.Void IncrementPacketsReceivedPlaintext()
    // Offset: 0x1E4D008
    void IncrementPacketsReceivedPlaintext();
    // public System.Void IncrementPacketsReceivedEncrypted()
    // Offset: 0x1E4CFF0
    void IncrementPacketsReceivedEncrypted();
    // public System.Void IncrementPacketsReceivedRejected()
    // Offset: 0x1E4D014
    void IncrementPacketsReceivedRejected();
    // public System.Void IncrementPacketsSentPlaintext()
    // Offset: 0x1E4D99C
    void IncrementPacketsSentPlaintext();
    // public System.Void IncrementPacketsSentEncrypted()
    // Offset: 0x1E4D984
    void IncrementPacketsSentEncrypted();
    // public System.Void IncrementPacketsSentRejected()
    // Offset: 0x1E4D9A8
    void IncrementPacketsSentRejected();
    // public System.Void AddEncryptionProcessingTime(System.Int64 time)
    // Offset: 0x1E4D990
    void AddEncryptionProcessingTime(int64_t time);
    // public System.Void AddDecryptionProcessingTime(System.Int64 time)
    // Offset: 0x1E4CFFC
    void AddDecryptionProcessingTime(int64_t time);
    // public System.Void .ctor()
    // Offset: 0x1E4CB38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::EncryptionStatistics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::EncryptionStatistics*, creationType>()));
    }
  }; // PacketEncryptionLayer/EncryptionStatistics
  static check_size<sizeof(PacketEncryptionLayer::EncryptionStatistics), 72 + sizeof(int64_t)> __GlobalNamespace_PacketEncryptionLayer_EncryptionStatisticsSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::EncryptionStatistics) == 0x50);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::EncryptionStatistics*, "", "PacketEncryptionLayer/EncryptionStatistics");
