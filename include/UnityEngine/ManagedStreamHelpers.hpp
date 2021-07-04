// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ManagedStreamHelpers
  class ManagedStreamHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ManagedStreamHelpers
    ManagedStreamHelpers() noexcept {}
    // static System.Void ValidateLoadFromStream(System.IO.Stream stream)
    // Offset: 0x1C0B530
    static void ValidateLoadFromStream(System::IO::Stream* stream);
    // static System.Void ManagedStreamRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x1C0B638
    static void ManagedStreamRead(::Array<uint8_t>* buffer, int offset, int count, System::IO::Stream* stream, System::IntPtr returnValueAddress);
    // static System.Void ManagedStreamSeek(System.Int64 offset, System.UInt32 origin, System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x1C0B738
    static void ManagedStreamSeek(int64_t offset, uint origin, System::IO::Stream* stream, System::IntPtr returnValueAddress);
    // static System.Void ManagedStreamLength(System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x1C0B830
    static void ManagedStreamLength(System::IO::Stream* stream, System::IntPtr returnValueAddress);
  }; // UnityEngine.ManagedStreamHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ManagedStreamHelpers*, "UnityEngine", "ManagedStreamHelpers");
// Writing MetadataGetter for method: UnityEngine::ManagedStreamHelpers::ValidateLoadFromStream
// Il2CppName: ValidateLoadFromStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream*)>(&UnityEngine::ManagedStreamHelpers::ValidateLoadFromStream)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ManagedStreamHelpers*), "ValidateLoadFromStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::ManagedStreamHelpers::ManagedStreamRead
// Il2CppName: ManagedStreamRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, int, System::IO::Stream*, System::IntPtr)>(&UnityEngine::ManagedStreamHelpers::ManagedStreamRead)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* returnValueAddress = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ManagedStreamHelpers*), "ManagedStreamRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, stream, returnValueAddress});
  }
};
// Writing MetadataGetter for method: UnityEngine::ManagedStreamHelpers::ManagedStreamSeek
// Il2CppName: ManagedStreamSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, uint, System::IO::Stream*, System::IntPtr)>(&UnityEngine::ManagedStreamHelpers::ManagedStreamSeek)> {
  const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* returnValueAddress = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ManagedStreamHelpers*), "ManagedStreamSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin, stream, returnValueAddress});
  }
};
// Writing MetadataGetter for method: UnityEngine::ManagedStreamHelpers::ManagedStreamLength
// Il2CppName: ManagedStreamLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream*, System::IntPtr)>(&UnityEngine::ManagedStreamHelpers::ManagedStreamLength)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* returnValueAddress = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ManagedStreamHelpers*), "ManagedStreamLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, returnValueAddress});
  }
};
