// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferOwners
  class CommandBufferOwners;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraEvent
  struct CameraEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CommandBufferGOCore
  class CommandBufferGOCore : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* cameras;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>*) == 0x8);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // Creating value type constructor for type: CommandBufferGOCore
    CommandBufferGOCore(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* cameras_ = {}, UnityEngine::Mesh* mesh_ = {}) noexcept : cameras{cameras_}, mesh{mesh_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE01A14
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // protected System.Void OnEnable()
    // Offset: 0x235DCF0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x235E118
    void OnDisable();
    // protected System.Void OnWillRenderObject()
    // Offset: 0x235E498
    void OnWillRenderObject();
    // protected UnityEngine.Rendering.CameraEvent CommandBufferCameraEvent()
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();
    // protected UnityEngine.Rendering.CommandBuffer CreateCommandBuffer(UnityEngine.Camera camera)
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(UnityEngine::Camera* camera);
    // protected System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CamerasDict()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* CamerasDict();
    // protected System.Void .ctor()
    // Offset: 0x235DC74
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBufferGOCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CommandBufferGOCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBufferGOCore*, creationType>()));
    }
  }; // CommandBufferGOCore
  #pragma pack(pop)
  static check_size<sizeof(CommandBufferGOCore), 32 + sizeof(UnityEngine::Mesh*)> __GlobalNamespace_CommandBufferGOCoreSizeCheck;
  static_assert(sizeof(CommandBufferGOCore) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGOCore*, "", "CommandBufferGOCore");
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::OnWillRenderObject
// Il2CppName: OnWillRenderObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::CommandBufferCameraEvent
// Il2CppName: CommandBufferCameraEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::CreateCommandBuffer
// Il2CppName: CreateCommandBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::CamerasDict
// Il2CppName: CamerasDict
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGOCore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
