// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestCaseData
  class ITestCaseData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ICombiningStrategy
  class ICombiningStrategy {
    public:
    // Creating value type constructor for type: ICombiningStrategy
    ICombiningStrategy() noexcept {}
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> GetTestCases(System.Collections.IEnumerable[] sources)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestCaseData*>* GetTestCases(::Array<System::Collections::IEnumerable*>* sources);
  }; // NUnit.Framework.Interfaces.ICombiningStrategy
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ICombiningStrategy*, "NUnit.Framework.Interfaces", "ICombiningStrategy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ICombiningStrategy::GetTestCases
// Il2CppName: GetTestCases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestCaseData*>* (NUnit::Framework::Interfaces::ICombiningStrategy::*)(::Array<System::Collections::IEnumerable*>*)>(&NUnit::Framework::Interfaces::ICombiningStrategy::GetTestCases)> {
  static const MethodInfo* get() {
    static auto* sources = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ICombiningStrategy*), "GetTestCases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sources});
  }
};
