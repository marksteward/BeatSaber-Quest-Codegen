// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ObjectPool`1
  template<typename T>
  class ObjectPool_1 : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.Boolean m_IsDisposed
    // Offset: 0x0
    bool m_IsDisposed;
    // private System.Collections.Generic.Queue`1<T> m_Pool
    // Offset: 0x0
    System::Collections::Generic::Queue_1<T>* m_Pool;
    // public System.Int32 desiredSize
    // Offset: 0x0
    int desiredSize;
    // public System.Func`1<T> constructor
    // Offset: 0x0
    System::Func_1<T>* constructor;
    // public System.Action`1<T> destructor
    // Offset: 0x0
    System::Action_1<T>* destructor;
    // public System.Void .ctor(System.Int32 initialSize, System.Int32 desiredSize, System.Func`1<T> constructor, System.Action`1<T> destructor, System.Boolean lazyInitialization)
    // Offset: 0xFFFFFFFF
    static ObjectPool_1<T>* New_ctor(int initialSize, int desiredSize, System::Func_1<T>* constructor, System::Action_1<T>* destructor, bool lazyInitialization) {
      return THROW_UNLESS(il2cpp_utils::New<ObjectPool_1<T>*>(initialSize, desiredSize, constructor, destructor, lazyInitialization));
    }
    // public T Get()
    // Offset: 0xFFFFFFFF
    T Get() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Get"));
    }
    // public System.Void Put(T obj)
    // Offset: 0xFFFFFFFF
    void Put(T obj) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Put", obj));
    }
    // public System.Void Empty()
    // Offset: 0xFFFFFFFF
    void Empty() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Empty"));
    }
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFF
    void Dispose(bool disposing) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
  }; // UnityEngine.ProBuilder.ObjectPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::ObjectPool_1, "UnityEngine.ProBuilder", "ObjectPool`1");
#pragma pack(pop)
