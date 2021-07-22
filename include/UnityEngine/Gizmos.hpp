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
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Gizmos
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D7BD30
  // [StaticAccessorAttribute] Offset: D7BD30
  class Gizmos : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Gizmos
    Gizmos() noexcept {}
    // static public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1BEC31C
    static void set_color(UnityEngine::Color value);
    // static public System.Void set_matrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x1BEC3AC
    static void set_matrix(UnityEngine::Matrix4x4 value);
    // static public System.Void DrawLine(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x1BEBFB8
    static void DrawLine(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // static public System.Void DrawWireSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x1BEC064
    static void DrawWireSphere(UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x1BEC114
    static void DrawSphere(UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawWireCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0x1BEC1C4
    static void DrawWireCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // static public System.Void DrawCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0x1BEC270
    static void DrawCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size);
    // static public System.Void DrawRay(UnityEngine.Vector3 from, UnityEngine.Vector3 direction)
    // Offset: 0x1BEC42C
    static void DrawRay(UnityEngine::Vector3 from, UnityEngine::Vector3 direction);
    // static private System.Void DrawLine_Injected(ref UnityEngine.Vector3 from, ref UnityEngine.Vector3 to)
    // Offset: 0x1BEC014
    static void DrawLine_Injected(UnityEngine::Vector3& from, UnityEngine::Vector3& to);
    // static private System.Void DrawWireSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x1BEC0C4
    static void DrawWireSphere_Injected(UnityEngine::Vector3& center, float radius);
    // static private System.Void DrawSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x1BEC174
    static void DrawSphere_Injected(UnityEngine::Vector3& center, float radius);
    // static private System.Void DrawWireCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0x1BEC220
    static void DrawWireCube_Injected(UnityEngine::Vector3& center, UnityEngine::Vector3& size);
    // static private System.Void DrawCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0x1BEC2CC
    static void DrawCube_Injected(UnityEngine::Vector3& center, UnityEngine::Vector3& size);
    // static private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x1BEC36C
    static void set_color_Injected(UnityEngine::Color& value);
    // static private System.Void set_matrix_Injected(ref UnityEngine.Matrix4x4 value)
    // Offset: 0x1BEC3EC
    static void set_matrix_Injected(UnityEngine::Matrix4x4& value);
  }; // UnityEngine.Gizmos
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Color)>(&UnityEngine::Gizmos::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_matrix
// Il2CppName: set_matrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Matrix4x4)>(&UnityEngine::Gizmos::set_matrix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_matrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawLine)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireSphere
// Il2CppName: DrawWireSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, float)>(&UnityEngine::Gizmos::DrawWireSphere)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawSphere
// Il2CppName: DrawSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, float)>(&UnityEngine::Gizmos::DrawSphere)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireCube
// Il2CppName: DrawWireCube
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawWireCube)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireCube", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawCube
// Il2CppName: DrawCube
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawCube)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawCube", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawRay
// Il2CppName: DrawRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawRay)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawLine_Injected
// Il2CppName: DrawLine_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&)>(&UnityEngine::Gizmos::DrawLine_Injected)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawLine_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireSphere_Injected
// Il2CppName: DrawWireSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, float)>(&UnityEngine::Gizmos::DrawWireSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawSphere_Injected
// Il2CppName: DrawSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, float)>(&UnityEngine::Gizmos::DrawSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireCube_Injected
// Il2CppName: DrawWireCube_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&)>(&UnityEngine::Gizmos::DrawWireCube_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireCube_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawCube_Injected
// Il2CppName: DrawCube_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&)>(&UnityEngine::Gizmos::DrawCube_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawCube_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Color&)>(&UnityEngine::Gizmos::set_color_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_matrix_Injected
// Il2CppName: set_matrix_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Matrix4x4&)>(&UnityEngine::Gizmos::set_matrix_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_matrix_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
