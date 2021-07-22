// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ScreenshotType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ScreenCaptureCache
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenCaptureCache : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::ScreenCaptureCache::ScreenshotType
    struct ScreenshotType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ScreenCaptureCache/ScreenshotType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ScreenshotType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ScreenshotType
      constexpr ScreenshotType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ScreenCaptureCache/ScreenshotType Game
      static constexpr const int Game = 0;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Game
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Game();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Game
      static void _set_Game(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
      // static field const value: static public ScreenCaptureCache/ScreenshotType Menu
      static constexpr const int Menu = 1;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Menu
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Menu();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Menu
      static void _set_Menu(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
      // static field const value: static public ScreenCaptureCache/ScreenshotType Other
      static constexpr const int Other = 2;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Other
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Other();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Other
      static void _set_Other(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
    }; // ScreenCaptureCache/ScreenshotType
    #pragma pack(pop)
    static check_size<sizeof(ScreenCaptureCache::ScreenshotType), 0 + sizeof(int)> __GlobalNamespace_ScreenCaptureCache_ScreenshotTypeSizeCheck;
    static_assert(sizeof(ScreenCaptureCache::ScreenshotType) == 0x4);
    // private System.Collections.Generic.Dictionary`2<ScreenCaptureCache/ScreenshotType,UnityEngine.Texture2D> _cache
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>* cache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>*) == 0x8);
    // Creating value type constructor for type: ScreenCaptureCache
    ScreenCaptureCache(System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>* cache_ = {}) noexcept : cache{cache_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>*
    constexpr operator System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>*() const noexcept {
      return cache;
    }
    // public UnityEngine.Texture2D GetLastScreenshot(ScreenCaptureCache/ScreenshotType screenshotType)
    // Offset: 0x2342A8C
    UnityEngine::Texture2D* GetLastScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType);
    // public System.Void StoreScreenshot(ScreenCaptureCache/ScreenshotType screenshotType, UnityEngine.Texture2D texture)
    // Offset: 0x234274C
    void StoreScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType, UnityEngine::Texture2D* texture);
    // public System.Void .ctor()
    // Offset: 0x2342B0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenCaptureCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScreenCaptureCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenCaptureCache*, creationType>()));
    }
  }; // ScreenCaptureCache
  #pragma pack(pop)
  static check_size<sizeof(ScreenCaptureCache), 16 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>*)> __GlobalNamespace_ScreenCaptureCacheSizeCheck;
  static_assert(sizeof(ScreenCaptureCache) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureCache*, "", "ScreenCaptureCache");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureCache::ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureCache::GetLastScreenshot
// Il2CppName: GetLastScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (GlobalNamespace::ScreenCaptureCache::*)(GlobalNamespace::ScreenCaptureCache::ScreenshotType)>(&GlobalNamespace::ScreenCaptureCache::GetLastScreenshot)> {
  static const MethodInfo* get() {
    static auto* screenshotType = &::il2cpp_utils::GetClassFromName("", "ScreenCaptureCache/ScreenshotType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenCaptureCache*), "GetLastScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureCache::StoreScreenshot
// Il2CppName: StoreScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenCaptureCache::*)(GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*)>(&GlobalNamespace::ScreenCaptureCache::StoreScreenshot)> {
  static const MethodInfo* get() {
    static auto* screenshotType = &::il2cpp_utils::GetClassFromName("", "ScreenCaptureCache/ScreenshotType")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenCaptureCache*), "StoreScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotType, texture});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
