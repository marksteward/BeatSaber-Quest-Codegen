// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x1D
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1EncodableVector
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA3054
  class Asn1EncodableVector : public ::Il2CppObject/*, public System::Collections::IEnumerable*/ {
    public:
    // private Org.BouncyCastle.Asn1.Asn1Encodable[] elements
    // Size: 0x8
    // Offset: 0x10
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*) == 0x8);
    // private System.Int32 elementCount
    // Size: 0x4
    // Offset: 0x18
    int elementCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean copyOnWrite
    // Size: 0x1
    // Offset: 0x1C
    bool copyOnWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Asn1EncodableVector
    Asn1EncodableVector(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements_ = {}, int elementCount_ = {}, bool copyOnWrite_ = {}) noexcept : elements{elements_}, elementCount{elementCount_}, copyOnWrite{copyOnWrite_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Get static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
    static ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* _get_EmptyElements();
    // Set static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
    static void _set_EmptyElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* value);
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x13704EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1EncodableVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1EncodableVector*, creationType>(initialCapacity)));
    }
    // public System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    // Offset: 0x13705F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* v) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1EncodableVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1EncodableVector*, creationType>(v)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> v) {
      return New_ctor<creationType>(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>::New(v));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static Asn1EncodableVector* New_ctor(TParams&&... v) {
      return New_ctor<creationType>({v...});
    }
    // public System.Void Add(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x13706A0
    void Add(Org::BouncyCastle::Asn1::Asn1Encodable* element);
    // public System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x1370628
    void Add(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void Add(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void Add(TParams&&... objs) {
      Add({objs...});
    }
    // public System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x13708A0
    void AddOptional(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void AddOptional(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void AddOptional(TParams&&... objs) {
      AddOptional({objs...});
    }
    // public System.Void AddOptionalTagged(System.Boolean isExplicit, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x1370918
    void AddOptionalTagged(bool isExplicit, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x13709C0
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public System.Int32 get_Count()
    // Offset: 0x1370ACC
    int get_Count();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] CopyElements()
    // Offset: 0x1370AF4
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CopyElements();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] TakeElements()
    // Offset: 0x1370BA4
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* TakeElements();
    // private System.Void Reallocate(System.Int32 minCapacity)
    // Offset: 0x13707C0
    void Reallocate(int minCapacity);
    // static Org.BouncyCastle.Asn1.Asn1Encodable[] CloneElements(Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    // Offset: 0x1370C78
    static ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CloneElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements);
    // static private System.Void .cctor()
    // Offset: 0x1370D30
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13704E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1EncodableVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1EncodableVector*, creationType>()));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1370AD4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Org.BouncyCastle.Asn1.Asn1EncodableVector
  static check_size<sizeof(Asn1EncodableVector), 28 + sizeof(bool)> __Org_BouncyCastle_Asn1_Asn1EncodableVectorSizeCheck;
  static_assert(sizeof(Asn1EncodableVector) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1EncodableVector*, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
#pragma pack(pop)
