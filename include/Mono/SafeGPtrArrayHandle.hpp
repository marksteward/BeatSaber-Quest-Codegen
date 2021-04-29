// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Mono.RuntimeGPtrArrayHandle
#include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.SafeGPtrArrayHandle
  // [DefaultMemberAttribute] Offset: CA3B4C
  struct SafeGPtrArrayHandle/*, public System::ValueType, public System::IDisposable*/ {
    public:
    // private Mono.RuntimeGPtrArrayHandle handle
    // Size: 0x8
    // Offset: 0x0
    Mono::RuntimeGPtrArrayHandle handle;
    // Field size check
    static_assert(sizeof(Mono::RuntimeGPtrArrayHandle) == 0x8);
    // Creating value type constructor for type: SafeGPtrArrayHandle
    constexpr SafeGPtrArrayHandle(Mono::RuntimeGPtrArrayHandle handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeGPtrArrayHandle
    constexpr operator Mono::RuntimeGPtrArrayHandle() const noexcept {
      return handle;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xE0DF98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SafeGPtrArrayHandle(System::IntPtr ptr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::SafeGPtrArrayHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ptr)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ptr);
    }
    // public System.Void Dispose()
    // Offset: 0xE0DFC4
    void Dispose();
    // System.Int32 get_Length()
    // Offset: 0xE0DFEC
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xE0E008
    System::IntPtr get_Item(int i);
  }; // Mono.SafeGPtrArrayHandle
  #pragma pack(pop)
  static check_size<sizeof(SafeGPtrArrayHandle), 0 + sizeof(Mono::RuntimeGPtrArrayHandle)> __Mono_SafeGPtrArrayHandleSizeCheck;
  static_assert(sizeof(SafeGPtrArrayHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
