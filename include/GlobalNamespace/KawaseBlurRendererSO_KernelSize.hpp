// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KawaseBlurRendererSO
#include "GlobalNamespace/KawaseBlurRendererSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBlurRendererSO/KernelSize
  // [TokenAttribute] Offset: FFFFFFFF
  struct KawaseBlurRendererSO::KernelSize/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: KernelSize
    constexpr KernelSize(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel7
    static constexpr const int Kernel7 = 0;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel7
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel7();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel7
    static void _set_Kernel7(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel15
    static constexpr const int Kernel15 = 1;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel15
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel15();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel15
    static void _set_Kernel15(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel23
    static constexpr const int Kernel23 = 2;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel23
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel23();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel23
    static void _set_Kernel23(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel35
    static constexpr const int Kernel35 = 3;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel35
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel35();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel35
    static void _set_Kernel35(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel63
    static constexpr const int Kernel63 = 4;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel63
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel63();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel63
    static void _set_Kernel63(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel127
    static constexpr const int Kernel127 = 5;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel127
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel127();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel127
    static void _set_Kernel127(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel135
    static constexpr const int Kernel135 = 6;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel135
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel135();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel135
    static void _set_Kernel135(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // static field const value: static public KawaseBlurRendererSO/KernelSize Kernel143
    static constexpr const int Kernel143 = 7;
    // Get static field: static public KawaseBlurRendererSO/KernelSize Kernel143
    static GlobalNamespace::KawaseBlurRendererSO::KernelSize _get_Kernel143();
    // Set static field: static public KawaseBlurRendererSO/KernelSize Kernel143
    static void _set_Kernel143(GlobalNamespace::KawaseBlurRendererSO::KernelSize value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // KawaseBlurRendererSO/KernelSize
  #pragma pack(pop)
  static check_size<sizeof(KawaseBlurRendererSO::KernelSize), 0 + sizeof(int)> __GlobalNamespace_KawaseBlurRendererSO_KernelSizeSizeCheck;
  static_assert(sizeof(KawaseBlurRendererSO::KernelSize) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO::KernelSize, "", "KawaseBlurRendererSO/KernelSize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
