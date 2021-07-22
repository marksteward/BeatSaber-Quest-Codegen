// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUIStateObjects
  // [TokenAttribute] Offset: FFFFFFFF
  class GUIStateObjects : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GUIStateObjects
    GUIStateObjects() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Object> s_StateCache
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppObject*>* _get_s_StateCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Object> s_StateCache
    static void _set_s_StateCache(System::Collections::Generic::Dictionary_2<int, ::Il2CppObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1AABA2C
    static void _cctor();
    // static System.Object GetStateObject(System.Type t, System.Int32 controlID)
    // Offset: 0x1AAB91C
    static ::Il2CppObject* GetStateObject(System::Type* t, int controlID);
  }; // UnityEngine.GUIStateObjects
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStateObjects*, "UnityEngine", "GUIStateObjects");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIStateObjects::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIStateObjects::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStateObjects*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStateObjects::GetStateObject
// Il2CppName: GetStateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, int)>(&UnityEngine::GUIStateObjects::GetStateObject)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* controlID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStateObjects*), "GetStateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, controlID});
  }
};
