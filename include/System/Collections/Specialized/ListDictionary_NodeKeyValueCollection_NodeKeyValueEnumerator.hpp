// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary/System.Collections.Specialized.NodeKeyValueCollection
#include "System/Collections/Specialized/ListDictionary_NodeKeyValueCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.ListDictionary/System.Collections.Specialized.NodeKeyValueCollection/System.Collections.Specialized.NodeKeyValueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.Specialized.ListDictionary list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Specialized::ListDictionary* list;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::ListDictionary*) == 0x8);
    // private System.Collections.Specialized.ListDictionary/System.Collections.Specialized.DictionaryNode current
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Specialized::ListDictionary::DictionaryNode* current;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::ListDictionary::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isKeys
    // Size: 0x1
    // Offset: 0x24
    bool isKeys;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x25
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NodeKeyValueEnumerator
    NodeKeyValueEnumerator(System::Collections::Specialized::ListDictionary* list_ = {}, System::Collections::Specialized::ListDictionary::DictionaryNode* current_ = {}, int version_ = {}, bool isKeys_ = {}, bool start_ = {}) noexcept : list{list_}, current{current_}, version{version_}, isKeys{isKeys_}, start{start_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // public System.Object get_Current()
    // Offset: 0x18445A4
    ::Il2CppObject* get_Current();
    // public System.Void .ctor(System.Collections.Specialized.ListDictionary list, System.Boolean isKeys)
    // Offset: 0x1844548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator* New_ctor(System::Collections::Specialized::ListDictionary* list, bool isKeys) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*, creationType>(list, isKeys)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1844644
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x184470C
    void Reset();
  }; // System.Collections.Specialized.ListDictionary/System.Collections.Specialized.NodeKeyValueCollection/System.Collections.Specialized.NodeKeyValueEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator), 37 + sizeof(bool)> __System_Collections_Specialized_ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator) == 0x26);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
