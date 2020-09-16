// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Texture2D.get_format
UnityEngine::TextureFormat UnityEngine::Texture2D::get_format() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TextureFormat>(this, "get_format"));
}
// Autogenerated method: UnityEngine.Texture2D.get_whiteTexture
UnityEngine::Texture2D* UnityEngine::Texture2D::get_whiteTexture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>("UnityEngine", "Texture2D", "get_whiteTexture"));
}
// Autogenerated method: UnityEngine.Texture2D.Internal_CreateImpl
bool UnityEngine::Texture2D::Internal_CreateImpl(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, System::IntPtr nativeTex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Texture2D", "Internal_CreateImpl", mono, w, h, mipCount, format, flags, nativeTex));
}
// Autogenerated method: UnityEngine.Texture2D.Internal_Create
void UnityEngine::Texture2D::Internal_Create(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, System::IntPtr nativeTex) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Texture2D", "Internal_Create", mono, w, h, mipCount, format, flags, nativeTex));
}
// Autogenerated method: UnityEngine.Texture2D.ApplyImpl
void UnityEngine::Texture2D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyImpl", updateMipmaps, makeNoLongerReadable));
}
// Autogenerated method: UnityEngine.Texture2D.ResizeImpl
bool UnityEngine::Texture2D::ResizeImpl(int width, int height) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ResizeImpl", width, height));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixelBilinearImpl
UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinearImpl(int image, float u, float v) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetPixelBilinearImpl", image, u, v));
}
// Autogenerated method: UnityEngine.Texture2D.ResizeWithFormatImpl
bool UnityEngine::Texture2D::ResizeWithFormatImpl(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ResizeWithFormatImpl", width, height, format, hasMipMap));
}
// Autogenerated method: UnityEngine.Texture2D.ReadPixelsImpl
void UnityEngine::Texture2D::ReadPixelsImpl(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPixelsImpl", source, destX, destY, recalculateMipMaps));
}
// Autogenerated method: UnityEngine.Texture2D.SetPixelsImpl
void UnityEngine::Texture2D::SetPixelsImpl(int x, int y, int w, int h, ::Array<UnityEngine::Color>* pixel, int miplevel, int frame) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixelsImpl", x, y, w, h, pixel, miplevel, frame));
}
// Autogenerated method: UnityEngine.Texture2D.UpdateExternalTexture
void UnityEngine::Texture2D::UpdateExternalTexture(System::IntPtr nativeTex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateExternalTexture", nativeTex));
}
// Autogenerated method: UnityEngine.Texture2D.SetAllPixels32
void UnityEngine::Texture2D::SetAllPixels32(::Array<UnityEngine::Color32>* colors, int miplevel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetAllPixels32", colors, miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixels
::Array<UnityEngine::Color>* UnityEngine::Texture2D::GetPixels(int x, int y, int blockWidth, int blockHeight, int miplevel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Color>*>(this, "GetPixels", x, y, blockWidth, blockHeight, miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixels32
::Array<UnityEngine::Color32>* UnityEngine::Texture2D::GetPixels32(int miplevel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Color32>*>(this, "GetPixels32", miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixels32
::Array<UnityEngine::Color32>* UnityEngine::Texture2D::GetPixels32() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Color32>*>(this, "GetPixels32"));
}
// Autogenerated method: UnityEngine.Texture2D..ctor
UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear, System::IntPtr nativeTex) {
  return THROW_UNLESS(il2cpp_utils::New<Texture2D*>(width, height, textureFormat, mipCount, linear, nativeTex));
}
// Autogenerated method: UnityEngine.Texture2D..ctor
UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  return THROW_UNLESS(il2cpp_utils::New<Texture2D*>(width, height, textureFormat, mipChain, linear));
}
// Autogenerated method: UnityEngine.Texture2D..ctor
UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(il2cpp_utils::New<Texture2D*>(width, height, textureFormat, mipChain));
}
// Autogenerated method: UnityEngine.Texture2D..ctor
UnityEngine::Texture2D* UnityEngine::Texture2D::New_ctor(int width, int height) {
  return THROW_UNLESS(il2cpp_utils::New<Texture2D*>(width, height));
}
// Autogenerated method: UnityEngine.Texture2D.CreateExternalTexture
UnityEngine::Texture2D* UnityEngine::Texture2D::CreateExternalTexture(int width, int height, UnityEngine::TextureFormat format, bool mipChain, bool linear, System::IntPtr nativeTex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>("UnityEngine", "Texture2D", "CreateExternalTexture", width, height, format, mipChain, linear, nativeTex));
}
// Autogenerated method: UnityEngine.Texture2D.SetPixels
void UnityEngine::Texture2D::SetPixels(int x, int y, int blockWidth, int blockHeight, ::Array<UnityEngine::Color>* colors, int miplevel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels", x, y, blockWidth, blockHeight, colors, miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.SetPixels
void UnityEngine::Texture2D::SetPixels(int x, int y, int blockWidth, int blockHeight, ::Array<UnityEngine::Color>* colors) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels", x, y, blockWidth, blockHeight, colors));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixelBilinear
UnityEngine::Color UnityEngine::Texture2D::GetPixelBilinear(float u, float v) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetPixelBilinear", u, v));
}
// Autogenerated method: UnityEngine.Texture2D.Apply
void UnityEngine::Texture2D::Apply(bool updateMipmaps, bool makeNoLongerReadable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Apply", updateMipmaps, makeNoLongerReadable));
}
// Autogenerated method: UnityEngine.Texture2D.Apply
void UnityEngine::Texture2D::Apply() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Apply"));
}
// Autogenerated method: UnityEngine.Texture2D.Resize
bool UnityEngine::Texture2D::Resize(int width, int height) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Resize", width, height));
}
// Autogenerated method: UnityEngine.Texture2D.Resize
bool UnityEngine::Texture2D::Resize(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Resize", width, height, format, hasMipMap));
}
// Autogenerated method: UnityEngine.Texture2D.ReadPixels
void UnityEngine::Texture2D::ReadPixels(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPixels", source, destX, destY, recalculateMipMaps));
}
// Autogenerated method: UnityEngine.Texture2D.ReadPixels
void UnityEngine::Texture2D::ReadPixels(UnityEngine::Rect source, int destX, int destY) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPixels", source, destX, destY));
}
// Autogenerated method: UnityEngine.Texture2D.SetPixels32
void UnityEngine::Texture2D::SetPixels32(::Array<UnityEngine::Color32>* colors, int miplevel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels32", colors, miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.SetPixels32
void UnityEngine::Texture2D::SetPixels32(::Array<UnityEngine::Color32>* colors) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPixels32", colors));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixels
::Array<UnityEngine::Color>* UnityEngine::Texture2D::GetPixels(int miplevel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Color>*>(this, "GetPixels", miplevel));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixels
::Array<UnityEngine::Color>* UnityEngine::Texture2D::GetPixels() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Color>*>(this, "GetPixels"));
}
// Autogenerated method: UnityEngine.Texture2D.GetPixelBilinearImpl_Injected
void UnityEngine::Texture2D::GetPixelBilinearImpl_Injected(int image, float u, float v, UnityEngine::Color& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetPixelBilinearImpl_Injected", image, u, v, ret));
}
// Autogenerated method: UnityEngine.Texture2D.ReadPixelsImpl_Injected
void UnityEngine::Texture2D::ReadPixelsImpl_Injected(UnityEngine::Rect& source, int destX, int destY, bool recalculateMipMaps) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPixelsImpl_Injected", source, destX, destY, recalculateMipMaps));
}
// Autogenerated method: UnityEngine.Texture2D.get_isReadable
bool UnityEngine::Texture2D::get_isReadable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isReadable"));
}
