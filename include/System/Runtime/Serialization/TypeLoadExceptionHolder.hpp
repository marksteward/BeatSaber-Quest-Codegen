// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.TypeLoadExceptionHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeLoadExceptionHolder : public ::Il2CppObject {
    public:
    // private System.String m_typeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TypeLoadExceptionHolder
    TypeLoadExceptionHolder(::Il2CppString* m_typeName_ = {}) noexcept : m_typeName{m_typeName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_typeName;
    }
    // System.String get_TypeName()
    // Offset: 0x1684FF0
    ::Il2CppString* get_TypeName();
    // System.Void .ctor(System.String typeName)
    // Offset: 0x1684FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadExceptionHolder* New_ctor(::Il2CppString* typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::TypeLoadExceptionHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadExceptionHolder*, creationType>(typeName)));
    }
  }; // System.Runtime.Serialization.TypeLoadExceptionHolder
  #pragma pack(pop)
  static check_size<sizeof(TypeLoadExceptionHolder), 16 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_TypeLoadExceptionHolderSizeCheck;
  static_assert(sizeof(TypeLoadExceptionHolder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::TypeLoadExceptionHolder*, "System.Runtime.Serialization", "TypeLoadExceptionHolder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::TypeLoadExceptionHolder::*)()>(&System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::TypeLoadExceptionHolder*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::TypeLoadExceptionHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
