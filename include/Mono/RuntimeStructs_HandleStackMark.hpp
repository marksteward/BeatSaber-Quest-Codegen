// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeStructs/HandleStackMark
  struct RuntimeStructs::HandleStackMark : public System::ValueType {
    public:
    // private System.Int32 size
    // Offset: 0x0
    int size;
    // private System.Int32 interior_size
    // Offset: 0x4
    int interior_size;
    // private System.IntPtr chunk
    // Offset: 0x8
    System::IntPtr chunk;
    // Creating value type constructor for type: HandleStackMark
    constexpr HandleStackMark(int size_ = {}, int interior_size_ = {}, System::IntPtr chunk_ = {}) : size{size_}, interior_size{interior_size_}, chunk{chunk_} {}
  }; // Mono.RuntimeStructs/HandleStackMark
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::HandleStackMark, "Mono", "RuntimeStructs/HandleStackMark");
#pragma pack(pop)
