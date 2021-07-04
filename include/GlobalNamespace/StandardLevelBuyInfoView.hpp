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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelBuyInfoView
  class StandardLevelBuyInfoView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _buyLevelButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* buyLevelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _openPackButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* openPackButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _buyPackButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* buyPackButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // Creating value type constructor for type: StandardLevelBuyInfoView
    StandardLevelBuyInfoView(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::UI::Button* buyLevelButton_ = {}, UnityEngine::UI::Button* openPackButton_ = {}, UnityEngine::UI::Button* buyPackButton_ = {}) noexcept : text{text_}, buyLevelButton{buyLevelButton_}, openPackButton{openPackButton_}, buyPackButton{buyPackButton_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.Button get_buyLevelButton()
    // Offset: 0x115B6AC
    UnityEngine::UI::Button* get_buyLevelButton();
    // public UnityEngine.UI.Button get_openPackButton()
    // Offset: 0x115B6B4
    UnityEngine::UI::Button* get_openPackButton();
    // public UnityEngine.UI.Button get_buyPackButton()
    // Offset: 0x115B6BC
    UnityEngine::UI::Button* get_buyPackButton();
    // public System.Void RefreshView(System.String infoText, System.Boolean canBuyPack)
    // Offset: 0x115B6C4
    void RefreshView(::Il2CppString* infoText, bool canBuyPack);
    // public System.Void .ctor()
    // Offset: 0x115B738
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelBuyInfoView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelBuyInfoView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelBuyInfoView*, creationType>()));
    }
  }; // StandardLevelBuyInfoView
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelBuyInfoView), 48 + sizeof(UnityEngine::UI::Button*)> __GlobalNamespace_StandardLevelBuyInfoViewSizeCheck;
  static_assert(sizeof(StandardLevelBuyInfoView) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelBuyInfoView*, "", "StandardLevelBuyInfoView");
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton
// Il2CppName: get_buyLevelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_buyLevelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton
// Il2CppName: get_openPackButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_openPackButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton
// Il2CppName: get_buyPackButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_buyPackButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::RefreshView
// Il2CppName: RefreshView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelBuyInfoView::*)(::Il2CppString*, bool)>(&GlobalNamespace::StandardLevelBuyInfoView::RefreshView)> {
  const MethodInfo* get() {
    static auto* infoText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* canBuyPack = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "RefreshView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{infoText, canBuyPack});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
