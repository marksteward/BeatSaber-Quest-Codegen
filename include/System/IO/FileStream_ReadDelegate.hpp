// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileStream/ReadDelegate
  class FileStream::ReadDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ReadDelegate
    ReadDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17C6638
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream::ReadDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::ReadDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream::ReadDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x17C8440
    int Invoke(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0x17C6648
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x17C6A44
    int EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileStream/ReadDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStream::ReadDelegate*, "System.IO", "FileStream/ReadDelegate");
