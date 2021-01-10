// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x22
  // Autogenerated type: System.Net.Sockets.TcpListener
  // [] Offset: FFFFFFFF
  class TcpListener : public ::Il2CppObject {
    public:
    // private System.Net.IPEndPoint m_ServerSocketEP
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPEndPoint* m_ServerSocketEP;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.Sockets.Socket m_ServerSocket
    // Size: 0x8
    // Offset: 0x18
    System::Net::Sockets::Socket* m_ServerSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x20
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_ExclusiveAddressUse
    // Size: 0x1
    // Offset: 0x21
    bool m_ExclusiveAddressUse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TcpListener
    TcpListener(System::Net::IPEndPoint* m_ServerSocketEP_ = {}, System::Net::Sockets::Socket* m_ServerSocket_ = {}, bool m_Active_ = {}, bool m_ExclusiveAddressUse_ = {}) noexcept : m_ServerSocketEP{m_ServerSocketEP_}, m_ServerSocket{m_ServerSocket_}, m_Active{m_Active_}, m_ExclusiveAddressUse{m_ExclusiveAddressUse_} {}
    // public System.Void .ctor(System.Net.IPAddress localaddr, System.Int32 port)
    // Offset: 0x121577C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpListener* New_ctor(System::Net::IPAddress* localaddr, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::TcpListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpListener*, creationType>(localaddr, port)));
    }
    // public System.Net.EndPoint get_LocalEndpoint()
    // Offset: 0x1215904
    System::Net::EndPoint* get_LocalEndpoint();
    // public System.Void Start()
    // Offset: 0x1215930
    void Start();
    // public System.Void Start(System.Int32 backlog)
    // Offset: 0x1215938
    void Start(int backlog);
    // public System.Void Stop()
    // Offset: 0x1215AC8
    void Stop();
    // public System.IAsyncResult BeginAcceptTcpClient(System.AsyncCallback callback, System.Object state)
    // Offset: 0x1215BB8
    System::IAsyncResult* BeginAcceptTcpClient(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.Sockets.TcpClient EndAcceptTcpClient(System.IAsyncResult asyncResult)
    // Offset: 0x1215C78
    System::Net::Sockets::TcpClient* EndAcceptTcpClient(System::IAsyncResult* asyncResult);
  }; // System.Net.Sockets.TcpListener
  static check_size<sizeof(TcpListener), 33 + sizeof(bool)> __System_Net_Sockets_TcpListenerSizeCheck;
  static_assert(sizeof(TcpListener) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::TcpListener*, "System.Net.Sockets", "TcpListener");
#pragma pack(pop)
