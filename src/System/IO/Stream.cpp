// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Stream/ReadWriteTask
#include "System/IO/Stream_ReadWriteTask.hpp"
// Including type: System.IO.Stream/NullStream
#include "System/IO/Stream_NullStream.hpp"
// Including type: System.IO.Stream/SynchronousAsyncResult
#include "System/IO/Stream_SynchronousAsyncResult.hpp"
// Including type: System.IO.Stream/<>c
#include "System/IO/Stream_--c.hpp"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.IO.Stream Null
System::IO::Stream* System::IO::Stream::_get_Null() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IO::Stream*>("System.IO", "Stream", "Null"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.IO.Stream Null
void System::IO::Stream::_set_Null(System::IO::Stream* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "Stream", "Null", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 _DefaultCopyBufferSize
int System::IO::Stream::_get__DefaultCopyBufferSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.IO", "Stream", "_DefaultCopyBufferSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 _DefaultCopyBufferSize
void System::IO::Stream::_set__DefaultCopyBufferSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "Stream", "_DefaultCopyBufferSize", value));
}
// Autogenerated method: System.IO.Stream.EnsureAsyncActiveSemaphoreInitialized
System::Threading::SemaphoreSlim* System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SemaphoreSlim*>(this, "EnsureAsyncActiveSemaphoreInitialized"));
}
// Autogenerated method: System.IO.Stream.get_CanRead
bool System::IO::Stream::get_CanRead() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanRead"));
}
// Autogenerated method: System.IO.Stream.get_CanSeek
bool System::IO::Stream::get_CanSeek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanSeek"));
}
// Autogenerated method: System.IO.Stream.get_CanWrite
bool System::IO::Stream::get_CanWrite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanWrite"));
}
// Autogenerated method: System.IO.Stream.get_Length
int64_t System::IO::Stream::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Length"));
}
// Autogenerated method: System.IO.Stream.get_Position
int64_t System::IO::Stream::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Position"));
}
// Autogenerated method: System.IO.Stream.set_Position
void System::IO::Stream::set_Position(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: System.IO.Stream.Close
void System::IO::Stream::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.IO.Stream.Dispose
void System::IO::Stream::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.Stream.Flush
void System::IO::Stream::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.IO.Stream.BeginRead
System::IAsyncResult* System::IO::Stream::BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginRead", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream.BeginReadInternal
System::IAsyncResult* System::IO::Stream::BeginReadInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginReadInternal", buffer, offset, count, callback, state, serializeAsynchronously));
}
// Autogenerated method: System.IO.Stream.EndRead
int System::IO::Stream::EndRead(System::IAsyncResult* asyncResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndRead", asyncResult));
}
// Autogenerated method: System.IO.Stream.BeginWrite
System::IAsyncResult* System::IO::Stream::BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginWrite", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream.BeginWriteInternal
System::IAsyncResult* System::IO::Stream::BeginWriteInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginWriteInternal", buffer, offset, count, callback, state, serializeAsynchronously));
}
// Autogenerated method: System.IO.Stream.RunReadWriteTaskWhenReady
void System::IO::Stream::RunReadWriteTaskWhenReady(System::Threading::Tasks::Task* asyncWaiter, System::IO::Stream::ReadWriteTask* readWriteTask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunReadWriteTaskWhenReady", asyncWaiter, readWriteTask));
}
// Autogenerated method: System.IO.Stream.RunReadWriteTask
void System::IO::Stream::RunReadWriteTask(System::IO::Stream::ReadWriteTask* readWriteTask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RunReadWriteTask", readWriteTask));
}
// Autogenerated method: System.IO.Stream.EndWrite
void System::IO::Stream::EndWrite(System::IAsyncResult* asyncResult) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndWrite", asyncResult));
}
// Autogenerated method: System.IO.Stream.Seek
int64_t System::IO::Stream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Seek", offset, origin));
}
// Autogenerated method: System.IO.Stream.Read
int System::IO::Stream::Read(::Array<uint8_t>*& buffer, int offset, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, offset, count));
}
// Autogenerated method: System.IO.Stream.ReadByte
int System::IO::Stream::ReadByte() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadByte"));
}
// Autogenerated method: System.IO.Stream.Write
void System::IO::Stream::Write(::Array<uint8_t>* buffer, int offset, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, offset, count));
}
// Autogenerated method: System.IO.Stream.WriteByte
void System::IO::Stream::WriteByte(uint8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteByte", value));
}
// Autogenerated method: System.IO.Stream.BlockingBeginRead
System::IAsyncResult* System::IO::Stream::BlockingBeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BlockingBeginRead", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream.BlockingEndRead
int System::IO::Stream::BlockingEndRead(System::IAsyncResult* asyncResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "Stream", "BlockingEndRead", asyncResult));
}
// Autogenerated method: System.IO.Stream.BlockingBeginWrite
System::IAsyncResult* System::IO::Stream::BlockingBeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BlockingBeginWrite", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream.BlockingEndWrite
void System::IO::Stream::BlockingEndWrite(System::IAsyncResult* asyncResult) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "Stream", "BlockingEndWrite", asyncResult));
}
// Autogenerated method: System.IO.Stream..cctor
void System::IO::Stream::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "Stream", ".cctor"));
}
// Autogenerated method: System.IO.Stream.Dispose
void System::IO::Stream::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::IO::Stream::System_IDisposable_Dispose() {
  System::IO::Stream::Dispose();
}
// Autogenerated method: System.IO.Stream..ctor
System::IO::Stream* System::IO::Stream::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Stream*>());
}
