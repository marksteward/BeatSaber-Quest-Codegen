// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: SafeStringMarshal
  struct SafeStringMarshal;
  // Forward declaring type: MonoAssemblyName
  struct MonoAssemblyName;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.RuntimeMarshal
  class RuntimeMarshal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RuntimeMarshal
    RuntimeMarshal() noexcept {}
    // static System.String PtrToUtf8String(System.IntPtr ptr)
    // Offset: 0x1A650F8
    static ::Il2CppString* PtrToUtf8String(System::IntPtr ptr);
    // static Mono.SafeStringMarshal MarshalString(System.String str)
    // Offset: 0x1A651C8
    static Mono::SafeStringMarshal MarshalString(::Il2CppString* str);
    // static private System.Int32 DecodeBlobSize(System.IntPtr in_ptr, out System.IntPtr out_ptr)
    // Offset: 0x1A65260
    static int DecodeBlobSize(System::IntPtr in_ptr, System::IntPtr& out_ptr);
    // static System.Byte[] DecodeBlobArray(System.IntPtr ptr)
    // Offset: 0x1A652E4
    static ::Array<uint8_t>* DecodeBlobArray(System::IntPtr ptr);
    // static System.Int32 AsciHexDigitValue(System.Int32 c)
    // Offset: 0x1A653A0
    static int AsciHexDigitValue(int c);
    // static System.Void FreeAssemblyName(ref Mono.MonoAssemblyName name, System.Boolean freeStruct)
    // Offset: 0x1A653CC
    static void FreeAssemblyName(Mono::MonoAssemblyName& name, bool freeStruct);
  }; // Mono.RuntimeMarshal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeMarshal*, "Mono", "RuntimeMarshal");
// Writing MetadataGetter for method: Mono::RuntimeMarshal::PtrToUtf8String
// Il2CppName: PtrToUtf8String
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::RuntimeMarshal::MarshalString
// Il2CppName: MarshalString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::RuntimeMarshal::DecodeBlobSize
// Il2CppName: DecodeBlobSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::RuntimeMarshal::DecodeBlobArray
// Il2CppName: DecodeBlobArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::RuntimeMarshal::AsciHexDigitValue
// Il2CppName: AsciHexDigitValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::RuntimeMarshal::FreeAssemblyName
// Il2CppName: FreeAssemblyName
// Cannot perform method pointer template specialization from operators!
