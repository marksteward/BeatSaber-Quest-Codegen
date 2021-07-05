// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserModel
  class FileBrowserModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Creating value type constructor for type: FileBrowserModel
    FileBrowserModel() noexcept {}
    // static public System.Void GetContentOfDirectory(System.String direcotryPath, System.String[] extensions, System.Action`1<FileBrowserItem[]> callback)
    // Offset: 0x104235C
    static void GetContentOfDirectory(::Il2CppString* direcotryPath, ::Array<::Il2CppString*>* extensions, System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>* callback);
    // static private FileBrowserItem[] GetContentOfDirectory(System.String directoryPath, System.String[] extensions)
    // Offset: 0x1042460
    static ::Array<GlobalNamespace::FileBrowserItem*>* GetContentOfDirectory(::Il2CppString* directoryPath, ::Array<::Il2CppString*>* extensions);
    // static private System.Boolean CanOpenDirectory(System.String path)
    // Offset: 0x104282C
    static bool CanOpenDirectory(::Il2CppString* path);
  }; // FileBrowserModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserModel*, "", "FileBrowserModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::GetContentOfDirectory
// Il2CppName: GetContentOfDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppString*>*, System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>*)>(&GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  static const MethodInfo* get() {
    static auto* direcotryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "FileBrowserItem"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "GetContentOfDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direcotryPath, extensions, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::GetContentOfDirectory
// Il2CppName: GetContentOfDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::FileBrowserItem*>* (*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  static const MethodInfo* get() {
    static auto* directoryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "GetContentOfDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directoryPath, extensions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::CanOpenDirectory
// Il2CppName: CanOpenDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&GlobalNamespace::FileBrowserModel::CanOpenDirectory)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FileBrowserModel*), "CanOpenDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
