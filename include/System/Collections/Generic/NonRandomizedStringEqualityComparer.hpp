// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.NonRandomizedStringEqualityComparer
  class NonRandomizedStringEqualityComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: NonRandomizedStringEqualityComparer
    NonRandomizedStringEqualityComparer() noexcept {}
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1786C90
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1786CA0
    int GetHashCode(::Il2CppString* obj);
    // public System.Void .ctor()
    // Offset: 0x1786CB8
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonRandomizedStringEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NonRandomizedStringEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonRandomizedStringEqualityComparer*, creationType>()));
    }
  }; // System.Collections.Generic.NonRandomizedStringEqualityComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::NonRandomizedStringEqualityComparer*, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
