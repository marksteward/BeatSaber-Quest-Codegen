// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJavaObject
  class AndroidJavaObject : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // UnityEngine.GlobalJavaObjectRef m_jobject
    // Offset: 0x10
    UnityEngine::GlobalJavaObjectRef* m_jobject;
    // UnityEngine.GlobalJavaObjectRef m_jclass
    // Offset: 0x18
    UnityEngine::GlobalJavaObjectRef* m_jclass;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Boolean enableDebugPrints
    static bool _get_enableDebugPrints();
    // Set static field: static private System.Boolean enableDebugPrints
    static void _set_enableDebugPrints(bool value);
    // public System.Void .ctor(System.String className, System.String[] args)
    // Offset: 0x1F07710
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<::Il2CppString*>* args);
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaObject[] args)
    // Offset: 0x1F079AC
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaObject*>* args);
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaClass[] args)
    // Offset: 0x1F07A7C
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaClass*>* args);
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaProxy[] args)
    // Offset: 0x1F07B4C
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaProxy*>* args);
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaRunnable[] args)
    // Offset: 0x1F07C1C
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaRunnable*>* args);
    // public System.Void .ctor(System.String className, params System.Object[] args)
    // Offset: 0x1F07CEC
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String className, params System.Object[] args)
    static AndroidJavaObject* New_ctor(::Il2CppString* className, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String className, params System.Object[] args)
    template<class ...TParams>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, TParams&&... args) {
      return New_ctor(className, {args...});
    }
    // public System.Void Call(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Call(::Il2CppString* methodName, ::Array<T>* args) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Call", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, methodName, args));
    }
    // public System.Void Call(System.String methodName, params System.Object[] args)
    // Offset: 0x1F07DA8
    void Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Call(System.String methodName, params System.Object[] args)
    void Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Call(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void Call(::Il2CppString* methodName, TParams&&... args) {
      Call(methodName, {args...});
    }
    // public System.Void CallStatic(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class T>
    void CallStatic(::Il2CppString* methodName, ::Array<T>* args) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "CallStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, methodName, args));
    }
    // public System.Void CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x1F07EC0
    void CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void CallStatic(System.String methodName, params System.Object[] args)
    void CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void CallStatic(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void CallStatic(::Il2CppString* methodName, TParams&&... args) {
      CallStatic(methodName, {args...});
    }
    // public FieldType Get(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType Get(::Il2CppString* fieldName) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<FieldType>(this, "Get", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName)));
    }
    // public System.Void Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void Set(::Il2CppString* fieldName, FieldType val) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Set", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName, val));
    }
    // public FieldType GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType GetStatic(::Il2CppString* fieldName) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<FieldType>(this, "GetStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName)));
    }
    // public System.Void SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void SetStatic(::Il2CppString* fieldName, FieldType val) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName, val));
    }
    // public System.IntPtr GetRawObject()
    // Offset: 0x1F07FD8
    System::IntPtr GetRawObject();
    // public System.IntPtr GetRawClass()
    // Offset: 0x1F08010
    System::IntPtr GetRawClass();
    // public ReturnType Call(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType, class T>
    ReturnType Call(::Il2CppString* methodName, ::Array<T>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "Call", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, methodName, args)));
    }
    // public ReturnType Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "Call", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, methodName, args)));
    }
    // Creating initializer_list -> params proxy for: ReturnType Call(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return Call(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType Call(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType Call(::Il2CppString* methodName, TParams&&... args) {
      return Call(methodName, {args...});
    }
    // public ReturnType CallStatic(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType, class T>
    ReturnType CallStatic(::Il2CppString* methodName, ::Array<T>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "CallStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, methodName, args)));
    }
    // public ReturnType CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "CallStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, methodName, args)));
    }
    // Creating initializer_list -> params proxy for: ReturnType CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return CallStatic(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType CallStatic(::Il2CppString* methodName, TParams&&... args) {
      return CallStatic(methodName, {args...});
    }
    // protected System.Void DebugPrint(System.String msg)
    // Offset: 0x1F07484
    void DebugPrint(::Il2CppString* msg);
    // protected System.Void DebugPrint(System.String call, System.String methodName, System.String signature, System.Object[] args)
    // Offset: 0x1F08048
    void DebugPrint(::Il2CppString* call, ::Il2CppString* methodName, ::Il2CppString* signature, ::Array<::Il2CppObject*>* args);
    // private System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    // Offset: 0x1F077E0
    void _AndroidJavaObject(::Il2CppString* className, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    void _AndroidJavaObject(::Il2CppString* className, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    template<class ...TParams>
    void _AndroidJavaObject(::Il2CppString* className, TParams&&... args) {
      _AndroidJavaObject(className, {args...});
    }
    // System.Void .ctor(System.IntPtr jobject)
    // Offset: 0x1F083EC
    static AndroidJavaObject* New_ctor(System::IntPtr jobject);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1F08574
    void Dispose(bool disposing);
    // protected System.Void _Call(System.String methodName, params System.Object[] args)
    // Offset: 0x1F07DAC
    void _Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _Call(System.String methodName, params System.Object[] args)
    void _Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _Call(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void _Call(::Il2CppString* methodName, TParams&&... args) {
      _Call(methodName, {args...});
    }
    // protected ReturnType _Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType _Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "_Call", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, methodName, args)));
    }
    // Creating initializer_list -> params proxy for: ReturnType _Call(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType _Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return _Call(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType _Call(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType _Call(::Il2CppString* methodName, TParams&&... args) {
      return _Call(methodName, {args...});
    }
    // protected FieldType _Get(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType _Get(::Il2CppString* fieldName) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<FieldType>(this, "_Get", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName)));
    }
    // protected System.Void _Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void _Set(::Il2CppString* fieldName, FieldType val) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "_Set", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName, val));
    }
    // protected System.Void _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x1F07EC4
    void _CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _CallStatic(System.String methodName, params System.Object[] args)
    void _CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _CallStatic(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void _CallStatic(::Il2CppString* methodName, TParams&&... args) {
      _CallStatic(methodName, {args...});
    }
    // protected ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType _CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ReturnType>(this, "_CallStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, methodName, args)));
    }
    // Creating initializer_list -> params proxy for: ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType _CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return _CallStatic(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType _CallStatic(::Il2CppString* methodName, TParams&&... args) {
      return _CallStatic(methodName, {args...});
    }
    // protected FieldType _GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType _GetStatic(::Il2CppString* fieldName) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<FieldType>(this, "_GetStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName)));
    }
    // protected System.Void _SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void _SetStatic(::Il2CppString* fieldName, FieldType val) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "_SetStatic", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, fieldName, val));
    }
    // static UnityEngine.AndroidJavaObject AndroidJavaObjectDeleteLocalRef(System.IntPtr jobject)
    // Offset: 0x1F08648
    static UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(System::IntPtr jobject);
    // static UnityEngine.AndroidJavaClass AndroidJavaClassDeleteLocalRef(System.IntPtr jclass)
    // Offset: 0x1F086E0
    static UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(System::IntPtr jclass);
    // protected System.IntPtr _GetRawObject()
    // Offset: 0x1F07FF4
    System::IntPtr _GetRawObject();
    // protected System.IntPtr _GetRawClass()
    // Offset: 0x1F0802C
    System::IntPtr _GetRawClass();
    // static private System.Void .cctor()
    // Offset: 0x1F08778
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x1F07D2C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // System.Void .ctor()
    // Offset: 0x1F0739C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AndroidJavaObject* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1F08500
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AndroidJavaObject
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaObject*, "UnityEngine", "AndroidJavaObject");
#pragma pack(pop)
