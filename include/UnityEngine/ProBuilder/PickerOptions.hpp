// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ProBuilder.RectSelectMode
#include "UnityEngine/ProBuilder/RectSelectMode.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.PickerOptions
  struct PickerOptions : public System::ValueType {
    public:
    // private System.Boolean <depthTest>k__BackingField
    // Offset: 0x0
    bool depthTest;
    // private UnityEngine.ProBuilder.RectSelectMode <rectSelectMode>k__BackingField
    // Offset: 0x4
    UnityEngine::ProBuilder::RectSelectMode rectSelectMode;
    // Creating value type constructor for type: PickerOptions
    constexpr PickerOptions(bool depthTest_ = {}, UnityEngine::ProBuilder::RectSelectMode rectSelectMode_ = {}) : depthTest{depthTest_}, rectSelectMode{rectSelectMode_} {}
    // Get static field: static private readonly UnityEngine.ProBuilder.PickerOptions k_Default
    static UnityEngine::ProBuilder::PickerOptions _get_k_Default();
    // Set static field: static private readonly UnityEngine.ProBuilder.PickerOptions k_Default
    static void _set_k_Default(UnityEngine::ProBuilder::PickerOptions value);
    // public System.Boolean get_depthTest()
    // Offset: 0xA40034
    bool get_depthTest();
    // public System.Void set_depthTest(System.Boolean value)
    // Offset: 0xA4003C
    void set_depthTest(bool value);
    // public UnityEngine.ProBuilder.RectSelectMode get_rectSelectMode()
    // Offset: 0xA40048
    UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode();
    // public System.Void set_rectSelectMode(UnityEngine.ProBuilder.RectSelectMode value)
    // Offset: 0xA40050
    void set_rectSelectMode(UnityEngine::ProBuilder::RectSelectMode value);
    // static public UnityEngine.ProBuilder.PickerOptions get_Default()
    // Offset: 0x10322E0
    static UnityEngine::ProBuilder::PickerOptions get_Default();
    // public System.Boolean Equals(UnityEngine.ProBuilder.PickerOptions other)
    // Offset: 0xA40060
    bool Equals(UnityEngine::ProBuilder::PickerOptions other);
    // static private System.Void .cctor()
    // Offset: 0x10324D0
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA40058
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA40098
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.PickerOptions
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.PickerOptions a, UnityEngine.ProBuilder.PickerOptions b)
  // Offset: 0x1032468
  bool operator ==(const UnityEngine::ProBuilder::PickerOptions& a, const UnityEngine::ProBuilder::PickerOptions& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.PickerOptions a, UnityEngine.ProBuilder.PickerOptions b)
  // Offset: 0x103249C
  bool operator !=(const UnityEngine::ProBuilder::PickerOptions& a, const UnityEngine::ProBuilder::PickerOptions& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PickerOptions, "UnityEngine.ProBuilder", "PickerOptions");
#pragma pack(pop)
