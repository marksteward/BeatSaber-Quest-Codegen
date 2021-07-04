// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.IVoipPCMSource
#include "Oculus/Platform/IVoipPCMSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipPCMSourceNative
  class VoipPCMSourceNative : public ::Il2CppObject/*, public Oculus::Platform::IVoipPCMSource*/ {
    public:
    // private System.UInt64 senderID
    // Size: 0x8
    // Offset: 0x10
    uint64_t senderID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: VoipPCMSourceNative
    VoipPCMSourceNative(uint64_t senderID_ = {}) noexcept : senderID{senderID_} {}
    // Creating interface conversion operator: operator Oculus::Platform::IVoipPCMSource
    operator Oculus::Platform::IVoipPCMSource() noexcept {
      return *reinterpret_cast<Oculus::Platform::IVoipPCMSource*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return senderID;
    }
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0x23B33AC
    int GetPCM(::Array<float>* dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0x23B346C
    void SetSenderID(uint64_t senderID);
    // public System.Int32 PeekSizeElements()
    // Offset: 0x23B3474
    int PeekSizeElements();
    // public System.Void Update()
    // Offset: 0x23B3514
    void Update();
    // public System.Void .ctor()
    // Offset: 0x23B2888
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipPCMSourceNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::VoipPCMSourceNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipPCMSourceNative*, creationType>()));
    }
  }; // Oculus.Platform.VoipPCMSourceNative
  #pragma pack(pop)
  static check_size<sizeof(VoipPCMSourceNative), 16 + sizeof(uint64_t)> __Oculus_Platform_VoipPCMSourceNativeSizeCheck;
  static_assert(sizeof(VoipPCMSourceNative) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipPCMSourceNative*, "Oculus.Platform", "VoipPCMSourceNative");
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::GetPCM
// Il2CppName: GetPCM
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::SetSenderID
// Il2CppName: SetSenderID
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::PeekSizeElements
// Il2CppName: PeekSizeElements
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::VoipPCMSourceNative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
