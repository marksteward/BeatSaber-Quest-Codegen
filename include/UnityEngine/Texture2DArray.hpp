// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Texture2DArray
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4C720
  class Texture2DArray : public UnityEngine::Texture {
    public:
    // Creating value type constructor for type: Texture2DArray
    Texture2DArray() noexcept {}
    // static public System.Int32 get_allSlices()
    // Offset: 0x16BBD10
    static int get_allSlices();
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x16C4FF4
    static bool Internal_CreateImpl(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.Texture2DArray mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x16C507C
    static void Internal_Create(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x16C5168
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0x16C51F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0x16C52A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, format, flags, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear)
    // Offset: 0x16C5380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipCount, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
    // Offset: 0x16C5490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x16C54B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DArray* New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2DArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DArray*, creationType>(width, height, depth, textureFormat, mipChain)));
    }
    // public override System.Boolean get_isReadable()
    // Offset: 0x16C4FB4
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture2DArray
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
#pragma pack(pop)
