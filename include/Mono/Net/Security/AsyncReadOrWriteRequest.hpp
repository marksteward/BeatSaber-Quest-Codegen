// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.AsyncProtocolRequest
#include "Mono/Net/Security/AsyncProtocolRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncReadOrWriteRequest
  class AsyncReadOrWriteRequest : public Mono::Net::Security::AsyncProtocolRequest {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD887AC
    // private readonly Mono.Net.Security.BufferOffsetSize <UserBuffer>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    Mono::Net::Security::BufferOffsetSize* UserBuffer;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::BufferOffsetSize*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD887BC
    // private System.Int32 <CurrentSize>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int CurrentSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AsyncReadOrWriteRequest
    AsyncReadOrWriteRequest(Mono::Net::Security::BufferOffsetSize* UserBuffer_ = {}, int CurrentSize_ = {}) noexcept : UserBuffer{UserBuffer_}, CurrentSize{CurrentSize_} {}
    // protected Mono.Net.Security.BufferOffsetSize get_UserBuffer()
    // Offset: 0x15EEB50
    Mono::Net::Security::BufferOffsetSize* get_UserBuffer();
    // protected System.Int32 get_CurrentSize()
    // Offset: 0x15EEB58
    int get_CurrentSize();
    // protected System.Void set_CurrentSize(System.Int32 value)
    // Offset: 0x15EEB60
    void set_CurrentSize(int value);
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x15EEB68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncReadOrWriteRequest* New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::Array<uint8_t>* buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::AsyncReadOrWriteRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncReadOrWriteRequest*, creationType>(parent, sync, buffer, offset, size)));
    }
    // public override System.String ToString()
    // Offset: 0x15EED20
    // Implemented from: Mono.Net.Security.AsyncProtocolRequest
    // Base method: System.String AsyncProtocolRequest::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.AsyncReadOrWriteRequest
  #pragma pack(pop)
  static check_size<sizeof(AsyncReadOrWriteRequest), 64 + sizeof(int)> __Mono_Net_Security_AsyncReadOrWriteRequestSizeCheck;
  static_assert(sizeof(AsyncReadOrWriteRequest) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncReadOrWriteRequest*, "Mono.Net.Security", "AsyncReadOrWriteRequest");
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer
// Il2CppName: get_UserBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::BufferOffsetSize* (Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncReadOrWriteRequest*), "get_UserBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize
// Il2CppName: get_CurrentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncReadOrWriteRequest*), "get_CurrentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize
// Il2CppName: set_CurrentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncReadOrWriteRequest::*)(int)>(&Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncReadOrWriteRequest*), "set_CurrentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadOrWriteRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadOrWriteRequest::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&Mono::Net::Security::AsyncReadOrWriteRequest::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncReadOrWriteRequest*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
