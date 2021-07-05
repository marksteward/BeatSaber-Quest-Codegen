// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.AutoUnwrapSettings
#include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.UvUnwrapping
  class UvUnwrapping : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UvUnwrapping
    UvUnwrapping() noexcept {}
    // Get static field: static private UnityEngine.Vector2 s_TempVector2
    static UnityEngine::Vector2 _get_s_TempVector2();
    // Set static field: static private UnityEngine.Vector2 s_TempVector2
    static void _set_s_TempVector2(UnityEngine::Vector2 value);
    // Get static field: static private readonly System.Collections.Generic.List`1<System.Int32> s_IndexBuffer
    static System::Collections::Generic::List_1<int>* _get_s_IndexBuffer();
    // Set static field: static private readonly System.Collections.Generic.List`1<System.Int32> s_IndexBuffer
    static void _set_s_IndexBuffer(System::Collections::Generic::List_1<int>* value);
    // static System.Void Unwrap(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3 projection)
    // Offset: 0x22C0548
    static void Unwrap(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face, UnityEngine::Vector3 projection);
    // static System.Void CopyUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face source, UnityEngine.ProBuilder.Face dest)
    // Offset: 0x22C0F20
    static void CopyUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* source, UnityEngine::ProBuilder::Face* dest);
    // static System.Void ProjectTextureGroup(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 group, UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x22C1044
    static void ProjectTextureGroup(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int group, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static private System.Void ApplyUVSettings(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.ProBuilder.AutoUnwrapSettings uvSettings)
    // Offset: 0x22C06B4
    static void ApplyUVSettings(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings);
    // static private System.Void StretchUVs(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x22C1460
    static void StretchUVs(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void FitUVs(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x22C11F4
    static void FitUVs(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void ApplyUVAnchor(UnityEngine.Vector2[] uvs, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor anchor)
    // Offset: 0x22C1694
    static void ApplyUVAnchor(::Array<UnityEngine::Vector2>* uvs, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor anchor);
    // static private System.Void .cctor()
    // Offset: 0x22C1AA4
    static void _cctor();
  }; // UnityEngine.ProBuilder.UvUnwrapping
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UvUnwrapping*, "UnityEngine.ProBuilder", "UvUnwrapping");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::Unwrap
// Il2CppName: Unwrap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::UvUnwrapping::Unwrap)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* projection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "Unwrap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face, projection});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::CopyUVs
// Il2CppName: CopyUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::UvUnwrapping::CopyUVs)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "CopyUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, source, dest});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup
// Il2CppName: ProjectTextureGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int, UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unwrapSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "ProjectTextureGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, group, unwrapSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings
// Il2CppName: ApplyUVSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::Vector2>*, System::Collections::Generic::IList_1<int>*, UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* uvSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "ApplyUVSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs, indexes, uvSettings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::StretchUVs
// Il2CppName: StretchUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::Vector2>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::UvUnwrapping::StretchUVs)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "StretchUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::FitUVs
// Il2CppName: FitUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::Vector2>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::UvUnwrapping::FitUVs)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "FitUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor
// Il2CppName: ApplyUVAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<UnityEngine::Vector2>*, System::Collections::Generic::IList_1<int>*, UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor)>(&UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor)> {
  static const MethodInfo* get() {
    static auto* uvs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* anchor = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), "ApplyUVAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uvs, indexes, anchor});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UvUnwrapping::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::UvUnwrapping::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UvUnwrapping*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
