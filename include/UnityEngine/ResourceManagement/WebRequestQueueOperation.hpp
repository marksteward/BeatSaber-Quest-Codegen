// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.WebRequestQueueOperation
  class WebRequestQueueOperation : public ::Il2CppObject {
    public:
    // public UnityEngine.Networking.UnityWebRequestAsyncOperation Result
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Networking::UnityWebRequestAsyncOperation* Result;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequestAsyncOperation*) == 0x8);
    // public System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> OnComplete
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>*) == 0x8);
    // UnityEngine.Networking.UnityWebRequest m_WebRequest
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* m_WebRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: WebRequestQueueOperation
    WebRequestQueueOperation(UnityEngine::Networking::UnityWebRequestAsyncOperation* Result_ = {}, System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete_ = {}, UnityEngine::Networking::UnityWebRequest* m_WebRequest_ = {}) noexcept : Result{Result_}, OnComplete{OnComplete_}, m_WebRequest{m_WebRequest_} {}
    // public System.Boolean get_IsDone()
    // Offset: 0x19B27DC
    bool get_IsDone();
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x19B8C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestQueueOperation* New_ctor(UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::WebRequestQueueOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestQueueOperation*, creationType>(request)));
    }
    // System.Void Complete(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOp)
    // Offset: 0x19B8E78
    void Complete(UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);
  }; // UnityEngine.ResourceManagement.WebRequestQueueOperation
  #pragma pack(pop)
  static check_size<sizeof(WebRequestQueueOperation), 32 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __UnityEngine_ResourceManagement_WebRequestQueueOperationSizeCheck;
  static_assert(sizeof(WebRequestQueueOperation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::WebRequestQueueOperation*, "UnityEngine.ResourceManagement", "WebRequestQueueOperation");