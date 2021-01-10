// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.UploadHandler
#include "UnityEngine/Networking/UploadHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Networking.UploadHandlerRaw
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D906D0
  class UploadHandlerRaw : public UnityEngine::Networking::UploadHandler {
    public:
    // Creating value type constructor for type: UploadHandlerRaw
    UploadHandlerRaw() noexcept {}
    // static private System.IntPtr Create(UnityEngine.Networking.UploadHandlerRaw self, System.Byte[] data)
    // Offset: 0x19DFC44
    static System::IntPtr Create(UnityEngine::Networking::UploadHandlerRaw* self, ::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x19DFC94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadHandlerRaw* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UploadHandlerRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadHandlerRaw*, creationType>(data)));
    }
  }; // UnityEngine.Networking.UploadHandlerRaw
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
#pragma pack(pop)
