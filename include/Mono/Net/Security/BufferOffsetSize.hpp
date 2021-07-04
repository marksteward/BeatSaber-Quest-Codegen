// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.BufferOffsetSize
  class BufferOffsetSize : public ::Il2CppObject {
    public:
    // public System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x18
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x1C
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TotalBytes
    // Size: 0x4
    // Offset: 0x20
    int TotalBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean Complete
    // Size: 0x1
    // Offset: 0x24
    bool Complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BufferOffsetSize
    BufferOffsetSize(::Array<uint8_t>* Buffer_ = {}, int Offset_ = {}, int Size_ = {}, int TotalBytes_ = {}, bool Complete_ = {}) noexcept : Buffer{Buffer_}, Offset{Offset_}, Size{Size_}, TotalBytes{TotalBytes_}, Complete{Complete_} {}
    // public System.Int32 get_EndOffset()
    // Offset: 0x15EF080
    int get_EndOffset();
    // public System.Int32 get_Remaining()
    // Offset: 0x15EF08C
    int get_Remaining();
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x15EEC0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferOffsetSize* New_ctor(::Array<uint8_t>* buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::BufferOffsetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferOffsetSize*, creationType>(buffer, offset, size)));
    }
    // public override System.String ToString()
    // Offset: 0x15EF0B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.BufferOffsetSize
  #pragma pack(pop)
  static check_size<sizeof(BufferOffsetSize), 36 + sizeof(bool)> __Mono_Net_Security_BufferOffsetSizeSizeCheck;
  static_assert(sizeof(BufferOffsetSize) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::BufferOffsetSize*, "Mono.Net.Security", "BufferOffsetSize");
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize::get_EndOffset
// Il2CppName: get_EndOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::Security::BufferOffsetSize::*)()>(&Mono::Net::Security::BufferOffsetSize::get_EndOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize*), "get_EndOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::Security::BufferOffsetSize::*)()>(&Mono::Net::Security::BufferOffsetSize::get_Remaining)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::Security::BufferOffsetSize::*)()>(&Mono::Net::Security::BufferOffsetSize::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
