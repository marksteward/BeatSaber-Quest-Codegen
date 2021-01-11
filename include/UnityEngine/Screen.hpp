// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Resolution
#include "UnityEngine/Resolution.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Screen
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4BA8C
  // [NativeHeaderAttribute] Offset: D4BA8C
  // [StaticAccessorAttribute] Offset: D4BA8C
  class Screen : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Screen
    Screen() noexcept {}
    // static public System.Int32 get_width()
    // Offset: 0x16C0130
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x16C0164
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x16C0198
    static float get_dpi();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x16C01CC
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x16C0200
    static void set_fullScreen(bool value);
    // static public UnityEngine.Resolution[] get_resolutions()
    // Offset: 0x16C0240
    static ::Array<UnityEngine::Resolution>* get_resolutions();
  }; // UnityEngine.Screen
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Screen*, "UnityEngine", "Screen");
