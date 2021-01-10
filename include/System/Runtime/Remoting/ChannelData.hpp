// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x48
  // Autogenerated type: System.Runtime.Remoting.ChannelData
  // [] Offset: FFFFFFFF
  class ChannelData : public ::Il2CppObject {
    public:
    // System.String Ref
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Ref;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Type
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Id
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String DelayLoadAsClientChannel
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* DelayLoadAsClientChannel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.ArrayList _serverProviders
    // Size: 0x8
    // Offset: 0x30
    System::Collections::ArrayList* serverProviders;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList _clientProviders
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* clientProviders;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable _customProperties
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Hashtable* customProperties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: ChannelData
    ChannelData(::Il2CppString* Ref_ = {}, ::Il2CppString* Type_ = {}, ::Il2CppString* Id_ = {}, ::Il2CppString* DelayLoadAsClientChannel_ = {}, System::Collections::ArrayList* serverProviders_ = {}, System::Collections::ArrayList* clientProviders_ = {}, System::Collections::Hashtable* customProperties_ = {}) noexcept : Ref{Ref_}, Type{Type_}, Id{Id_}, DelayLoadAsClientChannel{DelayLoadAsClientChannel_}, serverProviders{serverProviders_}, clientProviders{clientProviders_}, customProperties{customProperties_} {}
    // System.Collections.ArrayList get_ServerProviders()
    // Offset: 0x1169084
    System::Collections::ArrayList* get_ServerProviders();
    // public System.Collections.ArrayList get_ClientProviders()
    // Offset: 0x11690FC
    System::Collections::ArrayList* get_ClientProviders();
    // public System.Collections.Hashtable get_CustomProperties()
    // Offset: 0x1169174
    System::Collections::Hashtable* get_CustomProperties();
    // public System.Void CopyFrom(System.Runtime.Remoting.ChannelData other)
    // Offset: 0x11691EC
    void CopyFrom(System::Runtime::Remoting::ChannelData* other);
    // public System.Void .ctor()
    // Offset: 0x1169A54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ChannelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelData*, creationType>()));
    }
  }; // System.Runtime.Remoting.ChannelData
  static check_size<sizeof(ChannelData), 64 + sizeof(System::Collections::Hashtable*)> __System_Runtime_Remoting_ChannelDataSizeCheck;
  static_assert(sizeof(ChannelData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelData*, "System.Runtime.Remoting", "ChannelData");
#pragma pack(pop)
