// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPropertyBlockColorSetter
  // [ExecuteInEditMode] Offset: D2FE08
  class AvatarPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color _defaultColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color defaultColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _darkerColorMultiplier
    // Size: 0x4
    // Offset: 0x28
    float darkerColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _whiteBoost
    // Size: 0x4
    // Offset: 0x2C
    float whiteBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _editInPlayMode
    // Size: 0x1
    // Offset: 0x30
    bool editInPlayMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: editInPlayMode and: renderer
    char __padding3[0x7] = {};
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _rimLightColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color rimLightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _mainColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color mainColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _boostColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color boostColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x70
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AvatarPropertyBlockColorSetter
    AvatarPropertyBlockColorSetter(UnityEngine::Color defaultColor_ = {}, float darkerColorMultiplier_ = {}, float whiteBoost_ = {}, bool editInPlayMode_ = {}, UnityEngine::Renderer* renderer_ = {}, UnityEngine::Color rimLightColor_ = {}, UnityEngine::Color mainColor_ = {}, UnityEngine::Color boostColor_ = {}, bool highlighted_ = {}) noexcept : defaultColor{defaultColor_}, darkerColorMultiplier{darkerColorMultiplier_}, whiteBoost{whiteBoost_}, editInPlayMode{editInPlayMode_}, renderer{renderer_}, rimLightColor{rimLightColor_}, mainColor{mainColor_}, boostColor{boostColor_}, highlighted{highlighted_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD34D54
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // protected System.Void Awake()
    // Offset: 0x101FB3C
    void Awake();
    // protected System.Void OnValidate()
    // Offset: 0x101FB74
    void OnValidate();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x101FC44
    void SetColor(UnityEngine::Color color);
    // private System.Void SetColors(UnityEngine.Color mainColor, UnityEngine.Color rimLightColor)
    // Offset: 0x101FCE4
    void SetColors(UnityEngine::Color mainColor, UnityEngine::Color rimLightColor);
    // public System.Void SetHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x101FE5C
    void SetHighlight(bool highlighted, int uvSegment);
    // private System.Void UpdateRenderer()
    // Offset: 0x101FCF8
    void UpdateRenderer();
    // public System.Void .ctor()
    // Offset: 0x101FE68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPropertyBlockColorSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPropertyBlockColorSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPropertyBlockColorSetter*, creationType>()));
    }
  }; // AvatarPropertyBlockColorSetter
  #pragma pack(pop)
  static check_size<sizeof(AvatarPropertyBlockColorSetter), 112 + sizeof(bool)> __GlobalNamespace_AvatarPropertyBlockColorSetterSizeCheck;
  static_assert(sizeof(AvatarPropertyBlockColorSetter) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPropertyBlockColorSetter*, "", "AvatarPropertyBlockColorSetter");
