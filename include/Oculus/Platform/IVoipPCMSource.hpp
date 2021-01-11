// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.IVoipPCMSource
  // [] Offset: FFFFFFFF
  class IVoipPCMSource {
    public:
    // Creating value type constructor for type: IVoipPCMSource
    IVoipPCMSource() noexcept {}
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0xFFFFFFFF
    int GetPCM(::Array<float>* dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0xFFFFFFFF
    void SetSenderID(uint64_t senderID);
    // public System.Void Update()
    // Offset: 0xFFFFFFFF
    void Update();
    // public System.Int32 PeekSizeElements()
    // Offset: 0xFFFFFFFF
    int PeekSizeElements();
  }; // Oculus.Platform.IVoipPCMSource
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IVoipPCMSource*, "Oculus.Platform", "IVoipPCMSource");
