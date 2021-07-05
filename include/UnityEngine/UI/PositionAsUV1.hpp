// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.BaseMeshEffect
#include "UnityEngine/UI/BaseMeshEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.PositionAsUV1
  // [AddComponentMenu] Offset: DC5AC0
  class PositionAsUV1 : public UnityEngine::UI::BaseMeshEffect {
    public:
    // Creating value type constructor for type: PositionAsUV1
    PositionAsUV1() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x19AF588
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PositionAsUV1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::PositionAsUV1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PositionAsUV1*, creationType>()));
    }
    // public override System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x19AF590
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper vh)
    void ModifyMesh(UnityEngine::UI::VertexHelper* vh);
  }; // UnityEngine.UI.PositionAsUV1
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::PositionAsUV1*, "UnityEngine.UI", "PositionAsUV1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::PositionAsUV1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::PositionAsUV1::ModifyMesh
// Il2CppName: ModifyMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::PositionAsUV1::*)(UnityEngine::UI::VertexHelper*)>(&UnityEngine::UI::PositionAsUV1::ModifyMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::PositionAsUV1*), "ModifyMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
