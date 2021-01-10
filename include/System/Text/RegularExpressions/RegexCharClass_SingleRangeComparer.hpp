// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexCharClass
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x10
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
  // [] Offset: FFFFFFFF
  class RegexCharClass::SingleRangeComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>*/ {
    public:
    // Creating value type constructor for type: SingleRangeComparer
    SingleRangeComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>
    operator System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>*>(this);
    }
    // public System.Int32 Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange x, System.Text.RegularExpressions.RegexCharClass/SingleRange y)
    // Offset: 0x1544B80
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer_1::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange x, System.Text.RegularExpressions.RegexCharClass/SingleRange y)
    int Compare(System::Text::RegularExpressions::RegexCharClass::SingleRange* x, System::Text::RegularExpressions::RegexCharClass::SingleRange* y);
    // public System.Void .ctor()
    // Offset: 0x1544BBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCharClass::SingleRangeComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCharClass::SingleRangeComparer*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
#pragma pack(pop)
