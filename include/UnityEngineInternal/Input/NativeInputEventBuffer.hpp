// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngineInternal.Input.NativeInputEventBuffer
  // [] Offset: FFFFFFFF
  struct NativeInputEventBuffer/*, public System::ValueType*/ {
    public:
    // public System.Void* eventBuffer
    // Size: 0x8
    // Offset: 0x0
    void* eventBuffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // public System.Int32 eventCount
    // Size: 0x4
    // Offset: 0x8
    int eventCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sizeInBytes
    // Size: 0x4
    // Offset: 0xC
    int sizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 capacityInBytes
    // Size: 0x4
    // Offset: 0x10
    int capacityInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NativeInputEventBuffer
    constexpr NativeInputEventBuffer(void* eventBuffer_ = {}, int eventCount_ = {}, int sizeInBytes_ = {}, int capacityInBytes_ = {}) noexcept : eventBuffer{eventBuffer_}, eventCount{eventCount_}, sizeInBytes{sizeInBytes_}, capacityInBytes{capacityInBytes_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngineInternal.Input.NativeInputEventBuffer
  static check_size<sizeof(NativeInputEventBuffer), 16 + sizeof(int)> __UnityEngineInternal_Input_NativeInputEventBufferSizeCheck;
  static_assert(sizeof(NativeInputEventBuffer) == 0x14);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputEventBuffer, "UnityEngineInternal.Input", "NativeInputEventBuffer");
