// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestAsyncOperation
  // [UsedByNativeCodeAttribute] Offset: D00278
  // [NativeHeaderAttribute] Offset: D00278
  // [NativeHeaderAttribute] Offset: D00278
  class UnityWebRequestAsyncOperation : public UnityEngine::AsyncOperation {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD00438
    // [CompilerGeneratedAttribute] Offset: 0xD00438
    // private UnityEngine.Networking.UnityWebRequest <webRequest>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: UnityWebRequestAsyncOperation
    UnityWebRequestAsyncOperation(UnityEngine::Networking::UnityWebRequest* webRequest_ = {}) noexcept : webRequest{webRequest_} {}
    // Creating conversion operator: operator UnityEngine::Networking::UnityWebRequest*
    constexpr operator UnityEngine::Networking::UnityWebRequest*() const noexcept {
      return webRequest;
    }
    // System.Void set_webRequest(UnityEngine.Networking.UnityWebRequest value)
    // Offset: 0x218B748
    void set_webRequest(UnityEngine::Networking::UnityWebRequest* value);
    // public System.Void .ctor()
    // Offset: 0x218B750
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequestAsyncOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UnityWebRequestAsyncOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequestAsyncOperation*, creationType>()));
    }
  }; // UnityEngine.Networking.UnityWebRequestAsyncOperation
  #pragma pack(pop)
  static check_size<sizeof(UnityWebRequestAsyncOperation), 32 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __UnityEngine_Networking_UnityWebRequestAsyncOperationSizeCheck;
  static_assert(sizeof(UnityWebRequestAsyncOperation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestAsyncOperation*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
