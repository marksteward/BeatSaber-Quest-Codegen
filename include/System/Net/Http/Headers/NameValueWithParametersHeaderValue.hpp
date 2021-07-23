// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.NameValueHeaderValue
#include "System/Net/Http/Headers/NameValueHeaderValue.hpp"
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
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.NameValueWithParametersHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class NameValueWithParametersHeaderValue : public System::Net::Http::Headers::NameValueHeaderValue {
    public:
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: NameValueWithParametersHeaderValue
    NameValueWithParametersHeaderValue(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*
    constexpr operator System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*() const noexcept {
      return parameters;
    }
    // Get instance field: private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* _get_parameters();
    // Set instance field: private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    void _set_parameters(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* value);
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x1569D18
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // protected System.Void .ctor(System.Net.Http.Headers.NameValueWithParametersHeaderValue source)
    // Offset: 0x1569B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueWithParametersHeaderValue* New_ctor(System::Net::Http::Headers::NameValueWithParametersHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::NameValueWithParametersHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueWithParametersHeaderValue*, creationType>(source)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1569D94
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueWithParametersHeaderValue> result)
    // Offset: 0x1569FB4
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.NameValueWithParametersHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x156A054
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::NameValueWithParametersHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x1569D8C
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Void NameValueHeaderValue::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueWithParametersHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::NameValueWithParametersHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueWithParametersHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1569DF4
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Boolean NameValueHeaderValue::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1569EBC
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Int32 NameValueHeaderValue::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1569F24
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.String NameValueHeaderValue::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.NameValueWithParametersHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(NameValueWithParametersHeaderValue), 32 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_NameValueWithParametersHeaderValueSizeCheck;
  static_assert(sizeof(NameValueWithParametersHeaderValue) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::NameValueWithParametersHeaderValue*, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*&)>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueWithParametersHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::NameValueWithParametersHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueWithParametersHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueWithParametersHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(&System::Net::Http::Headers::NameValueWithParametersHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueWithParametersHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
