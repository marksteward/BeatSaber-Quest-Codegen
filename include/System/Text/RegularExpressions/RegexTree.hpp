// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexTree
  class RegexTree : public ::Il2CppObject {
    public:
    // System.Text.RegularExpressions.RegexNode _root
    // Size: 0x8
    // Offset: 0x10
    System::Text::RegularExpressions::RegexNode* root;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Int32[] _capnumlist
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* capnumlist;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Collections.Hashtable _capnames
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.String[] _capslist
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* capslist;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Text.RegularExpressions.RegexOptions _options
    // Size: 0x4
    // Offset: 0x38
    System::Text::RegularExpressions::RegexOptions options;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexOptions) == 0x4);
    // System.Int32 _captop
    // Size: 0x4
    // Offset: 0x3C
    int captop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RegexTree
    RegexTree(System::Text::RegularExpressions::RegexNode* root_ = {}, System::Collections::Hashtable* caps_ = {}, ::Array<int>* capnumlist_ = {}, System::Collections::Hashtable* capnames_ = {}, ::Array<::Il2CppString*>* capslist_ = {}, System::Text::RegularExpressions::RegexOptions options_ = {}, int captop_ = {}) noexcept : root{root_}, caps{caps_}, capnumlist{capnumlist_}, capnames{capnames_}, capslist{capslist_}, options{options_}, captop{captop_} {}
    // System.Void .ctor(System.Text.RegularExpressions.RegexNode root, System.Collections.Hashtable caps, System.Int32[] capnumlist, System.Int32 captop, System.Collections.Hashtable capnames, System.String[] capslist, System.Text.RegularExpressions.RegexOptions opts)
    // Offset: 0x199266C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexTree* New_ctor(System::Text::RegularExpressions::RegexNode* root, System::Collections::Hashtable* caps, ::Array<int>* capnumlist, int captop, System::Collections::Hashtable* capnames, ::Array<::Il2CppString*>* capslist, System::Text::RegularExpressions::RegexOptions opts) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexTree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexTree*, creationType>(root, caps, capnumlist, captop, capnames, capslist, opts)));
    }
  }; // System.Text.RegularExpressions.RegexTree
  #pragma pack(pop)
  static check_size<sizeof(RegexTree), 60 + sizeof(int)> __System_Text_RegularExpressions_RegexTreeSizeCheck;
  static_assert(sizeof(RegexTree) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexTree*, "System.Text.RegularExpressions", "RegexTree");
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexTree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
