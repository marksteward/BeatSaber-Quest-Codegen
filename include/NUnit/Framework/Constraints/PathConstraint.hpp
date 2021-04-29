// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.StringConstraint
#include "NUnit/Framework/Constraints/StringConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.PathConstraint
  class PathConstraint : public NUnit::Framework::Constraints::StringConstraint {
    public:
    // Creating value type constructor for type: PathConstraint
    PathConstraint() noexcept {}
    // Get static field: static private readonly System.Char[] DirectorySeparatorChars
    static ::Array<::Il2CppChar>* _get_DirectorySeparatorChars();
    // Set static field: static private readonly System.Char[] DirectorySeparatorChars
    static void _set_DirectorySeparatorChars(::Array<::Il2CppChar>* value);
    // protected System.String Canonicalize(System.String path)
    // Offset: 0x15CB3F4
    ::Il2CppString* Canonicalize(::Il2CppString* path);
    // static private System.Void .cctor()
    // Offset: 0x15CB6F8
    static void _cctor();
    // protected System.Void .ctor(System.String expected)
    // Offset: 0x15CB20C
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathConstraint* New_ctor(::Il2CppString* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::PathConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathConstraint*, creationType>(expected)));
    }
    // protected override System.String GetStringRepresentation()
    // Offset: 0x15CB358
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::GetStringRepresentation()
    ::Il2CppString* GetStringRepresentation();
  }; // NUnit.Framework.Constraints.PathConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::PathConstraint*, "NUnit.Framework.Constraints", "PathConstraint");
