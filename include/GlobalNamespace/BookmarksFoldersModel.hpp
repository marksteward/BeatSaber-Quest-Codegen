// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BookmarksFoldersModel
  // [] Offset: FFFFFFFF
  class BookmarksFoldersModel : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BookmarksFoldersModel::$$c
    class $$c;
    // private System.String[] myFolders
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* myFolders;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private FileBrowserItem[] _bookmarksFolders
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::FileBrowserItem*>* bookmarksFolders;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::FileBrowserItem*>*) == 0x8);
    // Creating value type constructor for type: BookmarksFoldersModel
    BookmarksFoldersModel(::Array<::Il2CppString*>* myFolders_ = {}, ::Array<GlobalNamespace::FileBrowserItem*>* bookmarksFolders_ = {}) noexcept : myFolders{myFolders_}, bookmarksFolders{bookmarksFolders_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public FileBrowserItem[] get_bookmarksFolders()
    // Offset: 0x1A313B4
    ::Array<GlobalNamespace::FileBrowserItem*>* get_bookmarksFolders();
    // public System.Void .ctor()
    // Offset: 0x1A317A8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BookmarksFoldersModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BookmarksFoldersModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BookmarksFoldersModel*, creationType>()));
    }
  }; // BookmarksFoldersModel
  static check_size<sizeof(BookmarksFoldersModel), 32 + sizeof(::Array<GlobalNamespace::FileBrowserItem*>*)> __GlobalNamespace_BookmarksFoldersModelSizeCheck;
  static_assert(sizeof(BookmarksFoldersModel) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BookmarksFoldersModel*, "", "BookmarksFoldersModel");
