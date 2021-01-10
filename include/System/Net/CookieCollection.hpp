// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Cookie
  class Cookie;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x2A
  // Autogenerated type: System.Net.CookieCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D4585C
  class CookieCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // Nested type: System::Net::CookieCollection::Stamp
    struct Stamp;
    // Nested type: System::Net::CookieCollection::CookieCollectionEnumerator
    class CookieCollectionEnumerator;
    // System.Int32 m_version
    // Size: 0x4
    // Offset: 0x10
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_version and: m_list
    char __padding0[0x4] = {};
    // private System.Collections.ArrayList m_list
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* m_list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.DateTime m_TimeStamp
    // Size: 0x8
    // Offset: 0x20
    System::DateTime m_TimeStamp;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.Boolean m_has_other_versions
    // Size: 0x1
    // Offset: 0x28
    bool m_has_other_versions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xD46094
    // private System.Boolean m_IsReadOnly
    // Size: 0x1
    // Offset: 0x29
    bool m_IsReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CookieCollection
    CookieCollection(int m_version_ = {}, System::Collections::ArrayList* m_list_ = {}, System::DateTime m_TimeStamp_ = {}, bool m_has_other_versions_ = {}, bool m_IsReadOnly_ = {}) noexcept : m_version{m_version_}, m_list{m_list_}, m_TimeStamp{m_TimeStamp_}, m_has_other_versions{m_has_other_versions_}, m_IsReadOnly{m_IsReadOnly_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // public System.Net.Cookie get_Item(System.Int32 index)
    // Offset: 0x130F670
    System::Net::Cookie* get_Item(int index);
    // public System.Void Add(System.Net.Cookie cookie)
    // Offset: 0x130F75C
    void Add(System::Net::Cookie* cookie);
    // public System.Void Add(System.Net.CookieCollection cookies)
    // Offset: 0x130FBE0
    void Add(System::Net::CookieCollection* cookies);
    // System.DateTime TimeStamp(System.Net.CookieCollection/Stamp how)
    // Offset: 0x130FEFC
    System::DateTime TimeStamp(System::Net::CookieCollection::Stamp how);
    // System.Boolean get_IsOtherVersionSeen()
    // Offset: 0x130FFF4
    bool get_IsOtherVersionSeen();
    // System.Int32 InternalAdd(System.Net.Cookie cookie, System.Boolean isStrict)
    // Offset: 0x130FFFC
    int InternalAdd(System::Net::Cookie* cookie, bool isStrict);
    // System.Int32 IndexOf(System.Net.Cookie cookie)
    // Offset: 0x130F84C
    int IndexOf(System::Net::Cookie* cookie);
    // System.Void RemoveAt(System.Int32 idx)
    // Offset: 0x1310460
    void RemoveAt(int idx);
    // public System.Void .ctor()
    // Offset: 0x130F5C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieCollection*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x130FEB4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x130FED8
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x130FE54
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Net.CookieCollection
  static check_size<sizeof(CookieCollection), 41 + sizeof(bool)> __System_Net_CookieCollectionSizeCheck;
  static_assert(sizeof(CookieCollection) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieCollection*, "System.Net", "CookieCollection");
#pragma pack(pop)
