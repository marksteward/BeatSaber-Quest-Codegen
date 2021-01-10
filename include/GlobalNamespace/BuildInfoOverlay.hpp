// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: BuildInfoOverlay
  // [] Offset: FFFFFFFF
  class BuildInfoOverlay : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _canvas
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: BuildInfoOverlay
    BuildInfoOverlay(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::GameObject* canvas_ = {}) noexcept : text{text_}, canvas{canvas_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A32750
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1A32778
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildInfoOverlay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BuildInfoOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildInfoOverlay*, creationType>()));
    }
  }; // BuildInfoOverlay
  static check_size<sizeof(BuildInfoOverlay), 32 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_BuildInfoOverlaySizeCheck;
  static_assert(sizeof(BuildInfoOverlay) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BuildInfoOverlay*, "", "BuildInfoOverlay");
#pragma pack(pop)
