// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.UsedImplicitlyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D7B3D8
  class UsedImplicitlyAttribute : public System::Attribute {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD800EC
    // private readonly JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseKindFlags) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD80128
    // private readonly JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseTargetFlags) == 0x4);
    // Creating value type constructor for type: UsedImplicitlyAttribute
    UsedImplicitlyAttribute(JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags_ = {}, JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags_ = {}) noexcept : UseKindFlags{UseKindFlags_}, TargetFlags{TargetFlags_} {}
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x1BD9274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::UsedImplicitlyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute*, creationType>(useKindFlags, targetFlags)));
    }
    // public System.Void .ctor()
    // Offset: 0x1BD9244
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::UsedImplicitlyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.UsedImplicitlyAttribute
  #pragma pack(pop)
  static check_size<sizeof(UsedImplicitlyAttribute), 20 + sizeof(JetBrains::Annotations::ImplicitUseTargetFlags)> __JetBrains_Annotations_UsedImplicitlyAttributeSizeCheck;
  static_assert(sizeof(UsedImplicitlyAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
