// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
  // [] Offset: FFFFFFFF
  class BinaryMethodCall : public ::Il2CppObject {
    public:
    // private System.String methodName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object[] args
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object callContext
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* callContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type[] argTypes
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Type*>* argTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Boolean bArgsPrimitive
    // Size: 0x1
    // Offset: 0x38
    bool bArgsPrimitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bArgsPrimitive and: messageEnum
    char __padding5[0x3] = {};
    // private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    // Size: 0x4
    // Offset: 0x3C
    System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MessageEnum) == 0x4);
    // Creating value type constructor for type: BinaryMethodCall
    BinaryMethodCall(::Il2CppString* methodName_ = {}, ::Il2CppString* typeName_ = {}, ::Array<::Il2CppObject*>* args_ = {}, ::Il2CppObject* callContext_ = {}, ::Array<System::Type*>* argTypes_ = {}, bool bArgsPrimitive_ = {}, System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum_ = {}) noexcept : methodName{methodName_}, typeName{typeName_}, args{args_}, callContext{callContext_}, argTypes{argTypes_}, bArgsPrimitive{bArgsPrimitive_}, messageEnum{messageEnum_} {}
    // System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1342468
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // System.Void Dump()
    // Offset: 0x13425D0
    void Dump();
    // public System.Void .ctor()
    // Offset: 0x13425D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryMethodCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryMethodCall*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
  static check_size<sizeof(BinaryMethodCall), 60 + sizeof(System::Runtime::Serialization::Formatters::Binary::MessageEnum)> __System_Runtime_Serialization_Formatters_Binary_BinaryMethodCallSizeCheck;
  static_assert(sizeof(BinaryMethodCall) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
