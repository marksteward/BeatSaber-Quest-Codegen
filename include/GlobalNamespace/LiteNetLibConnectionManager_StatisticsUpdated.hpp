// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/StatisticsUpdated
  // [] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::StatisticsUpdated : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: StatisticsUpdated
    StatisticsUpdated() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B52450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::StatisticsUpdated* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::StatisticsUpdated*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int64 packetsSent, System.Int64 packetsReceived, System.Int64 bytesSent, System.Int64 bytesReceived, System.Int64 packetsLost, System.Int64 packetsSentEncrypted, System.Int64 packetsSentPlaintext, System.Int64 packetsSentRejected, System.Int64 packetsReceivedEncrypted, System.Int64 packetsReceivedPlaintext, System.Int64 packetsReceivedRejected, System.Int64 encryptionProcessingTime, System.Int64 decryptionProcessingTime)
    // Offset: 0x1B5046C
    void Invoke(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime);
    // public System.IAsyncResult BeginInvoke(System.Int64 packetsSent, System.Int64 packetsReceived, System.Int64 bytesSent, System.Int64 bytesReceived, System.Int64 packetsLost, System.Int64 packetsSentEncrypted, System.Int64 packetsSentPlaintext, System.Int64 packetsSentRejected, System.Int64 packetsReceivedEncrypted, System.Int64 packetsReceivedPlaintext, System.Int64 packetsReceivedRejected, System.Int64 encryptionProcessingTime, System.Int64 decryptionProcessingTime, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B52464
    System::IAsyncResult* BeginInvoke(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B525E8
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLibConnectionManager/StatisticsUpdated
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated*, "", "LiteNetLibConnectionManager/StatisticsUpdated");
