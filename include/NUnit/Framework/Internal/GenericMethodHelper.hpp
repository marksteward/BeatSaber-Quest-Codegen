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
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.GenericMethodHelper
  // [] Offset: FFFFFFFF
  class GenericMethodHelper : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB349C
    // private System.Reflection.MethodInfo <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* Method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB34AC
    // private System.Type[] <TypeParms>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Type*>* TypeParms;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB34BC
    // private System.Type[] <TypeArgs>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Type*>* TypeArgs;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB34CC
    // private System.Type[] <ParmTypes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Array<System::Type*>* ParmTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: GenericMethodHelper
    GenericMethodHelper(System::Reflection::MethodInfo* Method_ = {}, ::Array<System::Type*>* TypeParms_ = {}, ::Array<System::Type*>* TypeArgs_ = {}, ::Array<System::Type*>* ParmTypes_ = {}) noexcept : Method{Method_}, TypeParms{TypeParms_}, TypeArgs{TypeArgs_}, ParmTypes{ParmTypes_} {}
    // public System.Void .ctor(System.Reflection.MethodInfo method)
    // Offset: 0x13EB5D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericMethodHelper* New_ctor(System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::GenericMethodHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericMethodHelper*, creationType>(method)));
    }
    // private System.Reflection.MethodInfo get_Method()
    // Offset: 0x13F39C0
    System::Reflection::MethodInfo* get_Method();
    // private System.Void set_Method(System.Reflection.MethodInfo value)
    // Offset: 0x13F39D8
    void set_Method(System::Reflection::MethodInfo* value);
    // private System.Type[] get_TypeParms()
    // Offset: 0x13F39C8
    ::Array<System::Type*>* get_TypeParms();
    // private System.Void set_TypeParms(System.Type[] value)
    // Offset: 0x13F39E0
    void set_TypeParms(::Array<System::Type*>* value);
    // private System.Type[] get_TypeArgs()
    // Offset: 0x13F39E8
    ::Array<System::Type*>* get_TypeArgs();
    // private System.Void set_TypeArgs(System.Type[] value)
    // Offset: 0x13F39F0
    void set_TypeArgs(::Array<System::Type*>* value);
    // private System.Type[] get_ParmTypes()
    // Offset: 0x13F39D0
    ::Array<System::Type*>* get_ParmTypes();
    // private System.Void set_ParmTypes(System.Type[] value)
    // Offset: 0x13F39F8
    void set_ParmTypes(::Array<System::Type*>* value);
    // public System.Type[] GetTypeArguments(System.Object[] argList)
    // Offset: 0x13EB7B8
    ::Array<System::Type*>* GetTypeArguments(::Array<::Il2CppObject*>* argList);
    // private System.Void TryApplyArgType(System.Type parmType, System.Type argType)
    // Offset: 0x13F3A00
    void TryApplyArgType(System::Type* parmType, System::Type* argType);
    // private System.Void ApplyArgType(System.Type parmType, System.Type argType)
    // Offset: 0x13F3BA0
    void ApplyArgType(System::Type* parmType, System::Type* argType);
    // private System.Boolean IsAssignableToGenericType(System.Type givenType, System.Type genericType)
    // Offset: 0x13F3CB0
    bool IsAssignableToGenericType(System::Type* givenType, System::Type* genericType);
  }; // NUnit.Framework.Internal.GenericMethodHelper
  static check_size<sizeof(GenericMethodHelper), 40 + sizeof(::Array<System::Type*>*)> __NUnit_Framework_Internal_GenericMethodHelperSizeCheck;
  static_assert(sizeof(GenericMethodHelper) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::GenericMethodHelper*, "NUnit.Framework.Internal", "GenericMethodHelper");
