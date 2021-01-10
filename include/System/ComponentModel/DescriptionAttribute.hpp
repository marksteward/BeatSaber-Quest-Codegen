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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  // Autogenerated type: System.ComponentModel.DescriptionAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D45098
  class DescriptionAttribute : public System::Attribute {
    public:
    // private System.String description
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DescriptionAttribute
    DescriptionAttribute(::Il2CppString* description_ = {}) noexcept : description{description_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return description;
    }
    // Get static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static System::ComponentModel::DescriptionAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static void _set_Default(System::ComponentModel::DescriptionAttribute* value);
    // public System.Void .ctor(System.String description)
    // Offset: 0x1480E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DescriptionAttribute* New_ctor(::Il2CppString* description) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DescriptionAttribute*, creationType>(description)));
    }
    // public System.String get_Description()
    // Offset: 0x1480E90
    ::Il2CppString* get_Description();
    // protected System.String get_DescriptionValue()
    // Offset: 0x1480E98
    ::Il2CppString* get_DescriptionValue();
    // static private System.Void .cctor()
    // Offset: 0x1480FAC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1480DF0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DescriptionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DescriptionAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1480EA0
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1480F80
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DescriptionAttribute
  static check_size<sizeof(DescriptionAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_DescriptionAttributeSizeCheck;
  static_assert(sizeof(DescriptionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DescriptionAttribute*, "System.ComponentModel", "DescriptionAttribute");
#pragma pack(pop)
