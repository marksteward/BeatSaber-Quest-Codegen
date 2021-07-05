// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ImageConversion
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DBF618
  class ImageConversion : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ImageConversion
    ImageConversion() noexcept {}
    // static public System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)
    // Offset: 0x23F537C
    static ::Array<uint8_t>* EncodeToPNG(UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex, System.Int32 quality)
    // Offset: 0x23F53BC
    static ::Array<uint8_t>* EncodeToJPG(UnityEngine::Texture2D* tex, int quality);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex)
    // Offset: 0x23F540C
    static ::Array<uint8_t>* EncodeToJPG(UnityEngine::Texture2D* tex);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data, System.Boolean markNonReadable)
    // Offset: 0x23F5450
    static bool LoadImage(UnityEngine::Texture2D* tex, ::Array<uint8_t>* data, bool markNonReadable);
  }; // UnityEngine.ImageConversion
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToPNG
// Il2CppName: EncodeToPNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToPNG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToPNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(UnityEngine::Texture2D*, int)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, quality});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::LoadImage
// Il2CppName: LoadImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Texture2D*, ::Array<uint8_t>*, bool)>(&UnityEngine::ImageConversion::LoadImage)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* markNonReadable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "LoadImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, data, markNonReadable});
  }
};
