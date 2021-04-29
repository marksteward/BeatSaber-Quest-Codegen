// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
  // Autogenerated type: Mono.RuntimeGPtrArrayHandle
  // [DefaultMemberAttribute] Offset: CA3ADC
  struct RuntimeGPtrArrayHandle/*, public System::ValueType*/ {
    public:
    // private Mono.RuntimeStructs/GPtrArray* value
    // Size: 0x8
    // Offset: 0x0
    Mono::RuntimeStructs::GPtrArray* value;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::GPtrArray*) == 0x8);
    // Creating value type constructor for type: RuntimeGPtrArrayHandle
    constexpr RuntimeGPtrArrayHandle(Mono::RuntimeStructs::GPtrArray* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeStructs::GPtrArray*
    constexpr operator Mono::RuntimeStructs::GPtrArray*() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xE0DEA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeGPtrArrayHandle(System::IntPtr ptr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::RuntimeGPtrArrayHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ptr)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ptr);
    }
    // System.Int32 get_Length()
    // Offset: 0xE0DECC
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xE0DEE8
    System::IntPtr get_Item(int i);
    // System.IntPtr Lookup(System.Int32 i)
    // Offset: 0xE0DEF0
    System::IntPtr Lookup(int i);
    // static private System.Void GPtrArrayFree(Mono.RuntimeStructs/GPtrArray* value)
    // Offset: 0x18B42A8
    static void GPtrArrayFree(Mono::RuntimeStructs::GPtrArray* value);
    // static System.Void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
    // Offset: 0x18B42AC
    static void DestroyAndFree(Mono::RuntimeGPtrArrayHandle& h);
  }; // Mono.RuntimeGPtrArrayHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeGPtrArrayHandle), 0 + sizeof(Mono::RuntimeStructs::GPtrArray*)> __Mono_RuntimeGPtrArrayHandleSizeCheck;
  static_assert(sizeof(RuntimeGPtrArrayHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
