// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.PercentSlider
  class PercentSlider : public HMUI::RangeValuesTextSlider {
    public:
    // Creating value type constructor for type: PercentSlider
    PercentSlider() noexcept {}
    // protected override System.String TextForValue(System.Single value)
    // Offset: 0x1218B94
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.String RangeValuesTextSlider::TextForValue(System.Single value)
    ::Il2CppString* TextForValue(float value);
    // public System.Void .ctor()
    // Offset: 0x1218C24
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.Void RangeValuesTextSlider::.ctor()
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PercentSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::PercentSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PercentSlider*, creationType>()));
    }
  }; // HMUI.PercentSlider
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PercentSlider*, "HMUI", "PercentSlider");
