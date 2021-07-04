// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlQualifiedName
#include "System/Xml/XmlQualifiedName.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
  class XmlQualifiedName::HashCodeOfStringDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HashCodeOfStringDelegate
    HashCodeOfStringDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x193A364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlQualifiedName::HashCodeOfStringDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlQualifiedName::HashCodeOfStringDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x1939CC0
    int Invoke(::Il2CppString* s, int sLen, int64_t additionalEntropy);
    // public System.IAsyncResult BeginInvoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy, System.AsyncCallback callback, System.Object object)
    // Offset: 0x193A41C
    System::IAsyncResult* BeginInvoke(::Il2CppString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x193A4D4
    int EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate*, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
