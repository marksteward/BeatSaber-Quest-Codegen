// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Rendering.TextureDimension
#include "UnityEngine/Rendering/TextureDimension.hpp"
// Including type: UnityEngine.Rendering.ShadowSamplingMode
#include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
// Including type: UnityEngine.VRTextureUsage
#include "UnityEngine/VRTextureUsage.hpp"
// Including type: UnityEngine.RenderTextureCreationFlags
#include "UnityEngine/RenderTextureCreationFlags.hpp"
// Including type: UnityEngine.RenderTextureMemoryless
#include "UnityEngine/RenderTextureMemoryless.hpp"
// Including type: UnityEngine.RenderTextureFormat
#include "UnityEngine/RenderTextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x34
  // Autogenerated type: UnityEngine.RenderTextureDescriptor
  // [] Offset: FFFFFFFF
  struct RenderTextureDescriptor/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD5057C
    // [DebuggerBrowsableAttribute] Offset: 0xD5057C
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD505B8
    // [CompilerGeneratedAttribute] Offset: 0xD505B8
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD505F4
    // [CompilerGeneratedAttribute] Offset: 0xD505F4
    // private System.Int32 <msaaSamples>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int msaaSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD50630
    // [DebuggerBrowsableAttribute] Offset: 0xD50630
    // private System.Int32 <volumeDepth>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int volumeDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD5066C
    // [CompilerGeneratedAttribute] Offset: 0xD5066C
    // private System.Int32 <mipCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int mipCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Experimental.Rendering.GraphicsFormat _graphicsFormat
    // Size: 0x4
    // Offset: 0x14
    UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD506A8
    // [CompilerGeneratedAttribute] Offset: 0xD506A8
    // private UnityEngine.Experimental.Rendering.GraphicsFormat <stencilFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // private System.Int32 _depthBufferBits
    // Size: 0x4
    // Offset: 0x1C
    int depthBufferBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD506E4
    // [DebuggerBrowsableAttribute] Offset: 0xD506E4
    // private UnityEngine.Rendering.TextureDimension <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::Rendering::TextureDimension dimension;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::TextureDimension) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD50720
    // [CompilerGeneratedAttribute] Offset: 0xD50720
    // private UnityEngine.Rendering.ShadowSamplingMode <shadowSamplingMode>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::ShadowSamplingMode) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD5075C
    // [DebuggerBrowsableAttribute] Offset: 0xD5075C
    // private UnityEngine.VRTextureUsage <vrUsage>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::VRTextureUsage vrUsage;
    // Field size check
    static_assert(sizeof(UnityEngine::VRTextureUsage) == 0x4);
    // private UnityEngine.RenderTextureCreationFlags _flags
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::RenderTextureCreationFlags flags;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTextureCreationFlags) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD50798
    // [CompilerGeneratedAttribute] Offset: 0xD50798
    // private UnityEngine.RenderTextureMemoryless <memoryless>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::RenderTextureMemoryless memoryless;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTextureMemoryless) == 0x4);
    // Creating value type constructor for type: RenderTextureDescriptor
    constexpr RenderTextureDescriptor(int width_ = {}, int height_ = {}, int msaaSamples_ = {}, int volumeDepth_ = {}, int mipCount_ = {}, UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat_ = {}, UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat_ = {}, int depthBufferBits_ = {}, UnityEngine::Rendering::TextureDimension dimension_ = {}, UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode_ = {}, UnityEngine::VRTextureUsage vrUsage_ = {}, UnityEngine::RenderTextureCreationFlags flags_ = {}, UnityEngine::RenderTextureMemoryless memoryless_ = {}) noexcept : width{width_}, height{height_}, msaaSamples{msaaSamples_}, volumeDepth{volumeDepth_}, mipCount{mipCount_}, graphicsFormat{graphicsFormat_}, stencilFormat{stencilFormat_}, depthBufferBits{depthBufferBits_}, dimension{dimension_}, shadowSamplingMode{shadowSamplingMode_}, vrUsage{vrUsage_}, flags{flags_}, memoryless{memoryless_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private System.Int32[] depthFormatBits
    static ::Array<int>* _get_depthFormatBits();
    // Set static field: static private System.Int32[] depthFormatBits
    static void _set_depthFormatBits(::Array<int>* value);
    // public System.Int32 get_width()
    // Offset: 0xCA7B34
    int get_width();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0xCA7B3C
    void set_width(int value);
    // public System.Int32 get_height()
    // Offset: 0xCA7B44
    int get_height();
    // public System.Void set_height(System.Int32 value)
    // Offset: 0xCA7B4C
    void set_height(int value);
    // public System.Int32 get_msaaSamples()
    // Offset: 0xCA7B54
    int get_msaaSamples();
    // public System.Void set_msaaSamples(System.Int32 value)
    // Offset: 0xCA7B5C
    void set_msaaSamples(int value);
    // public System.Int32 get_volumeDepth()
    // Offset: 0xCA7B64
    int get_volumeDepth();
    // public System.Void set_volumeDepth(System.Int32 value)
    // Offset: 0xCA7B6C
    void set_volumeDepth(int value);
    // public System.Void set_mipCount(System.Int32 value)
    // Offset: 0xCA7B74
    void set_mipCount(int value);
    // public UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
    // Offset: 0xCA7B7C
    UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
    // public System.Void set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
    // Offset: 0xCA7B84
    void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value);
    // public UnityEngine.RenderTextureFormat get_colorFormat()
    // Offset: 0xCA7BC8
    UnityEngine::RenderTextureFormat get_colorFormat();
    // public System.Void set_colorFormat(UnityEngine.RenderTextureFormat value)
    // Offset: 0xCA7BD4
    void set_colorFormat(UnityEngine::RenderTextureFormat value);
    // public System.Boolean get_sRGB()
    // Offset: 0xCA7BDC
    bool get_sRGB();
    // public System.Void set_sRGB(System.Boolean value)
    // Offset: 0xCA7BE8
    void set_sRGB(bool value);
    // public System.Int32 get_depthBufferBits()
    // Offset: 0xCA7BF4
    int get_depthBufferBits();
    // public System.Void set_depthBufferBits(System.Int32 value)
    // Offset: 0xCA7BFC
    void set_depthBufferBits(int value);
    // public System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0xCA7C28
    void set_dimension(UnityEngine::Rendering::TextureDimension value);
    // public System.Void set_shadowSamplingMode(UnityEngine.Rendering.ShadowSamplingMode value)
    // Offset: 0xCA7C30
    void set_shadowSamplingMode(UnityEngine::Rendering::ShadowSamplingMode value);
    // public System.Void set_vrUsage(UnityEngine.VRTextureUsage value)
    // Offset: 0xCA7C38
    void set_vrUsage(UnityEngine::VRTextureUsage value);
    // public System.Void set_memoryless(UnityEngine.RenderTextureMemoryless value)
    // Offset: 0xCA7C40
    void set_memoryless(UnityEngine::RenderTextureMemoryless value);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.RenderTextureFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0xCA7C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::RenderTextureFormat colorFormat, int depthBufferBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(width, height, colorFormat, depthBufferBits)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits);
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits)
    // Offset: 0xCA7C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(width, height, colorFormat, depthBufferBits)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits);
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, System.Int32 depthBufferBits, System.Int32 mipCount)
    // Offset: 0xCA7C58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RenderTextureDescriptor(int width, int height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int depthBufferBits, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTextureDescriptor::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(width, height, colorFormat, depthBufferBits, mipCount)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, width, height, colorFormat, depthBufferBits, mipCount);
    }
    // private System.Void SetOrClearRenderTextureCreationFlag(System.Boolean value, UnityEngine.RenderTextureCreationFlags flag)
    // Offset: 0xCA7C60
    void SetOrClearRenderTextureCreationFlag(bool value, UnityEngine::RenderTextureCreationFlags flag);
    // public System.Void set_useMipMap(System.Boolean value)
    // Offset: 0xCA7C7C
    void set_useMipMap(bool value);
    // public System.Void set_autoGenerateMips(System.Boolean value)
    // Offset: 0xCA7C98
    void set_autoGenerateMips(bool value);
    // public System.Void set_enableRandomWrite(System.Boolean value)
    // Offset: 0xCA7CB4
    void set_enableRandomWrite(bool value);
    // System.Void set_createdFromScript(System.Boolean value)
    // Offset: 0xCA7CD0
    void set_createdFromScript(bool value);
    // public System.Void set_useDynamicScale(System.Boolean value)
    // Offset: 0xCA7CEC
    void set_useDynamicScale(bool value);
    // static private System.Void .cctor()
    // Offset: 0x173CB54
    static void _cctor();
  }; // UnityEngine.RenderTextureDescriptor
  static check_size<sizeof(RenderTextureDescriptor), 48 + sizeof(UnityEngine::RenderTextureMemoryless)> __UnityEngine_RenderTextureDescriptorSizeCheck;
  static_assert(sizeof(RenderTextureDescriptor) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureDescriptor, "UnityEngine", "RenderTextureDescriptor");
#pragma pack(pop)
