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
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ExceptionHandlingClause
  class ExceptionHandlingClause;
  // Forward declaring type: LocalVariableInfo
  class LocalVariableInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MethodBody
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D69B4C
  class MethodBody : public ::Il2CppObject {
    public:
    // private System.Reflection.ExceptionHandlingClause[] clauses
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Reflection::ExceptionHandlingClause*>* clauses;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::ExceptionHandlingClause*>*) == 0x8);
    // private System.Reflection.LocalVariableInfo[] locals
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Reflection::LocalVariableInfo*>* locals;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::LocalVariableInfo*>*) == 0x8);
    // private System.Byte[] il
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* il;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean init_locals
    // Size: 0x1
    // Offset: 0x28
    bool init_locals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: init_locals and: sig_token
    char __padding3[0x3] = {};
    // private System.Int32 sig_token
    // Size: 0x4
    // Offset: 0x2C
    int sig_token;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 max_stack
    // Size: 0x4
    // Offset: 0x30
    int max_stack;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MethodBody
    MethodBody(::Array<System::Reflection::ExceptionHandlingClause*>* clauses_ = {}, ::Array<System::Reflection::LocalVariableInfo*>* locals_ = {}, ::Array<uint8_t>* il_ = {}, bool init_locals_ = {}, int sig_token_ = {}, int max_stack_ = {}) noexcept : clauses{clauses_}, locals{locals_}, il{il_}, init_locals{init_locals_}, sig_token{sig_token_}, max_stack{max_stack_} {}
    // protected System.Void .ctor()
    // Offset: 0x1CAE7F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MethodBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodBody*, creationType>()));
    }
  }; // System.Reflection.MethodBody
  #pragma pack(pop)
  static check_size<sizeof(MethodBody), 48 + sizeof(int)> __System_Reflection_MethodBodySizeCheck;
  static_assert(sizeof(MethodBody) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodBody*, "System.Reflection", "MethodBody");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MethodBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
