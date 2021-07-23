// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint
  // [TokenAttribute] Offset: FFFFFFFF
  class NUnitEqualityComparer::FailurePoint : public ::Il2CppObject {
    public:
    // public System.Int64 Position
    // Size: 0x8
    // Offset: 0x10
    int64_t Position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Object ExpectedValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* ExpectedValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object ActualValue
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* ActualValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean ExpectedHasData
    // Size: 0x1
    // Offset: 0x28
    bool ExpectedHasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ActualHasData
    // Size: 0x1
    // Offset: 0x29
    bool ActualHasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FailurePoint
    FailurePoint(int64_t Position_ = {}, ::Il2CppObject* ExpectedValue_ = {}, ::Il2CppObject* ActualValue_ = {}, bool ExpectedHasData_ = {}, bool ActualHasData_ = {}) noexcept : Position{Position_}, ExpectedValue{ExpectedValue_}, ActualValue{ActualValue_}, ExpectedHasData{ExpectedHasData_}, ActualHasData{ActualHasData_} {}
    // Get instance field: public System.Int64 Position
    int64_t _get_Position();
    // Set instance field: public System.Int64 Position
    void _set_Position(int64_t value);
    // Get instance field: public System.Object ExpectedValue
    ::Il2CppObject* _get_ExpectedValue();
    // Set instance field: public System.Object ExpectedValue
    void _set_ExpectedValue(::Il2CppObject* value);
    // Get instance field: public System.Object ActualValue
    ::Il2CppObject* _get_ActualValue();
    // Set instance field: public System.Object ActualValue
    void _set_ActualValue(::Il2CppObject* value);
    // Get instance field: public System.Boolean ExpectedHasData
    bool _get_ExpectedHasData();
    // Set instance field: public System.Boolean ExpectedHasData
    void _set_ExpectedHasData(bool value);
    // Get instance field: public System.Boolean ActualHasData
    bool _get_ActualHasData();
    // Set instance field: public System.Boolean ActualHasData
    void _set_ActualHasData(bool value);
    // public System.Void .ctor()
    // Offset: 0x171EC64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitEqualityComparer::FailurePoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitEqualityComparer::FailurePoint*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.NUnitEqualityComparer/NUnit.Framework.Constraints.FailurePoint
  #pragma pack(pop)
  static check_size<sizeof(NUnitEqualityComparer::FailurePoint), 41 + sizeof(bool)> __NUnit_Framework_Constraints_NUnitEqualityComparer_FailurePointSizeCheck;
  static_assert(sizeof(NUnitEqualityComparer::FailurePoint) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*, "NUnit.Framework.Constraints", "NUnitEqualityComparer/FailurePoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
