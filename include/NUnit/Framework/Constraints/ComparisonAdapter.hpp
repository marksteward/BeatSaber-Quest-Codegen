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
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ComparisonAdapter
  class ComparisonAdapter : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Constraints::ComparisonAdapter::DefaultComparisonAdapter
    class DefaultComparisonAdapter;
    // Nested type: NUnit::Framework::Constraints::ComparisonAdapter::ComparerAdapter
    class ComparerAdapter;
    // Creating value type constructor for type: ComparisonAdapter
    ComparisonAdapter() noexcept {}
    // static public NUnit.Framework.Constraints.ComparisonAdapter get_Default()
    // Offset: 0x1723884
    static NUnit::Framework::Constraints::ComparisonAdapter* get_Default();
    // public System.Int32 Compare(System.Object expected, System.Object actual)
    // Offset: 0xFFFFFFFF
    int Compare(::Il2CppObject* expected, ::Il2CppObject* actual);
    // protected System.Void .ctor()
    // Offset: 0x1723924
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComparisonAdapter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::ComparisonAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComparisonAdapter*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.ComparisonAdapter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ComparisonAdapter*, "NUnit.Framework.Constraints", "ComparisonAdapter");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ComparisonAdapter* (*)()>(&NUnit::Framework::Constraints::ComparisonAdapter::get_Default)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ComparisonAdapter*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Constraints::ComparisonAdapter::*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::Constraints::ComparisonAdapter::Compare)> {
  const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ComparisonAdapter*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ComparisonAdapter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
