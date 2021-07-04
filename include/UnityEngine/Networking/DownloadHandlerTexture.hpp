// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x22
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerTexture
  // [NativeHeaderAttribute] Offset: DEF084
  class DownloadHandlerTexture : public UnityEngine::Networking::DownloadHandler {
    public:
    // private UnityEngine.Texture2D mTexture
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Texture2D* mTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private System.Boolean mHasTexture
    // Size: 0x1
    // Offset: 0x20
    bool mHasTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean mNonReadable
    // Size: 0x1
    // Offset: 0x21
    bool mNonReadable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DownloadHandlerTexture
    DownloadHandlerTexture(UnityEngine::Texture2D* mTexture_ = {}, bool mHasTexture_ = {}, bool mNonReadable_ = {}) noexcept : mTexture{mTexture_}, mHasTexture{mHasTexture_}, mNonReadable{mNonReadable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerTexture obj, System.Boolean readable)
    // Offset: 0x23F46F0
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable);
    // private System.Void InternalCreateTexture(System.Boolean readable)
    // Offset: 0x23F4740
    void InternalCreateTexture(bool readable);
    // public System.Void .ctor(System.Boolean readable)
    // Offset: 0x23F4798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerTexture* New_ctor(bool readable) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerTexture*, creationType>(readable)));
    }
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x23F480C
    UnityEngine::Texture2D* get_texture();
    // private UnityEngine.Texture2D InternalGetTexture()
    // Offset: 0x23F4810
    UnityEngine::Texture2D* InternalGetTexture();
    // private UnityEngine.Texture2D InternalGetTextureNative()
    // Offset: 0x23F493C
    UnityEngine::Texture2D* InternalGetTextureNative();
    // static public UnityEngine.Texture2D GetContent(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0x23F497C
    static UnityEngine::Texture2D* GetContent(UnityEngine::Networking::UnityWebRequest* www);
    // protected override System.Byte[] GetData()
    // Offset: 0x23F4804
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
  }; // UnityEngine.Networking.DownloadHandlerTexture
  #pragma pack(pop)
  static check_size<sizeof(DownloadHandlerTexture), 33 + sizeof(bool)> __UnityEngine_Networking_DownloadHandlerTextureSizeCheck;
  static_assert(sizeof(DownloadHandlerTexture) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::InternalCreateTexture
// Il2CppName: InternalCreateTexture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::get_texture
// Il2CppName: get_texture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::InternalGetTexture
// Il2CppName: InternalGetTexture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative
// Il2CppName: InternalGetTextureNative
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::GetContent
// Il2CppName: GetContent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerTexture::GetData
// Il2CppName: GetData
// Cannot perform method pointer template specialization from operators!
