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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.BitStack
  // [] Offset: FFFFFFFF
  class BitStack : public ::Il2CppObject {
    public:
    // private System.UInt32[] bitStack
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* bitStack;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32 stackPos
    // Size: 0x4
    // Offset: 0x18
    int stackPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 curr
    // Size: 0x4
    // Offset: 0x1C
    uint curr;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BitStack
    BitStack(::Array<uint>* bitStack_ = {}, int stackPos_ = {}, uint curr_ = {}) noexcept : bitStack{bitStack_}, stackPos{stackPos_}, curr{curr_} {}
    // public System.Void PushBit(System.Boolean bit)
    // Offset: 0x14DEFB4
    void PushBit(bool bit);
    // public System.Boolean PopBit()
    // Offset: 0x14DF110
    bool PopBit();
    // public System.Boolean PeekBit()
    // Offset: 0x14DF194
    bool PeekBit();
    // private System.Void PushCurr()
    // Offset: 0x14DEFF0
    void PushCurr();
    // private System.Void PopCurr()
    // Offset: 0x14DF144
    void PopCurr();
    // public System.Void .ctor()
    // Offset: 0x14DEF88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitStack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::BitStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitStack*, creationType>()));
    }
  }; // System.Xml.BitStack
  static check_size<sizeof(BitStack), 28 + sizeof(uint)> __System_Xml_BitStackSizeCheck;
  static_assert(sizeof(BitStack) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Xml::BitStack*, "System.Xml", "BitStack");
