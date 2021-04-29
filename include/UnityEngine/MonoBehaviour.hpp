// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MonoBehaviour
  // [NativeHeaderAttribute] Offset: CBAD7C
  // [ExtensionOfNativeClassAttribute] Offset: CBAD7C
  // [NativeHeaderAttribute] Offset: CBAD7C
  // [RequiredByNativeCodeAttribute] Offset: CBAD7C
  class MonoBehaviour : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: MonoBehaviour
    MonoBehaviour() noexcept {}
    // public System.Boolean IsInvoking()
    // Offset: 0x1AB3B3C
    bool IsInvoking();
    // public System.Void CancelInvoke()
    // Offset: 0x1AB3BBC
    void CancelInvoke();
    // public System.Void Invoke(System.String methodName, System.Single time)
    // Offset: 0x1AB3C3C
    void Invoke(::Il2CppString* methodName, float time);
    // public System.Void InvokeRepeating(System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1AB3D08
    void InvokeRepeating(::Il2CppString* methodName, float time, float repeatRate);
    // public System.Void CancelInvoke(System.String methodName)
    // Offset: 0x1AB3DE8
    void CancelInvoke(::Il2CppString* methodName);
    // public System.Boolean IsInvoking(System.String methodName)
    // Offset: 0x1AB3E88
    bool IsInvoking(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName)
    // Offset: 0x1AB3F28
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName, System.Object value)
    // Offset: 0x1AB3F30
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName, ::Il2CppObject* value);
    // public UnityEngine.Coroutine StartCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1AB40E8
    UnityEngine::Coroutine* StartCoroutine(System::Collections::IEnumerator* routine);
    // public UnityEngine.Coroutine StartCoroutine_Auto(System.Collections.IEnumerator routine)
    // Offset: 0x1AB4244
    UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1AB4248
    void StopCoroutine(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(UnityEngine.Coroutine routine)
    // Offset: 0x1AB43A4
    void StopCoroutine(UnityEngine::Coroutine* routine);
    // public System.Void StopCoroutine(System.String methodName)
    // Offset: 0x1AB4500
    void StopCoroutine(::Il2CppString* methodName);
    // public System.Void StopAllCoroutines()
    // Offset: 0x1AB4550
    void StopAllCoroutines();
    // public System.Boolean get_useGUILayout()
    // Offset: 0x1AB4590
    bool get_useGUILayout();
    // public System.Void set_useGUILayout(System.Boolean value)
    // Offset: 0x1AB45D0
    void set_useGUILayout(bool value);
    // static public System.Void print(System.Object message)
    // Offset: 0x1AB4620
    static void print(::Il2CppObject* message);
    // static private System.Void Internal_CancelInvokeAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1AB3BFC
    static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self);
    // static private System.Boolean Internal_IsInvokingAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1AB3B7C
    static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self);
    // static private System.Void InvokeDelayed(UnityEngine.MonoBehaviour self, System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1AB3CA0
    static void InvokeDelayed(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName, float time, float repeatRate);
    // static private System.Void CancelInvoke(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1AB3E38
    static void CancelInvoke(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsInvoking(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1AB3ED8
    static bool IsInvoking(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsObjectMonoBehaviour(UnityEngine.Object obj)
    // Offset: 0x1AB4050
    static bool IsObjectMonoBehaviour(UnityEngine::Object* obj);
    // private UnityEngine.Coroutine StartCoroutineManaged(System.String methodName, System.Object value)
    // Offset: 0x1AB4090
    UnityEngine::Coroutine* StartCoroutineManaged(::Il2CppString* methodName, ::Il2CppObject* value);
    // private UnityEngine.Coroutine StartCoroutineManaged2(System.Collections.IEnumerator enumerator)
    // Offset: 0x1AB41F4
    UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator);
    // private System.Void StopCoroutineManaged(UnityEngine.Coroutine routine)
    // Offset: 0x1AB44B0
    void StopCoroutineManaged(UnityEngine::Coroutine* routine);
    // private System.Void StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator routine)
    // Offset: 0x1AB4354
    void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine);
    // System.String GetScriptClassName()
    // Offset: 0x1AB4688
    ::Il2CppString* GetScriptClassName();
    // public System.Void .ctor()
    // Offset: 0x1AB46C8
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviour*, creationType>()));
    }
  }; // UnityEngine.MonoBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
