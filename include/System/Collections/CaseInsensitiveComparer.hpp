// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.CaseInsensitiveComparer
  // [ComVisibleAttribute] Offset: D7FB90
  class CaseInsensitiveComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::CompareInfo* m_compareInfo;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareInfo*) == 0x8);
    // Creating value type constructor for type: CaseInsensitiveComparer
    CaseInsensitiveComparer(System::Globalization::CompareInfo* m_compareInfo_ = {}) noexcept : m_compareInfo{m_compareInfo_} {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Creating conversion operator: operator System::Globalization::CompareInfo*
    constexpr operator System::Globalization::CompareInfo*() const noexcept {
      return m_compareInfo;
    }
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x17840D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveComparer* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::CaseInsensitiveComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveComparer*, creationType>(culture)));
    }
    // static public System.Collections.CaseInsensitiveComparer get_Default()
    // Offset: 0x1784180
    static System::Collections::CaseInsensitiveComparer* get_Default();
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x178420C
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Void .ctor()
    // Offset: 0x178404C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::CaseInsensitiveComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveComparer*, creationType>()));
    }
  }; // System.Collections.CaseInsensitiveComparer
  #pragma pack(pop)
  static check_size<sizeof(CaseInsensitiveComparer), 16 + sizeof(System::Globalization::CompareInfo*)> __System_Collections_CaseInsensitiveComparerSizeCheck;
  static_assert(sizeof(CaseInsensitiveComparer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::get_Default
// Il2CppName: get_Default
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::Compare
// Il2CppName: Compare
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
