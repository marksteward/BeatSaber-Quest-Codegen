// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: System.LocalDataStoreElement
  // [] Offset: FFFFFFFF
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
    // Offset: 0x13B4304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStoreElement* New_ctor(int64_t cookie) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStoreElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStoreElement*, creationType>(cookie)));
    }
    // public System.Object get_Value()
    // Offset: 0x13B4330
    ::Il2CppObject* get_Value();
    // public System.Void set_Value(System.Object value)
    // Offset: 0x13B4338
    void set_Value(::Il2CppObject* value);
    // public System.Int64 get_Cookie()
    // Offset: 0x13B4340
    int64_t get_Cookie();
  }; // System.LocalDataStoreElement
  static check_size<sizeof(LocalDataStoreElement), 24 + sizeof(int64_t)> __System_LocalDataStoreElementSizeCheck;
  static_assert(sizeof(LocalDataStoreElement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreElement*, "System", "LocalDataStoreElement");
#pragma pack(pop)
