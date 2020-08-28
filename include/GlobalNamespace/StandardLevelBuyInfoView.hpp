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
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelBuyInfoView
  class StandardLevelBuyInfoView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Button _buyLevelButton
    // Offset: 0x20
    UnityEngine::UI::Button* buyLevelButton;
    // private UnityEngine.UI.Button _openPackButton
    // Offset: 0x28
    UnityEngine::UI::Button* openPackButton;
    // private UnityEngine.UI.Button _buyPackButton
    // Offset: 0x30
    UnityEngine::UI::Button* buyPackButton;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public UnityEngine.UI.Button get_buyLevelButton()
    // Offset: 0xB9DDB0
    UnityEngine::UI::Button* get_buyLevelButton();
    // public UnityEngine.UI.Button get_openPackButton()
    // Offset: 0xB9DDB8
    UnityEngine::UI::Button* get_openPackButton();
    // public UnityEngine.UI.Button get_buyPackButton()
    // Offset: 0xB9DDC0
    UnityEngine::UI::Button* get_buyPackButton();
    // public System.Void RefreshView(System.String infoText, System.Boolean canBuyPack)
    // Offset: 0xB9DDC8
    void RefreshView(::Il2CppString* infoText, bool canBuyPack);
    // public System.Void .ctor()
    // Offset: 0xB9DE3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelBuyInfoView* New_ctor();
  }; // StandardLevelBuyInfoView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelBuyInfoView*, "", "StandardLevelBuyInfoView");
#pragma pack(pop)
