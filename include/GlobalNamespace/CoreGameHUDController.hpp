// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CoreGameHUDController
  class CoreGameHUDController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CoreGameHUDController::InitData
    class InitData;
    // private UnityEngine.GameObject _songProgressPanelGO
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* songProgressPanelGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _relativeScoreGO
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* relativeScoreGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _immediateRankGO
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* immediateRankGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _energyPanelGO
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* energyPanelGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B8A4
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // Creating value type constructor for type: CoreGameHUDController
    CoreGameHUDController(UnityEngine::GameObject* songProgressPanelGO_ = {}, UnityEngine::GameObject* relativeScoreGO_ = {}, UnityEngine::GameObject* immediateRankGO_ = {}, UnityEngine::GameObject* energyPanelGO_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, GlobalNamespace::CoreGameHUDController::InitData* initData_ = {}) noexcept : songProgressPanelGO{songProgressPanelGO_}, relativeScoreGO{relativeScoreGO_}, immediateRankGO{immediateRankGO_}, energyPanelGO{energyPanelGO_}, canvasGroup{canvasGroup_}, initData{initData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x11964DC
    void set_alpha(float value);
    // protected System.Void Start()
    // Offset: 0x11964F8
    void Start();
    // public System.Void .ctor()
    // Offset: 0x11965A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreGameHUDController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CoreGameHUDController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreGameHUDController*, creationType>()));
    }
  }; // CoreGameHUDController
  #pragma pack(pop)
  static check_size<sizeof(CoreGameHUDController), 64 + sizeof(GlobalNamespace::CoreGameHUDController::InitData*)> __GlobalNamespace_CoreGameHUDControllerSizeCheck;
  static_assert(sizeof(CoreGameHUDController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoreGameHUDController*, "", "CoreGameHUDController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)(float)>(&GlobalNamespace::CoreGameHUDController::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
