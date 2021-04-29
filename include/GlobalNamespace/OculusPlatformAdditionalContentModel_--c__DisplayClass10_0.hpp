// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
  // [CompilerGeneratedAttribute] Offset: D315CC
  class OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> launchCheckoutFlowTaskSource
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass10_0
    $$c__DisplayClass10_0(System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>* launchCheckoutFlowTaskSource_ = {}) noexcept : launchCheckoutFlowTaskSource{launchCheckoutFlowTaskSource_} {}
    // Creating conversion operator: operator System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>*
    constexpr operator System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>*() const noexcept {
      return launchCheckoutFlowTaskSource;
    }
    // System.Void <LaunchCheckoutFlow>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase> msg)
    // Offset: 0x10C8900
    void $LaunchCheckoutFlow$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>* msg);
    // public System.Void .ctor()
    // Offset: 0x10C88F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0), 16 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>*)> __GlobalNamespace_OculusPlatformAdditionalContentModel_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass10_0");
