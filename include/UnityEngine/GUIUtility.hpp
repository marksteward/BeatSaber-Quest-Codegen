// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FocusType
  struct FocusType;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: GUISkin
  class GUISkin;
  // Forward declaring type: Event
  class Event;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUIUtility
  // [NativeHeaderAttribute] Offset: DADB80
  // [NativeHeaderAttribute] Offset: DADB80
  // [NativeHeaderAttribute] Offset: DADB80
  // [NativeHeaderAttribute] Offset: DADB80
  // [NativeHeaderAttribute] Offset: DADB80
  // [NativeHeaderAttribute] Offset: DADB80
  class GUIUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GUIUtility
    GUIUtility() noexcept {}
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE50C
    // Get static field: static System.Int32 s_SkinMode
    static int _get_s_SkinMode();
    // Set static field: static System.Int32 s_SkinMode
    static void _set_s_SkinMode(int value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE584
    // Get static field: static System.Int32 s_OriginalID
    static int _get_s_OriginalID();
    // Set static field: static System.Int32 s_OriginalID
    static void _set_s_OriginalID(int value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE5FC
    // Get static field: static System.Action takeCapture
    static System::Action* _get_takeCapture();
    // Set static field: static System.Action takeCapture
    static void _set_takeCapture(System::Action* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE674
    // Get static field: static System.Action releaseCapture
    static System::Action* _get_releaseCapture();
    // Set static field: static System.Action releaseCapture
    static void _set_releaseCapture(System::Action* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE6EC
    // Get static field: static System.Func`3<System.Int32,System.IntPtr,System.Boolean> processEvent
    static System::Func_3<int, System::IntPtr, bool>* _get_processEvent();
    // Set static field: static System.Func`3<System.Int32,System.IntPtr,System.Boolean> processEvent
    static void _set_processEvent(System::Func_3<int, System::IntPtr, bool>* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE764
    // Get static field: static System.Func`2<System.Exception,System.Boolean> endContainerGUIFromException
    static System::Func_2<System::Exception*, bool>* _get_endContainerGUIFromException();
    // Set static field: static System.Func`2<System.Exception,System.Boolean> endContainerGUIFromException
    static void _set_endContainerGUIFromException(System::Func_2<System::Exception*, bool>* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xDAE7DC
    // Get static field: static System.Action guiChanged
    static System::Action* _get_guiChanged();
    // Set static field: static System.Action guiChanged
    static void _set_guiChanged(System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xDAE854
    // [CompilerGeneratedAttribute] Offset: 0xDAE854
    // Get static field: static private System.Boolean <guiIsExiting>k__BackingField
    static bool _get_$guiIsExiting$k__BackingField();
    // Set static field: static private System.Boolean <guiIsExiting>k__BackingField
    static void _set_$guiIsExiting$k__BackingField(bool value);
    // Get static field: static System.Func`1<System.Boolean> s_HasCurrentWindowKeyFocusFunc
    static System::Func_1<bool>* _get_s_HasCurrentWindowKeyFocusFunc();
    // Set static field: static System.Func`1<System.Boolean> s_HasCurrentWindowKeyFocusFunc
    static void _set_s_HasCurrentWindowKeyFocusFunc(System::Func_1<bool>* value);
    // static System.Single get_pixelsPerPoint()
    // Offset: 0x1A92CE0
    static float get_pixelsPerPoint();
    // static System.Int32 get_guiDepth()
    // Offset: 0x1A97B9C
    static int get_guiDepth();
    // static System.Void set_mouseUsed(System.Boolean value)
    // Offset: 0x1A89D94
    static void set_mouseUsed(bool value);
    // static System.Void set_textFieldInput(System.Boolean value)
    // Offset: 0x1A87C14
    static void set_textFieldInput(bool value);
    // static public System.String get_systemCopyBuffer()
    // Offset: 0x1A97BD0
    static ::Il2CppString* get_systemCopyBuffer();
    // static public System.Void set_systemCopyBuffer(System.String value)
    // Offset: 0x1A97C04
    static void set_systemCopyBuffer(::Il2CppString* value);
    // static public System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
    // Offset: 0x1A85574
    static int GetControlID(int hint, UnityEngine::FocusType focusType, UnityEngine::Rect rect);
    // static public UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels)
    // Offset: 0x1A97C9C
    static UnityEngine::Rect AlignRectToDevice(UnityEngine::Rect rect, int& widthInPixels, int& heightInPixels);
    // static System.String get_compositionString()
    // Offset: 0x1A87738
    static ::Il2CppString* get_compositionString();
    // static System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
    // Offset: 0x1A97D7C
    static void set_compositionCursorPos(UnityEngine::Vector2 value);
    // static private System.Int32 Internal_GetHotControl()
    // Offset: 0x1A97E00
    static int Internal_GetHotControl();
    // static private System.Int32 Internal_GetKeyboardControl()
    // Offset: 0x1A97E34
    static int Internal_GetKeyboardControl();
    // static private System.Void Internal_SetHotControl(System.Int32 value)
    // Offset: 0x1A97E68
    static void Internal_SetHotControl(int value);
    // static private System.Void Internal_SetKeyboardControl(System.Int32 value)
    // Offset: 0x1A97EA8
    static void Internal_SetKeyboardControl(int value);
    // static private System.Object Internal_GetDefaultSkin(System.Int32 skinMode)
    // Offset: 0x1A97EE8
    static ::Il2CppObject* Internal_GetDefaultSkin(int skinMode);
    // static private System.Void Internal_ExitGUI()
    // Offset: 0x1A97F28
    static void Internal_ExitGUI();
    // static private System.Void MarkGUIChanged()
    // Offset: 0x1A97F5C
    static void MarkGUIChanged();
    // static public System.Int32 GetControlID(UnityEngine.FocusType focus)
    // Offset: 0x1A8CFC8
    static int GetControlID(UnityEngine::FocusType focus);
    // static public System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focus)
    // Offset: 0x1A853C0
    static int GetControlID(int hint, UnityEngine::FocusType focus);
    // static public System.Object GetStateObject(System.Type t, System.Int32 controlID)
    // Offset: 0x1A86154
    static ::Il2CppObject* GetStateObject(System::Type* t, int controlID);
    // static System.Void set_guiIsExiting(System.Boolean value)
    // Offset: 0x1A97FC0
    static void set_guiIsExiting(bool value);
    // static public System.Int32 get_hotControl()
    // Offset: 0x1A85B60
    static int get_hotControl();
    // static public System.Void set_hotControl(System.Int32 value)
    // Offset: 0x1A85B20
    static void set_hotControl(int value);
    // static System.Void TakeCapture()
    // Offset: 0x1A98018
    static void TakeCapture();
    // static System.Void RemoveCapture()
    // Offset: 0x1A9807C
    static void RemoveCapture();
    // static public System.Int32 get_keyboardControl()
    // Offset: 0x1A87074
    static int get_keyboardControl();
    // static public System.Void set_keyboardControl(System.Int32 value)
    // Offset: 0x1A870A8
    static void set_keyboardControl(int value);
    // static System.Boolean HasKeyFocus(System.Int32 controlID)
    // Offset: 0x1A96E60
    static bool HasKeyFocus(int controlID);
    // static UnityEngine.GUISkin GetDefaultSkin()
    // Offset: 0x1A83A48
    static UnityEngine::GUISkin* GetDefaultSkin();
    // static System.Boolean ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr)
    // Offset: 0x1A980E0
    static bool ProcessEvent(int instanceID, System::IntPtr nativeEventPtr);
    // static System.Void BeginGUI(System.Int32 skinMode, System.Int32 instanceID, System.Int32 useGUILayout)
    // Offset: 0x1A98168
    static void BeginGUI(int skinMode, int instanceID, int useGUILayout);
    // static System.Void EndGUI(System.Int32 layoutType)
    // Offset: 0x1A98330
    static void EndGUI(int layoutType);
    // static System.Boolean EndGUIFromException(System.Exception exception)
    // Offset: 0x1A98504
    static bool EndGUIFromException(System::Exception* exception);
    // static System.Boolean EndContainerGUIFromException(System.Exception exception)
    // Offset: 0x1A9854C
    static bool EndContainerGUIFromException(System::Exception* exception);
    // static System.Void ResetGlobalState()
    // Offset: 0x1A98214
    static void ResetGlobalState();
    // static System.Boolean IsExitGUIException(System.Exception exception)
    // Offset: 0x1A985C0
    static bool IsExitGUIException(System::Exception* exception);
    // static System.Boolean ShouldRethrowException(System.Exception exception)
    // Offset: 0x1A98548
    static bool ShouldRethrowException(System::Exception* exception);
    // static System.Void CheckOnGUI()
    // Offset: 0x1A83888
    static void CheckOnGUI();
    // static public UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect)
    // Offset: 0x1A98640
    static UnityEngine::Rect AlignRectToDevice(UnityEngine::Rect rect);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Int32 offset)
    // Offset: 0x1A9866C
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, int offset);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Boolean isDirectManipulationDevice)
    // Offset: 0x1A9871C
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, bool isDirectManipulationDevice);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Event evt)
    // Offset: 0x1A882D0
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Event* evt);
    // static private System.Int32 GetControlID_Injected(System.Int32 hint, UnityEngine.FocusType focusType, ref UnityEngine.Rect rect)
    // Offset: 0x1A97C44
    static int GetControlID_Injected(int hint, UnityEngine::FocusType focusType, UnityEngine::Rect& rect);
    // static private System.Void AlignRectToDevice_Injected(ref UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels, out UnityEngine.Rect ret)
    // Offset: 0x1A97D14
    static void AlignRectToDevice_Injected(UnityEngine::Rect& rect, int& widthInPixels, int& heightInPixels, UnityEngine::Rect& ret);
    // static private System.Void set_compositionCursorPos_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x1A97DC0
    static void set_compositionCursorPos_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.GUIUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_pixelsPerPoint
// Il2CppName: get_pixelsPerPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::GUIUtility::get_pixelsPerPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_pixelsPerPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_guiDepth
// Il2CppName: get_guiDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::GUIUtility::get_guiDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_guiDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_mouseUsed
// Il2CppName: set_mouseUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUIUtility::set_mouseUsed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_mouseUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_textFieldInput
// Il2CppName: set_textFieldInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUIUtility::set_textFieldInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_textFieldInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_systemCopyBuffer
// Il2CppName: get_systemCopyBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::GUIUtility::get_systemCopyBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_systemCopyBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_systemCopyBuffer
// Il2CppName: set_systemCopyBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::GUIUtility::set_systemCopyBuffer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_systemCopyBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetControlID
// Il2CppName: GetControlID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, UnityEngine::FocusType, UnityEngine::Rect)>(&UnityEngine::GUIUtility::GetControlID)> {
  static const MethodInfo* get() {
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* focusType = &::il2cpp_utils::GetClassFromName("UnityEngine", "FocusType")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetControlID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hint, focusType, rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::AlignRectToDevice
// Il2CppName: AlignRectToDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Rect, int&, int&)>(&UnityEngine::GUIUtility::AlignRectToDevice)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* widthInPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* heightInPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "AlignRectToDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, widthInPixels, heightInPixels});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_compositionString
// Il2CppName: get_compositionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::GUIUtility::get_compositionString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_compositionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_compositionCursorPos
// Il2CppName: set_compositionCursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2)>(&UnityEngine::GUIUtility::set_compositionCursorPos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_compositionCursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_GetHotControl
// Il2CppName: Internal_GetHotControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::GUIUtility::Internal_GetHotControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_GetHotControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_GetKeyboardControl
// Il2CppName: Internal_GetKeyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::GUIUtility::Internal_GetKeyboardControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_GetKeyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_SetHotControl
// Il2CppName: Internal_SetHotControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUIUtility::Internal_SetHotControl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_SetHotControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_SetKeyboardControl
// Il2CppName: Internal_SetKeyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUIUtility::Internal_SetKeyboardControl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_SetKeyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_GetDefaultSkin
// Il2CppName: Internal_GetDefaultSkin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(int)>(&UnityEngine::GUIUtility::Internal_GetDefaultSkin)> {
  static const MethodInfo* get() {
    static auto* skinMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_GetDefaultSkin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::Internal_ExitGUI
// Il2CppName: Internal_ExitGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::Internal_ExitGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "Internal_ExitGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::MarkGUIChanged
// Il2CppName: MarkGUIChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::MarkGUIChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "MarkGUIChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetControlID
// Il2CppName: GetControlID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::FocusType)>(&UnityEngine::GUIUtility::GetControlID)> {
  static const MethodInfo* get() {
    static auto* focus = &::il2cpp_utils::GetClassFromName("UnityEngine", "FocusType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetControlID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focus});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetControlID
// Il2CppName: GetControlID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, UnityEngine::FocusType)>(&UnityEngine::GUIUtility::GetControlID)> {
  static const MethodInfo* get() {
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* focus = &::il2cpp_utils::GetClassFromName("UnityEngine", "FocusType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetControlID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hint, focus});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetStateObject
// Il2CppName: GetStateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*, int)>(&UnityEngine::GUIUtility::GetStateObject)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* controlID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetStateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, controlID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_guiIsExiting
// Il2CppName: set_guiIsExiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUIUtility::set_guiIsExiting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_guiIsExiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_hotControl
// Il2CppName: get_hotControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::GUIUtility::get_hotControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_hotControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_hotControl
// Il2CppName: set_hotControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUIUtility::set_hotControl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_hotControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::TakeCapture
// Il2CppName: TakeCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::TakeCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "TakeCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::RemoveCapture
// Il2CppName: RemoveCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::RemoveCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "RemoveCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::get_keyboardControl
// Il2CppName: get_keyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::GUIUtility::get_keyboardControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "get_keyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_keyboardControl
// Il2CppName: set_keyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUIUtility::set_keyboardControl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_keyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::HasKeyFocus
// Il2CppName: HasKeyFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::GUIUtility::HasKeyFocus)> {
  static const MethodInfo* get() {
    static auto* controlID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "HasKeyFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controlID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetDefaultSkin
// Il2CppName: GetDefaultSkin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUISkin* (*)()>(&UnityEngine::GUIUtility::GetDefaultSkin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetDefaultSkin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::ProcessEvent
// Il2CppName: ProcessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, System::IntPtr)>(&UnityEngine::GUIUtility::ProcessEvent)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nativeEventPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "ProcessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID, nativeEventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::BeginGUI
// Il2CppName: BeginGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, int)>(&UnityEngine::GUIUtility::BeginGUI)> {
  static const MethodInfo* get() {
    static auto* skinMode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useGUILayout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "BeginGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinMode, instanceID, useGUILayout});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::EndGUI
// Il2CppName: EndGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUIUtility::EndGUI)> {
  static const MethodInfo* get() {
    static auto* layoutType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "EndGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layoutType});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::EndGUIFromException
// Il2CppName: EndGUIFromException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*)>(&UnityEngine::GUIUtility::EndGUIFromException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "EndGUIFromException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::EndContainerGUIFromException
// Il2CppName: EndContainerGUIFromException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*)>(&UnityEngine::GUIUtility::EndContainerGUIFromException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "EndContainerGUIFromException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::ResetGlobalState
// Il2CppName: ResetGlobalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::ResetGlobalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "ResetGlobalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::IsExitGUIException
// Il2CppName: IsExitGUIException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*)>(&UnityEngine::GUIUtility::IsExitGUIException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "IsExitGUIException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::ShouldRethrowException
// Il2CppName: ShouldRethrowException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*)>(&UnityEngine::GUIUtility::ShouldRethrowException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "ShouldRethrowException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::CheckOnGUI
// Il2CppName: CheckOnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIUtility::CheckOnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "CheckOnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::AlignRectToDevice
// Il2CppName: AlignRectToDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Rect)>(&UnityEngine::GUIUtility::AlignRectToDevice)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "AlignRectToDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::HitTest
// Il2CppName: HitTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Rect, UnityEngine::Vector2, int)>(&UnityEngine::GUIUtility::HitTest)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "HitTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, point, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::HitTest
// Il2CppName: HitTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Rect, UnityEngine::Vector2, bool)>(&UnityEngine::GUIUtility::HitTest)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* isDirectManipulationDevice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "HitTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, point, isDirectManipulationDevice});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::HitTest
// Il2CppName: HitTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Rect, UnityEngine::Event*)>(&UnityEngine::GUIUtility::HitTest)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "HitTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::GetControlID_Injected
// Il2CppName: GetControlID_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, UnityEngine::FocusType, UnityEngine::Rect&)>(&UnityEngine::GUIUtility::GetControlID_Injected)> {
  static const MethodInfo* get() {
    static auto* hint = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* focusType = &::il2cpp_utils::GetClassFromName("UnityEngine", "FocusType")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "GetControlID_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hint, focusType, rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::AlignRectToDevice_Injected
// Il2CppName: AlignRectToDevice_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rect&, int&, int&, UnityEngine::Rect&)>(&UnityEngine::GUIUtility::AlignRectToDevice_Injected)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* widthInPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* heightInPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "AlignRectToDevice_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, widthInPixels, heightInPixels, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIUtility::set_compositionCursorPos_Injected
// Il2CppName: set_compositionCursorPos_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2&)>(&UnityEngine::GUIUtility::set_compositionCursorPos_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIUtility*), "set_compositionCursorPos_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
