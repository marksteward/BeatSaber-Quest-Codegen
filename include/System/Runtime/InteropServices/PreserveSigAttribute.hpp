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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  // Autogenerated type: System.Runtime.InteropServices.PreserveSigAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3BB10
  // [ComVisibleAttribute] Offset: D3BB10
  class PreserveSigAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PreserveSigAttribute
    PreserveSigAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1165D24
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveSigAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::PreserveSigAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveSigAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.PreserveSigAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::PreserveSigAttribute*, "System.Runtime.InteropServices", "PreserveSigAttribute");
#pragma pack(pop)
