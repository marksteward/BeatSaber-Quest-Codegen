// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Mono.RuntimeGPtrArrayHandle
#include "Mono/RuntimeGPtrArrayHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.SafeGPtrArrayHandle
  struct SafeGPtrArrayHandle : public System::ValueType/*, public System::IDisposable*/ {
    public:
    // private Mono.RuntimeGPtrArrayHandle handle
    // Offset: 0x0
    Mono::RuntimeGPtrArrayHandle handle;
    // Creating value type constructor for type: SafeGPtrArrayHandle
    constexpr SafeGPtrArrayHandle(Mono::RuntimeGPtrArrayHandle handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeGPtrArrayHandle
    constexpr operator Mono::RuntimeGPtrArrayHandle() const noexcept {
      return handle;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xC71B30
    SafeGPtrArrayHandle(System::IntPtr ptr);
    // System.Int32 get_Length()
    // Offset: 0xC71B84
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xC71BA0
    System::IntPtr get_Item(int i);
    // public System.Void Dispose()
    // Offset: 0xC71B5C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Mono.SafeGPtrArrayHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
#pragma pack(pop)
