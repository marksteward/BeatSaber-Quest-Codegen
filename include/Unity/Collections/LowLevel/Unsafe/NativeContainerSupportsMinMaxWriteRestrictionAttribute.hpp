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
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsMinMaxWriteRestrictionAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4AE98
  // [RequiredByNativeCodeAttribute] Offset: D4AE98
  class NativeContainerSupportsMinMaxWriteRestrictionAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NativeContainerSupportsMinMaxWriteRestrictionAttribute
    NativeContainerSupportsMinMaxWriteRestrictionAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1679D00
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeContainerSupportsMinMaxWriteRestrictionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsMinMaxWriteRestrictionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeContainerSupportsMinMaxWriteRestrictionAttribute*, creationType>()));
    }
  }; // Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsMinMaxWriteRestrictionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsMinMaxWriteRestrictionAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsMinMaxWriteRestrictionAttribute");
#pragma pack(pop)
