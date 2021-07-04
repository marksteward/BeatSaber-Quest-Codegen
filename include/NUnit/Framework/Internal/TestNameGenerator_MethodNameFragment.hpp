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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
  class TestNameGenerator::MethodNameFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // Creating value type constructor for type: MethodNameFragment
    MethodNameFragment() noexcept {}
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x22B2448
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
    // public System.Void .ctor()
    // Offset: 0x22B1540
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.Void NameFragment::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::MethodNameFragment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::MethodNameFragment*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment*, "NUnit.Framework.Internal", "TestNameGenerator/MethodNameFragment");
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment::*)(System::Reflection::MethodInfo*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment::GetText)> {
  const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
