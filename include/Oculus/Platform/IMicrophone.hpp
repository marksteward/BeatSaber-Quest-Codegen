// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.IMicrophone
  class IMicrophone {
    public:
    // Creating value type constructor for type: IMicrophone
    IMicrophone() noexcept {}
    // public System.Void Start()
    // Offset: 0xFFFFFFFF
    void Start();
    // public System.Void Stop()
    // Offset: 0xFFFFFFFF
    void Stop();
    // public System.Single[] Update()
    // Offset: 0xFFFFFFFF
    ::Array<float>* Update();
  }; // Oculus.Platform.IMicrophone
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IMicrophone*, "Oculus.Platform", "IMicrophone");
// Writing MetadataGetter for method: Oculus::Platform::IMicrophone::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::IMicrophone::Stop
// Il2CppName: Stop
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::IMicrophone::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
