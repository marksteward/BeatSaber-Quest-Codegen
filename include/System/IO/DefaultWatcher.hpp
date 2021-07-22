// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
  // Forward declaring type: DefaultWatcherData
  class DefaultWatcherData;
  // Forward declaring type: FileAction
  struct FileAction;
  // Forward declaring type: FileData
  class FileData;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DefaultWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultWatcher : public ::Il2CppObject/*, public System::IO::IFileWatcher*/ {
    public:
    // Creating value type constructor for type: DefaultWatcher
    DefaultWatcher() noexcept {}
    // Creating interface conversion operator: operator System::IO::IFileWatcher
    operator System::IO::IFileWatcher() noexcept {
      return *reinterpret_cast<System::IO::IFileWatcher*>(this);
    }
    // Get static field: static private System.IO.DefaultWatcher instance
    static System::IO::DefaultWatcher* _get_instance();
    // Set static field: static private System.IO.DefaultWatcher instance
    static void _set_instance(System::IO::DefaultWatcher* value);
    // Get static field: static private System.Threading.Thread thread
    static System::Threading::Thread* _get_thread();
    // Set static field: static private System.Threading.Thread thread
    static void _set_thread(System::Threading::Thread* value);
    // Get static field: static private System.Collections.Hashtable watches
    static System::Collections::Hashtable* _get_watches();
    // Set static field: static private System.Collections.Hashtable watches
    static void _set_watches(System::Collections::Hashtable* value);
    // Get static field: static private System.String[] NoStringsArray
    static ::Array<::Il2CppString*>* _get_NoStringsArray();
    // Set static field: static private System.String[] NoStringsArray
    static void _set_NoStringsArray(::Array<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x185530C
    static void _cctor();
    // static public System.Boolean GetInstance(out System.IO.IFileWatcher watcher)
    // Offset: 0x1852A3C
    static bool GetInstance(System::IO::IFileWatcher*& watcher);
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x1852B14
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x185331C
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
    // private System.Void Monitor()
    // Offset: 0x1853594
    void Monitor();
    // private System.Boolean UpdateDataAndDispatch(System.IO.DefaultWatcherData data, System.Boolean dispatch)
    // Offset: 0x1853208
    bool UpdateDataAndDispatch(System::IO::DefaultWatcherData* data, bool dispatch);
    // static private System.Void DispatchEvents(System.IO.FileSystemWatcher fsw, System.IO.FileAction action, System.String filename)
    // Offset: 0x1853F1C
    static void DispatchEvents(System::IO::FileSystemWatcher* fsw, System::IO::FileAction action, ::Il2CppString* filename);
    // private System.Void DoFiles(System.IO.DefaultWatcherData data, System.String directory, System.Boolean dispatch)
    // Offset: 0x1853CD0
    void DoFiles(System::IO::DefaultWatcherData* data, ::Il2CppString* directory, bool dispatch);
    // private System.Void IterateAndModifyFilesData(System.IO.DefaultWatcherData data, System.String directory, System.Boolean dispatch, System.String[] files)
    // Offset: 0x1854208
    void IterateAndModifyFilesData(System::IO::DefaultWatcherData* data, ::Il2CppString* directory, bool dispatch, ::Array<::Il2CppString*>* files);
    // static private System.IO.FileData CreateFileData(System.String directory, System.String filename)
    // Offset: 0x185522C
    static System::IO::FileData* CreateFileData(::Il2CppString* directory, ::Il2CppString* filename);
    // private System.Void .ctor()
    // Offset: 0x1852A34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultWatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DefaultWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultWatcher*, creationType>()));
    }
  }; // System.IO.DefaultWatcher
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::DefaultWatcher*, "System.IO", "DefaultWatcher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DefaultWatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::DefaultWatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IO::IFileWatcher*&)>(&System::IO::DefaultWatcher::GetInstance)> {
  static const MethodInfo* get() {
    static auto* watcher = &::il2cpp_utils::GetClassFromName("System.IO", "IFileWatcher")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{watcher});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::StartDispatching
// Il2CppName: StartDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DefaultWatcher::*)(System::IO::FileSystemWatcher*)>(&System::IO::DefaultWatcher::StartDispatching)> {
  static const MethodInfo* get() {
    static auto* fsw = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "StartDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsw});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::StopDispatching
// Il2CppName: StopDispatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DefaultWatcher::*)(System::IO::FileSystemWatcher*)>(&System::IO::DefaultWatcher::StopDispatching)> {
  static const MethodInfo* get() {
    static auto* fsw = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "StopDispatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsw});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::Monitor
// Il2CppName: Monitor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DefaultWatcher::*)()>(&System::IO::DefaultWatcher::Monitor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "Monitor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::UpdateDataAndDispatch
// Il2CppName: UpdateDataAndDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::DefaultWatcher::*)(System::IO::DefaultWatcherData*, bool)>(&System::IO::DefaultWatcher::UpdateDataAndDispatch)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "DefaultWatcherData")->byval_arg;
    static auto* dispatch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "UpdateDataAndDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dispatch});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::DispatchEvents
// Il2CppName: DispatchEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::FileSystemWatcher*, System::IO::FileAction, ::Il2CppString*)>(&System::IO::DefaultWatcher::DispatchEvents)> {
  static const MethodInfo* get() {
    static auto* fsw = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System.IO", "FileAction")->byval_arg;
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "DispatchEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsw, action, filename});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::DoFiles
// Il2CppName: DoFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DefaultWatcher::*)(System::IO::DefaultWatcherData*, ::Il2CppString*, bool)>(&System::IO::DefaultWatcher::DoFiles)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "DefaultWatcherData")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dispatch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "DoFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, directory, dispatch});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::IterateAndModifyFilesData
// Il2CppName: IterateAndModifyFilesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DefaultWatcher::*)(System::IO::DefaultWatcherData*, ::Il2CppString*, bool, ::Array<::Il2CppString*>*)>(&System::IO::DefaultWatcher::IterateAndModifyFilesData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "DefaultWatcherData")->byval_arg;
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dispatch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* files = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "IterateAndModifyFilesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, directory, dispatch, files});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::CreateFileData
// Il2CppName: CreateFileData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::FileData* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::DefaultWatcher::CreateFileData)> {
  static const MethodInfo* get() {
    static auto* directory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DefaultWatcher*), "CreateFileData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directory, filename});
  }
};
// Writing MetadataGetter for method: System::IO::DefaultWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
