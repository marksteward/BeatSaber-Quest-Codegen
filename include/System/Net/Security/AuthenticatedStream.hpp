// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.AuthenticatedStream
  class AuthenticatedStream : public System::IO::Stream {
    public:
    // private System.IO.Stream _InnerStream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* InnerStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Boolean _LeaveStreamOpen
    // Size: 0x1
    // Offset: 0x30
    bool LeaveStreamOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AuthenticatedStream
    AuthenticatedStream(System::IO::Stream* InnerStream_ = {}, bool LeaveStreamOpen_ = {}) noexcept : InnerStream{InnerStream_}, LeaveStreamOpen{LeaveStreamOpen_} {}
    // protected System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen)
    // Offset: 0x134F4C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticatedStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Security::AuthenticatedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticatedStream*, creationType>(innerStream, leaveInnerStreamOpen)));
    }
    // protected System.IO.Stream get_InnerStream()
    // Offset: 0x134F668
    System::IO::Stream* get_InnerStream();
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_IsAuthenticated();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x134F670
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.Security.AuthenticatedStream
  #pragma pack(pop)
  static check_size<sizeof(AuthenticatedStream), 48 + sizeof(bool)> __System_Net_Security_AuthenticatedStreamSizeCheck;
  static_assert(sizeof(AuthenticatedStream) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticatedStream*, "System.Net.Security", "AuthenticatedStream");
