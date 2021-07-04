// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Constraints.IConstraint
#include "NUnit/Framework/Constraints/IConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.Constraint
  class Constraint : public ::Il2CppObject/*, public NUnit::Framework::Constraints::IConstraint*/ {
    public:
    // private System.Lazy`1<System.String> _displayName
    // Size: 0x8
    // Offset: 0x10
    System::Lazy_1<::Il2CppString*>* displayName;
    // Field size check
    static_assert(sizeof(System::Lazy_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE05E5C
    // [DebuggerBrowsableAttribute] Offset: 0xE05E5C
    // private System.String <Description>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05E98
    // [CompilerGeneratedAttribute] Offset: 0xE05E98
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05ED4
    // [CompilerGeneratedAttribute] Offset: 0xE05ED4
    // private NUnit.Framework.Constraints.ConstraintBuilder <Builder>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Constraints::ConstraintBuilder* Builder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ConstraintBuilder*) == 0x8);
    // Creating value type constructor for type: Constraint
    Constraint(System::Lazy_1<::Il2CppString*>* displayName_ = {}, ::Il2CppString* Description_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, NUnit::Framework::Constraints::ConstraintBuilder* Builder_ = {}) noexcept : displayName{displayName_}, Description{Description_}, Arguments{Arguments_}, Builder{Builder_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Constraints::IConstraint
    operator NUnit::Framework::Constraints::IConstraint() noexcept {
      return *reinterpret_cast<NUnit::Framework::Constraints::IConstraint*>(this);
    }
    // protected System.Void .ctor(params System.Object[] args)
    // Offset: 0x1723BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::Constraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Constraint*, creationType>(args)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor(std::initializer_list<::Il2CppObject*> args) {
      return New_ctor<creationType>(::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static Constraint* New_ctor(TParams&&... args) {
      return New_ctor<creationType>({args...});
    }
    // public System.String get_DisplayName()
    // Offset: 0x1723FC0
    ::Il2CppString* get_DisplayName();
    // public System.String get_Description()
    // Offset: 0x1724018
    ::Il2CppString* get_Description();
    // protected System.Void set_Description(System.String value)
    // Offset: 0x1724020
    void set_Description(::Il2CppString* value);
    // public System.Object[] get_Arguments()
    // Offset: 0x1724028
    ::Array<::Il2CppObject*>* get_Arguments();
    // private System.Void set_Arguments(System.Object[] value)
    // Offset: 0x1724030
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public NUnit.Framework.Constraints.ConstraintBuilder get_Builder()
    // Offset: 0x1724038
    NUnit::Framework::Constraints::ConstraintBuilder* get_Builder();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0x1724040
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // protected System.String GetStringRepresentation()
    // Offset: 0x17240C8
    ::Il2CppString* GetStringRepresentation();
    // static private System.String _displayable(System.Object o)
    // Offset: 0x172421C
    static ::Il2CppString* _displayable(::Il2CppObject* o);
    // private NUnit.Framework.Constraints.IConstraint NUnit.Framework.Constraints.IResolveConstraint.Resolve()
    // Offset: 0x1724348
    NUnit::Framework::Constraints::IConstraint* NUnit_Framework_Constraints_IResolveConstraint_Resolve();
    // private System.String <.ctor>b__1_0()
    // Offset: 0x1724424
    ::Il2CppString* $_ctor$b__1_0();
    // public override System.String ToString()
    // Offset: 0x1724048
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Constraints.Constraint
  #pragma pack(pop)
  static check_size<sizeof(Constraint), 40 + sizeof(NUnit::Framework::Constraints::ConstraintBuilder*)> __NUnit_Framework_Constraints_ConstraintSizeCheck;
  static_assert(sizeof(Constraint) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::Constraint*, "NUnit.Framework.Constraints", "Constraint");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_DisplayName
// Il2CppName: get_DisplayName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Description
// Il2CppName: get_Description
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Description
// Il2CppName: set_Description
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Arguments
// Il2CppName: get_Arguments
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Arguments
// Il2CppName: set_Arguments
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::get_Builder
// Il2CppName: get_Builder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::set_Builder
// Il2CppName: set_Builder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::ApplyTo
// Il2CppName: ApplyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::GetStringRepresentation
// Il2CppName: GetStringRepresentation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::_displayable
// Il2CppName: _displayable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::NUnit_Framework_Constraints_IResolveConstraint_Resolve
// Il2CppName: NUnit.Framework.Constraints.IResolveConstraint.Resolve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::$_ctor$b__1_0
// Il2CppName: <.ctor>b__1_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::Constraint::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
