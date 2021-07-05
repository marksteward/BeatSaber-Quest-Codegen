// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
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
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DefaultBinder
  class DefaultBinder : public System::Reflection::Binder {
    public:
    // Nested type: System::DefaultBinder::BinderState
    class BinderState;
    // Nested type: System::DefaultBinder::$$c
    class $$c;
    // Creating value type constructor for type: DefaultBinder
    DefaultBinder() noexcept {}
    // static public System.Reflection.MethodBase ExactBinding(System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1B09444
    static System::Reflection::MethodBase* ExactBinding(::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // static public System.Reflection.PropertyInfo ExactPropertyBinding(System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1B097BC
    static System::Reflection::PropertyInfo* ExactPropertyBinding(::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // static private System.Int32 FindMostSpecific(System.Reflection.ParameterInfo[] p1, System.Int32[] paramOrder1, System.Type paramArrayType1, System.Reflection.ParameterInfo[] p2, System.Int32[] paramOrder2, System.Type paramArrayType2, System.Type[] types, System.Object[] args)
    // Offset: 0x1B08C5C
    static int FindMostSpecific(::Array<System::Reflection::ParameterInfo*>* p1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, ::Array<System::Reflection::ParameterInfo*>* p2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::Il2CppObject*>* args);
    // static private System.Int32 FindMostSpecificType(System.Type c1, System.Type c2, System.Type t)
    // Offset: 0x1B088C4
    static int FindMostSpecificType(System::Type* c1, System::Type* c2, System::Type* t);
    // static private System.Int32 FindMostSpecificMethod(System.Reflection.MethodBase m1, System.Int32[] paramOrder1, System.Type paramArrayType1, System.Reflection.MethodBase m2, System.Int32[] paramOrder2, System.Type paramArrayType2, System.Type[] types, System.Object[] args)
    // Offset: 0x1B0709C
    static int FindMostSpecificMethod(System::Reflection::MethodBase* m1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, System::Reflection::MethodBase* m2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::Il2CppObject*>* args);
    // static private System.Int32 FindMostSpecificField(System.Reflection.FieldInfo cur1, System.Reflection.FieldInfo cur2)
    // Offset: 0x1B075F4
    static int FindMostSpecificField(System::Reflection::FieldInfo* cur1, System::Reflection::FieldInfo* cur2);
    // static private System.Int32 FindMostSpecificProperty(System.Reflection.PropertyInfo cur1, System.Reflection.PropertyInfo cur2)
    // Offset: 0x1B09054
    static int FindMostSpecificProperty(System::Reflection::PropertyInfo* cur1, System::Reflection::PropertyInfo* cur2);
    // static System.Boolean CompareMethodSigAndName(System.Reflection.MethodBase m1, System.Reflection.MethodBase m2)
    // Offset: 0x1B09A90
    static bool CompareMethodSigAndName(System::Reflection::MethodBase* m1, System::Reflection::MethodBase* m2);
    // static System.Int32 GetHierarchyDepth(System.Type t)
    // Offset: 0x1B09C08
    static int GetHierarchyDepth(System::Type* t);
    // static System.Reflection.MethodBase FindMostDerivedNewSlotMeth(System.Reflection.MethodBase[] match, System.Int32 cMatches)
    // Offset: 0x1B09690
    static System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::Array<System::Reflection::MethodBase*>* match, int cMatches);
    // static private System.Void ReorderParams(System.Int32[] paramOrder, System.Object[] vars)
    // Offset: 0x1B06F30
    static void ReorderParams(::Array<int>* paramOrder, ::Array<::Il2CppObject*>* vars);
    // static private System.Boolean CreateParamOrder(System.Int32[] paramOrder, System.Reflection.ParameterInfo[] pars, System.String[] names)
    // Offset: 0x1B06BA8
    static bool CreateParamOrder(::Array<int>* paramOrder, ::Array<System::Reflection::ParameterInfo*>* pars, ::Array<::Il2CppString*>* names);
    // static private System.Boolean CanConvertPrimitive(System.RuntimeType source, System.RuntimeType target)
    // Offset: 0x1B07D48
    static bool CanConvertPrimitive(System::RuntimeType* source, System::RuntimeType* target);
    // static private System.Boolean CanConvertPrimitiveObjectToType(System.Object source, System.RuntimeType type)
    // Offset: 0x1B06DF4
    static bool CanConvertPrimitiveObjectToType(::Il2CppObject* source, System::RuntimeType* type);
    // public override System.Reflection.MethodBase BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, ref System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo cultureInfo, System.String[] names, out System.Object state)
    // Offset: 0x1B04D90
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.MethodBase Binder::BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, ref System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo cultureInfo, System.String[] names, out System.Object state)
    System::Reflection::MethodBase* BindToMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<::Il2CppObject*>*& args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* cultureInfo, ::Array<::Il2CppString*>* names, ::Il2CppObject*& state);
    // public override System.Reflection.FieldInfo BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo cultureInfo)
    // Offset: 0x1B071B0
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.FieldInfo Binder::BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo cultureInfo)
    System::Reflection::FieldInfo* BindToField(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::FieldInfo*>* match, ::Il2CppObject* value, System::Globalization::CultureInfo* cultureInfo);
    // public override System.Reflection.MethodBase SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1B076A0
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.MethodBase Binder::SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodBase* SelectMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.PropertyInfo SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1B07F8C
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.PropertyInfo Binder::SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* SelectProperty(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* indexes, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Object ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo cultureInfo)
    // Offset: 0x1B09100
    // Implemented from: System.Reflection.Binder
    // Base method: System.Object Binder::ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo cultureInfo)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* type, System::Globalization::CultureInfo* cultureInfo);
    // public override System.Void ReorderArgumentArray(ref System.Object[] args, System.Object state)
    // Offset: 0x1B09180
    // Implemented from: System.Reflection.Binder
    // Base method: System.Void Binder::ReorderArgumentArray(ref System.Object[] args, System.Object state)
    void ReorderArgumentArray(::Array<::Il2CppObject*>*& args, ::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x1B09CB4
    // Implemented from: System.Reflection.Binder
    // Base method: System.Void Binder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DefaultBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBinder*, creationType>()));
    }
  }; // System.DefaultBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder*, "System", "DefaultBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DefaultBinder::ExactBinding
// Il2CppName: ExactBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (*)(::Array<System::Reflection::MethodBase*>*, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::DefaultBinder::ExactBinding)> {
  static const MethodInfo* get() {
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "ExactBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{match, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::ExactPropertyBinding
// Il2CppName: ExactPropertyBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (*)(::Array<System::Reflection::PropertyInfo*>*, System::Type*, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::DefaultBinder::ExactPropertyBinding)> {
  static const MethodInfo* get() {
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo"), 1)->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "ExactPropertyBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{match, returnType, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostSpecific
// Il2CppName: FindMostSpecific
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<System::Reflection::ParameterInfo*>*, ::Array<int>*, System::Type*, ::Array<System::Reflection::ParameterInfo*>*, ::Array<int>*, System::Type*, ::Array<System::Type*>*, ::Array<::Il2CppObject*>*)>(&System::DefaultBinder::FindMostSpecific)> {
  static const MethodInfo* get() {
    static auto* p1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* paramOrder1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* paramArrayType1 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* p2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* paramOrder2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* paramArrayType2 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostSpecific", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostSpecificType
// Il2CppName: FindMostSpecificType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Type*, System::Type*, System::Type*)>(&System::DefaultBinder::FindMostSpecificType)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostSpecificType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, c2, t});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostSpecificMethod
// Il2CppName: FindMostSpecificMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Reflection::MethodBase*, ::Array<int>*, System::Type*, System::Reflection::MethodBase*, ::Array<int>*, System::Type*, ::Array<System::Type*>*, ::Array<::Il2CppObject*>*)>(&System::DefaultBinder::FindMostSpecificMethod)> {
  static const MethodInfo* get() {
    static auto* m1 = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* paramOrder1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* paramArrayType1 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* m2 = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* paramOrder2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* paramArrayType2 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostSpecificMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostSpecificField
// Il2CppName: FindMostSpecificField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Reflection::FieldInfo*, System::Reflection::FieldInfo*)>(&System::DefaultBinder::FindMostSpecificField)> {
  static const MethodInfo* get() {
    static auto* cur1 = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* cur2 = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostSpecificField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cur1, cur2});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostSpecificProperty
// Il2CppName: FindMostSpecificProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Reflection::PropertyInfo*, System::Reflection::PropertyInfo*)>(&System::DefaultBinder::FindMostSpecificProperty)> {
  static const MethodInfo* get() {
    static auto* cur1 = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    static auto* cur2 = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostSpecificProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cur1, cur2});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::CompareMethodSigAndName
// Il2CppName: CompareMethodSigAndName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MethodBase*, System::Reflection::MethodBase*)>(&System::DefaultBinder::CompareMethodSigAndName)> {
  static const MethodInfo* get() {
    static auto* m1 = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* m2 = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "CompareMethodSigAndName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m1, m2});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::GetHierarchyDepth
// Il2CppName: GetHierarchyDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Type*)>(&System::DefaultBinder::GetHierarchyDepth)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "GetHierarchyDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::FindMostDerivedNewSlotMeth
// Il2CppName: FindMostDerivedNewSlotMeth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (*)(::Array<System::Reflection::MethodBase*>*, int)>(&System::DefaultBinder::FindMostDerivedNewSlotMeth)> {
  static const MethodInfo* get() {
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* cMatches = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "FindMostDerivedNewSlotMeth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{match, cMatches});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::ReorderParams
// Il2CppName: ReorderParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<int>*, ::Array<::Il2CppObject*>*)>(&System::DefaultBinder::ReorderParams)> {
  static const MethodInfo* get() {
    static auto* paramOrder = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* vars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "ReorderParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paramOrder, vars});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::CreateParamOrder
// Il2CppName: CreateParamOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<int>*, ::Array<System::Reflection::ParameterInfo*>*, ::Array<::Il2CppString*>*)>(&System::DefaultBinder::CreateParamOrder)> {
  static const MethodInfo* get() {
    static auto* paramOrder = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* pars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "CreateParamOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paramOrder, pars, names});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::CanConvertPrimitive
// Il2CppName: CanConvertPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType*, System::RuntimeType*)>(&System::DefaultBinder::CanConvertPrimitive)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "CanConvertPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, target});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::CanConvertPrimitiveObjectToType
// Il2CppName: CanConvertPrimitiveObjectToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, System::RuntimeType*)>(&System::DefaultBinder::CanConvertPrimitiveObjectToType)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "CanConvertPrimitiveObjectToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, type});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::BindToMethod
// Il2CppName: BindToMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::DefaultBinder::*)(System::Reflection::BindingFlags, ::Array<System::Reflection::MethodBase*>*, ::Array<::Il2CppObject*>*&, ::Array<System::Reflection::ParameterModifier>*, System::Globalization::CultureInfo*, ::Array<::Il2CppString*>*, ::Il2CppObject*&)>(&System::DefaultBinder::BindToMethod)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    static auto* cultureInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "BindToMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, args, modifiers, cultureInfo, names, state});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::BindToField
// Il2CppName: BindToField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo* (System::DefaultBinder::*)(System::Reflection::BindingFlags, ::Array<System::Reflection::FieldInfo*>*, ::Il2CppObject*, System::Globalization::CultureInfo*)>(&System::DefaultBinder::BindToField)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* cultureInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "BindToField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, value, cultureInfo});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::SelectMethod
// Il2CppName: SelectMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::DefaultBinder::*)(System::Reflection::BindingFlags, ::Array<System::Reflection::MethodBase*>*, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::DefaultBinder::SelectMethod)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "SelectMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::SelectProperty
// Il2CppName: SelectProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo* (System::DefaultBinder::*)(System::Reflection::BindingFlags, ::Array<System::Reflection::PropertyInfo*>*, System::Type*, ::Array<System::Type*>*, ::Array<System::Reflection::ParameterModifier>*)>(&System::DefaultBinder::SelectProperty)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo"), 1)->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "SelectProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, returnType, indexes, modifiers});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::DefaultBinder::*)(::Il2CppObject*, System::Type*, System::Globalization::CultureInfo*)>(&System::DefaultBinder::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* cultureInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type, cultureInfo});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::ReorderArgumentArray
// Il2CppName: ReorderArgumentArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DefaultBinder::*)(::Array<::Il2CppObject*>*&, ::Il2CppObject*)>(&System::DefaultBinder::ReorderArgumentArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DefaultBinder*), "ReorderArgumentArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, state});
  }
};
// Writing MetadataGetter for method: System::DefaultBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
