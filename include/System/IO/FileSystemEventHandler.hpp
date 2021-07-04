// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
}
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
  // Autogenerated type: System.IO.FileSystemEventHandler
  class FileSystemEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: FileSystemEventHandler
    FileSystemEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1874964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.IO.FileSystemEventArgs e)
    // Offset: 0x1874974
    void Invoke(::Il2CppObject* sender, System::IO::FileSystemEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.IO.FileSystemEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1874D5C
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::IO::FileSystemEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1874D8C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileSystemEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEventHandler*, "System.IO", "FileSystemEventHandler");
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::FileSystemEventHandler::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
