// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.EntityTagHeaderValue
  class EntityTagHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5C30
    // private System.Boolean <IsWeak>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool IsWeak;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsWeak and: Tag
    char __padding0[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE5C40
    // private System.String <Tag>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Tag;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: EntityTagHeaderValue
    EntityTagHeaderValue(bool IsWeak_ = {}, ::Il2CppString* Tag_ = {}) noexcept : IsWeak{IsWeak_}, Tag{Tag_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static System::Net::Http::Headers::EntityTagHeaderValue* _get_any();
    // Set static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static void _set_any(System::Net::Http::Headers::EntityTagHeaderValue* value);
    // public System.Boolean get_IsWeak()
    // Offset: 0x15918F0
    bool get_IsWeak();
    // System.Void set_IsWeak(System.Boolean value)
    // Offset: 0x15918F8
    void set_IsWeak(bool value);
    // public System.String get_Tag()
    // Offset: 0x1591904
    ::Il2CppString* get_Tag();
    // System.Void set_Tag(System.String value)
    // Offset: 0x159190C
    void set_Tag(::Il2CppString* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1591914
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue)
    // Offset: 0x1591A38
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x1591B24
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::EntityTagHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.EntityTagHeaderValue> result)
    // Offset: 0x1591D60
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue*>*& result);
    // static private System.Void .cctor()
    // Offset: 0x1591E6C
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x15918E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityTagHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::EntityTagHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityTagHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x159191C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15919E4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1591E00
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.EntityTagHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(EntityTagHeaderValue), 24 + sizeof(::Il2CppString*)> __System_Net_Http_Headers_EntityTagHeaderValueSizeCheck;
  static_assert(sizeof(EntityTagHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::EntityTagHeaderValue*, "System.Net.Http.Headers", "EntityTagHeaderValue");
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::get_IsWeak
// Il2CppName: get_IsWeak
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::set_IsWeak
// Il2CppName: set_IsWeak
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::get_Tag
// Il2CppName: get_Tag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::set_Tag
// Il2CppName: set_Tag
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParse
// Il2CppName: TryParse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParseElement
// Il2CppName: TryParseElement
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParse
// Il2CppName: TryParse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
