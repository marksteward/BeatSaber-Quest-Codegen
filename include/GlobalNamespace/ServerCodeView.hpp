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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  // Autogenerated type: ServerCodeView
  // [] Offset: FFFFFFFF
  class ServerCodeView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _serverCodeText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* serverCodeText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x28
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.String _serverCode
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* serverCode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _codeIsShown
    // Size: 0x1
    // Offset: 0x38
    bool codeIsShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ServerCodeView
    ServerCodeView(TMPro::TextMeshProUGUI* serverCodeText_ = {}, UnityEngine::UI::Button* button_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, ::Il2CppString* serverCode_ = {}, bool codeIsShown_ = {}) noexcept : serverCodeText{serverCodeText_}, button{button_}, buttonBinder{buttonBinder_}, serverCode{serverCode_}, codeIsShown{codeIsShown_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetCode(System.String serverCode)
    // Offset: 0xFCABE8
    void SetCode(::Il2CppString* serverCode);
    // protected System.Void OnEnable()
    // Offset: 0xFCACA8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFCAD38
    void OnDisable();
    // private System.Void HandleShowServerCodeButtonPressed()
    // Offset: 0xFCAD54
    void HandleShowServerCodeButtonPressed();
    // private System.Void RefreshText(System.Boolean showCode)
    // Offset: 0xFCAC14
    void RefreshText(bool showCode);
    // public System.Void .ctor()
    // Offset: 0xFCAD64
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCodeView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ServerCodeView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCodeView*, creationType>()));
    }
  }; // ServerCodeView
  static check_size<sizeof(ServerCodeView), 56 + sizeof(bool)> __GlobalNamespace_ServerCodeViewSizeCheck;
  static_assert(sizeof(ServerCodeView) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerCodeView*, "", "ServerCodeView");
#pragma pack(pop)
