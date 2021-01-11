// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetworkingPeer
  // [] Offset: FFFFFFFF
  class NetworkingPeer : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB0164
    // private System.UInt64 <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    uint64_t ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB0174
    // private Oculus.Platform.PeerConnectionState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    Oculus::Platform::PeerConnectionState State;
    // Field size check
    static_assert(sizeof(Oculus::Platform::PeerConnectionState) == 0x4);
    // Creating value type constructor for type: NetworkingPeer
    NetworkingPeer(uint64_t ID_ = {}, Oculus::Platform::PeerConnectionState State_ = {}) noexcept : ID{ID_}, State{State_} {}
    // public System.Void .ctor(System.UInt64 id, Oculus.Platform.PeerConnectionState state)
    // Offset: 0x11DD528
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkingPeer* New_ctor(uint64_t id, Oculus::Platform::PeerConnectionState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::NetworkingPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkingPeer*, creationType>(id, state)));
    }
    // public System.UInt64 get_ID()
    // Offset: 0x11E18C4
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0x11E18CC
    void set_ID(uint64_t value);
    // public Oculus.Platform.PeerConnectionState get_State()
    // Offset: 0x11E18D4
    Oculus::Platform::PeerConnectionState get_State();
    // private System.Void set_State(Oculus.Platform.PeerConnectionState value)
    // Offset: 0x11E18DC
    void set_State(Oculus::Platform::PeerConnectionState value);
  }; // Oculus.Platform.Models.NetworkingPeer
  static check_size<sizeof(NetworkingPeer), 24 + sizeof(Oculus::Platform::PeerConnectionState)> __Oculus_Platform_Models_NetworkingPeerSizeCheck;
  static_assert(sizeof(NetworkingPeer) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetworkingPeer*, "Oculus.Platform.Models", "NetworkingPeer");
