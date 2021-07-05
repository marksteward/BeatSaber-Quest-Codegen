// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Vector2Extensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Vector2Extensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Vector2Extensions
    Vector2Extensions() noexcept {}
    // static public System.Single SignedAngleToLine(UnityEngine.Vector2 vec, UnityEngine.Vector2 line)
    // Offset: 0x238DF64
    static float SignedAngleToLine(UnityEngine::Vector2 vec, UnityEngine::Vector2 line);
  }; // Vector2Extensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector2Extensions*, "", "Vector2Extensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector2Extensions::SignedAngleToLine
// Il2CppName: SignedAngleToLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&GlobalNamespace::Vector2Extensions::SignedAngleToLine)> {
  static const MethodInfo* get() {
    static auto* vec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* line = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector2Extensions*), "SignedAngleToLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vec, line});
  }
};
