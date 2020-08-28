// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Media/InputVideoBufferType
  struct OVRPlugin::Media::InputVideoBufferType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: InputVideoBufferType
    constexpr InputVideoBufferType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OVRPlugin/Media/InputVideoBufferType Memory
    static constexpr const int Memory = 0;
    // Get static field: static public OVRPlugin/Media/InputVideoBufferType Memory
    static GlobalNamespace::OVRPlugin::Media::InputVideoBufferType _get_Memory();
    // Set static field: static public OVRPlugin/Media/InputVideoBufferType Memory
    static void _set_Memory(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType value);
    // static field const value: static public OVRPlugin/Media/InputVideoBufferType TextureHandle
    static constexpr const int TextureHandle = 1;
    // Get static field: static public OVRPlugin/Media/InputVideoBufferType TextureHandle
    static GlobalNamespace::OVRPlugin::Media::InputVideoBufferType _get_TextureHandle();
    // Set static field: static public OVRPlugin/Media/InputVideoBufferType TextureHandle
    static void _set_TextureHandle(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType value);
    // static field const value: static public OVRPlugin/Media/InputVideoBufferType EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/Media/InputVideoBufferType EnumSize
    static GlobalNamespace::OVRPlugin::Media::InputVideoBufferType _get_EnumSize();
    // Set static field: static public OVRPlugin/Media/InputVideoBufferType EnumSize
    static void _set_EnumSize(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType value);
  }; // OVRPlugin/Media/InputVideoBufferType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType, "", "OVRPlugin/Media/InputVideoBufferType");
#pragma pack(pop)
