// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeNames
#include "System/TypeNames.hpp"
// Including type: System.TypeName
#include "System/TypeName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeNames/ATypeName
  class TypeNames::ATypeName : public ::Il2CppObject/*, public System::TypeName*/ {
    public:
    // Creating value type constructor for type: ATypeName
    ATypeName() noexcept {}
    // Creating interface conversion operator: operator System::TypeName
    operator System::TypeName() noexcept {
      return *reinterpret_cast<System::TypeName*>(this);
    }
    // public System.String get_DisplayName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_DisplayName();
    // public System.Boolean Equals(System.TypeName other)
    // Offset: 0x232C2F4
    bool Equals(System::TypeName* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x232C3E0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x232C40C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // protected System.Void .ctor()
    // Offset: 0x232B108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeNames::ATypeName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeNames::ATypeName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeNames::ATypeName*, creationType>()));
    }
  }; // System.TypeNames/ATypeName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeNames::ATypeName*, "System", "TypeNames/ATypeName");
// Writing MetadataGetter for method: System::TypeNames::ATypeName::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeNames::ATypeName::*)()>(&System::TypeNames::ATypeName::get_DisplayName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeNames::ATypeName::*)(System::TypeName*)>(&System::TypeNames::ATypeName::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "TypeName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TypeNames::ATypeName::*)()>(&System::TypeNames::ATypeName::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeNames::ATypeName::*)(::Il2CppObject*)>(&System::TypeNames::ATypeName::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
