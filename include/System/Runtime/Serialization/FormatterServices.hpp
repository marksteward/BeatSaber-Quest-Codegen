// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: MemberHolder
  class MemberHolder;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.FormatterServices
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A7A8
  class FormatterServices : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Creating value type constructor for type: FormatterServices
    FormatterServices() noexcept {}
    // Get static field: static System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]> m_MemberInfoTable
    static System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder*, ::Array<System::Reflection::MemberInfo*>*>* _get_m_MemberInfoTable();
    // Set static field: static System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]> m_MemberInfoTable
    static void _set_m_MemberInfoTable(System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder*, ::Array<System::Reflection::MemberInfo*>*>* value);
    // Get static field: static private System.Boolean unsafeTypeForwardersIsEnabled
    static bool _get_unsafeTypeForwardersIsEnabled();
    // Set static field: static private System.Boolean unsafeTypeForwardersIsEnabled
    static void _set_unsafeTypeForwardersIsEnabled(bool value);
    // Get static field: static private System.Boolean unsafeTypeForwardersIsEnabledInitialized
    static bool _get_unsafeTypeForwardersIsEnabledInitialized();
    // Set static field: static private System.Boolean unsafeTypeForwardersIsEnabledInitialized
    static void _set_unsafeTypeForwardersIsEnabledInitialized(bool value);
    // Get static field: static private readonly System.Type[] advancedTypes
    static ::Array<System::Type*>* _get_advancedTypes();
    // Set static field: static private readonly System.Type[] advancedTypes
    static void _set_advancedTypes(::Array<System::Type*>* value);
    // Get static field: static private System.Reflection.Binder s_binder
    static System::Reflection::Binder* _get_s_binder();
    // Set static field: static private System.Reflection.Binder s_binder
    static void _set_s_binder(System::Reflection::Binder* value);
    // static private System.Void .cctor()
    // Offset: 0x133DAE4
    static void _cctor();
    // static private System.Reflection.MemberInfo[] GetSerializableMembers(System.RuntimeType type)
    // Offset: 0x133DC5C
    static ::Array<System::Reflection::MemberInfo*>* GetSerializableMembers(System::RuntimeType* type);
    // static private System.Boolean CheckSerializable(System.RuntimeType type)
    // Offset: 0x133DE0C
    static bool CheckSerializable(System::RuntimeType* type);
    // static private System.Reflection.MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
    // Offset: 0x133DE2C
    static ::Array<System::Reflection::MemberInfo*>* InternalGetSerializableMembers(System::RuntimeType* type);
    // static private System.Boolean GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out System.Int32 parentTypeCount)
    // Offset: 0x133E4AC
    static bool GetParentTypes(System::RuntimeType* parentType, ::Array<System::RuntimeType*>*& parentTypes, int& parentTypeCount);
    // static public System.Reflection.MemberInfo[] GetSerializableMembers(System.Type type, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x133E80C
    static ::Array<System::Reflection::MemberInfo*>* GetSerializableMembers(System::Type* type, System::Runtime::Serialization::StreamingContext context);
    // static public System.Object GetUninitializedObject(System.Type type)
    // Offset: 0x133EA78
    static ::Il2CppObject* GetUninitializedObject(System::Type* type);
    // static private System.Object nativeGetUninitializedObject(System.RuntimeType type)
    // Offset: 0x133EC34
    static ::Il2CppObject* nativeGetUninitializedObject(System::RuntimeType* type);
    // static private System.Boolean GetEnableUnsafeTypeForwarders()
    // Offset: 0x133EC3C
    static bool GetEnableUnsafeTypeForwarders();
    // static System.Boolean UnsafeTypeForwardersIsEnabled()
    // Offset: 0x133EC44
    static bool UnsafeTypeForwardersIsEnabled();
    // static System.Void SerializationSetValue(System.Reflection.MemberInfo fi, System.Object target, System.Object value)
    // Offset: 0x133ED0C
    static void SerializationSetValue(System::Reflection::MemberInfo* fi, ::Il2CppObject* target, ::Il2CppObject* value);
    // static public System.Object PopulateObjectMembers(System.Object obj, System.Reflection.MemberInfo[] members, System.Object[] data)
    // Offset: 0x133EEE4
    static ::Il2CppObject* PopulateObjectMembers(::Il2CppObject* obj, ::Array<System::Reflection::MemberInfo*>* members, ::Array<::Il2CppObject*>* data);
    // static public System.Object[] GetObjectData(System.Object obj, System.Reflection.MemberInfo[] members)
    // Offset: 0x133F1E0
    static ::Array<::Il2CppObject*>* GetObjectData(::Il2CppObject* obj, ::Array<System::Reflection::MemberInfo*>* members);
    // static public System.Type GetTypeFromAssembly(System.Reflection.Assembly assem, System.String name)
    // Offset: 0x133F528
    static System::Type* GetTypeFromAssembly(System::Reflection::Assembly* assem, ::Il2CppString* name);
    // static System.Reflection.Assembly LoadAssemblyFromString(System.String assemblyName)
    // Offset: 0x133F5E8
    static System::Reflection::Assembly* LoadAssemblyFromString(::Il2CppString* assemblyName);
    // static System.Reflection.Assembly LoadAssemblyFromStringNoThrow(System.String assemblyName)
    // Offset: 0x133F5F0
    static System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::Il2CppString* assemblyName);
    // static System.String GetClrAssemblyName(System.Type type, out System.Boolean hasTypeForwardedFrom)
    // Offset: 0x133F6D4
    static ::Il2CppString* GetClrAssemblyName(System::Type* type, bool& hasTypeForwardedFrom);
    // static System.String GetClrTypeFullName(System.Type type)
    // Offset: 0x133F838
    static ::Il2CppString* GetClrTypeFullName(System::Type* type);
    // static private System.String GetClrTypeFullNameForArray(System.Type type)
    // Offset: 0x133F8DC
    static ::Il2CppString* GetClrTypeFullNameForArray(System::Type* type);
    // static private System.String GetClrTypeFullNameForNonArrayTypes(System.Type type)
    // Offset: 0x133FAD4
    static ::Il2CppString* GetClrTypeFullNameForNonArrayTypes(System::Type* type);
  }; // System.Runtime.Serialization.FormatterServices
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterServices*, "System.Runtime.Serialization", "FormatterServices");
