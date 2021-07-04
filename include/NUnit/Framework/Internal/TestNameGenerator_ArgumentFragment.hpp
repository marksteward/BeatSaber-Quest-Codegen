// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
  class TestNameGenerator::ArgumentFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxStringLength
    // Size: 0x4
    // Offset: 0x14
    int maxStringLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ArgumentFragment
    ArgumentFragment(int index_ = {}, int maxStringLength_ = {}) noexcept : index{index_}, maxStringLength{maxStringLength_} {}
    // public System.Void .ctor(System.Int32 index, System.Int32 maxStringLength)
    // Offset: 0x22B159C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::ArgumentFragment* New_ctor(int index, int maxStringLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::ArgumentFragment*, creationType>(index, maxStringLength)));
    }
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x22B210C
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
  #pragma pack(pop)
  static check_size<sizeof(TestNameGenerator::ArgumentFragment), 20 + sizeof(int)> __NUnit_Framework_Internal_TestNameGenerator_ArgumentFragmentSizeCheck;
  static_assert(sizeof(TestNameGenerator::ArgumentFragment) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment*, "NUnit.Framework.Internal", "TestNameGenerator/ArgumentFragment");
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment::*)(System::Reflection::MethodInfo*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment::GetText)> {
  const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
