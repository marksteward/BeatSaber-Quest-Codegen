// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RenderTextureDescriptor
#include "UnityEngine/RenderTextureDescriptor.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.RenderTextureReadWrite
#include "UnityEngine/RenderTextureReadWrite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Skipping declaration: TextureDimension because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: VRTextureUsage because it is already included!
  // Skipping declaration: RenderTextureMemoryless because it is already included!
  // Forward declaring type: RenderBuffer
  struct RenderBuffer;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderTexture
  // [UsedByNativeCodeAttribute] Offset: D8F364
  // [NativeHeaderAttribute] Offset: D8F364
  // [NativeHeaderAttribute] Offset: D8F364
  // [NativeHeaderAttribute] Offset: D8F364
  // [NativeHeaderAttribute] Offset: D8F364
  class RenderTexture : public UnityEngine::Texture {
    public:
    // Creating value type constructor for type: RenderTexture
    RenderTexture() noexcept {}
    // public UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
    // Offset: 0x1B29DA8
    UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
    // public System.Void set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat value)
    // Offset: 0x1B29DE8
    void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value);
    // public UnityEngine.VRTextureUsage get_vrUsage()
    // Offset: 0x1B29E38
    UnityEngine::VRTextureUsage get_vrUsage();
    // public UnityEngine.RenderTextureFormat get_format()
    // Offset: 0x1B29E78
    UnityEngine::RenderTextureFormat get_format();
    // public System.Int32 get_antiAliasing()
    // Offset: 0x1B29EC0
    int get_antiAliasing();
    // public System.Void set_antiAliasing(System.Int32 value)
    // Offset: 0x1B29F00
    void set_antiAliasing(int value);
    // static private UnityEngine.RenderTexture GetActive()
    // Offset: 0x1B29F50
    static UnityEngine::RenderTexture* GetActive();
    // static private System.Void SetActive(UnityEngine.RenderTexture rt)
    // Offset: 0x1B29F84
    static void SetActive(UnityEngine::RenderTexture* rt);
    // static public UnityEngine.RenderTexture get_active()
    // Offset: 0x1B29FC4
    static UnityEngine::RenderTexture* get_active();
    // static public System.Void set_active(UnityEngine.RenderTexture value)
    // Offset: 0x1B29FF8
    static void set_active(UnityEngine::RenderTexture* value);
    // private UnityEngine.RenderBuffer GetColorBuffer()
    // Offset: 0x1B2A038
    UnityEngine::RenderBuffer GetColorBuffer();
    // private UnityEngine.RenderBuffer GetDepthBuffer()
    // Offset: 0x1B2A0E0
    UnityEngine::RenderBuffer GetDepthBuffer();
    // public UnityEngine.RenderBuffer get_colorBuffer()
    // Offset: 0x1B2A188
    UnityEngine::RenderBuffer get_colorBuffer();
    // public UnityEngine.RenderBuffer get_depthBuffer()
    // Offset: 0x1B2A18C
    UnityEngine::RenderBuffer get_depthBuffer();
    // public System.Void DiscardContents(System.Boolean discardColor, System.Boolean discardDepth)
    // Offset: 0x1B2A190
    void DiscardContents(bool discardColor, bool discardDepth);
    // public System.Void DiscardContents()
    // Offset: 0x1B2A1E8
    void DiscardContents();
    // public System.Boolean Create()
    // Offset: 0x1B2A230
    bool Create();
    // public System.Void Release()
    // Offset: 0x1B2A270
    void Release();
    // public System.Boolean IsCreated()
    // Offset: 0x1B2A2B0
    bool IsCreated();
    // System.Void SetSRGBReadWrite(System.Boolean srgb)
    // Offset: 0x1B2A2F0
    void SetSRGBReadWrite(bool srgb);
    // static private System.Void Internal_Create(UnityEngine.RenderTexture rt)
    // Offset: 0x1B2A340
    static void Internal_Create(UnityEngine::RenderTexture* rt);
    // private System.Void SetRenderTextureDescriptor(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A380
    void SetRenderTextureDescriptor(UnityEngine::RenderTextureDescriptor desc);
    // private UnityEngine.RenderTextureDescriptor GetDescriptor()
    // Offset: 0x1B2A420
    UnityEngine::RenderTextureDescriptor GetDescriptor();
    // static private UnityEngine.RenderTexture GetTemporary_Internal(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A4FC
    static UnityEngine::RenderTexture* GetTemporary_Internal(UnityEngine::RenderTextureDescriptor desc);
    // static public System.Void ReleaseTemporary(UnityEngine.RenderTexture temp)
    // Offset: 0x1B2A57C
    static void ReleaseTemporary(UnityEngine::RenderTexture* temp);
    // public System.Void set_depth(System.Int32 value)
    // Offset: 0x1B2A5BC
    void set_depth(int value);
    // public System.Void .ctor(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(UnityEngine::RenderTextureDescriptor desc) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(desc)));
    }
    // public System.Void .ctor(UnityEngine.RenderTexture textureToCopy)
    // Offset: 0x1B2A9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(UnityEngine::RenderTexture* textureToCopy) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(textureToCopy)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format)
    // Offset: 0x1B2ABCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0x1B2AC1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 mipCount)
    // Offset: 0x1B2ADD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x1B2B13C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format, readWrite)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format)
    // Offset: 0x1B2B2D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::RenderTextureFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth)
    // Offset: 0x1B2B324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.RenderTextureFormat format, System.Int32 mipCount)
    // Offset: 0x1B2B374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor(int width, int height, int depth, UnityEngine::RenderTextureFormat format, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>(width, height, depth, format, mipCount)));
    }
    // public UnityEngine.RenderTextureDescriptor get_descriptor()
    // Offset: 0x1B2AB1C
    UnityEngine::RenderTextureDescriptor get_descriptor();
    // public System.Void set_descriptor(UnityEngine.RenderTextureDescriptor value)
    // Offset: 0x1B2B0B0
    void set_descriptor(UnityEngine::RenderTextureDescriptor value);
    // static private System.Void ValidateRenderTextureDesc(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A780
    static void ValidateRenderTextureDesc(UnityEngine::RenderTextureDescriptor desc);
    // static UnityEngine.Experimental.Rendering.GraphicsFormat GetCompatibleFormat(UnityEngine.RenderTextureFormat renderTextureFormat, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x1B2B18C
    static UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine::RenderTextureFormat renderTextureFormat, UnityEngine::RenderTextureReadWrite readWrite);
    // static public UnityEngine.RenderTexture GetTemporary(UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2B474
    static UnityEngine::RenderTexture* GetTemporary(UnityEngine::RenderTextureDescriptor desc);
    // static private UnityEngine.RenderTexture GetTemporaryImpl(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, UnityEngine.RenderTextureMemoryless memorylessMode, UnityEngine.VRTextureUsage vrUsage, System.Boolean useDynamicScale)
    // Offset: 0x1B2B51C
    static UnityEngine::RenderTexture* GetTemporaryImpl(int width, int height, int depthBuffer, UnityEngine::Experimental::Rendering::GraphicsFormat format, int antiAliasing, UnityEngine::RenderTextureMemoryless memorylessMode, UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale);
    // static public UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing)
    // Offset: 0x1B2B678
    static UnityEngine::RenderTexture* GetTemporary(int width, int height, int depthBuffer, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite, int antiAliasing);
    // static public UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0x1B2B6E0
    static UnityEngine::RenderTexture* GetTemporary(int width, int height, int depthBuffer, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite);
    // static public UnityEngine.RenderTexture GetTemporary(System.Int32 width, System.Int32 height)
    // Offset: 0x1B2B744
    static UnityEngine::RenderTexture* GetTemporary(int width, int height);
    // private System.Void GetColorBuffer_Injected(out UnityEngine.RenderBuffer ret)
    // Offset: 0x1B2A090
    void GetColorBuffer_Injected(UnityEngine::RenderBuffer& ret);
    // private System.Void GetDepthBuffer_Injected(out UnityEngine.RenderBuffer ret)
    // Offset: 0x1B2A138
    void GetDepthBuffer_Injected(UnityEngine::RenderBuffer& ret);
    // private System.Void SetRenderTextureDescriptor_Injected(ref UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A3D0
    void SetRenderTextureDescriptor_Injected(UnityEngine::RenderTextureDescriptor& desc);
    // private System.Void GetDescriptor_Injected(out UnityEngine.RenderTextureDescriptor ret)
    // Offset: 0x1B2A4AC
    void GetDescriptor_Injected(UnityEngine::RenderTextureDescriptor& ret);
    // static private UnityEngine.RenderTexture GetTemporary_Internal_Injected(ref UnityEngine.RenderTextureDescriptor desc)
    // Offset: 0x1B2A53C
    static UnityEngine::RenderTexture* GetTemporary_Internal_Injected(UnityEngine::RenderTextureDescriptor& desc);
    // public override System.Int32 get_width()
    // Offset: 0x1B29C38
    // Implemented from: UnityEngine.Texture
    // Base method: System.Int32 Texture::get_width()
    int get_width();
    // public override System.Void set_width(System.Int32 value)
    // Offset: 0x1B29C78
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_width(System.Int32 value)
    void set_width(int value);
    // public override System.Int32 get_height()
    // Offset: 0x1B29CC8
    // Implemented from: UnityEngine.Texture
    // Base method: System.Int32 Texture::get_height()
    int get_height();
    // public override System.Void set_height(System.Int32 value)
    // Offset: 0x1B29D08
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_height(System.Int32 value)
    void set_height(int value);
    // public override System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0x1B29D58
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::set_dimension(UnityEngine.Rendering.TextureDimension value)
    void set_dimension(UnityEngine::Rendering::TextureDimension value);
    // protected internal System.Void .ctor()
    // Offset: 0x1B2A60C
    // Implemented from: UnityEngine.Texture
    // Base method: System.Void Texture::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTexture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RenderTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTexture*, creationType>()));
    }
  }; // UnityEngine.RenderTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_graphicsFormat
// Il2CppName: get_graphicsFormat
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_graphicsFormat
// Il2CppName: set_graphicsFormat
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_vrUsage
// Il2CppName: get_vrUsage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_format
// Il2CppName: get_format
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_antiAliasing
// Il2CppName: get_antiAliasing
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_antiAliasing
// Il2CppName: set_antiAliasing
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetActive
// Il2CppName: GetActive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetActive
// Il2CppName: SetActive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_active
// Il2CppName: get_active
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_active
// Il2CppName: set_active
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetColorBuffer
// Il2CppName: GetColorBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDepthBuffer
// Il2CppName: GetDepthBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_colorBuffer
// Il2CppName: get_colorBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_depthBuffer
// Il2CppName: get_depthBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::DiscardContents
// Il2CppName: DiscardContents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::DiscardContents
// Il2CppName: DiscardContents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Release
// Il2CppName: Release
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::IsCreated
// Il2CppName: IsCreated
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetSRGBReadWrite
// Il2CppName: SetSRGBReadWrite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::Internal_Create
// Il2CppName: Internal_Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetRenderTextureDescriptor
// Il2CppName: SetRenderTextureDescriptor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDescriptor
// Il2CppName: GetDescriptor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary_Internal
// Il2CppName: GetTemporary_Internal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::ReleaseTemporary
// Il2CppName: ReleaseTemporary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_depth
// Il2CppName: set_depth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_descriptor
// Il2CppName: get_descriptor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_descriptor
// Il2CppName: set_descriptor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::ValidateRenderTextureDesc
// Il2CppName: ValidateRenderTextureDesc
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetCompatibleFormat
// Il2CppName: GetCompatibleFormat
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporaryImpl
// Il2CppName: GetTemporaryImpl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary
// Il2CppName: GetTemporary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetColorBuffer_Injected
// Il2CppName: GetColorBuffer_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDepthBuffer_Injected
// Il2CppName: GetDepthBuffer_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::SetRenderTextureDescriptor_Injected
// Il2CppName: SetRenderTextureDescriptor_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetDescriptor_Injected
// Il2CppName: GetDescriptor_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::GetTemporary_Internal_Injected
// Il2CppName: GetTemporary_Internal_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_width
// Il2CppName: get_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_width
// Il2CppName: set_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::get_height
// Il2CppName: get_height
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_height
// Il2CppName: set_height
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::set_dimension
// Il2CppName: set_dimension
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::RenderTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
