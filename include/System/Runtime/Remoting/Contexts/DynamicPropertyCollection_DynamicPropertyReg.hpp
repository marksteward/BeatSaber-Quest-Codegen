// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
  // Forward declaring type: IDynamicMessageSink
  class IDynamicMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
  // [] Offset: FFFFFFFF
  class DynamicPropertyCollection::DynamicPropertyReg : public ::Il2CppObject {
    public:
    // public System.Runtime.Remoting.Contexts.IDynamicProperty Property
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Contexts::IDynamicProperty* Property;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::IDynamicProperty*) == 0x8);
    // public System.Runtime.Remoting.Contexts.IDynamicMessageSink Sink
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::IDynamicMessageSink*) == 0x8);
    // Creating value type constructor for type: DynamicPropertyReg
    DynamicPropertyReg(System::Runtime::Remoting::Contexts::IDynamicProperty* Property_ = {}, System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink_ = {}) noexcept : Property{Property_}, Sink{Sink_} {}
    // public System.Void .ctor()
    // Offset: 0x1174D24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicPropertyCollection::DynamicPropertyReg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyReg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicPropertyCollection::DynamicPropertyReg*, creationType>()));
    }
  }; // System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
  static check_size<sizeof(DynamicPropertyCollection::DynamicPropertyReg), 24 + sizeof(System::Runtime::Remoting::Contexts::IDynamicMessageSink*)> __System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyRegSizeCheck;
  static_assert(sizeof(DynamicPropertyCollection::DynamicPropertyReg) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyReg*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection/DynamicPropertyReg");
