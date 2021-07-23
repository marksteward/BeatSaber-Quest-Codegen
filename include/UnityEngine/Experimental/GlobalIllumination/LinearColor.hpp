// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LinearColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct LinearColor/*, public System::ValueType*/ {
    public:
    // private System.Single m_red
    // Size: 0x4
    // Offset: 0x0
    float m_red;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_green
    // Size: 0x4
    // Offset: 0x4
    float m_green;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_blue
    // Size: 0x4
    // Offset: 0x8
    float m_blue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_intensity
    // Size: 0x4
    // Offset: 0xC
    float m_intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LinearColor
    constexpr LinearColor(float m_red_ = {}, float m_green_ = {}, float m_blue_ = {}, float m_intensity_ = {}) noexcept : m_red{m_red_}, m_green{m_green_}, m_blue{m_blue_}, m_intensity{m_intensity_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Single m_red
    float _get_m_red();
    // Set instance field: private System.Single m_red
    void _set_m_red(float value);
    // Get instance field: private System.Single m_green
    float _get_m_green();
    // Set instance field: private System.Single m_green
    void _set_m_green(float value);
    // Get instance field: private System.Single m_blue
    float _get_m_blue();
    // Set instance field: private System.Single m_blue
    void _set_m_blue(float value);
    // Get instance field: private System.Single m_intensity
    float _get_m_intensity();
    // Set instance field: private System.Single m_intensity
    void _set_m_intensity(float value);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Convert(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x1BE8AD8
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(UnityEngine::Color color, float intensity);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Black()
    // Offset: 0x1BEA06C
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Black();
  }; // UnityEngine.Experimental.GlobalIllumination.LinearColor
  #pragma pack(pop)
  static check_size<sizeof(LinearColor), 12 + sizeof(float)> __UnityEngine_Experimental_GlobalIllumination_LinearColorSizeCheck;
  static_assert(sizeof(LinearColor) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::GlobalIllumination::LinearColor (*)(UnityEngine::Color, float)>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, intensity});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Black
// Il2CppName: Black
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::GlobalIllumination::LinearColor (*)()>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::Black)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "Black", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
