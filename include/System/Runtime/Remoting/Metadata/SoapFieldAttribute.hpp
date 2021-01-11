// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapFieldAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3AFC8
  // [ComVisibleAttribute] Offset: D3AFC8
  class SoapFieldAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.String _elementName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* elementName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _isElement
    // Size: 0x1
    // Offset: 0x30
    bool isElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SoapFieldAttribute
    SoapFieldAttribute(::Il2CppString* elementName_ = {}, bool isElement_ = {}) noexcept : elementName{elementName_}, isElement{isElement_} {}
    // public System.String get_XmlElementName()
    // Offset: 0x133061C
    ::Il2CppString* get_XmlElementName();
    // public System.Boolean IsInteropXmlElement()
    // Offset: 0x1330624
    bool IsInteropXmlElement();
    // public System.Void .ctor()
    // Offset: 0x1330614
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapFieldAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapFieldAttribute*, creationType>()));
    }
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x133062C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapFieldAttribute
  static check_size<sizeof(SoapFieldAttribute), 48 + sizeof(bool)> __System_Runtime_Remoting_Metadata_SoapFieldAttributeSizeCheck;
  static_assert(sizeof(SoapFieldAttribute) == 0x31);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapFieldAttribute*, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
