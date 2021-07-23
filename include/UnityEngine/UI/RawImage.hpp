// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.RawImage
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DB2AA0
  class RawImage : public UnityEngine::UI::MaskableGraphic {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xDB4828
    // private UnityEngine.Texture m_Texture
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::Texture* m_Texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // private UnityEngine.Rect m_UVRect
    // Size: 0x10
    // Offset: 0xC8
    UnityEngine::Rect m_UVRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // Creating value type constructor for type: RawImage
    RawImage(UnityEngine::Texture* m_Texture_ = {}, UnityEngine::Rect m_UVRect_ = {}) noexcept : m_Texture{m_Texture_}, m_UVRect{m_UVRect_} {}
    // Get instance field: private UnityEngine.Texture m_Texture
    UnityEngine::Texture* _get_m_Texture();
    // Set instance field: private UnityEngine.Texture m_Texture
    void _set_m_Texture(UnityEngine::Texture* value);
    // Get instance field: private UnityEngine.Rect m_UVRect
    UnityEngine::Rect _get_m_UVRect();
    // Set instance field: private UnityEngine.Rect m_UVRect
    void _set_m_UVRect(UnityEngine::Rect value);
    // public UnityEngine.Texture get_texture()
    // Offset: 0x19836B0
    UnityEngine::Texture* get_texture();
    // public System.Void set_texture(UnityEngine.Texture value)
    // Offset: 0x19836B8
    void set_texture(UnityEngine::Texture* value);
    // public UnityEngine.Rect get_uvRect()
    // Offset: 0x1983774
    UnityEngine::Rect get_uvRect();
    // public System.Void set_uvRect(UnityEngine.Rect value)
    // Offset: 0x1983780
    void set_uvRect(UnityEngine::Rect value);
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0x1983530
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // protected System.Void .ctor()
    // Offset: 0x19834D8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RawImage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::RawImage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RawImage*, creationType>()));
    }
    // public override System.Void SetNativeSize()
    // Offset: 0x1983810
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x19839D4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1983E0C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
  }; // UnityEngine.UI.RawImage
  #pragma pack(pop)
  static check_size<sizeof(RawImage), 200 + sizeof(UnityEngine::Rect)> __UnityEngine_UI_RawImageSizeCheck;
  static_assert(sizeof(RawImage) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RawImage*, "UnityEngine.UI", "RawImage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture* (UnityEngine::UI::RawImage::*)()>(&UnityEngine::UI::RawImage::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::set_texture
// Il2CppName: set_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RawImage::*)(UnityEngine::Texture*)>(&UnityEngine::UI::RawImage::set_texture)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "set_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::get_uvRect
// Il2CppName: get_uvRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UI::RawImage::*)()>(&UnityEngine::UI::RawImage::get_uvRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "get_uvRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::set_uvRect
// Il2CppName: set_uvRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RawImage::*)(UnityEngine::Rect)>(&UnityEngine::UI::RawImage::set_uvRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "set_uvRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::get_mainTexture
// Il2CppName: get_mainTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture* (UnityEngine::UI::RawImage::*)()>(&UnityEngine::UI::RawImage::get_mainTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "get_mainTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::SetNativeSize
// Il2CppName: SetNativeSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RawImage::*)()>(&UnityEngine::UI::RawImage::SetNativeSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "SetNativeSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RawImage::*)(UnityEngine::UI::VertexHelper*)>(&UnityEngine::UI::RawImage::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RawImage::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RawImage::*)()>(&UnityEngine::UI::RawImage::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RawImage*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
