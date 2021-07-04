// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PropertyName
  // [UsedByNativeCodeAttribute] Offset: D8FD68
  struct PropertyName/*, public System::ValueType, public System::IEquatable_1<UnityEngine::PropertyName>*/ {
    public:
    // System.Int32 id
    // Size: 0x4
    // Offset: 0x0
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PropertyName
    constexpr PropertyName(int id_ = {}) noexcept : id{id_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::PropertyName>
    operator System::IEquatable_1<UnityEngine::PropertyName>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::PropertyName>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return id;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0xF05E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    PropertyName(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::PropertyName::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, name);
    }
    // public System.Void .ctor(UnityEngine.PropertyName other)
    // Offset: 0xF05EA0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: is copy constructor.  PropertyName(UnityEngine::PropertyName other)
    // public System.Boolean Equals(UnityEngine.PropertyName other)
    // Offset: 0xF05EB8
    bool Equals(UnityEngine::PropertyName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF05EA8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF05EB0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xF05EC8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.PropertyName
  #pragma pack(pop)
  static check_size<sizeof(PropertyName), 0 + sizeof(int)> __UnityEngine_PropertyNameSizeCheck;
  static_assert(sizeof(PropertyName) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.PropertyName lhs, UnityEngine.PropertyName rhs)
  // Offset: 0x1B250E8
  bool operator ==(const UnityEngine::PropertyName& lhs, const UnityEngine::PropertyName& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyName, "UnityEngine", "PropertyName");
// Writing MetadataGetter for method: UnityEngine::PropertyName::PropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::PropertyName::PropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::PropertyName::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::PropertyName::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::PropertyName::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::PropertyName::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::PropertyName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
