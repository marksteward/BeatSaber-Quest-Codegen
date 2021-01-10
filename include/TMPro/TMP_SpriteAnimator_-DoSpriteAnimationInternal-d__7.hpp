// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_SpriteAnimator
#include "TMPro/TMP_SpriteAnimator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: TMPro.TMP_CharacterInfo
#include "TMPro/TMP_CharacterInfo.hpp"
// Including type: TMPro.TMP_MeshInfo
#include "TMPro/TMP_MeshInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x1F8
  // Autogenerated type: TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D8B460
  class TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public TMPro.TMP_SpriteAnimator <>4__this
    // Size: 0x8
    // Offset: 0x20
    TMPro::TMP_SpriteAnimator* $$4__this;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAnimator*) == 0x8);
    // public System.Int32 start
    // Size: 0x4
    // Offset: 0x28
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 end
    // Size: 0x4
    // Offset: 0x2C
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x30
    TMPro::TMP_SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAsset*) == 0x8);
    // public System.Int32 currentCharacter
    // Size: 0x4
    // Offset: 0x38
    int currentCharacter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 framerate
    // Size: 0x4
    // Offset: 0x3C
    int framerate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <currentFrame>5__2
    // Size: 0x4
    // Offset: 0x40
    int $currentFrame$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $currentFrame$5__2 and: $charInfo$5__3
    char __padding8[0x4] = {};
    // private TMPro.TMP_CharacterInfo <charInfo>5__3
    // Size: 0x151
    // Offset: 0x48
    TMPro::TMP_CharacterInfo $charInfo$5__3;
    // Field size check
    static_assert(sizeof(TMPro::TMP_CharacterInfo) == 0x151);
    // Padding between fields: $charInfo$5__3 and: $materialIndex$5__4
    char __padding9[0x7] = {};
    // private System.Int32 <materialIndex>5__4
    // Size: 0x4
    // Offset: 0x1A0
    int $materialIndex$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <vertexIndex>5__5
    // Size: 0x4
    // Offset: 0x1A4
    int $vertexIndex$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private TMPro.TMP_MeshInfo <meshInfo>5__6
    // Size: 0x48
    // Offset: 0x1A8
    TMPro::TMP_MeshInfo $meshInfo$5__6;
    // Field size check
    static_assert(sizeof(TMPro::TMP_MeshInfo) == 0x48);
    // private System.Single <elapsedTime>5__7
    // Size: 0x4
    // Offset: 0x1F0
    float $elapsedTime$5__7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <targetTime>5__8
    // Size: 0x4
    // Offset: 0x1F4
    float $targetTime$5__8;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $DoSpriteAnimationInternal$d__7
    $DoSpriteAnimationInternal$d__7(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, TMPro::TMP_SpriteAnimator* $$4__this_ = {}, int start_ = {}, int end_ = {}, TMPro::TMP_SpriteAsset* spriteAsset_ = {}, int currentCharacter_ = {}, int framerate_ = {}, int $currentFrame$5__2_ = {}, TMPro::TMP_CharacterInfo $charInfo$5__3_ = {}, int $materialIndex$5__4_ = {}, int $vertexIndex$5__5_ = {}, TMPro::TMP_MeshInfo $meshInfo$5__6_ = {}, float $elapsedTime$5__7_ = {}, float $targetTime$5__8_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, start{start_}, end{end_}, spriteAsset{spriteAsset_}, currentCharacter{currentCharacter_}, framerate{framerate_}, $currentFrame$5__2{$currentFrame$5__2_}, $charInfo$5__3{$charInfo$5__3_}, $materialIndex$5__4{$materialIndex$5__4_}, $vertexIndex$5__5{$vertexIndex$5__5_}, $meshInfo$5__6{$meshInfo$5__6_}, $elapsedTime$5__7{$elapsedTime$5__7_}, $targetTime$5__8{$targetTime$5__8_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF89E7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF89F28
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF89F2C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF8A898
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF8A8A0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF8A900
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
  static check_size<sizeof(TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7), 500 + sizeof(float)> __TMPro_TMP_SpriteAnimator_$DoSpriteAnimationInternal$d__7SizeCheck;
  static_assert(sizeof(TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7) == 0x1F8);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*, "TMPro", "TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7");
#pragma pack(pop)
