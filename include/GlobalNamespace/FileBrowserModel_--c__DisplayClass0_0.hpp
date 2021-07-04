// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileBrowserModel
#include "GlobalNamespace/FileBrowserModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FileBrowserModel/<>c__DisplayClass0_0
  // [CompilerGeneratedAttribute] Offset: E119D8
  class FileBrowserModel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public FileBrowserItem[] items
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::FileBrowserItem*>* items;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::FileBrowserItem*>*) == 0x8);
    // public System.String direcotryPath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* direcotryPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String[] extensions
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* extensions;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Action`1<FileBrowserItem[]> callback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>* callback;
    // Field size check
    static_assert(sizeof(System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(::Array<GlobalNamespace::FileBrowserItem*>* items_ = {}, ::Il2CppString* direcotryPath_ = {}, ::Array<::Il2CppString*>* extensions_ = {}, System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>* callback_ = {}) noexcept : items{items_}, direcotryPath{direcotryPath_}, extensions{extensions_}, callback{callback_} {}
    // System.Void <GetContentOfDirectory>b__0()
    // Offset: 0x10428F0
    void $GetContentOfDirectory$b__0();
    // System.Void <GetContentOfDirectory>b__1()
    // Offset: 0x104291C
    void $GetContentOfDirectory$b__1();
    // public System.Void .ctor()
    // Offset: 0x1042458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserModel::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserModel::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // FileBrowserModel/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(FileBrowserModel::$$c__DisplayClass0_0), 40 + sizeof(System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>*)> __GlobalNamespace_FileBrowserModel_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(FileBrowserModel::$$c__DisplayClass0_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0*, "", "FileBrowserModel/<>c__DisplayClass0_0");
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__0
// Il2CppName: <GetContentOfDirectory>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::$GetContentOfDirectory$b__1
// Il2CppName: <GetContentOfDirectory>b__1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
