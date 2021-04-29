// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
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
  // Autogenerated type: PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
  class PlatformAchievementsModelSO::UnlockAchievementCompletionHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UnlockAchievementCompletionHandler
    UnlockAchievementCompletionHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF1C12C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformAchievementsModelSO/UnlockAchievementResult result)
    // Offset: 0xF1BB08
    void Invoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result);
    // public System.IAsyncResult BeginInvoke(PlatformAchievementsModelSO/UnlockAchievementResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF1C13C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF1C1C8
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*, "", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler");
