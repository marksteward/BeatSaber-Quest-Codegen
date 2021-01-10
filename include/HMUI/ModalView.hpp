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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x64
  // Autogenerated type: HMUI.ModalView
  // [] Offset: FFFFFFFF
  class ModalView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ModalView::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: HMUI::ModalView::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // private HMUI.PanelAnimationSO _presentPanelAnimations
    // Size: 0x8
    // Offset: 0x18
    HMUI::PanelAnimationSO* presentPanelAnimations;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x20
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private System.Boolean _animateParentCanvas
    // Size: 0x1
    // Offset: 0x28
    bool animateParentCanvas;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animateParentCanvas and: container
    char __padding2[0x7] = {};
    // [InjectAttribute] Offset: 0xDA78F0
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDA7900
    // private System.Action blockerClickedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* blockerClickedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _isShown
    // Size: 0x1
    // Offset: 0x40
    bool isShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _viewIsValid
    // Size: 0x1
    // Offset: 0x41
    bool viewIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: viewIsValid and: mainCanvas
    char __padding6[0x6] = {};
    // private UnityEngine.Canvas _mainCanvas
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Canvas* mainCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private UnityEngine.CanvasGroup _parentCanvasGroup
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::CanvasGroup* parentCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.GameObject _blockerGO
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* blockerGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 _test
    // Size: 0x4
    // Offset: 0x60
    int test;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ModalView
    ModalView(HMUI::PanelAnimationSO* presentPanelAnimations_ = {}, HMUI::PanelAnimationSO* dismissPanelAnimation_ = {}, bool animateParentCanvas_ = {}, Zenject::DiContainer* container_ = {}, System::Action* blockerClickedEvent_ = {}, bool isShown_ = {}, bool viewIsValid_ = {}, UnityEngine::Canvas* mainCanvas_ = {}, UnityEngine::CanvasGroup* parentCanvasGroup_ = {}, UnityEngine::GameObject* blockerGO_ = {}, int test_ = {}) noexcept : presentPanelAnimations{presentPanelAnimations_}, dismissPanelAnimation{dismissPanelAnimation_}, animateParentCanvas{animateParentCanvas_}, container{container_}, blockerClickedEvent{blockerClickedEvent_}, isShown{isShown_}, viewIsValid{viewIsValid_}, mainCanvas{mainCanvas_}, parentCanvasGroup{parentCanvasGroup_}, blockerGO{blockerGO_}, test{test_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_blockerClickedEvent(System.Action value)
    // Offset: 0x107AF00
    void add_blockerClickedEvent(System::Action* value);
    // public System.Void remove_blockerClickedEvent(System.Action value)
    // Offset: 0x107AFA4
    void remove_blockerClickedEvent(System::Action* value);
    // private System.Void OnDisable()
    // Offset: 0x107B048
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x107B248
    void OnDestroy();
    // private System.Void SetupView(UnityEngine.Transform screenTransform)
    // Offset: 0x107B2F8
    void SetupView(UnityEngine::Transform* screenTransform);
    // public System.Void Hide(System.Boolean animated, System.Action finishedCallback)
    // Offset: 0x107B054
    void Hide(bool animated, System::Action* finishedCallback);
    // public System.Void Show(System.Boolean animated, System.Boolean moveToCenter, System.Action finishedCallback)
    // Offset: 0x107B650
    void Show(bool animated, bool moveToCenter, System::Action* finishedCallback);
    // private UnityEngine.GameObject CreateBlocker()
    // Offset: 0x107BA74
    UnityEngine::GameObject* CreateBlocker();
    // private System.Void HandleBlockerButtonClicked()
    // Offset: 0x107BE5C
    void HandleBlockerButtonClicked();
    // private System.Void HandleParentViewControllerDidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x107BE70
    void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // static private UnityEngine.Transform GetModalRootTransform(UnityEngine.Transform transform, out UnityEngine.Canvas canvas, out HMUI.ViewController viewController)
    // Offset: 0x107B970
    static UnityEngine::Transform* GetModalRootTransform(UnityEngine::Transform* transform, UnityEngine::Canvas*& canvas, HMUI::ViewController*& viewController);
    // public System.Void .ctor()
    // Offset: 0x107BF44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModalView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ModalView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModalView*, creationType>()));
    }
  }; // HMUI.ModalView
  static check_size<sizeof(ModalView), 96 + sizeof(int)> __HMUI_ModalViewSizeCheck;
  static_assert(sizeof(ModalView) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView*, "HMUI", "ModalView");
#pragma pack(pop)
