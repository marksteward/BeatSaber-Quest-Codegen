// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6A18C
  struct FileMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FileMode
    constexpr FileMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.FileMode CreateNew
    static constexpr const int CreateNew = 1;
    // Get static field: static public System.IO.FileMode CreateNew
    static System::IO::FileMode _get_CreateNew();
    // Set static field: static public System.IO.FileMode CreateNew
    static void _set_CreateNew(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Create
    static constexpr const int Create = 2;
    // Get static field: static public System.IO.FileMode Create
    static System::IO::FileMode _get_Create();
    // Set static field: static public System.IO.FileMode Create
    static void _set_Create(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Open
    static constexpr const int Open = 3;
    // Get static field: static public System.IO.FileMode Open
    static System::IO::FileMode _get_Open();
    // Set static field: static public System.IO.FileMode Open
    static void _set_Open(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode OpenOrCreate
    static constexpr const int OpenOrCreate = 4;
    // Get static field: static public System.IO.FileMode OpenOrCreate
    static System::IO::FileMode _get_OpenOrCreate();
    // Set static field: static public System.IO.FileMode OpenOrCreate
    static void _set_OpenOrCreate(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Truncate
    static constexpr const int Truncate = 5;
    // Get static field: static public System.IO.FileMode Truncate
    static System::IO::FileMode _get_Truncate();
    // Set static field: static public System.IO.FileMode Truncate
    static void _set_Truncate(System::IO::FileMode value);
    // static field const value: static public System.IO.FileMode Append
    static constexpr const int Append = 6;
    // Get static field: static public System.IO.FileMode Append
    static System::IO::FileMode _get_Append();
    // Set static field: static public System.IO.FileMode Append
    static void _set_Append(System::IO::FileMode value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.IO.FileMode
  #pragma pack(pop)
  static check_size<sizeof(FileMode), 0 + sizeof(int)> __System_IO_FileModeSizeCheck;
  static_assert(sizeof(FileMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileMode, "System.IO", "FileMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
