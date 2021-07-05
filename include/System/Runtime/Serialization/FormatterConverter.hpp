// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IFormatterConverter
#include "System/Runtime/Serialization/IFormatterConverter.hpp"
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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.FormatterConverter
  // [ComVisibleAttribute] Offset: D7DC5C
  class FormatterConverter : public ::Il2CppObject/*, public System::Runtime::Serialization::IFormatterConverter*/ {
    public:
    // Creating value type constructor for type: FormatterConverter
    FormatterConverter() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IFormatterConverter
    operator System::Runtime::Serialization::IFormatterConverter() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IFormatterConverter*>(this);
    }
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0x1603780
    ::Il2CppObject* Convert(::Il2CppObject* value, System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0x160386C
    bool ToBoolean(::Il2CppObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0x1603948
    int ToInt32(::Il2CppObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0x1603A24
    int64_t ToInt64(::Il2CppObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0x1603B00
    float ToSingle(::Il2CppObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0x1603BDC
    ::Il2CppString* ToString(::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x1603778
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormatterConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::FormatterConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormatterConverter*, creationType>()));
    }
  }; // System.Runtime.Serialization.FormatterConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterConverter*, "System.Runtime.Serialization", "FormatterConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*, System::Type*)>(&System::Runtime::Serialization::FormatterConverter::Convert)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::ToBoolean
// Il2CppName: ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::FormatterConverter::ToBoolean)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::FormatterConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::FormatterConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::FormatterConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::FormatterConverter::*)(::Il2CppObject*)>(&System::Runtime::Serialization::FormatterConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
