// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.IResourceReader
#include "System/Resources/IResourceReader.hpp"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: UnmanagedMemoryStream
  class UnmanagedMemoryStream;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceReader
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D380C0
  class ResourceReader : public ::Il2CppObject/*, public System::Resources::IResourceReader*/ {
    public:
    // Nested type: System::Resources::ResourceReader::ResourceEnumerator
    class ResourceEnumerator;
    // private System.IO.BinaryReader _store
    // Size: 0x8
    // Offset: 0x10
    System::IO::BinaryReader* store;
    // Field size check
    static_assert(sizeof(System::IO::BinaryReader*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>*) == 0x8);
    // private System.Int64 _nameSectionOffset
    // Size: 0x8
    // Offset: 0x20
    int64_t nameSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _dataSectionOffset
    // Size: 0x8
    // Offset: 0x28
    int64_t dataSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32[] _nameHashes
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* nameHashes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32* _nameHashesPtr
    // Size: 0x8
    // Offset: 0x38
    int* nameHashesPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.Int32[] _namePositions
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* namePositions;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32* _namePositionsPtr
    // Size: 0x8
    // Offset: 0x48
    int* namePositionsPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.RuntimeType[] _typeTable
    // Size: 0x8
    // Offset: 0x50
    ::Array<System::RuntimeType*>* typeTable;
    // Field size check
    static_assert(sizeof(::Array<System::RuntimeType*>*) == 0x8);
    // private System.Int32[] _typeNamePositions
    // Size: 0x8
    // Offset: 0x58
    ::Array<int>* typeNamePositions;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*) == 0x8);
    // private System.Int32 _numResources
    // Size: 0x4
    // Offset: 0x68
    int numResources;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numResources and: ums
    char __padding11[0x4] = {};
    // private System.IO.UnmanagedMemoryStream _ums
    // Size: 0x8
    // Offset: 0x70
    System::IO::UnmanagedMemoryStream* ums;
    // Field size check
    static_assert(sizeof(System::IO::UnmanagedMemoryStream*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x78
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ResourceReader
    ResourceReader(System::IO::BinaryReader* store_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache_ = {}, int64_t nameSectionOffset_ = {}, int64_t dataSectionOffset_ = {}, ::Array<int>* nameHashes_ = {}, int* nameHashesPtr_ = {}, ::Array<int>* namePositions_ = {}, int* namePositionsPtr_ = {}, ::Array<System::RuntimeType*>* typeTable_ = {}, ::Array<int>* typeNamePositions_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter_ = {}, int numResources_ = {}, System::IO::UnmanagedMemoryStream* ums_ = {}, int version_ = {}) noexcept : store{store_}, resCache{resCache_}, nameSectionOffset{nameSectionOffset_}, dataSectionOffset{dataSectionOffset_}, nameHashes{nameHashes_}, nameHashesPtr{nameHashesPtr_}, namePositions{namePositions_}, namePositionsPtr{namePositionsPtr_}, typeTable{typeTable_}, typeNamePositions{typeNamePositions_}, objFormatter{objFormatter_}, numResources{numResources_}, ums{ums_}, version{version_} {}
    // Creating interface conversion operator: operator System::Resources::IResourceReader
    operator System::Resources::IResourceReader() noexcept {
      return *reinterpret_cast<System::Resources::IResourceReader*>(this);
    }
    // System.Void .ctor(System.IO.Stream stream, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> resCache)
    // Offset: 0x15D885C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceReader* New_ctor(System::IO::Stream* stream, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceReader*, creationType>(stream, resCache)));
    }
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15D8AEC
    void Dispose(bool disposing);
    // static System.Int32 ReadUnalignedI4(System.Int32* p)
    // Offset: 0x15D8BA8
    static int ReadUnalignedI4(int* p);
    // private System.Void SkipString()
    // Offset: 0x15D8BB0
    void SkipString();
    // private System.Int32 GetNameHash(System.Int32 index)
    // Offset: 0x15D8C88
    int GetNameHash(int index);
    // private System.Int32 GetNamePosition(System.Int32 index)
    // Offset: 0x15D8CD8
    int GetNamePosition(int index);
    // System.Resources.ResourceReader/ResourceEnumerator GetEnumeratorInternal()
    // Offset: 0x15D8F50
    System::Resources::ResourceReader::ResourceEnumerator* GetEnumeratorInternal();
    // System.Int32 FindPosForResource(System.String name)
    // Offset: 0x15D8FD0
    int FindPosForResource(::Il2CppString* name);
    // private System.Boolean CompareStringEqualsName(System.String name)
    // Offset: 0x15D93B4
    bool CompareStringEqualsName(::Il2CppString* name);
    // private System.String AllocateStringForNameIndex(System.Int32 index, out System.Int32 dataOffset)
    // Offset: 0x15D95CC
    ::Il2CppString* AllocateStringForNameIndex(int index, int& dataOffset);
    // private System.Object GetValueForNameIndex(System.Int32 index)
    // Offset: 0x15D9EBC
    ::Il2CppObject* GetValueForNameIndex(int index);
    // System.String LoadString(System.Int32 pos)
    // Offset: 0x15DA410
    ::Il2CppString* LoadString(int pos);
    // System.Object LoadObject(System.Int32 pos)
    // Offset: 0x15DAA3C
    ::Il2CppObject* LoadObject(int pos);
    // System.Object LoadObject(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x15DAA74
    ::Il2CppObject* LoadObject(int pos, System::Resources::ResourceTypeCode& typeCode);
    // System.Object LoadObjectV1(System.Int32 pos)
    // Offset: 0x15DA1A0
    ::Il2CppObject* LoadObjectV1(int pos);
    // private System.Object _LoadObjectV1(System.Int32 pos)
    // Offset: 0x15DAB14
    ::Il2CppObject* _LoadObjectV1(int pos);
    // System.Object LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x15DA2D4
    ::Il2CppObject* LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode);
    // private System.Object _LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x15DB464
    ::Il2CppObject* _LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode);
    // private System.Object DeserializeObject(System.Int32 typeIndex)
    // Offset: 0x15DB27C
    ::Il2CppObject* DeserializeObject(int typeIndex);
    // private System.Void ReadResources()
    // Offset: 0x15D8968
    void ReadResources();
    // private System.Void _ReadResources()
    // Offset: 0x15DBACC
    void _ReadResources();
    // private System.RuntimeType FindType(System.Int32 typeIndex)
    // Offset: 0x15DA6CC
    System::RuntimeType* FindType(int typeIndex);
    // public System.Void Close()
    // Offset: 0x15D8AE4
    // Implemented from: System.Resources.IResourceReader
    // Base method: System.Void IResourceReader::Close()
    void Close();
    // public System.Void Dispose()
    // Offset: 0x15D8BA0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x15D8E2C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x15D8E30
    // Implemented from: System.Resources.IResourceReader
    // Base method: System.Collections.IDictionaryEnumerator IResourceReader::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Resources.ResourceReader
  static check_size<sizeof(ResourceReader), 120 + sizeof(int)> __System_Resources_ResourceReaderSizeCheck;
  static_assert(sizeof(ResourceReader) == 0x7C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceReader*, "System.Resources", "ResourceReader");
