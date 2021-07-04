// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ModifierSpec
#include "System/ModifierSpec.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.ArraySpec
  class ArraySpec : public ::Il2CppObject/*, public System::ModifierSpec*/ {
    public:
    // private System.Int32 dimensions
    // Size: 0x4
    // Offset: 0x10
    int dimensions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean bound
    // Size: 0x1
    // Offset: 0x14
    bool bound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ArraySpec
    ArraySpec(int dimensions_ = {}, bool bound_ = {}) noexcept : dimensions{dimensions_}, bound{bound_} {}
    // Creating interface conversion operator: operator System::ModifierSpec
    operator System::ModifierSpec() noexcept {
      return *reinterpret_cast<System::ModifierSpec*>(this);
    }
    // System.Void .ctor(System.Int32 dimensions, System.Boolean bound)
    // Offset: 0x1779550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArraySpec* New_ctor(int dimensions, bool bound) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArraySpec*, creationType>(dimensions, bound)));
    }
    // public System.Type Resolve(System.Type type)
    // Offset: 0x1779590
    System::Type* Resolve(System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0x1779604
    System::Text::StringBuilder* Append(System::Text::StringBuilder* sb);
    // public override System.String ToString()
    // Offset: 0x17796B8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.ArraySpec
  #pragma pack(pop)
  static check_size<sizeof(ArraySpec), 20 + sizeof(bool)> __System_ArraySpecSizeCheck;
  static_assert(sizeof(ArraySpec) == 0x15);
}
DEFINE_IL2CPP_ARG_TYPE(System::ArraySpec*, "System", "ArraySpec");
// Writing MetadataGetter for method: System::ArraySpec::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArraySpec::Resolve
// Il2CppName: Resolve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ArraySpec::Append
// Il2CppName: Append
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ArraySpec::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
