// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRUIControls.VRGraphicRaycaster
#include "VRUIControls/VRGraphicRaycaster.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRGraphicRaycaster/<>c
  // [CompilerGeneratedAttribute] Offset: E03EDC
  class VRGraphicRaycaster::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly VRUIControls.VRGraphicRaycaster/<>c <>9
    static VRUIControls::VRGraphicRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly VRUIControls.VRGraphicRaycaster/<>c <>9
    static void _set_$$9(VRUIControls::VRGraphicRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult> <>9__12_0
    static System::Comparison_1<VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* _get_$$9__12_0();
    // Set static field: static public System.Comparison`1<VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult> <>9__12_0
    static void _set_$$9__12_0(System::Comparison_1<VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* value);
    // static private System.Void .cctor()
    // Offset: 0x2366CA0
    static void _cctor();
    // System.Int32 <RaycastCanvas>b__12_0(VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult g1, VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult g2)
    // Offset: 0x2366D0C
    int $RaycastCanvas$b__12_0(VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult g1, VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult g2);
    // public System.Void .ctor()
    // Offset: 0x2366D04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRGraphicRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::VRGraphicRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRGraphicRaycaster::$$c*, creationType>()));
    }
  }; // VRUIControls.VRGraphicRaycaster/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRGraphicRaycaster::$$c*, "VRUIControls", "VRGraphicRaycaster/<>c");
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::$RaycastCanvas$b__12_0
// Il2CppName: <RaycastCanvas>b__12_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: VRUIControls::VRGraphicRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
