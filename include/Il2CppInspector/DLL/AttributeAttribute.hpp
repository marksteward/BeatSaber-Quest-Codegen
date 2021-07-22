// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.AttributeAttribute
  class AttributeAttribute : public System::Attribute {
    public:
    // public System.String Name
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String RVA
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* RVA;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Offset;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AttributeAttribute
    AttributeAttribute(::Il2CppString* Name_ = {}, ::Il2CppString* RVA_ = {}, ::Il2CppString* Offset_ = {}) noexcept : Name{Name_}, RVA{RVA_}, Offset{Offset_} {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppInspector::DLL::AttributeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeAttribute*, creationType>()));
    }
  }; // Il2CppInspector.DLL.AttributeAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Il2CppInspector::DLL::AttributeAttribute*, "Il2CppInspector.DLL", "AttributeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::AttributeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!