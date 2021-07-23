// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.ListDictionary/System.Collections.Specialized.NodeEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ListDictionary::NodeEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
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
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x24
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NodeEnumerator
    NodeEnumerator(System::Collections::Specialized::ListDictionary* list_ = {}, System::Collections::Specialized::ListDictionary::DictionaryNode* current_ = {}, int version_ = {}, bool start_ = {}) noexcept : list{list_}, current{current_}, version{version_}, start{start_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field: private System.Collections.Specialized.ListDictionary list
    System::Collections::Specialized::ListDictionary* _get_list();
    // Set instance field: private System.Collections.Specialized.ListDictionary list
    void _set_list(System::Collections::Specialized::ListDictionary* value);
    // Get instance field: private System.Collections.Specialized.ListDictionary/System.Collections.Specialized.DictionaryNode current
    System::Collections::Specialized::ListDictionary::DictionaryNode* _get_current();
    // Set instance field: private System.Collections.Specialized.ListDictionary/System.Collections.Specialized.DictionaryNode current
    void _set_current(System::Collections::Specialized::ListDictionary::DictionaryNode* value);
    // Get instance field: private System.Int32 version
    int _get_version();
    // Set instance field: private System.Int32 version
    void _set_version(int value);
    // Get instance field: private System.Boolean start
    bool _get_start();
    // Set instance field: private System.Boolean start
    void _set_start(bool value);
    // public System.Object get_Current()
    // Offset: 0x1843FD0
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x184403C
    System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x18440E4
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1844170
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.Collections.Specialized.ListDictionary list)
    // Offset: 0x1843F28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary::NodeEnumerator* New_ctor(System::Collections::Specialized::ListDictionary* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::ListDictionary::NodeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary::NodeEnumerator*, creationType>(list)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x18441FC
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x18442C4
    void Reset();
  }; // System.Collections.Specialized.ListDictionary/System.Collections.Specialized.NodeEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionary::NodeEnumerator), 36 + sizeof(bool)> __System_Collections_Specialized_ListDictionary_NodeEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionary::NodeEnumerator) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::ListDictionary::NodeEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::DictionaryEntry (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::NodeEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::ListDictionary::NodeEnumerator::*)()>(&System::Collections::Specialized::ListDictionary::NodeEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary::NodeEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
