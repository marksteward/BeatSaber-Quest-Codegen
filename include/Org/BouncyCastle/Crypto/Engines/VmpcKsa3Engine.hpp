// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.VmpcEngine
#include "Org/BouncyCastle/Crypto/Engines/VmpcEngine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
  class VmpcKsa3Engine : public Org::BouncyCastle::Crypto::Engines::VmpcEngine {
    public:
    // Creating value type constructor for type: VmpcKsa3Engine
    VmpcKsa3Engine() noexcept {}
    // protected override System.Void InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    // Offset: 0x18BD9F8
    // Implemented from: Org.BouncyCastle.Crypto.Engines.VmpcEngine
    // Base method: System.Void VmpcEngine::InitKey(System.Byte[] keyBytes, System.Byte[] ivBytes)
    void InitKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes);
    // public System.Void .ctor()
    // Offset: 0x18BDCDC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.VmpcEngine
    // Base method: System.Void VmpcEngine::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VmpcKsa3Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VmpcKsa3Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*, "Org.BouncyCastle.Crypto.Engines", "VmpcKsa3Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey
// Il2CppName: InitKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey)> {
  static const MethodInfo* get() {
    static auto* keyBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*), "InitKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBytes, ivBytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
