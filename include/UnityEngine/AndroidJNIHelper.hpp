// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.jvalue
#include "UnityEngine/jvalue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJNIHelper
  // [] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: D70594
  // [NativeHeaderAttribute] Offset: D70594
  // [UsedByNativeCodeAttribute] Offset: D70594
  // [NativeConditionalAttribute] Offset: D70594
  class AndroidJNIHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AndroidJNIHelper
    AndroidJNIHelper() noexcept {}
    // static public System.Boolean get_debug()
    // Offset: 0x19980A8
    static bool get_debug();
    // static public System.Void set_debug(System.Boolean value)
    // Offset: 0x19980DC
    static void set_debug(bool value);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass)
    // Offset: 0x199811C
    static System::IntPtr GetConstructorID(System::IntPtr javaClass);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass, System.String signature)
    // Offset: 0x199816C
    static System::IntPtr GetConstructorID(System::IntPtr javaClass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName)
    // Offset: 0x1998320
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature)
    // Offset: 0x199838C
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x1998384
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName)
    // Offset: 0x1998558
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature)
    // Offset: 0x19985C4
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x19985BC
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x19988C0
    static System::IntPtr CreateJavaRunnable(UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr CreateJavaProxy(UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x1998924
    static System::IntPtr CreateJavaProxy(UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x1998AB0
    static System::IntPtr ConvertToJNIArray(System::Array* array);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x19992EC
    static ::Array<UnityEngine::jvalue>* CreateJNIArgArray(::Array<::Il2CppObject*>* args);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x19997C4
    static void DeleteJNIArgArray(::Array<::Il2CppObject*>* args, ::Array<UnityEngine::jvalue>* jniArgs);
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x19998E8
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Array<::Il2CppObject*>* args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x1999940
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x19999C8
    static ::Il2CppString* GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x199A570
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0xFFFFFFFF
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(System::IntPtr array) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::ConvertFromJNIArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "ConvertFromJNIArray", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, ::il2cpp_utils::ExtractTypes(array)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ArrayType, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array);
    }
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetMethodID");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetMethodID", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(jclass, methodName, args, isStatic)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, methodName, args, isStatic);
    }
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetFieldID");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetFieldID", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(jclass, fieldName, isStatic)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, fieldName, isStatic);
    }
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetSignature");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetSignature", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, args);
    }
  }; // UnityEngine.AndroidJNIHelper
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
