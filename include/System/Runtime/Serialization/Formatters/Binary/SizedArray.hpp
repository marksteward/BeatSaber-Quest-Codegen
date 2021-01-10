// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SizedArray
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D3AB20
  class SizedArray : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // System.Object[] objects
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* objects;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.Object[] negObjects
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* negObjects;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: SizedArray
    SizedArray(::Array<::Il2CppObject*>* objects_ = {}, ::Array<::Il2CppObject*>* negObjects_ = {}) noexcept : objects{objects_}, negObjects{negObjects_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Int32 length)
    // Offset: 0x12FF150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>(length)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
    // Offset: 0x12FF1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>(sizedArray)));
    }
    // System.Object get_Item(System.Int32 index)
    // Offset: 0x12F4214
    ::Il2CppObject* get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x12FF324
    void set_Item(int index, ::Il2CppObject* value);
    // System.Void IncreaseCapacity(System.Int32 index)
    // Offset: 0x12FF444
    void IncreaseCapacity(int index);
    // System.Void .ctor()
    // Offset: 0x12FF0C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>()));
    }
    // public System.Object Clone()
    // Offset: 0x12FF2C4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
  }; // System.Runtime.Serialization.Formatters.Binary.SizedArray
  static check_size<sizeof(SizedArray), 24 + sizeof(::Array<::Il2CppObject*>*)> __System_Runtime_Serialization_Formatters_Binary_SizedArraySizeCheck;
  static_assert(sizeof(SizedArray) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SizedArray*, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
#pragma pack(pop)
