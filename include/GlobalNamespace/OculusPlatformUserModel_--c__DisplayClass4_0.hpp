// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
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
  // Forward declaring type: UserProof
  class UserProof;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass4_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF2B4
  class OculusPlatformUserModel::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<System.String> tcs
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>* tcs_ = {}) noexcept : tcs{tcs_} {}
    // Creating conversion operator: operator System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*
    constexpr operator System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*() const noexcept {
      return tcs;
    }
    // System.Void <GetUserAuthToken>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserProof> message)
    // Offset: 0x1012FA8
    void $GetUserAuthToken$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof*>* message);
    // public System.Void .ctor()
    // Offset: 0x1012FA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass4_0
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass4_0), 16 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<::Il2CppString*>*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass4_0) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass4_0*, "", "OculusPlatformUserModel/<>c__DisplayClass4_0");
