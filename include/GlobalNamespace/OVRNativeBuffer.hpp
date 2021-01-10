// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: OVRNativeBuffer
  // [] Offset: FFFFFFFF
  class OVRNativeBuffer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: m_numBytes
    char __padding0[0x3] = {};
    // private System.Int32 m_numBytes
    // Size: 0x4
    // Offset: 0x14
    int m_numBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr m_ptr
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr m_ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: OVRNativeBuffer
    OVRNativeBuffer(bool disposed_ = {}, int m_numBytes_ = {}, System::IntPtr m_ptr_ = {}) noexcept : disposed{disposed_}, m_numBytes{m_numBytes_}, m_ptr{m_ptr_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Int32 numBytes)
    // Offset: 0x12320E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNativeBuffer* New_ctor(int numBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRNativeBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNativeBuffer*, creationType>(numBytes)));
    }
    // public System.Void Reset(System.Int32 numBytes)
    // Offset: 0x1232290
    void Reset(int numBytes);
    // public System.Int32 GetCapacity()
    // Offset: 0x1232294
    int GetCapacity();
    // public System.IntPtr GetPointer(System.Int32 byteOffset)
    // Offset: 0x123229C
    System::IntPtr GetPointer(int byteOffset);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x123225C
    void Dispose(bool disposing);
    // private System.Void Reallocate(System.Int32 numBytes)
    // Offset: 0x1232144
    void Reallocate(int numBytes);
    // private System.Void Release()
    // Offset: 0x12323B0
    void Release();
    // protected override System.Void Finalize()
    // Offset: 0x12321E0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1232330
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // OVRNativeBuffer
  static check_size<sizeof(OVRNativeBuffer), 24 + sizeof(System::IntPtr)> __GlobalNamespace_OVRNativeBufferSizeCheck;
  static_assert(sizeof(OVRNativeBuffer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
#pragma pack(pop)
