// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ISerializationCallbackReceiver
  // [RequiredByNativeCodeAttribute] Offset: D90810
  class ISerializationCallbackReceiver {
    public:
    // Creating value type constructor for type: ISerializationCallbackReceiver
    ISerializationCallbackReceiver() noexcept {}
    // public System.Void OnBeforeSerialize()
    // Offset: 0xFFFFFFFF
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0xFFFFFFFF
    void OnAfterDeserialize();
  }; // UnityEngine.ISerializationCallbackReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ISerializationCallbackReceiver*, "UnityEngine", "ISerializationCallbackReceiver");
// Writing MetadataGetter for method: UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ISerializationCallbackReceiver::*)()>(&UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ISerializationCallbackReceiver*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ISerializationCallbackReceiver::*)()>(&UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ISerializationCallbackReceiver*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
