// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Callback
#include "Oculus/Platform/Callback.hpp"
// Including type: Oculus.Platform.Callback/RequestCallback
#include "Oculus/Platform/Callback_RequestCallback.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Message because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Callback/RequestCallback`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Callback::RequestCallback_1 : public Oculus::Platform::Callback::RequestCallback {
    public:
    // private Oculus.Platform.Message`1/Callback<T> callback
    // Size: 0x8
    // Offset: 0x0
    typename Oculus::Platform::Message_1<T>::Callback* callback;
    // Field size check
    static_assert(sizeof(typename Oculus::Platform::Message_1<T>::Callback*) == 0x8);
    // Creating value type constructor for type: RequestCallback_1
    RequestCallback_1(typename Oculus::Platform::Message_1<T>::Callback* callback_ = {}) noexcept : callback{callback_} {}
    // Deleting conversion operator: operator Oculus::Platform::Message::Callback*
    constexpr operator Oculus::Platform::Message::Callback*() const noexcept = delete;
    // public System.Void .ctor(Oculus.Platform.Message`1/Callback<T> callback)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Callback::RequestCallback_1<T>* New_ctor(typename Oculus::Platform::Message_1<T>::Callback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Callback::RequestCallback_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Callback::RequestCallback_1<T>*, creationType>(callback)));
    }
    // public override System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Callback/RequestCallback
    // Base method: System.Void RequestCallback::HandleMessage(Oculus.Platform.Message msg)
    void HandleMessage(Oculus::Platform::Message* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Callback::RequestCallback_1::HandleMessage");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleMessage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(msg)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, msg);
    }
  }; // Oculus.Platform.Callback/RequestCallback`1
  // Could not write size check! Type: Oculus.Platform.Callback/RequestCallback`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Callback::RequestCallback_1, "Oculus.Platform", "Callback/RequestCallback`1");
