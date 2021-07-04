// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: TrueConstraint
  class TrueConstraint;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
  // Forward declaring type: GreaterThanOrEqualConstraint
  class GreaterThanOrEqualConstraint;
  // Forward declaring type: LessThanOrEqualConstraint
  class LessThanOrEqualConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Is
  class Is : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Is
    Is() noexcept {}
    // static public NUnit.Framework.Constraints.TrueConstraint get_True()
    // Offset: 0x22B7B04
    static NUnit::Framework::Constraints::TrueConstraint* get_True();
    // static public NUnit.Framework.Constraints.EqualConstraint EqualTo(System.Object expected)
    // Offset: 0x22B7B60
    static NUnit::Framework::Constraints::EqualConstraint* EqualTo(::Il2CppObject* expected);
    // static public NUnit.Framework.Constraints.GreaterThanOrEqualConstraint GreaterThanOrEqualTo(System.Object expected)
    // Offset: 0x22B7BC4
    static NUnit::Framework::Constraints::GreaterThanOrEqualConstraint* GreaterThanOrEqualTo(::Il2CppObject* expected);
    // static public NUnit.Framework.Constraints.LessThanOrEqualConstraint LessThanOrEqualTo(System.Object expected)
    // Offset: 0x22B7C28
    static NUnit::Framework::Constraints::LessThanOrEqualConstraint* LessThanOrEqualTo(::Il2CppObject* expected);
  }; // NUnit.Framework.Is
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Is*, "NUnit.Framework", "Is");
// Writing MetadataGetter for method: NUnit::Framework::Is::get_True
// Il2CppName: get_True
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::TrueConstraint* (*)()>(&NUnit::Framework::Is::get_True)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "get_True", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Is::EqualTo
// Il2CppName: EqualTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::EqualConstraint* (*)(::Il2CppObject*)>(&NUnit::Framework::Is::EqualTo)> {
  const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "EqualTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Is::GreaterThanOrEqualTo
// Il2CppName: GreaterThanOrEqualTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::GreaterThanOrEqualConstraint* (*)(::Il2CppObject*)>(&NUnit::Framework::Is::GreaterThanOrEqualTo)> {
  const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "GreaterThanOrEqualTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Is::LessThanOrEqualTo
// Il2CppName: LessThanOrEqualTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::LessThanOrEqualConstraint* (*)(::Il2CppObject*)>(&NUnit::Framework::Is::LessThanOrEqualTo)> {
  const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Is*), "LessThanOrEqualTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected});
  }
};
