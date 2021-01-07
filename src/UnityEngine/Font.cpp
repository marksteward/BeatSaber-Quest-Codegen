// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Font
#include "UnityEngine/Font.hpp"
// Including type: UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine/Font_FontTextureRebuildCallback.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// [DebuggerBrowsableAttribute] Offset: 0xD60994
// [CompilerGeneratedAttribute] Offset: 0xD60994
// Autogenerated static field getter
// Get static field: static private System.Action`1<UnityEngine.Font> textureRebuilt
System::Action_1<UnityEngine::Font*>* UnityEngine::Font::_get_textureRebuilt() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("_get_textureRebuilt");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<UnityEngine::Font*>*>("UnityEngine", "Font", "textureRebuilt"));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<UnityEngine.Font> textureRebuilt
void UnityEngine::Font::_set_textureRebuilt(System::Action_1<UnityEngine::Font*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("_set_textureRebuilt");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Font", "textureRebuilt", value));
}
// Autogenerated method: UnityEngine.Font.add_textureRebuilt
void UnityEngine::Font::add_textureRebuilt(System::Action_1<UnityEngine::Font*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("add_textureRebuilt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Font", "add_textureRebuilt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: UnityEngine.Font.remove_textureRebuilt
void UnityEngine::Font::remove_textureRebuilt(System::Action_1<UnityEngine::Font*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("remove_textureRebuilt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Font", "remove_textureRebuilt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: UnityEngine.Font.get_material
UnityEngine::Material* UnityEngine::Font::get_material() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("get_material");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_material", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Material*, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.Font.get_dynamic
bool UnityEngine::Font::get_dynamic() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("get_dynamic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_dynamic", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.Font.get_fontSize
int UnityEngine::Font::get_fontSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("get_fontSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_fontSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.Font.InvokeTextureRebuilt_Internal
void UnityEngine::Font::InvokeTextureRebuilt_Internal(UnityEngine::Font* font) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("InvokeTextureRebuilt_Internal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Font", "InvokeTextureRebuilt_Internal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(font)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, font);
}
// Autogenerated method: UnityEngine.Font.HasCharacter
bool UnityEngine::Font::HasCharacter(::Il2CppChar c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("HasCharacter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HasCharacter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, c);
}
// Autogenerated method: UnityEngine.Font.HasCharacter
bool UnityEngine::Font::HasCharacter(int c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("HasCharacter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HasCharacter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, c);
}
// Autogenerated method: UnityEngine.Font.Internal_CreateFont
void UnityEngine::Font::Internal_CreateFont(UnityEngine::Font* self, ::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Font").WithContext("Internal_CreateFont");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Font", "Internal_CreateFont", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(self, name)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, self, name);
}
