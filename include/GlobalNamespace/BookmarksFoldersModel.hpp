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
    // Offset: 0x1111F58
    ::Array<GlobalNamespace::FileBrowserItem*>* get_bookmarksFolders();
    // public System.Void .ctor()
    // Offset: 0x1112330
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
  #pragma pack(pop)
  static check_size<sizeof(BookmarksFoldersModel), 32 + sizeof(::Array<GlobalNamespace::FileBrowserItem*>*)> __GlobalNamespace_BookmarksFoldersModelSizeCheck;
  static_assert(sizeof(BookmarksFoldersModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BookmarksFoldersModel*, "", "BookmarksFoldersModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders
// Il2CppName: get_bookmarksFolders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::FileBrowserItem*>* (GlobalNamespace::BookmarksFoldersModel::*)()>(&GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BookmarksFoldersModel*), "get_bookmarksFolders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BookmarksFoldersModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
