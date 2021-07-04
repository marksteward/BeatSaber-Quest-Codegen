// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNatPunchListener
#include "LiteNetLib/EventBasedNatPunchListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
  class EventBasedNatPunchListener::OnNatIntroductionSuccess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNatIntroductionSuccess
    OnNatIntroductionSuccess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B3A400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNatPunchListener::OnNatIntroductionSuccess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNatPunchListener::OnNatIntroductionSuccess*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0x1B39F78
    void Invoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B3A410
    System::IAsyncResult* BeginInvoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B3A4B0
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::*)(System::Net::IPEndPoint*, LiteNetLib::NatAddressType, ::Il2CppString*)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::Invoke)> {
  const MethodInfo* get() {
    static auto* targetEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatAddressType")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetEndPoint, type, token});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::*)(System::Net::IPEndPoint*, LiteNetLib::NatAddressType, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* targetEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NatAddressType")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetEndPoint, type, token, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::*)(System::IAsyncResult*)>(&LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
