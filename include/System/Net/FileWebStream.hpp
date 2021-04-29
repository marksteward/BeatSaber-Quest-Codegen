// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebStream
  class FileWebStream : public System::IO::FileStream/*, public System::Net::ICloseEx*/ {
    public:
    // private System.Net.FileWebRequest m_request
    // Size: 0x8
    // Offset: 0x70
    System::Net::FileWebRequest* m_request;
    // Field size check
    static_assert(sizeof(System::Net::FileWebRequest*) == 0x8);
    // Creating value type constructor for type: FileWebStream
    FileWebStream(System::Net::FileWebRequest* m_request_ = {}) noexcept : m_request{m_request_} {}
    // Creating interface conversion operator: operator System::Net::ICloseEx
    operator System::Net::ICloseEx() noexcept {
      return *reinterpret_cast<System::Net::ICloseEx*>(this);
    }
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing)
    // Offset: 0x14F675C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebStream* New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebStream*, creationType>(request, path, mode, access, sharing)));
    }
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing, System.Int32 length, System.Boolean async)
    // Offset: 0x14F7308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebStream* New_ctor(System::Net::FileWebRequest* request, ::Il2CppString* path, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare sharing, int length, bool async) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebStream*, creationType>(request, path, mode, access, sharing, length, async)));
    }
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0x14F7AD8
    void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
    // private System.Void CheckError()
    // Offset: 0x14F7C1C
    void CheckError();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14F7A58
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F7B18
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14F7CC8
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x14F7DCC
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ar)
    // Offset: 0x14F7EE8
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::EndRead(System.IAsyncResult ar)
    int EndRead(System::IAsyncResult* ar);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x14F7FCC
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult ar)
    // Offset: 0x14F80E8
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::EndWrite(System.IAsyncResult ar)
    void EndWrite(System::IAsyncResult* ar);
  }; // System.Net.FileWebStream
  #pragma pack(pop)
  static check_size<sizeof(FileWebStream), 112 + sizeof(System::Net::FileWebRequest*)> __System_Net_FileWebStreamSizeCheck;
  static_assert(sizeof(FileWebStream) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebStream*, "System.Net", "FileWebStream");
