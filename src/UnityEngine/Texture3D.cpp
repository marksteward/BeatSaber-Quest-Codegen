// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture3D
#include "UnityEngine/Texture3D.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Texture3D.Internal_CreateImpl
bool UnityEngine::Texture3D::Internal_CreateImpl(UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Texture3D", "Internal_CreateImpl", mono, w, h, d, mipCount, format, flags));
}
// Autogenerated method: UnityEngine.Texture3D.Internal_Create
void UnityEngine::Texture3D::Internal_Create(UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Texture3D", "Internal_Create", mono, w, h, d, mipCount, format, flags));
}
// Autogenerated method: UnityEngine.Texture3D.ApplyImpl
void UnityEngine::Texture3D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyImpl", updateMipmaps, makeNoLongerReadable));
}
// Autogenerated method: UnityEngine.Texture3D.SetPixels32
void UnityEngine::Texture3D::SetPixels32(::Array<UnityEngine::Color32>* colors, int miplevel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels32", colors, miplevel));
}
// Autogenerated method: UnityEngine.Texture3D.SetPixels32
void UnityEngine::Texture3D::SetPixels32(::Array<UnityEngine::Color32>* colors) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels32", colors));
}
// Autogenerated method: UnityEngine.Texture3D..ctor
UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(il2cpp_utils::New<Texture3D*>(width, height, depth, format, flags));
}
// Autogenerated method: UnityEngine.Texture3D..ctor
UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(il2cpp_utils::New<Texture3D*>(width, height, depth, format, flags));
}
// Autogenerated method: UnityEngine.Texture3D..ctor
UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
  return THROW_UNLESS(il2cpp_utils::New<Texture3D*>(width, height, depth, format, flags, mipCount));
}
// Autogenerated method: UnityEngine.Texture3D..ctor
UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, int mipCount) {
  return THROW_UNLESS(il2cpp_utils::New<Texture3D*>(width, height, depth, textureFormat, mipCount));
}
// Autogenerated method: UnityEngine.Texture3D..ctor
UnityEngine::Texture3D* UnityEngine::Texture3D::New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(il2cpp_utils::New<Texture3D*>(width, height, depth, textureFormat, mipChain));
}
// Autogenerated method: UnityEngine.Texture3D.Apply
void UnityEngine::Texture3D::Apply(bool updateMipmaps, bool makeNoLongerReadable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Apply", updateMipmaps, makeNoLongerReadable));
}
// Autogenerated method: UnityEngine.Texture3D.Apply
void UnityEngine::Texture3D::Apply() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Apply"));
}
// Autogenerated method: UnityEngine.Texture3D.get_isReadable
bool UnityEngine::Texture3D::get_isReadable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isReadable"));
}
