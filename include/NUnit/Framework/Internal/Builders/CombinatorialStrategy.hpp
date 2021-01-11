// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ICombiningStrategy
#include "NUnit/Framework/Interfaces/ICombiningStrategy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.CombinatorialStrategy
  // [] Offset: FFFFFFFF
  class CombinatorialStrategy : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ICombiningStrategy*/ {
    public:
    // Creating value type constructor for type: CombinatorialStrategy
    CombinatorialStrategy() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ICombiningStrategy
    operator NUnit::Framework::Interfaces::ICombiningStrategy() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ICombiningStrategy*>(this);
    }
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> GetTestCases(System.Collections.IEnumerable[] sources)
    // Offset: 0x13E89B0
    // Implemented from: NUnit.Framework.Interfaces.ICombiningStrategy
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> ICombiningStrategy::GetTestCases(System.Collections.IEnumerable[] sources)
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestCaseData*>* GetTestCases(::Array<System::Collections::IEnumerable*>* sources);
    // public System.Void .ctor()
    // Offset: 0x13DA008
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombinatorialStrategy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::CombinatorialStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombinatorialStrategy*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.CombinatorialStrategy
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::CombinatorialStrategy*, "NUnit.Framework.Internal.Builders", "CombinatorialStrategy");
