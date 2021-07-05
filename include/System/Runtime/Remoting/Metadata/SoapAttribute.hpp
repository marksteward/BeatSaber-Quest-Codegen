// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapAttribute
  // [ComVisibleAttribute] Offset: D7E478
  class SoapAttribute : public System::Attribute {
    public:
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x10
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: ProtXmlNamespace
    char __padding0[0x7] = {};
    // protected System.String ProtXmlNamespace
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ProtXmlNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Object ReflectInfo
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* ReflectInfo;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: SoapAttribute
    SoapAttribute(bool useAttribute_ = {}, ::Il2CppString* ProtXmlNamespace_ = {}, ::Il2CppObject* ReflectInfo_ = {}) noexcept : useAttribute{useAttribute_}, ProtXmlNamespace{ProtXmlNamespace_}, ReflectInfo{ReflectInfo_} {}
    // public System.Boolean get_UseAttribute()
    // Offset: 0x1A45FB0
    bool get_UseAttribute();
    // public System.String get_XmlNamespace()
    // Offset: 0x1A45FB8
    ::Il2CppString* get_XmlNamespace();
    // System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x1A45FC0
    void SetReflectionObject(::Il2CppObject* reflectionObject);
    // public System.Void .ctor()
    // Offset: 0x1A45FA8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapAttribute*, creationType>()));
    }
  }; // System.Runtime.Remoting.Metadata.SoapAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapAttribute), 32 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Metadata_SoapAttributeSizeCheck;
  static_assert(sizeof(SoapAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapAttribute*, "System.Runtime.Remoting.Metadata", "SoapAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute
// Il2CppName: get_UseAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapAttribute*), "get_UseAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace
// Il2CppName: get_XmlNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapAttribute*), "get_XmlNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject
// Il2CppName: SetReflectionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapAttribute::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapAttribute*), "SetReflectionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
