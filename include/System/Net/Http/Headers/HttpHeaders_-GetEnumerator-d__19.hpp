// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
  class HttpHeaders::$GetEnumerator$d__19 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>*/ {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> <>2__current
    // Offset: 0x18
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> $$2__current;
    // public System.Net.Http.Headers.HttpHeaders <>4__this
    // Offset: 0x28
    System::Net::Http::Headers::HttpHeaders* $$4__this;
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> <>7__wrap1
    // Offset: 0x30
    typename System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>::Enumerator $$7__wrap1;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>
    operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x11789E0
    static HttpHeaders::$GetEnumerator$d__19* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0x117941C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1179400
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1179474
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current()
    // Offset: 0x11796DC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*> System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x11796E8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1179748
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19*, "System.Net.Http.Headers", "HttpHeaders/<GetEnumerator>d__19");
#pragma pack(pop)
