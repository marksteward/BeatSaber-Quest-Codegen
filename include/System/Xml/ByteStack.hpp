// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ByteStack
  // [] Offset: FFFFFFFF
  class ByteStack : public ::Il2CppObject {
    public:
    // private System.Byte[] stack
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* stack;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 growthRate
    // Size: 0x4
    // Offset: 0x18
    int growthRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 top
    // Size: 0x4
    // Offset: 0x1C
    int top;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ByteStack
    ByteStack(::Array<uint8_t>* stack_ = {}, int growthRate_ = {}, int top_ = {}, int size_ = {}) noexcept : stack{stack_}, growthRate{growthRate_}, top{top_}, size{size_} {}
    // public System.Void .ctor(System.Int32 growthRate)
    // Offset: 0x14DF1A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteStack* New_ctor(int growthRate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::ByteStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteStack*, creationType>(growthRate)));
    }
    // public System.Void Push(System.Byte data)
    // Offset: 0x14DF224
    void Push(uint8_t data);
    // public System.Byte Pop()
    // Offset: 0x14DF314
    uint8_t Pop();
  }; // System.Xml.ByteStack
  static check_size<sizeof(ByteStack), 32 + sizeof(int)> __System_Xml_ByteStackSizeCheck;
  static_assert(sizeof(ByteStack) == 0x24);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ByteStack*, "System.Xml", "ByteStack");
