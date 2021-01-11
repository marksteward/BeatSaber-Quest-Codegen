// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IGuiRenderable
  class IGuiRenderable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderableManager/RenderableInfo
  // [] Offset: FFFFFFFF
  class GuiRenderableManager::RenderableInfo : public ::Il2CppObject {
    public:
    // public Zenject.IGuiRenderable Renderable
    // Size: 0x8
    // Offset: 0x10
    Zenject::IGuiRenderable* Renderable;
    // Field size check
    static_assert(sizeof(Zenject::IGuiRenderable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderableInfo
    RenderableInfo(Zenject::IGuiRenderable* Renderable_ = {}, int Priority_ = {}) noexcept : Renderable{Renderable_}, Priority{Priority_} {}
    // public System.Void .ctor(Zenject.IGuiRenderable renderable, System.Int32 priority)
    // Offset: 0x129EF68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderableManager::RenderableInfo* New_ctor(Zenject::IGuiRenderable* renderable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderableManager::RenderableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderableManager::RenderableInfo*, creationType>(renderable, priority)));
    }
  }; // Zenject.GuiRenderableManager/RenderableInfo
  static check_size<sizeof(GuiRenderableManager::RenderableInfo), 24 + sizeof(int)> __Zenject_GuiRenderableManager_RenderableInfoSizeCheck;
  static_assert(sizeof(GuiRenderableManager::RenderableInfo) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::RenderableInfo*, "Zenject", "GuiRenderableManager/RenderableInfo");
