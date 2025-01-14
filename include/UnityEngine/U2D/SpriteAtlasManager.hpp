// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteAtlasManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E2B1B8
  // [StaticAccessorAttribute] Offset: E2B1B8
  // [NativeHeaderAttribute] Offset: E2B1B8
  class SpriteAtlasManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SpriteAtlasManager
    SpriteAtlasManager() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xE2E224
    // Get static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* _get_atlasRequested();
    // Set static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static void _set_atlasRequested(System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xE2E260
    // Get static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static System::Action_1<UnityEngine::U2D::SpriteAtlas*>* _get_atlasRegistered();
    // Set static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static void _set_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x1D9DCC0
    static void add_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x1D9DDB0
    static void remove_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D9DF6C
    static void _cctor();
    // static private System.Boolean RequestAtlas(System.String tag)
    // Offset: 0x1D9DBC4
    static bool RequestAtlas(::Il2CppString* tag);
    // static private System.Void PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x1D9DEA0
    static void PostRegisteredAtlas(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static System.Void Register(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x1D9DF2C
    static void Register(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
  }; // UnityEngine.U2D.SpriteAtlasManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered
// Il2CppName: add_atlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::U2D::SpriteAtlas*>*)>(&UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "add_atlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered
// Il2CppName: remove_atlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::U2D::SpriteAtlas*>*)>(&UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "remove_atlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::U2D::SpriteAtlasManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::RequestAtlas
// Il2CppName: RequestAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::U2D::SpriteAtlasManager::RequestAtlas)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "RequestAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas
// Il2CppName: PostRegisteredAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::U2D::SpriteAtlas*)>(&UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas)> {
  static const MethodInfo* get() {
    static auto* spriteAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "PostRegisteredAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAtlas});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::U2D::SpriteAtlas*)>(&UnityEngine::U2D::SpriteAtlasManager::Register)> {
  static const MethodInfo* get() {
    static auto* spriteAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAtlas});
  }
};
