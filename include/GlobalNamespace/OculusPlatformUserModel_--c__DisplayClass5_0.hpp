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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass5_0
  // [CompilerGeneratedAttribute] Offset: D31C5C
  class OculusPlatformUserModel::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Int32 requests
    // Size: 0x4
    // Offset: 0x10
    int requests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean success
    // Size: 0x1
    // Offset: 0x14
    bool success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: success and: userNames
    char __padding1[0x3] = {};
    // public System.String[] userNames
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* userNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(int requests_ = {}, bool success_ = {}, ::Array<::Il2CppString*>* userNames_ = {}, System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* tcs_ = {}) noexcept : requests{requests_}, success{success_}, userNames{userNames_}, tcs{tcs_} {}
    // System.Void <GetUserNamesForUserIds>g__Fetch|0(System.Int32 index, System.UInt64 platformId)
    // Offset: 0x10CBBA0
    void $GetUserNamesForUserIds$g__Fetch_0(int index, uint64_t platformId);
    // public System.Void .ctor()
    // Offset: 0x10CBB98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass5_0), 32 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass5_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0*, "", "OculusPlatformUserModel/<>c__DisplayClass5_0");
