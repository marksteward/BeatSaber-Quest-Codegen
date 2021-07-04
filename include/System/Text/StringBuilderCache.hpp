// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.StringBuilderCache
  class StringBuilderCache : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringBuilderCache
    StringBuilderCache() noexcept {}
    // [ThreadStaticAttribute] Offset: 0xD81264
    // Get static field: static private System.Text.StringBuilder CachedInstance
    static System::Text::StringBuilder* _get_CachedInstance();
    // Set static field: static private System.Text.StringBuilder CachedInstance
    static void _set_CachedInstance(System::Text::StringBuilder* value);
    // static public System.Text.StringBuilder Acquire(System.Int32 capacity)
    // Offset: 0x1D02AB0
    static System::Text::StringBuilder* Acquire(int capacity);
    // static public System.Void Release(System.Text.StringBuilder sb)
    // Offset: 0x1D02B74
    static void Release(System::Text::StringBuilder* sb);
    // static public System.String GetStringAndRelease(System.Text.StringBuilder sb)
    // Offset: 0x1D02BEC
    static ::Il2CppString* GetStringAndRelease(System::Text::StringBuilder* sb);
  }; // System.Text.StringBuilderCache
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
// Writing MetadataGetter for method: System::Text::StringBuilderCache::Acquire
// Il2CppName: Acquire
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::StringBuilderCache::Release
// Il2CppName: Release
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::StringBuilderCache::GetStringAndRelease
// Il2CppName: GetStringAndRelease
// Cannot perform method pointer template specialization from operators!
