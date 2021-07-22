// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.ISelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer_ISelectionPickerRenderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.SelectionPickerRendererHDRP
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectionPickerRenderer::SelectionPickerRendererHDRP : public ::Il2CppObject/*, public UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*/ {
    public:
    // Creating value type constructor for type: SelectionPickerRendererHDRP
    SelectionPickerRendererHDRP() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer
    operator UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*>(this);
    }
    // public UnityEngine.Texture2D RenderLookupTexture(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    // Offset: 0x14C08B8
    UnityEngine::Texture2D* RenderLookupTexture(UnityEngine::Camera* camera, UnityEngine::Shader* shader, ::Il2CppString* tag, int width, int height);
    // public System.Void .ctor()
    // Offset: 0x14BE1BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectionPickerRenderer::SelectionPickerRendererHDRP* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectionPickerRenderer::SelectionPickerRendererHDRP*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.SelectionPickerRendererHDRP
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererHDRP");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP::RenderLookupTexture
// Il2CppName: RenderLookupTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP::*)(UnityEngine::Camera*, UnityEngine::Shader*, ::Il2CppString*, int, int)>(&UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP::RenderLookupTexture)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP*), "RenderLookupTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, shader, tag, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererHDRP::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
