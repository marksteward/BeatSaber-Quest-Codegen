// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: KeyCode
  struct KeyCode;
  // Forward declaring type: Touch
  struct Touch;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: IMECompositionMode
  struct IMECompositionMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Input
  // [NativeHeaderAttribute] Offset: DB153C
  class Input : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Input
    Input() noexcept {}
    // static private System.Boolean GetKeyInt(UnityEngine.KeyCode key)
    // Offset: 0x23ED4B4
    static bool GetKeyInt(UnityEngine::KeyCode key);
    // static private System.Boolean GetKeyUpInt(UnityEngine.KeyCode key)
    // Offset: 0x23ED4F4
    static bool GetKeyUpInt(UnityEngine::KeyCode key);
    // static private System.Boolean GetKeyDownInt(UnityEngine.KeyCode key)
    // Offset: 0x23ED534
    static bool GetKeyDownInt(UnityEngine::KeyCode key);
    // static private System.Boolean GetKeyDownString(System.String name)
    // Offset: 0x23ED574
    static bool GetKeyDownString(::Il2CppString* name);
    // static public System.Single GetAxis(System.String axisName)
    // Offset: 0x23ED5B4
    static float GetAxis(::Il2CppString* axisName);
    // static public System.Single GetAxisRaw(System.String axisName)
    // Offset: 0x23ED5F4
    static float GetAxisRaw(::Il2CppString* axisName);
    // static public System.Boolean GetButton(System.String buttonName)
    // Offset: 0x23ED634
    static bool GetButton(::Il2CppString* buttonName);
    // static public System.Boolean GetButtonDown(System.String buttonName)
    // Offset: 0x23ED674
    static bool GetButtonDown(::Il2CppString* buttonName);
    // static public System.Boolean GetMouseButton(System.Int32 button)
    // Offset: 0x23ED6B4
    static bool GetMouseButton(int button);
    // static public System.Boolean GetMouseButtonDown(System.Int32 button)
    // Offset: 0x23ED6F4
    static bool GetMouseButtonDown(int button);
    // static public System.Boolean GetMouseButtonUp(System.Int32 button)
    // Offset: 0x23ED734
    static bool GetMouseButtonUp(int button);
    // static public UnityEngine.Touch GetTouch(System.Int32 index)
    // Offset: 0x23ED774
    static UnityEngine::Touch GetTouch(int index);
    // static public System.Boolean GetKey(UnityEngine.KeyCode key)
    // Offset: 0x23ED840
    static bool GetKey(UnityEngine::KeyCode key);
    // static public System.Boolean GetKeyUp(UnityEngine.KeyCode key)
    // Offset: 0x23ED880
    static bool GetKeyUp(UnityEngine::KeyCode key);
    // static public System.Boolean GetKeyDown(UnityEngine.KeyCode key)
    // Offset: 0x23ED8C0
    static bool GetKeyDown(UnityEngine::KeyCode key);
    // static public System.Boolean GetKeyDown(System.String name)
    // Offset: 0x23ED900
    static bool GetKeyDown(::Il2CppString* name);
    // static public System.Boolean get_anyKeyDown()
    // Offset: 0x23ED940
    static bool get_anyKeyDown();
    // static public UnityEngine.Vector3 get_mousePosition()
    // Offset: 0x23ED974
    static UnityEngine::Vector3 get_mousePosition();
    // static public UnityEngine.Vector2 get_mouseScrollDelta()
    // Offset: 0x23EDA0C
    static UnityEngine::Vector2 get_mouseScrollDelta();
    // static public UnityEngine.IMECompositionMode get_imeCompositionMode()
    // Offset: 0x23EDA94
    static UnityEngine::IMECompositionMode get_imeCompositionMode();
    // static public System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
    // Offset: 0x23EDAC8
    static void set_imeCompositionMode(UnityEngine::IMECompositionMode value);
    // static public System.String get_compositionString()
    // Offset: 0x23EDB08
    static ::Il2CppString* get_compositionString();
    // static public UnityEngine.Vector2 get_compositionCursorPos()
    // Offset: 0x23EDB3C
    static UnityEngine::Vector2 get_compositionCursorPos();
    // static public System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
    // Offset: 0x23EDBC4
    static void set_compositionCursorPos(UnityEngine::Vector2 value);
    // static public System.Boolean get_mousePresent()
    // Offset: 0x23EDC48
    static bool get_mousePresent();
    // static public System.Int32 get_touchCount()
    // Offset: 0x23EDC7C
    static int get_touchCount();
    // static public System.Boolean get_touchSupported()
    // Offset: 0x23EDCB0
    static bool get_touchSupported();
    // static private System.Void GetTouch_Injected(System.Int32 index, out UnityEngine.Touch ret)
    // Offset: 0x23ED7F0
    static void GetTouch_Injected(int index, UnityEngine::Touch& ret);
    // static private System.Void get_mousePosition_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23ED9CC
    static void get_mousePosition_Injected(UnityEngine::Vector3& ret);
    // static private System.Void get_mouseScrollDelta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x23EDA54
    static void get_mouseScrollDelta_Injected(UnityEngine::Vector2& ret);
    // static private System.Void get_compositionCursorPos_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x23EDB84
    static void get_compositionCursorPos_Injected(UnityEngine::Vector2& ret);
    // static private System.Void set_compositionCursorPos_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x23EDC08
    static void set_compositionCursorPos_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.Input
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Input*, "UnityEngine", "Input");
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyInt
// Il2CppName: GetKeyInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKeyInt)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyUpInt
// Il2CppName: GetKeyUpInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKeyUpInt)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyUpInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyDownInt
// Il2CppName: GetKeyDownInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKeyDownInt)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyDownInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyDownString
// Il2CppName: GetKeyDownString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::Input::GetKeyDownString)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyDownString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*)>(&UnityEngine::Input::GetAxis)> {
  const MethodInfo* get() {
    static auto* axisName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetAxisRaw
// Il2CppName: GetAxisRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*)>(&UnityEngine::Input::GetAxisRaw)> {
  const MethodInfo* get() {
    static auto* axisName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetAxisRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetButton
// Il2CppName: GetButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::Input::GetButton)> {
  const MethodInfo* get() {
    static auto* buttonName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetButtonDown
// Il2CppName: GetButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::Input::GetButtonDown)> {
  const MethodInfo* get() {
    static auto* buttonName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetMouseButton
// Il2CppName: GetMouseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Input::GetMouseButton)> {
  const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetMouseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetMouseButtonDown
// Il2CppName: GetMouseButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Input::GetMouseButtonDown)> {
  const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetMouseButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetMouseButtonUp
// Il2CppName: GetMouseButtonUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Input::GetMouseButtonUp)> {
  const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetMouseButtonUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetTouch
// Il2CppName: GetTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Touch (*)(int)>(&UnityEngine::Input::GetTouch)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKey)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyUp
// Il2CppName: GetKeyUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKeyUp)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyDown
// Il2CppName: GetKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::KeyCode)>(&UnityEngine::Input::GetKeyDown)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetKeyDown
// Il2CppName: GetKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::Input::GetKeyDown)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_anyKeyDown
// Il2CppName: get_anyKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Input::get_anyKeyDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_anyKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_mousePosition
// Il2CppName: get_mousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)()>(&UnityEngine::Input::get_mousePosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_mousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_mouseScrollDelta
// Il2CppName: get_mouseScrollDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&UnityEngine::Input::get_mouseScrollDelta)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_mouseScrollDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_imeCompositionMode
// Il2CppName: get_imeCompositionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::IMECompositionMode (*)()>(&UnityEngine::Input::get_imeCompositionMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_imeCompositionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::set_imeCompositionMode
// Il2CppName: set_imeCompositionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::IMECompositionMode)>(&UnityEngine::Input::set_imeCompositionMode)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "IMECompositionMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "set_imeCompositionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_compositionString
// Il2CppName: get_compositionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Input::get_compositionString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_compositionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_compositionCursorPos
// Il2CppName: get_compositionCursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&UnityEngine::Input::get_compositionCursorPos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_compositionCursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::set_compositionCursorPos
// Il2CppName: set_compositionCursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2)>(&UnityEngine::Input::set_compositionCursorPos)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "set_compositionCursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_mousePresent
// Il2CppName: get_mousePresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Input::get_mousePresent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_mousePresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_touchCount
// Il2CppName: get_touchCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Input::get_touchCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_touchCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_touchSupported
// Il2CppName: get_touchSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Input::get_touchSupported)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_touchSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::GetTouch_Injected
// Il2CppName: GetTouch_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::Touch&)>(&UnityEngine::Input::GetTouch_Injected)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Touch")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "GetTouch_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_mousePosition_Injected
// Il2CppName: get_mousePosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&)>(&UnityEngine::Input::get_mousePosition_Injected)> {
  const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_mousePosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_mouseScrollDelta_Injected
// Il2CppName: get_mouseScrollDelta_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2&)>(&UnityEngine::Input::get_mouseScrollDelta_Injected)> {
  const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_mouseScrollDelta_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::get_compositionCursorPos_Injected
// Il2CppName: get_compositionCursorPos_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2&)>(&UnityEngine::Input::get_compositionCursorPos_Injected)> {
  const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "get_compositionCursorPos_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Input::set_compositionCursorPos_Injected
// Il2CppName: set_compositionCursorPos_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector2&)>(&UnityEngine::Input::set_compositionCursorPos_Injected)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Input*), "set_compositionCursorPos_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
