// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/UploadScoreCompletionHandler
  // [] Offset: FFFFFFFF
  class PlatformLeaderboardsModel::UploadScoreCompletionHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UploadScoreCompletionHandler
    UploadScoreCompletionHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF0AE60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardsModel::UploadScoreCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardsModel::UploadScoreCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformLeaderboardsModel/UploadScoreResult result)
    // Offset: 0xF0A248
    void Invoke(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result);
    // public System.IAsyncResult BeginInvoke(PlatformLeaderboardsModel/UploadScoreResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF0AE74
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF0AF00
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformLeaderboardsModel/UploadScoreCompletionHandler
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*, "", "PlatformLeaderboardsModel/UploadScoreCompletionHandler");
