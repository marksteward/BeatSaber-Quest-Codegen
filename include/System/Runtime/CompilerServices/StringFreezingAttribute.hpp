// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  // Autogenerated type: System.Runtime.CompilerServices.StringFreezingAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3B834
  class StringFreezingAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: StringFreezingAttribute
    StringFreezingAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1163644
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringFreezingAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::StringFreezingAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringFreezingAttribute*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.StringFreezingAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::StringFreezingAttribute*, "System.Runtime.CompilerServices", "StringFreezingAttribute");
#pragma pack(pop)
