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
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.PointerSpec
  class PointerSpec : public ::Il2CppObject/*, public System::ModifierSpec*/ {
    public:
    // private System.Int32 pointer_level
    // Size: 0x4
    // Offset: 0x10
    int pointer_level;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PointerSpec
    PointerSpec(int pointer_level_ = {}) noexcept : pointer_level{pointer_level_} {}
    // Creating interface conversion operator: operator System::ModifierSpec
    operator System::ModifierSpec() noexcept {
      return *reinterpret_cast<System::ModifierSpec*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return pointer_level;
    }
    // System.Void .ctor(System.Int32 pointer_level)
    // Offset: 0x1AFC37C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerSpec* New_ctor(int pointer_level) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::PointerSpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerSpec*, creationType>(pointer_level)));
    }
    // public System.Type Resolve(System.Type type)
    // Offset: 0x1AFC384
    System::Type* Resolve(System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0x1AFC3DC
    System::Text::StringBuilder* Append(System::Text::StringBuilder* sb);
    // public override System.String ToString()
    // Offset: 0x1AFC404
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.PointerSpec
  #pragma pack(pop)
  static check_size<sizeof(PointerSpec), 16 + sizeof(int)> __System_PointerSpecSizeCheck;
  static_assert(sizeof(PointerSpec) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::PointerSpec*, "System", "PointerSpec");
