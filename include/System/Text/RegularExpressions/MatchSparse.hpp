// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: GroupCollection
  class GroupCollection;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.MatchSparse
  class MatchSparse : public System::Text::RegularExpressions::Match {
    public:
    // Writing base type padding for base size: 0x69 to desired offset: 0x70
    char ___base_padding[0x7] = {};
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: MatchSparse
    MatchSparse(System::Collections::Hashtable* caps_ = {}) noexcept : caps{caps_} {}
    // Creating conversion operator: operator System::Collections::Hashtable*
    constexpr operator System::Collections::Hashtable*() const noexcept {
      return caps;
    }
    // System.Void .ctor(System.Text.RegularExpressions.Regex regex, System.Collections.Hashtable caps, System.Int32 capcount, System.String text, System.Int32 begpos, System.Int32 len, System.Int32 startpos)
    // Offset: 0x1855960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchSparse* New_ctor(System::Text::RegularExpressions::Regex* regex, System::Collections::Hashtable* caps, int capcount, ::Il2CppString* text, int begpos, int len, int startpos) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::MatchSparse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchSparse*, creationType>(regex, caps, capcount, text, begpos, len, startpos)));
    }
    // public override System.Text.RegularExpressions.GroupCollection get_Groups()
    // Offset: 0x1855A20
    // Implemented from: System.Text.RegularExpressions.Match
    // Base method: System.Text.RegularExpressions.GroupCollection Match::get_Groups()
    System::Text::RegularExpressions::GroupCollection* get_Groups();
  }; // System.Text.RegularExpressions.MatchSparse
  #pragma pack(pop)
  static check_size<sizeof(MatchSparse), 112 + sizeof(System::Collections::Hashtable*)> __System_Text_RegularExpressions_MatchSparseSizeCheck;
  static_assert(sizeof(MatchSparse) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::MatchSparse*, "System.Text.RegularExpressions", "MatchSparse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchSparse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchSparse::get_Groups
// Il2CppName: get_Groups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::GroupCollection* (System::Text::RegularExpressions::MatchSparse::*)()>(&System::Text::RegularExpressions::MatchSparse::get_Groups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchSparse*), "get_Groups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
