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
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStoreElement
  class LocalDataStoreElement : public ::Il2CppObject {
    public:
    // private System.Object m_value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int64 m_cookie
    // Size: 0x8
    // Offset: 0x18
    int64_t m_cookie;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: LocalDataStoreElement
    LocalDataStoreElement(::Il2CppObject* m_value_ = {}, int64_t m_cookie_ = {}) noexcept : m_value{m_value_}, m_cookie{m_cookie_} {}
    // public System.Void .ctor(System.Int64 cookie)
    // Offset: 0x1820D38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStoreElement* New_ctor(int64_t cookie) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStoreElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStoreElement*, creationType>(cookie)));
    }
    // public System.Object get_Value()
    // Offset: 0x1820D64
    ::Il2CppObject* get_Value();
    // public System.Void set_Value(System.Object value)
    // Offset: 0x1820D6C
    void set_Value(::Il2CppObject* value);
    // public System.Int64 get_Cookie()
    // Offset: 0x1820D74
    int64_t get_Cookie();
  }; // System.LocalDataStoreElement
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStoreElement), 24 + sizeof(int64_t)> __System_LocalDataStoreElementSizeCheck;
  static_assert(sizeof(LocalDataStoreElement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreElement*, "System", "LocalDataStoreElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStoreElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LocalDataStoreElement::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::LocalDataStoreElement::*)()>(&System::LocalDataStoreElement::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreElement*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreElement::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreElement::*)(::Il2CppObject*)>(&System::LocalDataStoreElement::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreElement*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreElement::get_Cookie
// Il2CppName: get_Cookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::LocalDataStoreElement::*)()>(&System::LocalDataStoreElement::get_Cookie)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreElement*), "get_Cookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
