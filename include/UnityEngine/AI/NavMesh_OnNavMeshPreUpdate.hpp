// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AI.NavMesh
#include "UnityEngine/AI/NavMesh.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Size: 0x70
  // Autogenerated type: UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
  // [] Offset: FFFFFFFF
  class NavMesh::OnNavMeshPreUpdate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNavMeshPreUpdate
    OnNavMeshPreUpdate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A0A8D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMesh::OnNavMeshPreUpdate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AI::NavMesh::OnNavMeshPreUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMesh::OnNavMeshPreUpdate*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x1A0A430
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A0A8E4
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A0A910
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMesh::OnNavMeshPreUpdate*, "UnityEngine.AI", "NavMesh/OnNavMeshPreUpdate");
#pragma pack(pop)
