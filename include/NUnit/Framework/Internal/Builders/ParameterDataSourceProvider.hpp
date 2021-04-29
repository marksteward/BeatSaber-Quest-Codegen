// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.IParameterDataProvider
#include "NUnit/Framework/Interfaces/IParameterDataProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.ParameterDataSourceProvider
  class ParameterDataSourceProvider : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::IParameterDataProvider*/ {
    public:
    // Creating value type constructor for type: ParameterDataSourceProvider
    ParameterDataSourceProvider() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IParameterDataProvider
    operator NUnit::Framework::Interfaces::IParameterDataProvider() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IParameterDataProvider*>(this);
    }
    // public System.Collections.IEnumerable GetDataFor(NUnit.Framework.Interfaces.IParameterInfo parameter)
    // Offset: 0x15D26F4
    System::Collections::IEnumerable* GetDataFor(NUnit::Framework::Interfaces::IParameterInfo* parameter);
    // public System.Void .ctor()
    // Offset: 0x15BEE54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterDataSourceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::ParameterDataSourceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterDataSourceProvider*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.ParameterDataSourceProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::ParameterDataSourceProvider*, "NUnit.Framework.Internal.Builders", "ParameterDataSourceProvider");
