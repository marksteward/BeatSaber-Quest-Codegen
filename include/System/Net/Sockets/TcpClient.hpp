// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: NetworkStream
  class NetworkStream;
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
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.TcpClient
  // [] Offset: FFFFFFFF
  class TcpClient : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Net.Sockets.Socket m_ClientSocket
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::Socket* m_ClientSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x18
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Active and: m_DataStream
    char __padding1[0x7] = {};
    // private System.Net.Sockets.NetworkStream m_DataStream
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::NetworkStream* m_DataStream;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::NetworkStream*) == 0x8);
    // private System.Net.Sockets.AddressFamily m_Family
    // Size: 0x4
    // Offset: 0x28
    System::Net::Sockets::AddressFamily m_Family;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::AddressFamily) == 0x4);
    // private System.Boolean m_CleanedUp
    // Size: 0x1
    // Offset: 0x2C
    bool m_CleanedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TcpClient
    TcpClient(System::Net::Sockets::Socket* m_ClientSocket_ = {}, bool m_Active_ = {}, System::Net::Sockets::NetworkStream* m_DataStream_ = {}, System::Net::Sockets::AddressFamily m_Family_ = {}, bool m_CleanedUp_ = {}) noexcept : m_ClientSocket{m_ClientSocket_}, m_Active{m_Active_}, m_DataStream{m_DataStream_}, m_Family{m_Family_}, m_CleanedUp{m_CleanedUp_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family)
    // Offset: 0x1215064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpClient* New_ctor(System::Net::Sockets::AddressFamily family) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::TcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpClient*, creationType>(family)));
    }
    // System.Void .ctor(System.Net.Sockets.Socket acceptedSocket)
    // Offset: 0x1215204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TcpClient* New_ctor(System::Net::Sockets::Socket* acceptedSocket) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::TcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TcpClient*, creationType>(acceptedSocket)));
    }
    // public System.Net.Sockets.Socket get_Client()
    // Offset: 0x121527C
    System::Net::Sockets::Socket* get_Client();
    // public System.Void set_Client(System.Net.Sockets.Socket value)
    // Offset: 0x1215284
    void set_Client(System::Net::Sockets::Socket* value);
    // public System.Boolean get_Connected()
    // Offset: 0x121528C
    bool get_Connected();
    // public System.IAsyncResult BeginConnect(System.String host, System.Int32 port, System.AsyncCallback requestCallback, System.Object state)
    // Offset: 0x12152A8
    System::IAsyncResult* BeginConnect(::Il2CppString* host, int port, System::AsyncCallback* requestCallback, ::Il2CppObject* state);
    // public System.Void EndConnect(System.IAsyncResult asyncResult)
    // Offset: 0x1215328
    void EndConnect(System::IAsyncResult* asyncResult);
    // public System.Net.Sockets.NetworkStream GetStream()
    // Offset: 0x1215394
    System::Net::Sockets::NetworkStream* GetStream();
    // public System.Void Close()
    // Offset: 0x12154DC
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1215580
    void Dispose(bool disposing);
    // private System.Void initialize()
    // Offset: 0x121517C
    void initialize();
    // public System.Void Dispose()
    // Offset: 0x12156F8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x1215708
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Net.Sockets.TcpClient
  static check_size<sizeof(TcpClient), 44 + sizeof(bool)> __System_Net_Sockets_TcpClientSizeCheck;
  static_assert(sizeof(TcpClient) == 0x2D);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::TcpClient*, "System.Net.Sockets", "TcpClient");
