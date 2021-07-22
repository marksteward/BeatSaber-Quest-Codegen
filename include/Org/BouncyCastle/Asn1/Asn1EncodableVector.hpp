// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1EncodableVector
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DCE370
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
    // public Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x16D84C8
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public System.Int32 get_Count()
    // Offset: 0x16D85D4
    int get_Count();
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x16D8018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1EncodableVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1EncodableVector*, creationType>(initialCapacity)));
    }
    // public System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
    // Offset: 0x16D8118
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
    // static private System.Void .cctor()
    // Offset: 0x16D8838
    static void _cctor();
    // public System.Void Add(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x16D81C0
    void Add(Org::BouncyCastle::Asn1::Asn1Encodable* element);
    // public System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x16D8148
    void Add(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void Add(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void Add(TParams&&... objs) {
      Add({objs...});
    }
    // public System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    // Offset: 0x16D83A8
    void AddOptional(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs);
    // Creating initializer_list -> params proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    void AddOptional(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs);
    // Creating TArgs -> initializer_list proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
    template<class ...TParams>
    void AddOptional(TParams&&... objs) {
      AddOptional({objs...});
    }
    // public System.Void AddOptionalTagged(System.Boolean isExplicit, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x16D8420
    void AddOptionalTagged(bool isExplicit, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x16D85DC
    System::Collections::IEnumerator* GetEnumerator();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] CopyElements()
    // Offset: 0x16D85FC
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CopyElements();
    // Org.BouncyCastle.Asn1.Asn1Encodable[] TakeElements()
    // Offset: 0x16D86AC
    ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* TakeElements();
    // private System.Void Reallocate(System.Int32 minCapacity)
    // Offset: 0x16D82D8
    void Reallocate(int minCapacity);
    // static Org.BouncyCastle.Asn1.Asn1Encodable[] CloneElements(Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    // Offset: 0x16D8780
    static ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* CloneElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements);
    // public System.Void .ctor()
    // Offset: 0x16D8010
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1EncodableVector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1EncodableVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1EncodableVector*, creationType>()));
    }
  }; // Org.BouncyCastle.Asn1.Asn1EncodableVector
  #pragma pack(pop)
  static check_size<sizeof(Asn1EncodableVector), 28 + sizeof(bool)> __Org_BouncyCastle_Asn1_Asn1EncodableVectorSizeCheck;
  static_assert(sizeof(Asn1EncodableVector) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1EncodableVector*, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable* (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(int)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)()>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::Add)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::Add)> {
  static const MethodInfo* get() {
    static auto* objs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptional
// Il2CppName: AddOptional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptional)> {
  static const MethodInfo* get() {
    static auto* objs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "AddOptional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptionalTagged
// Il2CppName: AddOptionalTagged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(bool, int, Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptionalTagged)> {
  static const MethodInfo* get() {
    static auto* isExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tagNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "AddOptionalTagged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isExplicit, tagNo, obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)()>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::CopyElements
// Il2CppName: CopyElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)()>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::CopyElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "CopyElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::TakeElements
// Il2CppName: TakeElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)()>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::TakeElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "TakeElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::Reallocate
// Il2CppName: Reallocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1EncodableVector::*)(int)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::Reallocate)> {
  static const MethodInfo* get() {
    static auto* minCapacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "Reallocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minCapacity});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::CloneElements
// Il2CppName: CloneElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* (*)(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*)>(&Org::BouncyCastle::Asn1::Asn1EncodableVector::CloneElements)> {
  static const MethodInfo* get() {
    static auto* elements = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1EncodableVector*), "CloneElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elements});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
