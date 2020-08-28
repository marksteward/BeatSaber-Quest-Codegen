// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VREvent_Reserved_t
#include "OVR/OpenVR/VREvent_Reserved_t.hpp"
// Including type: OVR.OpenVR.VREvent_Controller_t
#include "OVR/OpenVR/VREvent_Controller_t.hpp"
// Including type: OVR.OpenVR.VREvent_Mouse_t
#include "OVR/OpenVR/VREvent_Mouse_t.hpp"
// Including type: OVR.OpenVR.VREvent_Scroll_t
#include "OVR/OpenVR/VREvent_Scroll_t.hpp"
// Including type: OVR.OpenVR.VREvent_Process_t
#include "OVR/OpenVR/VREvent_Process_t.hpp"
// Including type: OVR.OpenVR.VREvent_Notification_t
#include "OVR/OpenVR/VREvent_Notification_t.hpp"
// Including type: OVR.OpenVR.VREvent_Overlay_t
#include "OVR/OpenVR/VREvent_Overlay_t.hpp"
// Including type: OVR.OpenVR.VREvent_Status_t
#include "OVR/OpenVR/VREvent_Status_t.hpp"
// Including type: OVR.OpenVR.VREvent_Ipd_t
#include "OVR/OpenVR/VREvent_Ipd_t.hpp"
// Including type: OVR.OpenVR.VREvent_Chaperone_t
#include "OVR/OpenVR/VREvent_Chaperone_t.hpp"
// Including type: OVR.OpenVR.VREvent_PerformanceTest_t
#include "OVR/OpenVR/VREvent_PerformanceTest_t.hpp"
// Including type: OVR.OpenVR.VREvent_TouchPadMove_t
#include "OVR/OpenVR/VREvent_TouchPadMove_t.hpp"
// Including type: OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
#include "OVR/OpenVR/VREvent_SeatedZeroPoseReset_t.hpp"
// Including type: OVR.OpenVR.VREvent_Screenshot_t
#include "OVR/OpenVR/VREvent_Screenshot_t.hpp"
// Including type: OVR.OpenVR.VREvent_ScreenshotProgress_t
#include "OVR/OpenVR/VREvent_ScreenshotProgress_t.hpp"
// Including type: OVR.OpenVR.VREvent_ApplicationLaunch_t
#include "OVR/OpenVR/VREvent_ApplicationLaunch_t.hpp"
// Including type: OVR.OpenVR.VREvent_EditingCameraSurface_t
#include "OVR/OpenVR/VREvent_EditingCameraSurface_t.hpp"
// Including type: OVR.OpenVR.VREvent_MessageOverlay_t
#include "OVR/OpenVR/VREvent_MessageOverlay_t.hpp"
// Including type: OVR.OpenVR.VREvent_Property_t
#include "OVR/OpenVR/VREvent_Property_t.hpp"
// Including type: OVR.OpenVR.VREvent_DualAnalog_t
#include "OVR/OpenVR/VREvent_DualAnalog_t.hpp"
// Including type: OVR.OpenVR.VREvent_HapticVibration_t
#include "OVR/OpenVR/VREvent_HapticVibration_t.hpp"
// Including type: OVR.OpenVR.VREvent_WebConsole_t
#include "OVR/OpenVR/VREvent_WebConsole_t.hpp"
// Including type: OVR.OpenVR.VREvent_InputBindingLoad_t
#include "OVR/OpenVR/VREvent_InputBindingLoad_t.hpp"
// Including type: OVR.OpenVR.VREvent_SpatialAnchor_t
#include "OVR/OpenVR/VREvent_SpatialAnchor_t.hpp"
// Including type: OVR.OpenVR.VREvent_Keyboard_t
#include "OVR/OpenVR/VREvent_Keyboard_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_Data_t
  struct VREvent_Data_t : public System::ValueType {
    public:
    // public OVR.OpenVR.VREvent_Reserved_t reserved
    // Offset: 0x0
    OVR::OpenVR::VREvent_Reserved_t reserved;
    // public OVR.OpenVR.VREvent_Controller_t controller
    // Offset: 0x0
    OVR::OpenVR::VREvent_Controller_t controller;
    // public OVR.OpenVR.VREvent_Mouse_t mouse
    // Offset: 0x0
    OVR::OpenVR::VREvent_Mouse_t mouse;
    // public OVR.OpenVR.VREvent_Scroll_t scroll
    // Offset: 0x0
    OVR::OpenVR::VREvent_Scroll_t scroll;
    // public OVR.OpenVR.VREvent_Process_t process
    // Offset: 0x0
    OVR::OpenVR::VREvent_Process_t process;
    // public OVR.OpenVR.VREvent_Notification_t notification
    // Offset: 0x0
    OVR::OpenVR::VREvent_Notification_t notification;
    // public OVR.OpenVR.VREvent_Overlay_t overlay
    // Offset: 0x0
    OVR::OpenVR::VREvent_Overlay_t overlay;
    // public OVR.OpenVR.VREvent_Status_t status
    // Offset: 0x0
    OVR::OpenVR::VREvent_Status_t status;
    // public OVR.OpenVR.VREvent_Ipd_t ipd
    // Offset: 0x0
    OVR::OpenVR::VREvent_Ipd_t ipd;
    // public OVR.OpenVR.VREvent_Chaperone_t chaperone
    // Offset: 0x0
    OVR::OpenVR::VREvent_Chaperone_t chaperone;
    // public OVR.OpenVR.VREvent_PerformanceTest_t performanceTest
    // Offset: 0x0
    OVR::OpenVR::VREvent_PerformanceTest_t performanceTest;
    // public OVR.OpenVR.VREvent_TouchPadMove_t touchPadMove
    // Offset: 0x0
    OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove;
    // public OVR.OpenVR.VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset
    // Offset: 0x0
    OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    // public OVR.OpenVR.VREvent_Screenshot_t screenshot
    // Offset: 0x0
    OVR::OpenVR::VREvent_Screenshot_t screenshot;
    // public OVR.OpenVR.VREvent_ScreenshotProgress_t screenshotProgress
    // Offset: 0x0
    OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress;
    // public OVR.OpenVR.VREvent_ApplicationLaunch_t applicationLaunch
    // Offset: 0x0
    OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch;
    // public OVR.OpenVR.VREvent_EditingCameraSurface_t cameraSurface
    // Offset: 0x0
    OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface;
    // public OVR.OpenVR.VREvent_MessageOverlay_t messageOverlay
    // Offset: 0x0
    OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay;
    // public OVR.OpenVR.VREvent_Property_t property
    // Offset: 0x0
    OVR::OpenVR::VREvent_Property_t property;
    // public OVR.OpenVR.VREvent_DualAnalog_t dualAnalog
    // Offset: 0x0
    OVR::OpenVR::VREvent_DualAnalog_t dualAnalog;
    // public OVR.OpenVR.VREvent_HapticVibration_t hapticVibration
    // Offset: 0x0
    OVR::OpenVR::VREvent_HapticVibration_t hapticVibration;
    // public OVR.OpenVR.VREvent_WebConsole_t webConsole
    // Offset: 0x0
    OVR::OpenVR::VREvent_WebConsole_t webConsole;
    // public OVR.OpenVR.VREvent_InputBindingLoad_t inputBinding
    // Offset: 0x0
    OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding;
    // public OVR.OpenVR.VREvent_SpatialAnchor_t spatialAnchor
    // Offset: 0x0
    OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor;
    // public OVR.OpenVR.VREvent_Keyboard_t keyboard
    // Offset: 0x0
    OVR::OpenVR::VREvent_Keyboard_t keyboard;
    // Creating value type constructor for type: VREvent_Data_t
    constexpr VREvent_Data_t(OVR::OpenVR::VREvent_Reserved_t reserved_ = {}, OVR::OpenVR::VREvent_Controller_t controller_ = {}, OVR::OpenVR::VREvent_Mouse_t mouse_ = {}, OVR::OpenVR::VREvent_Scroll_t scroll_ = {}, OVR::OpenVR::VREvent_Process_t process_ = {}, OVR::OpenVR::VREvent_Notification_t notification_ = {}, OVR::OpenVR::VREvent_Overlay_t overlay_ = {}, OVR::OpenVR::VREvent_Status_t status_ = {}, OVR::OpenVR::VREvent_Ipd_t ipd_ = {}, OVR::OpenVR::VREvent_Chaperone_t chaperone_ = {}, OVR::OpenVR::VREvent_PerformanceTest_t performanceTest_ = {}, OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove_ = {}, OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset_ = {}, OVR::OpenVR::VREvent_Screenshot_t screenshot_ = {}, OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress_ = {}, OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch_ = {}, OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface_ = {}, OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay_ = {}, OVR::OpenVR::VREvent_Property_t property_ = {}, OVR::OpenVR::VREvent_DualAnalog_t dualAnalog_ = {}, OVR::OpenVR::VREvent_HapticVibration_t hapticVibration_ = {}, OVR::OpenVR::VREvent_WebConsole_t webConsole_ = {}, OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding_ = {}, OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor_ = {}, OVR::OpenVR::VREvent_Keyboard_t keyboard_ = {}) : reserved{reserved_}, controller{controller_}, mouse{mouse_}, scroll{scroll_}, process{process_}, notification{notification_}, overlay{overlay_}, status{status_}, ipd{ipd_}, chaperone{chaperone_}, performanceTest{performanceTest_}, touchPadMove{touchPadMove_}, seatedZeroPoseReset{seatedZeroPoseReset_}, screenshot{screenshot_}, screenshotProgress{screenshotProgress_}, applicationLaunch{applicationLaunch_}, cameraSurface{cameraSurface_}, messageOverlay{messageOverlay_}, property{property_}, dualAnalog{dualAnalog_}, hapticVibration{hapticVibration_}, webConsole{webConsole_}, inputBinding{inputBinding_}, spatialAnchor{spatialAnchor_}, keyboard{keyboard_} {}
  }; // OVR.OpenVR.VREvent_Data_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Data_t, "OVR.OpenVR", "VREvent_Data_t");
#pragma pack(pop)
