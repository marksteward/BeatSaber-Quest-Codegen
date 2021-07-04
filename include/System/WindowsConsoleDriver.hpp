// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
  // Forward declaring type: Handles
  struct Handles;
  // Forward declaring type: ConsoleScreenBufferInfo
  struct ConsoleScreenBufferInfo;
  // Forward declaring type: InputRecord
  struct InputRecord;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: System.WindowsConsoleDriver
  class WindowsConsoleDriver : public ::Il2CppObject/*, public System::IConsoleDriver*/ {
    public:
    // private System.IntPtr inputHandle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr inputHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr outputHandle
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr outputHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int16 defaultAttribute
    // Size: 0x2
    // Offset: 0x20
    int16_t defaultAttribute;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: WindowsConsoleDriver
    WindowsConsoleDriver(System::IntPtr inputHandle_ = {}, System::IntPtr outputHandle_ = {}, int16_t defaultAttribute_ = {}) noexcept : inputHandle{inputHandle_}, outputHandle{outputHandle_}, defaultAttribute{defaultAttribute_} {}
    // Creating interface conversion operator: operator System::IConsoleDriver
    operator System::IConsoleDriver() noexcept {
      return *reinterpret_cast<System::IConsoleDriver*>(this);
    }
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x2333DB4
    System::ConsoleKeyInfo ReadKey(bool intercept);
    // static private System.Boolean IsModifierKey(System.Int16 virtualKeyCode)
    // Offset: 0x233401C
    static bool IsModifierKey(int16_t virtualKeyCode);
    // static private System.IntPtr GetStdHandle(System.Handles handle)
    // Offset: 0x2333C8C
    static System::IntPtr GetStdHandle(System::Handles handle);
    // static private System.Boolean GetConsoleScreenBufferInfo(System.IntPtr handle, out System.ConsoleScreenBufferInfo info)
    // Offset: 0x2333D14
    static bool GetConsoleScreenBufferInfo(System::IntPtr handle, System::ConsoleScreenBufferInfo& info);
    // static private System.Boolean ReadConsoleInput(System.IntPtr handle, out System.InputRecord record, System.Int32 length, out System.Int32 nread)
    // Offset: 0x2333F2C
    static bool ReadConsoleInput(System::IntPtr handle, System::InputRecord& record, int length, int& nread);
    // public System.Void .ctor()
    // Offset: 0x2333C2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsConsoleDriver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WindowsConsoleDriver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsConsoleDriver*, creationType>()));
    }
  }; // System.WindowsConsoleDriver
  #pragma pack(pop)
  static check_size<sizeof(WindowsConsoleDriver), 32 + sizeof(int16_t)> __System_WindowsConsoleDriverSizeCheck;
  static_assert(sizeof(WindowsConsoleDriver) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
// Writing MetadataGetter for method: System::WindowsConsoleDriver::ReadKey
// Il2CppName: ReadKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::WindowsConsoleDriver::IsModifierKey
// Il2CppName: IsModifierKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::WindowsConsoleDriver::GetStdHandle
// Il2CppName: GetStdHandle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::WindowsConsoleDriver::GetConsoleScreenBufferInfo
// Il2CppName: GetConsoleScreenBufferInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::WindowsConsoleDriver::ReadConsoleInput
// Il2CppName: ReadConsoleInput
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::WindowsConsoleDriver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
