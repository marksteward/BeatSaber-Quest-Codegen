// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _modifierNameText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* modifierNameText;
    // private TMPro.TextMeshProUGUI _modifierDescriptionText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* modifierDescriptionText;
    // private UnityEngine.UI.Image _iconImage
    // Offset: 0x28
    UnityEngine::UI::Image* iconImage;
    // private UnityEngine.UI.Image _separatorImage
    // Offset: 0x30
    UnityEngine::UI::Image* separatorImage;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void set_modifierName(System.String value)
    // Offset: 0xB3F044
    void set_modifierName(::Il2CppString* value);
    // public System.Void set_modifierDescription(System.String value)
    // Offset: 0xB3F060
    void set_modifierDescription(::Il2CppString* value);
    // public System.Void set_modifierIcon(UnityEngine.Sprite value)
    // Offset: 0xB3F07C
    void set_modifierIcon(UnityEngine::Sprite* value);
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0xB3F098
    void set_showSeparator(bool value);
    // public System.Void .ctor()
    // Offset: 0xB3F0B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayModifierInfoListItem* New_ctor();
  }; // GameplayModifierInfoListItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
#pragma pack(pop)
