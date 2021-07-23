// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Directory
#include "System/IO/Directory.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Directory/System.IO.SearchData
  // [TokenAttribute] Offset: FFFFFFFF
  class Directory::SearchData : public ::Il2CppObject {
    public:
    // public readonly System.String fullPath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* fullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String userPath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.IO.SearchOption searchOption
    // Size: 0x4
    // Offset: 0x20
    System::IO::SearchOption searchOption;
    // Field size check
    static_assert(sizeof(System::IO::SearchOption) == 0x4);
    // Creating value type constructor for type: SearchData
    SearchData(::Il2CppString* fullPath_ = {}, ::Il2CppString* userPath_ = {}, System::IO::SearchOption searchOption_ = {}) noexcept : fullPath{fullPath_}, userPath{userPath_}, searchOption{searchOption_} {}
    // Get instance field: public readonly System.String fullPath
    ::Il2CppString* _get_fullPath();
    // Set instance field: public readonly System.String fullPath
    void _set_fullPath(::Il2CppString* value);
    // Get instance field: public readonly System.String userPath
    ::Il2CppString* _get_userPath();
    // Set instance field: public readonly System.String userPath
    void _set_userPath(::Il2CppString* value);
    // Get instance field: public readonly System.IO.SearchOption searchOption
    System::IO::SearchOption _get_searchOption();
    // Set instance field: public readonly System.IO.SearchOption searchOption
    void _set_searchOption(System::IO::SearchOption value);
    // public System.Void .ctor(System.String fullPath, System.String userPath, System.IO.SearchOption searchOption)
    // Offset: 0x191CA6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Directory::SearchData* New_ctor(::Il2CppString* fullPath, ::Il2CppString* userPath, System::IO::SearchOption searchOption) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Directory::SearchData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Directory::SearchData*, creationType>(fullPath, userPath, searchOption)));
    }
  }; // System.IO.Directory/System.IO.SearchData
  #pragma pack(pop)
  static check_size<sizeof(Directory::SearchData), 32 + sizeof(System::IO::SearchOption)> __System_IO_Directory_SearchDataSizeCheck;
  static_assert(sizeof(Directory::SearchData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Directory::SearchData*, "System.IO", "Directory/SearchData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Directory::SearchData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
