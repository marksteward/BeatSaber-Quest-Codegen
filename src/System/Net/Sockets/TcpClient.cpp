// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.TcpClient
#include "System/Net/Sockets/TcpClient.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
// Including type: System.Net.Sockets.NetworkStream
#include "System/Net/Sockets/NetworkStream.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Sockets.TcpClient..ctor
System::Net::Sockets::TcpClient* System::Net::Sockets::TcpClient::New_ctor(System::Net::Sockets::AddressFamily family) {
  return THROW_UNLESS(il2cpp_utils::New<TcpClient*>(family));
}
// Autogenerated method: System.Net.Sockets.TcpClient..ctor
System::Net::Sockets::TcpClient* System::Net::Sockets::TcpClient::New_ctor(System::Net::Sockets::Socket* acceptedSocket) {
  return THROW_UNLESS(il2cpp_utils::New<TcpClient*>(acceptedSocket));
}
// Autogenerated method: System.Net.Sockets.TcpClient.get_Client
System::Net::Sockets::Socket* System::Net::Sockets::TcpClient::get_Client() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Sockets::Socket*>(this, "get_Client"));
}
// Autogenerated method: System.Net.Sockets.TcpClient.set_Client
void System::Net::Sockets::TcpClient::set_Client(System::Net::Sockets::Socket* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Client", value));
}
// Autogenerated method: System.Net.Sockets.TcpClient.get_Connected
bool System::Net::Sockets::TcpClient::get_Connected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Connected"));
}
// Autogenerated method: System.Net.Sockets.TcpClient.BeginConnect
System::IAsyncResult* System::Net::Sockets::TcpClient::BeginConnect(::Il2CppString* host, int port, System::AsyncCallback* requestCallback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginConnect", host, port, requestCallback, state));
}
// Autogenerated method: System.Net.Sockets.TcpClient.EndConnect
void System::Net::Sockets::TcpClient::EndConnect(System::IAsyncResult* asyncResult) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndConnect", asyncResult));
}
// Autogenerated method: System.Net.Sockets.TcpClient.GetStream
System::Net::Sockets::NetworkStream* System::Net::Sockets::TcpClient::GetStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Sockets::NetworkStream*>(this, "GetStream"));
}
// Autogenerated method: System.Net.Sockets.TcpClient.Close
void System::Net::Sockets::TcpClient::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Net.Sockets.TcpClient.Dispose
void System::Net::Sockets::TcpClient::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Net.Sockets.TcpClient.initialize
void System::Net::Sockets::TcpClient::initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "initialize"));
}
// Autogenerated method: System.Net.Sockets.TcpClient.Dispose
void System::Net::Sockets::TcpClient::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Net::Sockets::TcpClient::System_IDisposable_Dispose() {
  System::Net::Sockets::TcpClient::Dispose();
}
// Autogenerated method: System.Net.Sockets.TcpClient.Finalize
void System::Net::Sockets::TcpClient::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
