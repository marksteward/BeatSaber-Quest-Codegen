// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IParameterDataSource
  class IParameterDataSource {
    public:
    // Creating value type constructor for type: IParameterDataSource
    IParameterDataSource() noexcept {}
    // public System.Collections.IEnumerable GetData(NUnit.Framework.Interfaces.IParameterInfo parameter)
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerable* GetData(NUnit::Framework::Interfaces::IParameterInfo* parameter);
  }; // NUnit.Framework.Interfaces.IParameterDataSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IParameterDataSource*, "NUnit.Framework.Interfaces", "IParameterDataSource");
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IParameterDataSource::GetData
// Il2CppName: GetData
// Cannot perform method pointer template specialization from operators!
