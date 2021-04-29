// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerPrefixCollection
  class HttpListenerPrefixCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<::Il2CppString*>*/ {
    public:
    // private System.Collections.Generic.List`1<System.String> prefixes
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* prefixes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Net.HttpListener listener
    // Size: 0x8
    // Offset: 0x18
    System::Net::HttpListener* listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // Creating value type constructor for type: HttpListenerPrefixCollection
    HttpListenerPrefixCollection(System::Collections::Generic::List_1<::Il2CppString*>* prefixes_ = {}, System::Net::HttpListener* listener_ = {}) noexcept : prefixes{prefixes_}, listener{listener_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<::Il2CppString*>
    operator System::Collections::Generic::ICollection_1<::Il2CppString*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>*>(this);
    }
    // System.Void .ctor(System.Net.HttpListener listener)
    // Offset: 0x14969DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerPrefixCollection* New_ctor(System::Net::HttpListener* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerPrefixCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerPrefixCollection*, creationType>(listener)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1498798
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x149908C
    bool get_IsReadOnly();
    // public System.Void Add(System.String uriPrefix)
    // Offset: 0x1499094
    void Add(::Il2CppString* uriPrefix);
    // public System.Void Clear()
    // Offset: 0x1499474
    void Clear();
    // public System.Boolean Contains(System.String uriPrefix)
    // Offset: 0x1499520
    bool Contains(::Il2CppString* uriPrefix);
    // public System.Void CopyTo(System.String[] array, System.Int32 offset)
    // Offset: 0x1499594
    void CopyTo(::Array<::Il2CppString*>* array, int offset);
    // public System.Collections.Generic.IEnumerator`1<System.String> GetEnumerator()
    // Offset: 0x1499610
    System::Collections::Generic::IEnumerator_1<::Il2CppString*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x149969C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.String uriPrefix)
    // Offset: 0x1499728
    bool Remove(::Il2CppString* uriPrefix);
  }; // System.Net.HttpListenerPrefixCollection
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerPrefixCollection), 24 + sizeof(System::Net::HttpListener*)> __System_Net_HttpListenerPrefixCollectionSizeCheck;
  static_assert(sizeof(HttpListenerPrefixCollection) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerPrefixCollection*, "System.Net", "HttpListenerPrefixCollection");
