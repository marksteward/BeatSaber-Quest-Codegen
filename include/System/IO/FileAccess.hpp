// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileAccess
  struct FileAccess : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: FileAccess
    constexpr FileAccess(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.IO.FileAccess Read
    static constexpr const int Read = 1;
    // Get static field: static public System.IO.FileAccess Read
    static System::IO::FileAccess _get_Read();
    // Set static field: static public System.IO.FileAccess Read
    static void _set_Read(System::IO::FileAccess value);
    // static field const value: static public System.IO.FileAccess Write
    static constexpr const int Write = 2;
    // Get static field: static public System.IO.FileAccess Write
    static System::IO::FileAccess _get_Write();
    // Set static field: static public System.IO.FileAccess Write
    static void _set_Write(System::IO::FileAccess value);
    // static field const value: static public System.IO.FileAccess ReadWrite
    static constexpr const int ReadWrite = 3;
    // Get static field: static public System.IO.FileAccess ReadWrite
    static System::IO::FileAccess _get_ReadWrite();
    // Set static field: static public System.IO.FileAccess ReadWrite
    static void _set_ReadWrite(System::IO::FileAccess value);
  }; // System.IO.FileAccess
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAccess, "System.IO", "FileAccess");
#pragma pack(pop)
