// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IApplyToTest
  // [TokenAttribute] Offset: FFFFFFFF
  class IApplyToTest : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IApplyToTest
    IApplyToTest() noexcept {}
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0xFFFFFFFF
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
  }; // NUnit.Framework.Interfaces.IApplyToTest
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IApplyToTest*, "NUnit.Framework.Interfaces", "IApplyToTest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IApplyToTest::ApplyToTest
// Il2CppName: ApplyToTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::IApplyToTest::*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Interfaces::IApplyToTest::ApplyToTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IApplyToTest*), "ApplyToTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
