// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Transform2D
  // [TokenAttribute] Offset: FFFFFFFF
  class Transform2D : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector2 position
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x18
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 scale
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 scale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: Transform2D
    Transform2D(UnityEngine::Vector2 position_ = {}, float rotation_ = {}, UnityEngine::Vector2 scale_ = {}) noexcept : position{position_}, rotation{rotation_}, scale{scale_} {}
    // public System.Void .ctor(UnityEngine.Vector2 position, System.Single rotation, UnityEngine.Vector2 scale)
    // Offset: 0x22AA4C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Transform2D* New_ctor(UnityEngine::Vector2 position, float rotation, UnityEngine::Vector2 scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Transform2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Transform2D*, creationType>(position, rotation, scale)));
    }
    // public UnityEngine.Vector2 TransformPoint(UnityEngine.Vector2 p)
    // Offset: 0x22AA51C
    UnityEngine::Vector2 TransformPoint(UnityEngine::Vector2 p);
    // public override System.String ToString()
    // Offset: 0x22AA5F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Transform2D
  #pragma pack(pop)
  static check_size<sizeof(Transform2D), 28 + sizeof(UnityEngine::Vector2)> __UnityEngine_ProBuilder_Transform2DSizeCheck;
  static_assert(sizeof(Transform2D) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Transform2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Transform2D::TransformPoint
// Il2CppName: TransformPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::Transform2D::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::Transform2D::TransformPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Transform2D*), "TransformPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Transform2D::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::Transform2D::*)()>(&UnityEngine::ProBuilder::Transform2D::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Transform2D*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
