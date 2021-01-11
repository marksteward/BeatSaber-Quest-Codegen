// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileSystemWatcher
#include "System/IO/FileSystemWatcher.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemWatcher/EventType
  // [] Offset: FFFFFFFF
  struct FileSystemWatcher::EventType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventType
    constexpr EventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static constexpr const int FileSystemEvent = 0;
    // Get static field: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static System::IO::FileSystemWatcher::EventType _get_FileSystemEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType FileSystemEvent
    static void _set_FileSystemEvent(System::IO::FileSystemWatcher::EventType value);
    // static field const value: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static constexpr const int ErrorEvent = 1;
    // Get static field: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static System::IO::FileSystemWatcher::EventType _get_ErrorEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType ErrorEvent
    static void _set_ErrorEvent(System::IO::FileSystemWatcher::EventType value);
    // static field const value: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static constexpr const int RenameEvent = 2;
    // Get static field: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static System::IO::FileSystemWatcher::EventType _get_RenameEvent();
    // Set static field: static public System.IO.FileSystemWatcher/EventType RenameEvent
    static void _set_RenameEvent(System::IO::FileSystemWatcher::EventType value);
  }; // System.IO.FileSystemWatcher/EventType
  static check_size<sizeof(FileSystemWatcher::EventType), 0 + sizeof(int)> __System_IO_FileSystemWatcher_EventTypeSizeCheck;
  static_assert(sizeof(FileSystemWatcher::EventType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemWatcher::EventType, "System.IO", "FileSystemWatcher/EventType");
