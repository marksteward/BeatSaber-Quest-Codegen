// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo
#include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
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
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
  class AnalyticsSessionInfo::IdentityTokenChanged : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: IdentityTokenChanged
    IdentityTokenChanged() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21B4E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnalyticsSessionInfo::IdentityTokenChanged* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnalyticsSessionInfo::IdentityTokenChanged*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String token)
    // Offset: 0x21B4AA4
    void Invoke(::Il2CppString* token);
    // public System.IAsyncResult BeginInvoke(System.String token, System.AsyncCallback callback, System.Object object)
    // Offset: 0x21B4E48
    System::IAsyncResult* BeginInvoke(::Il2CppString* token, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x21B4E6C
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/IdentityTokenChanged");
