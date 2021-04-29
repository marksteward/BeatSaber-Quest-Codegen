// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: AttributeUsageAttribute
  class AttributeUsageAttribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MonoProperty
  class MonoProperty;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: MonoEvent
  class MonoEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoCustomAttrs
  class MonoCustomAttrs : public ::Il2CppObject {
    public:
    // Nested type: System::MonoCustomAttrs::AttributeInfo
    class AttributeInfo;
    // Creating value type constructor for type: MonoCustomAttrs
    MonoCustomAttrs() noexcept {}
    // Get static field: static private System.Reflection.Assembly corlib
    static System::Reflection::Assembly* _get_corlib();
    // Set static field: static private System.Reflection.Assembly corlib
    static void _set_corlib(System::Reflection::Assembly* value);
    // [ThreadStaticAttribute] Offset: 0xCABF98
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
    static System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* _get_usage_cache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.AttributeUsageAttribute> usage_cache
    static void _set_usage_cache(System::Collections::Generic::Dictionary_2<System::Type*, System::AttributeUsageAttribute*>* value);
    // Get static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
    static System::AttributeUsageAttribute* _get_DefaultAttributeUsage();
    // Set static field: static private readonly System.AttributeUsageAttribute DefaultAttributeUsage
    static void _set_DefaultAttributeUsage(System::AttributeUsageAttribute* value);
    // static private System.Boolean IsUserCattrProvider(System.Object obj)
    // Offset: 0x169E43C
    static bool IsUserCattrProvider(::Il2CppObject* obj);
    // static System.Object[] GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean pseudoAttrs)
    // Offset: 0x169E61C
    static ::Array<::Il2CppObject*>* GetCustomAttributesInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool pseudoAttrs);
    // static System.Object[] GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType)
    // Offset: 0x169E624
    static ::Array<::Il2CppObject*>* GetPseudoCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType);
    // static private System.Object[] GetPseudoCustomAttributes(System.Type type)
    // Offset: 0x169E90C
    static ::Array<::Il2CppObject*>* GetPseudoCustomAttributes(System::Type* type);
    // static System.Object[] GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inheritedOnly)
    // Offset: 0x169EA6C
    static ::Array<::Il2CppObject*>* GetCustomAttributesBase(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inheritedOnly);
    // static System.Object[] GetCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x169EC24
    static ::Array<::Il2CppObject*>* GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit);
    // static System.Object[] GetCustomAttributes(System.Reflection.ICustomAttributeProvider obj, System.Boolean inherit)
    // Offset: 0x169F93C
    static ::Array<::Il2CppObject*>* GetCustomAttributes(System::Reflection::ICustomAttributeProvider* obj, bool inherit);
    // static private System.Reflection.CustomAttributeData[] GetCustomAttributesDataInternal(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x169FAB4
    static ::Array<System::Reflection::CustomAttributeData*>* GetCustomAttributesDataInternal(System::Reflection::ICustomAttributeProvider* obj);
    // static System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x169FAB8
    static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData(System::Reflection::ICustomAttributeProvider* obj);
    // static System.Boolean IsDefined(System.Reflection.ICustomAttributeProvider obj, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x169FB6C
    static bool IsDefined(System::Reflection::ICustomAttributeProvider* obj, System::Type* attributeType, bool inherit);
    // static System.Boolean IsDefinedInternal(System.Reflection.ICustomAttributeProvider obj, System.Type AttributeType)
    // Offset: 0x169FE28
    static bool IsDefinedInternal(System::Reflection::ICustomAttributeProvider* obj, System::Type* AttributeType);
    // static private System.Reflection.PropertyInfo GetBasePropertyDefinition(System.Reflection.MonoProperty property)
    // Offset: 0x169FE2C
    static System::Reflection::PropertyInfo* GetBasePropertyDefinition(System::Reflection::MonoProperty* property);
    // static private System.Reflection.EventInfo GetBaseEventDefinition(System.Reflection.MonoEvent evt)
    // Offset: 0x16A00E8
    static System::Reflection::EventInfo* GetBaseEventDefinition(System::Reflection::MonoEvent* evt);
    // static private System.Reflection.ICustomAttributeProvider GetBase(System.Reflection.ICustomAttributeProvider obj)
    // Offset: 0x169F570
    static System::Reflection::ICustomAttributeProvider* GetBase(System::Reflection::ICustomAttributeProvider* obj);
    // static private System.AttributeUsageAttribute RetrieveAttributeUsageNoCache(System.Type attributeType)
    // Offset: 0x16A02B0
    static System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(System::Type* attributeType);
    // static private System.AttributeUsageAttribute RetrieveAttributeUsage(System.Type attributeType)
    // Offset: 0x169F7A0
    static System::AttributeUsageAttribute* RetrieveAttributeUsage(System::Type* attributeType);
    // static private System.Void .cctor()
    // Offset: 0x16A050C
    static void _cctor();
  }; // System.MonoCustomAttrs
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MonoCustomAttrs*, "System", "MonoCustomAttrs");
