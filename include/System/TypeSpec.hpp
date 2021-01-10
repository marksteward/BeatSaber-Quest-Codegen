// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeIdentifier
  class TypeIdentifier;
  // Forward declaring type: ModifierSpec
  class ModifierSpec;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x48
  // Autogenerated type: System.TypeSpec
  // [] Offset: FFFFFFFF
  class TypeSpec : public ::Il2CppObject {
    public:
    // Nested type: System::TypeSpec::DisplayNameFormat
    struct DisplayNameFormat;
    // private System.TypeIdentifier name
    // Size: 0x8
    // Offset: 0x10
    System::TypeIdentifier* name;
    // Field size check
    static_assert(sizeof(System::TypeIdentifier*) == 0x8);
    // private System.String assembly_name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assembly_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.TypeIdentifier> nested
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::TypeIdentifier*>* nested;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::TypeIdentifier*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.TypeSpec> generic_params
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<System::TypeSpec*>* generic_params;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::TypeSpec*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.ModifierSpec> modifier_spec
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<System::ModifierSpec*>* modifier_spec;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::ModifierSpec*>*) == 0x8);
    // private System.Boolean is_byref
    // Size: 0x1
    // Offset: 0x38
    bool is_byref;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_byref and: display_fullname
    char __padding5[0x7] = {};
    // private System.String display_fullname
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* display_fullname;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeSpec
    TypeSpec(System::TypeIdentifier* name_ = {}, ::Il2CppString* assembly_name_ = {}, System::Collections::Generic::List_1<System::TypeIdentifier*>* nested_ = {}, System::Collections::Generic::List_1<System::TypeSpec*>* generic_params_ = {}, System::Collections::Generic::List_1<System::ModifierSpec*>* modifier_spec_ = {}, bool is_byref_ = {}, ::Il2CppString* display_fullname_ = {}) noexcept : name{name_}, assembly_name{assembly_name_}, nested{nested_}, generic_params{generic_params_}, modifier_spec{modifier_spec_}, is_byref{is_byref_}, display_fullname{display_fullname_} {}
    // System.Boolean get_HasModifiers()
    // Offset: 0x165AFBC
    bool get_HasModifiers();
    // private System.String GetDisplayFullName(System.TypeSpec/DisplayNameFormat flags)
    // Offset: 0x165AFCC
    ::Il2CppString* GetDisplayFullName(System::TypeSpec::DisplayNameFormat flags);
    // private System.Text.StringBuilder GetModifierString(System.Text.StringBuilder sb)
    // Offset: 0x165B418
    System::Text::StringBuilder* GetModifierString(System::Text::StringBuilder* sb);
    // System.String get_DisplayFullName()
    // Offset: 0x165B3D0
    ::Il2CppString* get_DisplayFullName();
    // static System.TypeSpec Parse(System.String typeName)
    // Offset: 0x165A56C
    static System::TypeSpec* Parse(::Il2CppString* typeName);
    // static System.String UnescapeInternalName(System.String displayName)
    // Offset: 0x1659B9C
    static ::Il2CppString* UnescapeInternalName(::Il2CppString* displayName);
    // System.Type Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x165A654
    System::Type* Resolve(System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase);
    // private System.Void AddName(System.String type_name)
    // Offset: 0x165C0E0
    void AddName(::Il2CppString* type_name);
    // private System.Void AddModifier(System.ModifierSpec md)
    // Offset: 0x165C1D0
    void AddModifier(System::ModifierSpec* md);
    // static private System.Void SkipSpace(System.String name, ref System.Int32 pos)
    // Offset: 0x165C274
    static void SkipSpace(::Il2CppString* name, int& pos);
    // static private System.Void BoundCheck(System.Int32 idx, System.String s)
    // Offset: 0x165C33C
    static void BoundCheck(int idx, ::Il2CppString* s);
    // static private System.TypeIdentifier ParsedTypeIdentifier(System.String displayName)
    // Offset: 0x165C1CC
    static System::TypeIdentifier* ParsedTypeIdentifier(::Il2CppString* displayName);
    // static private System.TypeSpec Parse(System.String name, ref System.Int32 p, System.Boolean is_recurse, System.Boolean allow_aqn)
    // Offset: 0x165B5AC
    static System::TypeSpec* Parse(::Il2CppString* name, int& p, bool is_recurse, bool allow_aqn);
    // public System.Void .ctor()
    // Offset: 0x165C3E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeSpec* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeSpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeSpec*, creationType>()));
    }
  }; // System.TypeSpec
  static check_size<sizeof(TypeSpec), 64 + sizeof(::Il2CppString*)> __System_TypeSpecSizeCheck;
  static_assert(sizeof(TypeSpec) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec*, "System", "TypeSpec");
#pragma pack(pop)
