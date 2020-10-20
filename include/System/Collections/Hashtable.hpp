// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Hashtable
  class Hashtable : public ::Il2CppObject/*, public System::Collections::IDictionary, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback, public System::ICloneable*/ {
    public:
    // Nested type: System::Collections::Hashtable::bucket
    struct bucket;
    // Nested type: System::Collections::Hashtable::KeyCollection
    class KeyCollection;
    // Nested type: System::Collections::Hashtable::ValueCollection
    class ValueCollection;
    // Nested type: System::Collections::Hashtable::SyncHashtable
    class SyncHashtable;
    // Nested type: System::Collections::Hashtable::HashtableEnumerator
    class HashtableEnumerator;
    // Nested type: System::Collections::Hashtable::HashtableDebugView
    class HashtableDebugView;
    // private System.Collections.Hashtable/bucket[] buckets
    // Offset: 0x10
    ::Array<System::Collections::Hashtable::bucket>* buckets;
    // private System.Int32 count
    // Offset: 0x18
    int count;
    // private System.Int32 occupancy
    // Offset: 0x1C
    int occupancy;
    // private System.Int32 loadsize
    // Offset: 0x20
    int loadsize;
    // private System.Single loadFactor
    // Offset: 0x24
    float loadFactor;
    // private System.Int32 version
    // Offset: 0x28
    int version;
    // private System.Boolean isWriterInProgress
    // Offset: 0x2C
    bool isWriterInProgress;
    // private System.Collections.ICollection keys
    // Offset: 0x30
    System::Collections::ICollection* keys;
    // private System.Collections.ICollection values
    // Offset: 0x38
    System::Collections::ICollection* values;
    // private System.Collections.IEqualityComparer _keycomparer
    // Offset: 0x40
    System::Collections::IEqualityComparer* keycomparer;
    // private System.Object _syncRoot
    // Offset: 0x48
    ::Il2CppObject* syncRoot;
    // Creating interface conversion operator: operator System::Collections::IDictionary
    operator System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<System::Collections::IDictionary*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // static field const value: static System.Int32 HashPrime
    static constexpr const int HashPrime = 101;
    // Get static field: static System.Int32 HashPrime
    static int _get_HashPrime();
    // Set static field: static System.Int32 HashPrime
    static void _set_HashPrime(int value);
    // static field const value: static private System.Int32 InitialSize
    static constexpr const int InitialSize = 3;
    // Get static field: static private System.Int32 InitialSize
    static int _get_InitialSize();
    // Set static field: static private System.Int32 InitialSize
    static void _set_InitialSize(int value);
    // static field const value: static private System.String LoadFactorName
    static constexpr const char* LoadFactorName = "LoadFactor";
    // Get static field: static private System.String LoadFactorName
    static ::Il2CppString* _get_LoadFactorName();
    // Set static field: static private System.String LoadFactorName
    static void _set_LoadFactorName(::Il2CppString* value);
    // static field const value: static private System.String VersionName
    static constexpr const char* VersionName = "Version";
    // Get static field: static private System.String VersionName
    static ::Il2CppString* _get_VersionName();
    // Set static field: static private System.String VersionName
    static void _set_VersionName(::Il2CppString* value);
    // static field const value: static private System.String ComparerName
    static constexpr const char* ComparerName = "Comparer";
    // Get static field: static private System.String ComparerName
    static ::Il2CppString* _get_ComparerName();
    // Set static field: static private System.String ComparerName
    static void _set_ComparerName(::Il2CppString* value);
    // static field const value: static private System.String HashCodeProviderName
    static constexpr const char* HashCodeProviderName = "HashCodeProvider";
    // Get static field: static private System.String HashCodeProviderName
    static ::Il2CppString* _get_HashCodeProviderName();
    // Set static field: static private System.String HashCodeProviderName
    static void _set_HashCodeProviderName(::Il2CppString* value);
    // static field const value: static private System.String HashSizeName
    static constexpr const char* HashSizeName = "HashSize";
    // Get static field: static private System.String HashSizeName
    static ::Il2CppString* _get_HashSizeName();
    // Set static field: static private System.String HashSizeName
    static void _set_HashSizeName(::Il2CppString* value);
    // static field const value: static private System.String KeysName
    static constexpr const char* KeysName = "Keys";
    // Get static field: static private System.String KeysName
    static ::Il2CppString* _get_KeysName();
    // Set static field: static private System.String KeysName
    static void _set_KeysName(::Il2CppString* value);
    // static field const value: static private System.String ValuesName
    static constexpr const char* ValuesName = "Values";
    // Get static field: static private System.String ValuesName
    static ::Il2CppString* _get_ValuesName();
    // Set static field: static private System.String ValuesName
    static void _set_ValuesName(::Il2CppString* value);
    // static field const value: static private System.String KeyComparerName
    static constexpr const char* KeyComparerName = "KeyComparer";
    // Get static field: static private System.String KeyComparerName
    static ::Il2CppString* _get_KeyComparerName();
    // Set static field: static private System.String KeyComparerName
    static void _set_KeyComparerName(::Il2CppString* value);
    // System.Void .ctor(System.Boolean trash)
    // Offset: 0x13ADB44
    static Hashtable* New_ctor(bool trash);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x13ADDF4
    static Hashtable* New_ctor(int capacity);
    // public System.Void .ctor(System.Int32 capacity, System.Single loadFactor)
    // Offset: 0x13ADB4C
    static Hashtable* New_ctor(int capacity, float loadFactor);
    // public System.Void .ctor(System.Int32 capacity, System.Single loadFactor, System.Collections.IHashCodeProvider hcp, System.Collections.IComparer comparer)
    // Offset: 0x13ADDFC
    static Hashtable* New_ctor(int capacity, float loadFactor, System::Collections::IHashCodeProvider* hcp, System::Collections::IComparer* comparer);
    // public System.Void .ctor(System.Int32 capacity, System.Single loadFactor, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x13ADEB8
    static Hashtable* New_ctor(int capacity, float loadFactor, System::Collections::IEqualityComparer* equalityComparer);
    // public System.Void .ctor(System.Collections.IHashCodeProvider hcp, System.Collections.IComparer comparer)
    // Offset: 0x13ADEE8
    static Hashtable* New_ctor(System::Collections::IHashCodeProvider* hcp, System::Collections::IComparer* comparer);
    // public System.Void .ctor(System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x13ADEFC
    static Hashtable* New_ctor(System::Collections::IEqualityComparer* equalityComparer);
    // public System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x13ADF34
    static Hashtable* New_ctor(int capacity, System::Collections::IEqualityComparer* equalityComparer);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13ADF68
    static Hashtable* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.UInt32 InitHash(System.Object key, System.Int32 hashsize, out System.UInt32 seed, out System.UInt32 incr)
    // Offset: 0x13AE000
    uint InitHash(::Il2CppObject* key, int hashsize, uint& seed, uint& incr);
    // public System.Void Clear()
    // Offset: 0x13AE574
    void Clear();
    // public System.Boolean ContainsKey(System.Object key)
    // Offset: 0x13AE800
    bool ContainsKey(::Il2CppObject* key);
    // private System.Void CopyKeys(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x13AE99C
    void CopyKeys(System::Array* array, int arrayIndex);
    // private System.Void CopyEntries(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x13AEA44
    void CopyEntries(System::Array* array, int arrayIndex);
    // private System.Void CopyValues(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x13AED04
    void CopyValues(System::Array* array, int arrayIndex);
    // private System.Void expand()
    // Offset: 0x13AEFFC
    void expand();
    // private System.Void rehash()
    // Offset: 0x13AF1F4
    void rehash();
    // private System.Void UpdateVersion()
    // Offset: 0x13AE688
    void UpdateVersion();
    // private System.Void rehash(System.Int32 newsize, System.Boolean forceNewHashCode)
    // Offset: 0x13AF07C
    void rehash(int newsize, bool forceNewHashCode);
    // protected System.Int32 GetHash(System.Object key)
    // Offset: 0x13AF400
    int GetHash(::Il2CppObject* key);
    // protected System.Boolean KeyEquals(System.Object item, System.Object key)
    // Offset: 0x13AF4E4
    bool KeyEquals(::Il2CppObject* item, ::Il2CppObject* key);
    // public System.Collections.ICollection get_Values()
    // Offset: 0x13AF684
    System::Collections::ICollection* get_Values();
    // private System.Void Insert(System.Object key, System.Object nvalue, System.Boolean add)
    // Offset: 0x13AE068
    void Insert(::Il2CppObject* key, ::Il2CppObject* nvalue, bool add);
    // private System.Void putEntry(System.Collections.Hashtable/bucket[] newBuckets, System.Object key, System.Object nvalue, System.Int32 hashcode)
    // Offset: 0x13AF214
    void putEntry(::Array<System::Collections::Hashtable::bucket>* newBuckets, ::Il2CppObject* key, ::Il2CppObject* nvalue, int hashcode);
    // public System.Void Remove(System.Object key)
    // Offset: 0x13AF70C
    void Remove(::Il2CppObject* key);
    // public System.Object get_SyncRoot()
    // Offset: 0x13AF984
    ::Il2CppObject* get_SyncRoot();
    // static public System.Collections.Hashtable Synchronized(System.Collections.Hashtable table)
    // Offset: 0x13AFA04
    static System::Collections::Hashtable* Synchronized(System::Collections::Hashtable* table);
    // public System.Void .ctor()
    // Offset: 0x13A5998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Hashtable* New_ctor();
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x13AE060
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Object Clone()
    // Offset: 0x13AE6B8
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x13AE7F0
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x13AEB7C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public System.Object get_Item(System.Object key)
    // Offset: 0x13AEDB8
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x13AEFF4
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x13AF330
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x13AF398
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x13AF5FC
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Int32 get_Count()
    // Offset: 0x13AF9FC
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13AFAA4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x13AFF70
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
  }; // System.Collections.Hashtable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable*, "System.Collections", "Hashtable");
#pragma pack(pop)
