// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapParameterAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3B048
  // [AttributeUsageAttribute] Offset: D3B048
  class SoapParameterAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // Creating value type constructor for type: SoapParameterAttribute
    SoapParameterAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1330A50
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapParameterAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapParameterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapParameterAttribute*, creationType>()));
    }
  }; // System.Runtime.Remoting.Metadata.SoapParameterAttribute
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapParameterAttribute*, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
