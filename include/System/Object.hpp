// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Object
  // [ClassInterfaceAttribute] Offset: D7B2AC
  // [ComVisibleAttribute] Offset: D7B2AC
  class Object {
    public:
    // Creating value type constructor for type: Object
    Object() noexcept {}
    // public System.Boolean Equals(System.Object obj)
    // Offset: 0x1C6F57C
    bool Equals(::Il2CppObject* obj);
    // static public System.Boolean Equals(System.Object objA, System.Object objB)
    // Offset: 0x1C6F588
    static bool Equals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // public System.Void .ctor()
    // Offset: 0x1C6F5B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ::Il2CppObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<::Il2CppObject*, creationType>()));
    }
    // protected System.Void Finalize()
    // Offset: 0x1C6F5B8
    void Finalize();
    // public System.Int32 GetHashCode()
    // Offset: 0x1C6F5BC
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x1C6F5C4
    System::Type* GetType();
    // protected System.Object MemberwiseClone()
    // Offset: 0x1C6F5C8
    ::Il2CppObject* MemberwiseClone();
    // public System.String ToString()
    // Offset: 0x1C6F5CC
    ::Il2CppString* ToString();
    // static System.Int32 InternalGetHashCode(System.Object o)
    // Offset: 0x1C6F5C0
    static int InternalGetHashCode(::Il2CppObject* o);
    // private System.Void FieldGetter(System.String typeName, System.String fieldName, ref System.Object val)
    // Offset: 0x1C6F5F0
    void FieldGetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject*& val);
    // private System.Void FieldSetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x1C6F5F4
    void FieldSetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject* val);
  }; // System.Object
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Object*, "System", "Object");
// Writing MetadataGetter for method: System::Object::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Object::Finalize
// Il2CppName: Finalize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::GetType
// Il2CppName: GetType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::MemberwiseClone
// Il2CppName: MemberwiseClone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::InternalGetHashCode
// Il2CppName: InternalGetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::FieldGetter
// Il2CppName: FieldGetter
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Object::FieldSetter
// Il2CppName: FieldSetter
// Cannot perform method pointer template specialization from operators!
