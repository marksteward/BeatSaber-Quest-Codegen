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
  class LiteNetLibConnectionManager::StatisticsUpdated : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: StatisticsUpdated
    StatisticsUpdated() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x133319C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::StatisticsUpdated* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::StatisticsUpdated*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int64 packetsSent, System.Int64 packetsReceived, System.Int64 bytesSent, System.Int64 bytesReceived, System.Int64 packetsLost, System.Int64 packetsSentEncrypted, System.Int64 packetsSentPlaintext, System.Int64 packetsSentRejected, System.Int64 packetsReceivedEncrypted, System.Int64 packetsReceivedPlaintext, System.Int64 packetsReceivedRejected, System.Int64 encryptionProcessingTime, System.Int64 decryptionProcessingTime)
    // Offset: 0x13312A0
    void Invoke(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime);
    // public System.IAsyncResult BeginInvoke(System.Int64 packetsSent, System.Int64 packetsReceived, System.Int64 bytesSent, System.Int64 bytesReceived, System.Int64 packetsLost, System.Int64 packetsSentEncrypted, System.Int64 packetsSentPlaintext, System.Int64 packetsSentRejected, System.Int64 packetsReceivedEncrypted, System.Int64 packetsReceivedPlaintext, System.Int64 packetsReceivedRejected, System.Int64 encryptionProcessingTime, System.Int64 decryptionProcessingTime, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13331AC
    System::IAsyncResult* BeginInvoke(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1333330
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLibConnectionManager/StatisticsUpdated
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated*, "", "LiteNetLibConnectionManager/StatisticsUpdated");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::Invoke)> {
  static const MethodInfo* get() {
    static auto* packetsSent = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceived = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* bytesSent = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* bytesReceived = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsLost = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentEncrypted = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentPlaintext = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentRejected = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedEncrypted = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedPlaintext = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedRejected = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* encryptionProcessingTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* decryptionProcessingTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packetsSent, packetsReceived, bytesSent, bytesReceived, packetsLost, packetsSentEncrypted, packetsSentPlaintext, packetsSentRejected, packetsReceivedEncrypted, packetsReceivedPlaintext, packetsReceivedRejected, encryptionProcessingTime, decryptionProcessingTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* packetsSent = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceived = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* bytesSent = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* bytesReceived = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsLost = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentEncrypted = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentPlaintext = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsSentRejected = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedEncrypted = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedPlaintext = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* packetsReceivedRejected = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* encryptionProcessingTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* decryptionProcessingTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packetsSent, packetsReceived, bytesSent, bytesReceived, packetsLost, packetsSentEncrypted, packetsSentPlaintext, packetsSentRejected, packetsReceivedEncrypted, packetsReceivedPlaintext, packetsReceivedRejected, encryptionProcessingTime, decryptionProcessingTime, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::*)(System::IAsyncResult*)>(&GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::StatisticsUpdated*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
