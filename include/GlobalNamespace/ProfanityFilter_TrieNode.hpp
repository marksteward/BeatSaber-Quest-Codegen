// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ProfanityFilter
#include "GlobalNamespace/ProfanityFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ProfanityFilter/TrieNode
  // [] Offset: FFFFFFFF
  class ProfanityFilter::TrieNode : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.Char,ProfanityFilter/TrieNode> _children
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppChar, GlobalNamespace::ProfanityFilter::TrieNode*>* children;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppChar, GlobalNamespace::ProfanityFilter::TrieNode*>*) == 0x8);
    // private System.Int32 _shortestWord
    // Size: 0x4
    // Offset: 0x18
    int shortestWord;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TrieNode
    TrieNode(System::Collections::Generic::Dictionary_2<::Il2CppChar, GlobalNamespace::ProfanityFilter::TrieNode*>* children_ = {}, int shortestWord_ = {}) noexcept : children{children_}, shortestWord{shortestWord_} {}
    // public System.Void AddWord(System.String word, System.Int32 index)
    // Offset: 0x1E53DA0
    void AddWord(::Il2CppString* word, int index);
    // public System.Boolean IsMatch(System.String word, System.Int32 index)
    // Offset: 0x1E54218
    bool IsMatch(::Il2CppString* word, int index);
    // public System.Void .ctor()
    // Offset: 0x1E53D90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfanityFilter::TrieNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ProfanityFilter::TrieNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfanityFilter::TrieNode*, creationType>()));
    }
  }; // ProfanityFilter/TrieNode
  static check_size<sizeof(ProfanityFilter::TrieNode), 24 + sizeof(int)> __GlobalNamespace_ProfanityFilter_TrieNodeSizeCheck;
  static_assert(sizeof(ProfanityFilter::TrieNode) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProfanityFilter::TrieNode*, "", "ProfanityFilter/TrieNode");
