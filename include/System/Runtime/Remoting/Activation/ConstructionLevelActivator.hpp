// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.ConstructionLevelActivator
  class ConstructionLevelActivator : public ::Il2CppObject/*, public System::Runtime::Remoting::Activation::IActivator*/ {
    public:
    // Creating value type constructor for type: ConstructionLevelActivator
    ConstructionLevelActivator() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Activation::IActivator
    operator System::Runtime::Remoting::Activation::IActivator() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x1325634
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x132563C
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Void .ctor()
    // Offset: 0x1323BDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionLevelActivator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Activation::ConstructionLevelActivator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionLevelActivator*, creationType>()));
    }
  }; // System.Runtime.Remoting.Activation.ConstructionLevelActivator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ConstructionLevelActivator*, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
