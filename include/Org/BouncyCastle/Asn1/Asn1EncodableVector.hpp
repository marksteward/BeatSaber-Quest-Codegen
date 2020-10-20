// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1EncodableVector
  class Asn1EncodableVector : public ::Il2CppObject/*, public System::Collections::IEnumerable*/ {
    public:
    // private Org.BouncyCastle.Asn1.Asn1Encodable[] elements
    // Offset: 0x10
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements;
    // private System.Int32 elementCount
    // Offset: 0x18
    int elementCount;
    // private System.Boolean copyOnWrite
    // Offset: 0x1C
    bool copyOnWrite;
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Get static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
    static ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* _get_EmptyElements();
    // Set static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
    static void _set_EmptyElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* value);
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x1311D00
    static Asn1EncodableVector* New_ctor(int initialCapacity);
    // public System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    // Offset: 0x1311E0C
    static Asn1EncodableVector* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* v);
    // Creating initializer_list -> params proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    static Asn1EncodableVector* New_ctor(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> v);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    template<class ...TParams>
    static Asn1EncodableVector* New_ctor(TParams&&... v) {
      return New_ctor({v...});
    }
    // public System.Void Add(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x1311EB4
    void Add(Org::BouncyCastle::Asn1::Asn1Encodable* element);
    // public System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x1311E3C
    void Add(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void Add(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void Add(TParams&&... objs) {
      Add({objs...});
    }
    // public System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x13120B4
    void AddOptional(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void AddOptional(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void AddOptional(TParams&&... objs) {
      AddOptional({objs...});
    }
    // public System.Void AddOptionalTagged(System.Boolean isExplicit, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x131212C
    void AddOptionalTagged(bool isExplicit, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x13121D4
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public System.Int32 get_Count()
    // Offset: 0x13122E0
    int get_Count();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] CopyElements()
    // Offset: 0x1312308
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CopyElements();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] TakeElements()
    // Offset: 0x13123B8
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* TakeElements();
    // private System.Void Reallocate(System.Int32 minCapacity)
    // Offset: 0x1311FD4
    void Reallocate(int minCapacity);
    // static Org.BouncyCastle.Asn1.Asn1Encodable[] CloneElements(Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    // Offset: 0x131248C
    static ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CloneElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements);
    // static private System.Void .cctor()
    // Offset: 0x1312544
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1311CF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Asn1EncodableVector* New_ctor();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x13122E8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Org.BouncyCastle.Asn1.Asn1EncodableVector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1EncodableVector*, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
#pragma pack(pop)
