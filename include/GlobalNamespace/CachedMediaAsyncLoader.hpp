// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMediaAsyncLoader
#include "GlobalNamespace/IMediaAsyncLoader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AsyncCachedLoader`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCachedLoader_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMediaAsyncLoader*/ {
    public:
    // Nested type: GlobalNamespace::CachedMediaAsyncLoader::$LoadAudioClipAsync$d__5
    struct $LoadAudioClipAsync$d__5;
    // Nested type: GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__6
    struct $LoadSpriteAsync$d__6;
    // private System.Int32 _maxNumberOfAudioClipCachedElements
    // Size: 0x4
    // Offset: 0x18
    int maxNumberOfAudioClipCachedElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxNumberOfSpriteCachedElements
    // Size: 0x4
    // Offset: 0x1C
    int maxNumberOfSpriteCachedElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private AsyncCachedLoader`2<System.String,UnityEngine.AudioClip> _audioAsyncCachedLoader
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::AudioClip*>* audioAsyncCachedLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::AudioClip*>*) == 0x8);
    // private AsyncCachedLoader`2<System.String,UnityEngine.Sprite> _spriteAsyncCachedLoader
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::Sprite*>* spriteAsyncCachedLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::Sprite*>*) == 0x8);
    // Creating value type constructor for type: CachedMediaAsyncLoader
    CachedMediaAsyncLoader(int maxNumberOfAudioClipCachedElements_ = {}, int maxNumberOfSpriteCachedElements_ = {}, GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::AudioClip*>* audioAsyncCachedLoader_ = {}, GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::Sprite*>* spriteAsyncCachedLoader_ = {}) noexcept : maxNumberOfAudioClipCachedElements{maxNumberOfAudioClipCachedElements_}, maxNumberOfSpriteCachedElements{maxNumberOfSpriteCachedElements_}, audioAsyncCachedLoader{audioAsyncCachedLoader_}, spriteAsyncCachedLoader{spriteAsyncCachedLoader_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMediaAsyncLoader
    operator GlobalNamespace::IMediaAsyncLoader() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMediaAsyncLoader*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ClearCache()
    // Offset: 0x21872FC
    void ClearCache();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadAudioClipAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x2187374
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* LoadAudioClipAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> LoadSpriteAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x2187488
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* LoadSpriteAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x218759C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedMediaAsyncLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CachedMediaAsyncLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedMediaAsyncLoader*, creationType>()));
    }
  }; // CachedMediaAsyncLoader
  #pragma pack(pop)
  static check_size<sizeof(CachedMediaAsyncLoader), 40 + sizeof(GlobalNamespace::AsyncCachedLoader_2<::Il2CppString*, UnityEngine::Sprite*>*)> __GlobalNamespace_CachedMediaAsyncLoaderSizeCheck;
  static_assert(sizeof(CachedMediaAsyncLoader) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
