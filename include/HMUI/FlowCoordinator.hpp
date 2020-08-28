// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
  // Forward declaring type: ScreenSystem
  class ScreenSystem;
  // Forward declaring type: NavigationController
  class NavigationController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.FlowCoordinator
  class FlowCoordinator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::FlowCoordinator::ActivationType
    struct ActivationType;
    // Nested type: HMUI::FlowCoordinator::DeactivationType
    struct DeactivationType;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass37_0
    class $$c__DisplayClass37_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass38_0
    class $$c__DisplayClass38_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass39_0
    class $$c__DisplayClass39_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass41_0
    class $$c__DisplayClass41_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass42_0
    class $$c__DisplayClass42_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass45_0
    class $$c__DisplayClass45_0;
    // Nested type: HMUI::FlowCoordinator::$$c__DisplayClass46_0
    class $$c__DisplayClass46_0;
    // private HMUI.BaseInputModule _baseInputModule
    // Offset: 0x18
    HMUI::BaseInputModule* baseInputModule;
    // private HMUI.ScreenSystem _screenSystem
    // Offset: 0x20
    HMUI::ScreenSystem* screenSystem;
    // private HMUI.FlowCoordinator _parentFlowCoordinator
    // Offset: 0x28
    HMUI::FlowCoordinator* parentFlowCoordinator;
    // private HMUI.FlowCoordinator _childFlowCoordinator
    // Offset: 0x30
    HMUI::FlowCoordinator* childFlowCoordinator;
    // private System.Collections.Generic.List`1<HMUI.ViewController> _mainScreenViewControllers
    // Offset: 0x38
    System::Collections::Generic::List_1<HMUI::ViewController*>* mainScreenViewControllers;
    // private HMUI.ViewController _leftScreenViewController
    // Offset: 0x40
    HMUI::ViewController* leftScreenViewController;
    // private HMUI.ViewController _rightScreenViewController
    // Offset: 0x48
    HMUI::ViewController* rightScreenViewController;
    // private HMUI.ViewController _bottomScreenViewController
    // Offset: 0x50
    HMUI::ViewController* bottomScreenViewController;
    // private HMUI.ViewController _topScreenViewController
    // Offset: 0x58
    HMUI::ViewController* topScreenViewController;
    // private System.Boolean _wasActivatedBefore
    // Offset: 0x60
    bool wasActivatedBefore;
    // private System.String _title
    // Offset: 0x68
    ::Il2CppString* title;
    // private HMUI.ViewController _providedMainViewController
    // Offset: 0x70
    HMUI::ViewController* providedMainViewController;
    // private HMUI.ViewController _providedLeftScreenViewController
    // Offset: 0x78
    HMUI::ViewController* providedLeftScreenViewController;
    // private HMUI.ViewController _providedRightScreenViewController
    // Offset: 0x80
    HMUI::ViewController* providedRightScreenViewController;
    // private HMUI.ViewController _providedBottomScreenViewController
    // Offset: 0x88
    HMUI::ViewController* providedBottomScreenViewController;
    // private HMUI.ViewController _providedTopScreenViewController
    // Offset: 0x90
    HMUI::ViewController* providedTopScreenViewController;
    // private System.Boolean _viewControllersWereProvided
    // Offset: 0x98
    bool viewControllersWereProvided;
    // private System.Boolean _isInDidActivatePhase
    // Offset: 0x99
    bool isInDidActivatePhase;
    // private System.Boolean _isActivated
    // Offset: 0x9A
    bool isActivated;
    // private System.Boolean _showBackButton
    // Offset: 0x9B
    bool showBackButton;
    // private UnityEngine.EventSystems.EventSystem _prevEventSystem
    // Offset: 0xA0
    UnityEngine::EventSystems::EventSystem* prevEventSystem;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public HMUI.ViewController get_topViewController()
    // Offset: 0xEDAD58
    HMUI::ViewController* get_topViewController();
    // public HMUI.FlowCoordinator get_childFlowCoordinator()
    // Offset: 0xEDADC4
    HMUI::FlowCoordinator* get_childFlowCoordinator();
    // public System.Boolean get_isActivated()
    // Offset: 0xEDADCC
    bool get_isActivated();
    // protected System.Void set_title(System.String value)
    // Offset: 0xEDADD4
    void set_title(::Il2CppString* value);
    // protected System.String get_title()
    // Offset: 0xEDAF6C
    ::Il2CppString* get_title();
    // protected System.Void set_showBackButton(System.Boolean value)
    // Offset: 0xEDAF74
    void set_showBackButton(bool value);
    // protected System.Boolean get_showBackButton()
    // Offset: 0xEDAF80
    bool get_showBackButton();
    // public System.Void __StartOnScreenSystem(HMUI.ScreenSystem screenSystem)
    // Offset: 0xEDAF88
    void __StartOnScreenSystem(HMUI::ScreenSystem* screenSystem);
    // protected System.Void PresentFlowCoordinator(HMUI.FlowCoordinator flowCoordinator, System.Action finishedCallback, System.Boolean immediately, System.Boolean replaceTopViewController)
    // Offset: 0xEDB564
    void PresentFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator, System::Action* finishedCallback, bool immediately, bool replaceTopViewController);
    // protected System.Void DismissFlowCoordinator(HMUI.FlowCoordinator flowCoordinator, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDBB28
    void DismissFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator, System::Action* finishedCallback, bool immediately);
    // protected System.Void PresentViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDB2F8
    void PresentViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // protected System.Void DismissViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDBD88
    void DismissViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // protected System.Void ReplaceTopViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately, HMUI.ViewController/SlideAnimationDirection slideAnimationDirection)
    // Offset: 0xEDBF00
    void ReplaceTopViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately, HMUI::ViewController::SlideAnimationDirection slideAnimationDirection);
    // private System.Void ReplaceTopViewController(HMUI.ViewController viewController, HMUI.FlowCoordinator originalOwnerFlowCoordinator, HMUI.FlowCoordinator newOwnerFlowCoordinator, System.Action finishedCallback, System.Boolean immediately, HMUI.ViewController/SlideAnimationDirection slideAnimationDirection)
    // Offset: 0xEDB990
    void ReplaceTopViewController(HMUI::ViewController* viewController, HMUI::FlowCoordinator* originalOwnerFlowCoordinator, HMUI::FlowCoordinator* newOwnerFlowCoordinator, System::Action* finishedCallback, bool immediately, HMUI::ViewController::SlideAnimationDirection slideAnimationDirection);
    // protected System.Void PushViewControllerToNavigationController(HMUI.NavigationController navigationController, HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDBFE8
    void PushViewControllerToNavigationController(HMUI::NavigationController* navigationController, HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // protected System.Void SetViewControllersToNavigationController(HMUI.NavigationController navigationController, HMUI.ViewController[] viewControllers)
    // Offset: 0xEDC0F4
    void SetViewControllersToNavigationController(HMUI::NavigationController* navigationController, ::Array<HMUI::ViewController*>* viewControllers);
    // protected System.Void SetViewControllerToNavigationController(HMUI.NavigationController navigationController, HMUI.ViewController viewController)
    // Offset: 0xEDC110
    void SetViewControllerToNavigationController(HMUI::NavigationController* navigationController, HMUI::ViewController* viewController);
    // protected System.Void PopViewControllerFromNavigationController(HMUI.NavigationController navigationController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDC12C
    void PopViewControllerFromNavigationController(HMUI::NavigationController* navigationController, System::Action* finishedCallback, bool immediately);
    // protected System.Void PopViewControllersFromNavigationController(HMUI.NavigationController navigationController, System.Int32 numberOfControllers, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xEDC230
    void PopViewControllersFromNavigationController(HMUI::NavigationController* navigationController, int numberOfControllers, System::Action* finishedCallback, bool immediately);
    // protected System.Void SetLeftScreenViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xEDB198
    void SetLeftScreenViewController(HMUI::ViewController* viewController, bool immediately);
    // protected System.Void SetRightScreenViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xEDB1F0
    void SetRightScreenViewController(HMUI::ViewController* viewController, bool immediately);
    // protected System.Void SetBottomScreenViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xEDB248
    void SetBottomScreenViewController(HMUI::ViewController* viewController, bool immediately);
    // protected System.Void SetTopScreenViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xEDB2A0
    void SetTopScreenViewController(HMUI::ViewController* viewController, bool immediately);
    // private System.Void PresentTitle(System.String title, System.Boolean immediately)
    // Offset: 0xEDAEEC
    void PresentTitle(::Il2CppString* title, bool immediately);
    // public System.Boolean IsFlowCoordinatorInHierarchy(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0xEDAE28
    bool IsFlowCoordinatorInHierarchy(HMUI::FlowCoordinator* flowCoordinator);
    // public HMUI.FlowCoordinator YoungestChildFlowCoordinatorOrSelf()
    // Offset: 0xEDC33C
    HMUI::FlowCoordinator* YoungestChildFlowCoordinatorOrSelf();
    // protected System.Void ProvideInitialViewControllers(HMUI.ViewController mainViewController, HMUI.ViewController leftScreenViewController, HMUI.ViewController rightScreenViewController, HMUI.ViewController bottomScreenViewController, HMUI.ViewController topScreenViewController)
    // Offset: 0xEDC3D0
    void ProvideInitialViewControllers(HMUI::ViewController* mainViewController, HMUI::ViewController* leftScreenViewController, HMUI::ViewController* rightScreenViewController, HMUI::ViewController* bottomScreenViewController, HMUI::ViewController* topScreenViewController);
    // private System.Void Activate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xEDB0DC
    void Activate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // private System.Void Deactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xEDB8E8
    void Deactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // public System.Void __ExternalActivate()
    // Offset: 0xEDC460
    void __ExternalActivate();
    // public System.Void __ExternalDeactivate()
    // Offset: 0xEDC67C
    void __ExternalDeactivate();
    // private System.Void HandleScreenSystemBackButtonWasPressed()
    // Offset: 0xEDC8A8
    void HandleScreenSystemBackButtonWasPressed();
    // protected System.Void SetGlobalUserInteraction(System.Boolean value)
    // Offset: 0xEDBD60
    void SetGlobalUserInteraction(bool value);
    // protected System.Void DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xFFFFFFFF
    void DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected System.Void DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xEDC8D8
    void DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // protected System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, System.Boolean immediately)
    // Offset: 0xEDC8DC
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, bool immediately);
    // protected System.Void InitialViewControllerWasPresented()
    // Offset: 0xEDC8E0
    void InitialViewControllerWasPresented();
    // protected System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0xEDC8E4
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // static public System.Void Log(System.String message)
    // Offset: 0xEDC8E8
    static void Log(::Il2CppString* message);
    // private System.Void <__StartOnScreenSystem>b__35_0()
    // Offset: 0xEDC9CC
    void $__StartOnScreenSystem$b__35_0();
    // protected System.Void .ctor()
    // Offset: 0xEDC950
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlowCoordinator* New_ctor();
  }; // HMUI.FlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator*, "HMUI", "FlowCoordinator");
#pragma pack(pop)
