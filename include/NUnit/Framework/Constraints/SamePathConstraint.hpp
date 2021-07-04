// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.PathConstraint
#include "NUnit/Framework/Constraints/PathConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.SamePathConstraint
  class SamePathConstraint : public NUnit::Framework::Constraints::PathConstraint {
    public:
    // Creating value type constructor for type: SamePathConstraint
    SamePathConstraint() noexcept {}
    // public System.Void .ctor(System.String expected)
    // Offset: 0x172C974
    // Implemented from: NUnit.Framework.Constraints.PathConstraint
    // Base method: System.Void PathConstraint::.ctor(System.String expected)
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SamePathConstraint* New_ctor(::Il2CppString* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::SamePathConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SamePathConstraint*, creationType>(expected)));
    }
    // public override System.String get_Description()
    // Offset: 0x172E258
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.String StringConstraint::get_Description()
    ::Il2CppString* get_Description();
    // protected override System.Boolean Matches(System.String actual)
    // Offset: 0x172E2DC
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Boolean StringConstraint::Matches(System.String actual)
    bool Matches(::Il2CppString* actual);
  }; // NUnit.Framework.Constraints.SamePathConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::SamePathConstraint*, "NUnit.Framework.Constraints", "SamePathConstraint");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::SamePathConstraint::*)()>(&NUnit::Framework::Constraints::SamePathConstraint::get_Description)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::SamePathConstraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::SamePathConstraint::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::SamePathConstraint::*)(::Il2CppString*)>(&NUnit::Framework::Constraints::SamePathConstraint::Matches)> {
  const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::SamePathConstraint*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};
