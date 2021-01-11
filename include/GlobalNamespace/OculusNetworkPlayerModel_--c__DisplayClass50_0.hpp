// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass50_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF124
  class OculusNetworkPlayerModel::$$c__DisplayClass50_0 : public ::Il2CppObject {
    public:
    // public OculusNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserAndRoomList> onGetFriends
    // Size: 0x8
    // Offset: 0x18
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>::Callback* onGetFriends;
    // Field size check
    static_assert(sizeof(typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>::Callback*) == 0x8);
    // public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList> onGetInvitable
    // Size: 0x8
    // Offset: 0x20
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>::Callback* onGetInvitable;
    // Field size check
    static_assert(sizeof(typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>::Callback*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass50_0
    $$c__DisplayClass50_0(GlobalNamespace::OculusNetworkPlayerModel* $$4__this_ = {}, typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>::Callback* onGetFriends_ = {}, typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>::Callback* onGetInvitable_ = {}) noexcept : $$4__this{$$4__this_}, onGetFriends{onGetFriends_}, onGetInvitable{onGetInvitable_} {}
    // System.Void <Refresh>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserAndRoomList> result)
    // Offset: 0x100CCF0
    void $Refresh$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>* result);
    // System.Void <Refresh>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> result)
    // Offset: 0x100D1C8
    void $Refresh$b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>* result);
    // public System.Void .ctor()
    // Offset: 0x100C374
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::$$c__DisplayClass50_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass50_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::$$c__DisplayClass50_0*, creationType>()));
    }
  }; // OculusNetworkPlayerModel/<>c__DisplayClass50_0
  static check_size<sizeof(OculusNetworkPlayerModel::$$c__DisplayClass50_0), 32 + sizeof(typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>::Callback*)> __GlobalNamespace_OculusNetworkPlayerModel_$$c__DisplayClass50_0SizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::$$c__DisplayClass50_0) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass50_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass50_0");
