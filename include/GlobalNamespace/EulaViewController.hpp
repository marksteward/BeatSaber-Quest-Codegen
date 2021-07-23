// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: EulaViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class EulaViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::EulaViewController::InitData
    class InitData;
    // private UnityEngine.UI.Button _agreeButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* agreeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _doNotAgreeButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* doNotAgreeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x80
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private LocalizedTextAsset _eulaLocalizedTextAsset
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::LocalizedTextAsset* eulaLocalizedTextAsset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalizedTextAsset*) == 0x8);
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // [InjectAttribute] Offset: 0xE0EA00
    // private EulaViewController/InitData _initData
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::EulaViewController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EulaViewController::InitData*) == 0x8);
    // Creating value type constructor for type: EulaViewController
    EulaViewController(UnityEngine::UI::Button* agreeButton_ = {}, UnityEngine::UI::Button* doNotAgreeButton_ = {}, HMUI::TextPageScrollView* textPageScrollView_ = {}, GlobalNamespace::LocalizedTextAsset* eulaLocalizedTextAsset_ = {}, System::Action_1<bool>* didFinishEvent_ = {}, GlobalNamespace::EulaViewController::InitData* initData_ = {}) noexcept : agreeButton{agreeButton_}, doNotAgreeButton{doNotAgreeButton_}, textPageScrollView{textPageScrollView_}, eulaLocalizedTextAsset{eulaLocalizedTextAsset_}, didFinishEvent{didFinishEvent_}, initData{initData_} {}
    // Get instance field: private UnityEngine.UI.Button _agreeButton
    UnityEngine::UI::Button* _get__agreeButton();
    // Set instance field: private UnityEngine.UI.Button _agreeButton
    void _set__agreeButton(UnityEngine::UI::Button* value);
    // Get instance field: private UnityEngine.UI.Button _doNotAgreeButton
    UnityEngine::UI::Button* _get__doNotAgreeButton();
    // Set instance field: private UnityEngine.UI.Button _doNotAgreeButton
    void _set__doNotAgreeButton(UnityEngine::UI::Button* value);
    // Get instance field: private HMUI.TextPageScrollView _textPageScrollView
    HMUI::TextPageScrollView* _get__textPageScrollView();
    // Set instance field: private HMUI.TextPageScrollView _textPageScrollView
    void _set__textPageScrollView(HMUI::TextPageScrollView* value);
    // Get instance field: private LocalizedTextAsset _eulaLocalizedTextAsset
    GlobalNamespace::LocalizedTextAsset* _get__eulaLocalizedTextAsset();
    // Set instance field: private LocalizedTextAsset _eulaLocalizedTextAsset
    void _set__eulaLocalizedTextAsset(GlobalNamespace::LocalizedTextAsset* value);
    // Get instance field: private System.Action`1<System.Boolean> didFinishEvent
    System::Action_1<bool>* _get_didFinishEvent();
    // Set instance field: private System.Action`1<System.Boolean> didFinishEvent
    void _set_didFinishEvent(System::Action_1<bool>* value);
    // Get instance field: private EulaViewController/InitData _initData
    GlobalNamespace::EulaViewController::InitData* _get__initData();
    // Set instance field: private EulaViewController/InitData _initData
    void _set__initData(GlobalNamespace::EulaViewController::InitData* value);
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1023244
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x10232E8
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // private System.Void <DidActivate>b__9_0()
    // Offset: 0x10234E0
    void $DidActivate$b__9_0();
    // private System.Void <DidActivate>b__9_1()
    // Offset: 0x1023544
    void $DidActivate$b__9_1();
    // public System.Void .ctor()
    // Offset: 0x10234D8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EulaViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EulaViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EulaViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x102338C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // EulaViewController
  #pragma pack(pop)
  static check_size<sizeof(EulaViewController), 152 + sizeof(GlobalNamespace::EulaViewController::InitData*)> __GlobalNamespace_EulaViewControllerSizeCheck;
  static_assert(sizeof(EulaViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController*, "", "EulaViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::EulaViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(System::Action_1<bool>*)>(&GlobalNamespace::EulaViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::$DidActivate$b__9_0
// Il2CppName: <DidActivate>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)()>(&GlobalNamespace::EulaViewController::$DidActivate$b__9_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "<DidActivate>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::$DidActivate$b__9_1
// Il2CppName: <DidActivate>b__9_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)()>(&GlobalNamespace::EulaViewController::$DidActivate$b__9_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "<DidActivate>b__9_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(bool, bool, bool)>(&GlobalNamespace::EulaViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
