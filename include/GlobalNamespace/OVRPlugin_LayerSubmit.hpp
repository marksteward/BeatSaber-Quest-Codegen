// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/LayerSubmit
  struct OVRPlugin::LayerSubmit : public System::ValueType {
    public:
    // private System.Int32 LayerId
    // Offset: 0x0
    int LayerId;
    // private System.Int32 TextureStage
    // Offset: 0x4
    int TextureStage;
    // private OVRPlugin/Recti[] ViewportRect
    // Offset: 0x8
    ::Array<GlobalNamespace::OVRPlugin::Recti>* ViewportRect;
    // private OVRPlugin/Posef Pose
    // Offset: 0x10
    GlobalNamespace::OVRPlugin::Posef Pose;
    // private System.Int32 LayerSubmitFlags
    // Offset: 0x2C
    int LayerSubmitFlags;
    // Creating value type constructor for type: LayerSubmit
    constexpr LayerSubmit(int LayerId_ = {}, int TextureStage_ = {}, ::Array<GlobalNamespace::OVRPlugin::Recti>* ViewportRect_ = {}, GlobalNamespace::OVRPlugin::Posef Pose_ = {}, int LayerSubmitFlags_ = {}) : LayerId{LayerId_}, TextureStage{TextureStage_}, ViewportRect{ViewportRect_}, Pose{Pose_}, LayerSubmitFlags{LayerSubmitFlags_} {}
  }; // OVRPlugin/LayerSubmit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::LayerSubmit, "", "OVRPlugin/LayerSubmit");
#pragma pack(pop)
