// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: LayerMasks
  // [] Offset: FFFFFFFF
  class LayerMasks : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LayerMasks
    LayerMasks() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA3854
    // Get static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static UnityEngine::LayerMask _get_saberLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static void _set_saberLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA3864
    // Get static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static UnityEngine::LayerMask _get_noteLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static void _set_noteLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA3874
    // Get static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static UnityEngine::LayerMask _get_noteDebrisLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static void _set_noteDebrisLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA3884
    // Get static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static UnityEngine::LayerMask _get_cutEffectParticlesLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static void _set_cutEffectParticlesLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA3894
    // Get static field: static public readonly System.Int32 noteDebrisLayer
    static int _get_noteDebrisLayer();
    // Set static field: static public readonly System.Int32 noteDebrisLayer
    static void _set_noteDebrisLayer(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA38A4
    // Get static field: static public readonly System.Int32 cutEffectParticlesLayer
    static int _get_cutEffectParticlesLayer();
    // Set static field: static public readonly System.Int32 cutEffectParticlesLayer
    static void _set_cutEffectParticlesLayer(int value);
    // static private UnityEngine.LayerMask GetLayerMask(System.String layerName)
    // Offset: 0x1A0CEF8
    static UnityEngine::LayerMask GetLayerMask(::Il2CppString* layerName);
    // static private UnityEngine.LayerMask GetLayerMask(System.Int32 layerNum)
    // Offset: 0x1A0CF34
    static UnityEngine::LayerMask GetLayerMask(int layerNum);
    // static private System.Int32 GetLayer(System.String layerName)
    // Offset: 0x1A0CF68
    static int GetLayer(::Il2CppString* layerName);
    // static private System.Void .cctor()
    // Offset: 0x1A0CF78
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A0CF70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayerMasks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LayerMasks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayerMasks*, creationType>()));
    }
  }; // LayerMasks
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LayerMasks*, "", "LayerMasks");
#pragma pack(pop)
