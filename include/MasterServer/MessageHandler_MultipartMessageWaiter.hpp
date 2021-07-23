// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/MasterServer.RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SmallBufferPool
  class SmallBufferPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerMultipartMessage
  class IMasterServerMultipartMessage;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.MultipartMessageWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageHandler::MultipartMessageWaiter : public MasterServer::MessageHandler::RequestWaiter {
    public:
    // private readonly SmallBufferPool _bufferPool
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SmallBufferPool* bufferPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SmallBufferPool*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x20
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: length and: ranges
    char __padding2[0x4] = {};
    // private readonly System.Collections.Generic.List`1<System.Int32> _ranges
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<int>* ranges;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Boolean _isComplete
    // Size: 0x1
    // Offset: 0x30
    bool isComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x31
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultipartMessageWaiter
    MultipartMessageWaiter(GlobalNamespace::SmallBufferPool* bufferPool_ = {}, ::Array<uint8_t>* buffer_ = {}, int length_ = {}, System::Collections::Generic::List_1<int>* ranges_ = {}, bool isComplete_ = {}, bool isDisposed_ = {}) noexcept : bufferPool{bufferPool_}, buffer{buffer_}, length{length_}, ranges{ranges_}, isComplete{isComplete_}, isDisposed{isDisposed_} {}
    // Get instance field: private readonly SmallBufferPool _bufferPool
    GlobalNamespace::SmallBufferPool* _get__bufferPool();
    // Set instance field: private readonly SmallBufferPool _bufferPool
    void _set__bufferPool(GlobalNamespace::SmallBufferPool* value);
    // Get instance field: private System.Byte[] _buffer
    ::Array<uint8_t>* _get__buffer();
    // Set instance field: private System.Byte[] _buffer
    void _set__buffer(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 _length
    int _get__length();
    // Set instance field: private System.Int32 _length
    void _set__length(int value);
    // Get instance field: private readonly System.Collections.Generic.List`1<System.Int32> _ranges
    System::Collections::Generic::List_1<int>* _get__ranges();
    // Set instance field: private readonly System.Collections.Generic.List`1<System.Int32> _ranges
    void _set__ranges(System::Collections::Generic::List_1<int>* value);
    // Get instance field: private System.Boolean _isComplete
    bool _get__isComplete();
    // Set instance field: private System.Boolean _isComplete
    void _set__isComplete(bool value);
    // Get instance field: private System.Boolean _isDisposed
    bool _get__isDisposed();
    // Set instance field: private System.Boolean _isDisposed
    void _set__isDisposed(bool value);
    // public System.Boolean get_isWaiting()
    // Offset: 0x12DACD0
    bool get_isWaiting();
    // public System.Byte[] get_data()
    // Offset: 0x12DACF0
    ::Array<uint8_t>* get_data();
    // public System.Int32 get_length()
    // Offset: 0x12DACF8
    int get_length();
    // public System.Void .ctor(SmallBufferPool bufferPool)
    // Offset: 0x12DA174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::MultipartMessageWaiter* New_ctor(GlobalNamespace::SmallBufferPool* bufferPool) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::MultipartMessageWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::MultipartMessageWaiter*, creationType>(bufferPool)));
    }
    // public System.Void Append(MasterServer.IMasterServerMultipartMessage packet)
    // Offset: 0x12DA244
    void Append(MasterServer::IMasterServerMultipartMessage* packet);
    // public override System.Void Dispose()
    // Offset: 0x12DA200
    // Implemented from: MasterServer.MessageHandler/MasterServer.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // MasterServer.MessageHandler/MasterServer.MultipartMessageWaiter
  #pragma pack(pop)
  static check_size<sizeof(MessageHandler::MultipartMessageWaiter), 49 + sizeof(bool)> __MasterServer_MessageHandler_MultipartMessageWaiterSizeCheck;
  static_assert(sizeof(MessageHandler::MultipartMessageWaiter) == 0x32);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::MultipartMessageWaiter*, "MasterServer", "MessageHandler/MultipartMessageWaiter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::MessageHandler::MultipartMessageWaiter::*)()>(&MasterServer::MessageHandler::MultipartMessageWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::MultipartMessageWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (MasterServer::MessageHandler::MultipartMessageWaiter::*)()>(&MasterServer::MessageHandler::MultipartMessageWaiter::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::MultipartMessageWaiter*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MasterServer::MessageHandler::MultipartMessageWaiter::*)()>(&MasterServer::MessageHandler::MultipartMessageWaiter::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::MultipartMessageWaiter*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::MultipartMessageWaiter::*)(MasterServer::IMasterServerMultipartMessage*)>(&MasterServer::MessageHandler::MultipartMessageWaiter::Append)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerMultipartMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::MultipartMessageWaiter*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::MultipartMessageWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::MultipartMessageWaiter::*)()>(&MasterServer::MessageHandler::MultipartMessageWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::MultipartMessageWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
