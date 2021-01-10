// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
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
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x14
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/ArgListFragment
  // [] Offset: FFFFFFFF
  class TestNameGenerator::ArgListFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // private System.Int32 _maxStringLength
    // Size: 0x4
    // Offset: 0x10
    int maxStringLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ArgListFragment
    ArgListFragment(int maxStringLength_ = {}) noexcept : maxStringLength{maxStringLength_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return maxStringLength;
    }
    // public System.Void .ctor(System.Int32 maxStringLength)
    // Offset: 0x195DDF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::ArgListFragment* New_ctor(int maxStringLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::ArgListFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::ArgListFragment*, creationType>(maxStringLength)));
    }
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] arglist)
    // Offset: 0x195DEB8
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] arglist)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* arglist);
  }; // NUnit.Framework.Internal.TestNameGenerator/ArgListFragment
  static check_size<sizeof(TestNameGenerator::ArgListFragment), 16 + sizeof(int)> __NUnit_Framework_Internal_TestNameGenerator_ArgListFragmentSizeCheck;
  static_assert(sizeof(TestNameGenerator::ArgListFragment) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::ArgListFragment*, "NUnit.Framework.Internal", "TestNameGenerator/ArgListFragment");
#pragma pack(pop)
