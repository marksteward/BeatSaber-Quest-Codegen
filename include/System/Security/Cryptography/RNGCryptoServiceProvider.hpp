// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.RandomNumberGenerator
#include "System/Security/Cryptography/RandomNumberGenerator.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RNGCryptoServiceProvider
  // [] Offset: FFFFFFFF
  class RNGCryptoServiceProvider : public System::Security::Cryptography::RandomNumberGenerator {
    public:
    // private System.IntPtr _handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: RNGCryptoServiceProvider
    RNGCryptoServiceProvider(System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return handle;
    }
    // Get static field: static private System.Object _lock
    static ::Il2CppObject* _get__lock();
    // Set static field: static private System.Object _lock
    static void _set__lock(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x169D7A4
    static void _cctor();
    // private System.Void Check()
    // Offset: 0x169D8B4
    void Check();
    // static private System.Boolean RngOpen()
    // Offset: 0x169D828
    static bool RngOpen();
    // static private System.IntPtr RngInitialize(System.Byte[] seed)
    // Offset: 0x169D8B0
    static System::IntPtr RngInitialize(::Array<uint8_t>* seed);
    // static private System.IntPtr RngGetBytes(System.IntPtr handle, System.Byte[] data)
    // Offset: 0x169D954
    static System::IntPtr RngGetBytes(System::IntPtr handle, ::Array<uint8_t>* data);
    // static private System.Void RngClose(System.IntPtr handle)
    // Offset: 0x169D958
    static void RngClose(System::IntPtr handle);
    // public System.Void .ctor()
    // Offset: 0x169D82C
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RNGCryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RNGCryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RNGCryptoServiceProvider*, creationType>()));
    }
    // public override System.Void GetBytes(System.Byte[] data)
    // Offset: 0x169D95C
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::GetBytes(System.Byte[] data)
    void GetBytes(::Array<uint8_t>* data);
    // protected override System.Void Finalize()
    // Offset: 0x169DB10
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x169DBE0
    // Implemented from: System.Security.Cryptography.RandomNumberGenerator
    // Base method: System.Void RandomNumberGenerator::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.RNGCryptoServiceProvider
  static check_size<sizeof(RNGCryptoServiceProvider), 16 + sizeof(System::IntPtr)> __System_Security_Cryptography_RNGCryptoServiceProviderSizeCheck;
  static_assert(sizeof(RNGCryptoServiceProvider) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RNGCryptoServiceProvider*, "System.Security.Cryptography", "RNGCryptoServiceProvider");
