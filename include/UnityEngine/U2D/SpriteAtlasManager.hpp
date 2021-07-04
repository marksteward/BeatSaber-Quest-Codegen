// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // [NativeHeaderAttribute] Offset: D90DC4
  // [StaticAccessorAttribute] Offset: D90DC4
  // [NativeHeaderAttribute] Offset: D90DC4
  class SpriteAtlasManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SpriteAtlasManager
    SpriteAtlasManager() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xD93E48
    // [DebuggerBrowsableAttribute] Offset: 0xD93E48
    // Get static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* _get_atlasRequested();
    // Set static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static void _set_atlasRequested(System::Action_2<::Il2CppString*, System::Action_1<UnityEngine::U2D::SpriteAtlas*>*>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD93E84
    // [DebuggerBrowsableAttribute] Offset: 0xD93E84
    // Get static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static System::Action_1<UnityEngine::U2D::SpriteAtlas*>* _get_atlasRegistered();
    // Set static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static void _set_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Boolean RequestAtlas(System.String tag)
    // Offset: 0x23208F4
    static bool RequestAtlas(::Il2CppString* tag);
    // static public System.Void add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x23209F0
    static void add_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x2320AE0
    static void remove_atlasRegistered(System::Action_1<UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Void PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x2320BD0
    static void PostRegisteredAtlas(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static System.Void Register(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x2320C5C
    static void Register(UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static private System.Void .cctor()
    // Offset: 0x2320C9C
    static void _cctor();
  }; // UnityEngine.U2D.SpriteAtlasManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::RequestAtlas
// Il2CppName: RequestAtlas
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered
// Il2CppName: add_atlasRegistered
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered
// Il2CppName: remove_atlasRegistered
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas
// Il2CppName: PostRegisteredAtlas
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::Register
// Il2CppName: Register
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
