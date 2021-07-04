// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair {
    public:
    // Creating value type constructor for type: IDiffieHellmanKeyPair
    IDiffieHellmanKeyPair() noexcept {}
    // public System.Byte[] get_publicKey()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* get_publicKey();
    // public System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey);
    // public System.Byte[] GetPreMasterSecret(System.Byte[] clientPublicKey)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GetPreMasterSecret(::Array<uint8_t>* clientPublicKey);
  }; // IDiffieHellmanKeyPair
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDiffieHellmanKeyPair*, "", "IDiffieHellmanKeyPair");
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey
// Il2CppName: get_publicKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync
// Il2CppName: GetPreMasterSecretAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret
// Il2CppName: GetPreMasterSecret
// Cannot perform method pointer template specialization from operators!
