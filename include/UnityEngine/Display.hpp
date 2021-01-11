// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Display
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4BA40
  // [UsedByNativeCodeAttribute] Offset: D4BA40
  class Display : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Display::DisplaysUpdatedDelegate
    class DisplaysUpdatedDelegate;
    // System.IntPtr nativeDisplay
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr nativeDisplay;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: Display
    Display(System::IntPtr nativeDisplay_ = {}) noexcept : nativeDisplay{nativeDisplay_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return nativeDisplay;
    }
    // Get static field: static public UnityEngine.Display[] displays
    static ::Array<UnityEngine::Display*>* _get_displays();
    // Set static field: static public UnityEngine.Display[] displays
    static void _set_displays(::Array<UnityEngine::Display*>* value);
    // Get static field: static private UnityEngine.Display _mainDisplay
    static UnityEngine::Display* _get__mainDisplay();
    // Set static field: static private UnityEngine.Display _mainDisplay
    static void _set__mainDisplay(UnityEngine::Display* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD502C8
    // [CompilerGeneratedAttribute] Offset: 0xD502C8
    // Get static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
    static UnityEngine::Display::DisplaysUpdatedDelegate* _get_onDisplaysUpdated();
    // Set static field: static private UnityEngine.Display/DisplaysUpdatedDelegate onDisplaysUpdated
    static void _set_onDisplaysUpdated(UnityEngine::Display::DisplaysUpdatedDelegate* value);
    // System.Void .ctor(System.IntPtr nativeDisplay)
    // Offset: 0x168559C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Display* New_ctor(System::IntPtr nativeDisplay) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Display*, creationType>(nativeDisplay)));
    }
    // public System.Int32 get_renderingWidth()
    // Offset: 0x16855C8
    int get_renderingWidth();
    // public System.Int32 get_renderingHeight()
    // Offset: 0x16856C4
    int get_renderingHeight();
    // public System.Int32 get_systemWidth()
    // Offset: 0x1685768
    int get_systemWidth();
    // public System.Int32 get_systemHeight()
    // Offset: 0x1685864
    int get_systemHeight();
    // static public UnityEngine.Vector3 RelativeMouseAt(UnityEngine.Vector3 inputMouseCoordinates)
    // Offset: 0x1685908
    static UnityEngine::Vector3 RelativeMouseAt(UnityEngine::Vector3 inputMouseCoordinates);
    // static public UnityEngine.Display get_main()
    // Offset: 0x1685A3C
    static UnityEngine::Display* get_main();
    // static private System.Void RecreateDisplayList(System.IntPtr[] nativeDisplay)
    // Offset: 0x1685AA4
    static void RecreateDisplayList(::Array<System::IntPtr>* nativeDisplay);
    // static private System.Void FireDisplaysUpdated()
    // Offset: 0x1685C74
    static void FireDisplaysUpdated();
    // static private System.Void GetSystemExtImpl(System.IntPtr nativeDisplay, out System.Int32 w, out System.Int32 h)
    // Offset: 0x168580C
    static void GetSystemExtImpl(System::IntPtr nativeDisplay, int& w, int& h);
    // static private System.Void GetRenderingExtImpl(System.IntPtr nativeDisplay, out System.Int32 w, out System.Int32 h)
    // Offset: 0x168566C
    static void GetRenderingExtImpl(System::IntPtr nativeDisplay, int& w, int& h);
    // static private System.Int32 RelativeMouseAtImpl(System.Int32 x, System.Int32 y, out System.Int32 rx, out System.Int32 ry)
    // Offset: 0x16859D4
    static int RelativeMouseAtImpl(int x, int y, int& rx, int& ry);
    // static private System.Void .cctor()
    // Offset: 0x1685F24
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x168555C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Display* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Display*, creationType>()));
    }
  }; // UnityEngine.Display
  static check_size<sizeof(Display), 16 + sizeof(System::IntPtr)> __UnityEngine_DisplaySizeCheck;
  static_assert(sizeof(Display) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Display*, "UnityEngine", "Display");
