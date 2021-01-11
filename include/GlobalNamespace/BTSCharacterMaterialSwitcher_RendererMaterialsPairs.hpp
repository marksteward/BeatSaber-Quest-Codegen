// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSCharacterMaterialSwitcher
#include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterMaterialSwitcher/RendererMaterialsPairs
  // [] Offset: FFFFFFFF
  class BTSCharacterMaterialSwitcher::RendererMaterialsPairs : public ::Il2CppObject {
    public:
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private System.Collections.Generic.List`1<BTSCharacterMaterialSwitcher/MaterialPairs> _materialPairs
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* materialPairs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>*) == 0x8);
    // Creating value type constructor for type: RendererMaterialsPairs
    RendererMaterialsPairs(UnityEngine::Renderer* renderer_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* materialPairs_ = {}) noexcept : renderer{renderer_}, materialPairs{materialPairs_} {}
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x1A4A0E8
    UnityEngine::Renderer* get_renderer();
    // public System.Collections.Generic.List`1<BTSCharacterMaterialSwitcher/MaterialPairs> get_materialPairs()
    // Offset: 0x1A4A0F0
    System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>* get_materialPairs();
    // public System.Void .ctor(UnityEngine.Renderer renderer)
    // Offset: 0x1A4A0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterMaterialSwitcher::RendererMaterialsPairs* New_ctor(UnityEngine::Renderer* renderer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterMaterialSwitcher::RendererMaterialsPairs*, creationType>(renderer)));
    }
  }; // BTSCharacterMaterialSwitcher/RendererMaterialsPairs
  static check_size<sizeof(BTSCharacterMaterialSwitcher::RendererMaterialsPairs), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BTSCharacterMaterialSwitcher::MaterialPairs*>*)> __GlobalNamespace_BTSCharacterMaterialSwitcher_RendererMaterialsPairsSizeCheck;
  static_assert(sizeof(BTSCharacterMaterialSwitcher::RendererMaterialsPairs) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*, "", "BTSCharacterMaterialSwitcher/RendererMaterialsPairs");
