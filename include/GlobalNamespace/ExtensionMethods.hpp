// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExtensionMethods
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExtensionMethods : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ExtensionMethods
    ExtensionMethods() noexcept {}
    // static public System.Boolean ContainsLayer(UnityEngine.LayerMask layerMask, System.Int32 layer)
    // Offset: 0x12444BC
    static bool ContainsLayer(UnityEngine::LayerMask layerMask, int layer);
    // static public UnityEngine.Coroutine StartUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`1<System.Collections.IEnumerator> func)
    // Offset: 0x12444F8
    static UnityEngine::Coroutine* StartUniqueCoroutine(UnityEngine::MonoBehaviour* m, System::Func_1<System::Collections::IEnumerator*>* func);
    // static public UnityEngine.Coroutine StartUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`2<T,System.Collections.IEnumerator> func, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static UnityEngine::Coroutine* StartUniqueCoroutine(UnityEngine::MonoBehaviour* m, System::Func_2<T, System::Collections::IEnumerator*>* func, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExtensionMethods::StartUniqueCoroutine");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ExtensionMethods", "StartUniqueCoroutine", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(m), ::il2cpp_utils::ExtractType(func), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Coroutine*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, m, func, value);
    }
    // static public System.Void StopUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`1<System.Collections.IEnumerator> func)
    // Offset: 0x1244578
    static void StopUniqueCoroutine(UnityEngine::MonoBehaviour* m, System::Func_1<System::Collections::IEnumerator*>* func);
    // static public System.Void StopUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`2<T,System.Collections.IEnumerator> func)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void StopUniqueCoroutine(UnityEngine::MonoBehaviour* m, System::Func_2<T, System::Collections::IEnumerator*>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ExtensionMethods::StopUniqueCoroutine");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ExtensionMethods", "StopUniqueCoroutine", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(m), ::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, m, func);
    }
    // static public System.Boolean IsDescendantOf(UnityEngine.Transform transform, UnityEngine.Transform parent)
    // Offset: 0x12445C8
    static bool IsDescendantOf(UnityEngine::Transform* transform, UnityEngine::Transform* parent);
    // static public System.Void SetLocalPositionAndRotation(UnityEngine.Transform tr, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x12446B4
    static void SetLocalPositionAndRotation(UnityEngine::Transform* tr, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static public System.String GetPath(UnityEngine.Transform current)
    // Offset: 0x1244718
    static ::Il2CppString* GetPath(UnityEngine::Transform* current);
    // static public UnityEngine.Quaternion Reflect(UnityEngine.Quaternion source, UnityEngine.Vector3 normal)
    // Offset: 0x1244810
    static UnityEngine::Quaternion Reflect(UnityEngine::Quaternion source, UnityEngine::Vector3 normal);
    // static public UnityEngine.Texture2D CreateTexture2D(UnityEngine.RenderTexture renderTexture, UnityEngine.TextureFormat textureFormat)
    // Offset: 0x124498C
    static UnityEngine::Texture2D* CreateTexture2D(UnityEngine::RenderTexture* renderTexture, UnityEngine::TextureFormat textureFormat);
  }; // ExtensionMethods
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExtensionMethods*, "", "ExtensionMethods");
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::ContainsLayer
// Il2CppName: ContainsLayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StartUniqueCoroutine
// Il2CppName: StartUniqueCoroutine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StartUniqueCoroutine
// Il2CppName: StartUniqueCoroutine
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StopUniqueCoroutine
// Il2CppName: StopUniqueCoroutine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StopUniqueCoroutine
// Il2CppName: StopUniqueCoroutine
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::IsDescendantOf
// Il2CppName: IsDescendantOf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::SetLocalPositionAndRotation
// Il2CppName: SetLocalPositionAndRotation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::GetPath
// Il2CppName: GetPath
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::Reflect
// Il2CppName: Reflect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::CreateTexture2D
// Il2CppName: CreateTexture2D
// Cannot perform method pointer template specialization from operators!
