// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CommandBufferGOCore
#include "GlobalNamespace/CommandBufferGOCore.hpp"
// Including type: UnityEngine.Rendering.CameraEvent
#include "UnityEngine/Rendering/CameraEvent.hpp"
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
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferOwners
  class CommandBufferOwners;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: CommandBufferGrabPass
  // [ExecuteInEditMode] Offset: E01808
  class CommandBufferGrabPass : public GlobalNamespace::CommandBufferGOCore {
    public:
    // private System.String _textureName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* textureName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Rendering.CameraEvent _cameraEvent
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::Rendering::CameraEvent cameraEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CameraEvent) == 0x4);
    // Creating value type constructor for type: CommandBufferGrabPass
    CommandBufferGrabPass(::Il2CppString* textureName_ = {}, UnityEngine::Rendering::CameraEvent cameraEvent_ = {}) noexcept : textureName{textureName_}, cameraEvent{cameraEvent_} {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* _get__cameras();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static void _set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* value);
    // protected override UnityEngine.Rendering.CommandBuffer CreateCommandBuffer(UnityEngine.Camera camera)
    // Offset: 0x235E73C
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CommandBuffer CommandBufferGOCore::CreateCommandBuffer(UnityEngine.Camera camera)
    UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(UnityEngine::Camera* camera);
    // protected override System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CamerasDict()
    // Offset: 0x235E918
    // Implemented from: CommandBufferGOCore
    // Base method: System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CommandBufferGOCore::CamerasDict()
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* CamerasDict();
    // protected override UnityEngine.Rendering.CameraEvent CommandBufferCameraEvent()
    // Offset: 0x235E980
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CameraEvent CommandBufferGOCore::CommandBufferCameraEvent()
    UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();
    // public System.Void .ctor()
    // Offset: 0x235E988
    // Implemented from: CommandBufferGOCore
    // Base method: System.Void CommandBufferGOCore::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBufferGrabPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CommandBufferGrabPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBufferGrabPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x235E9E8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CommandBufferGrabPass
  #pragma pack(pop)
  static check_size<sizeof(CommandBufferGrabPass), 48 + sizeof(UnityEngine::Rendering::CameraEvent)> __GlobalNamespace_CommandBufferGrabPassSizeCheck;
  static_assert(sizeof(CommandBufferGrabPass) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGrabPass*, "", "CommandBufferGrabPass");
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer
// Il2CppName: CreateCommandBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CamerasDict
// Il2CppName: CamerasDict
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent
// Il2CppName: CommandBufferCameraEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
