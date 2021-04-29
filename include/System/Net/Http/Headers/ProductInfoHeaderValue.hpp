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
  // Forward declaring type: ProductHeaderValue
  class ProductHeaderValue;
  // Forward declaring type: Lexer
  class Lexer;
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
  // Autogenerated type: System.Net.Http.Headers.ProductInfoHeaderValue
  class ProductInfoHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD0AF6C
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD0AF7C
    // private System.Net.Http.Headers.ProductHeaderValue <Product>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Net::Http::Headers::ProductHeaderValue* Product;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::ProductHeaderValue*) == 0x8);
    // Creating value type constructor for type: ProductInfoHeaderValue
    ProductInfoHeaderValue(::Il2CppString* Comment_ = {}, System::Net::Http::Headers::ProductHeaderValue* Product_ = {}) noexcept : Comment{Comment_}, Product{Product_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.Net.Http.Headers.ProductHeaderValue product)
    // Offset: 0x1402814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductInfoHeaderValue* New_ctor(System::Net::Http::Headers::ProductHeaderValue* product) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ProductInfoHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductInfoHeaderValue*, creationType>(product)));
    }
    // public System.String get_Comment()
    // Offset: 0x14028AC
    ::Il2CppString* get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x14028B4
    void set_Comment(::Il2CppString* value);
    // public System.Net.Http.Headers.ProductHeaderValue get_Product()
    // Offset: 0x14028BC
    System::Net::Http::Headers::ProductHeaderValue* get_Product();
    // private System.Void set_Product(System.Net.Http.Headers.ProductHeaderValue value)
    // Offset: 0x14028C4
    void set_Product(System::Net::Http::Headers::ProductHeaderValue* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x14028CC
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ProductInfoHeaderValue> result)
    // Offset: 0x14029D8
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::ProductInfoHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ProductInfoHeaderValue parsedValue)
    // Offset: 0x1402B18
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::ProductInfoHeaderValue*& parsedValue);
    // private System.Void .ctor()
    // Offset: 0x14028A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductInfoHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ProductInfoHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductInfoHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14028D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14029AC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1402D18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.ProductInfoHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ProductInfoHeaderValue), 24 + sizeof(System::Net::Http::Headers::ProductHeaderValue*)> __System_Net_Http_Headers_ProductInfoHeaderValueSizeCheck;
  static_assert(sizeof(ProductInfoHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ProductInfoHeaderValue*, "System.Net.Http.Headers", "ProductInfoHeaderValue");
