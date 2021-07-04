// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/GetProxyData
  class CFNetwork::GetProxyData : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // public System.IntPtr script
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr script;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr targetUri
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr targetUri;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr error
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr error;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr result
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr result;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Threading.ManualResetEvent evt
    // Size: 0x8
    // Offset: 0x30
    System::Threading::ManualResetEvent* evt;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // Creating value type constructor for type: GetProxyData
    GetProxyData(System::IntPtr script_ = {}, System::IntPtr targetUri_ = {}, System::IntPtr error_ = {}, System::IntPtr result_ = {}, System::Threading::ManualResetEvent* evt_ = {}) noexcept : script{script_}, targetUri{targetUri_}, error{error_}, result{result_}, evt{evt_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Dispose()
    // Offset: 0x15EC3DC
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x15EA214
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::GetProxyData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFNetwork::GetProxyData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::GetProxyData*, creationType>()));
    }
  }; // Mono.Net.CFNetwork/GetProxyData
  #pragma pack(pop)
  static check_size<sizeof(CFNetwork::GetProxyData), 48 + sizeof(System::Threading::ManualResetEvent*)> __Mono_Net_CFNetwork_GetProxyDataSizeCheck;
  static_assert(sizeof(CFNetwork::GetProxyData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork::GetProxyData*, "Mono.Net", "CFNetwork/GetProxyData");
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxyData::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFNetwork::GetProxyData::*)()>(&Mono::Net::CFNetwork::GetProxyData::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::GetProxyData*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxyData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
