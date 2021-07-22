// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/ModestTree.Util.<get_AllScenes>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityUtil::$get_AllScenes$d__1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>, public System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.SceneManagement.Scene <>2__current
    // Size: 0x4
    // Offset: 0x14
    UnityEngine::SceneManagement::Scene $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::SceneManagement::Scene) == 0x4);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x18
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x1C
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $get_AllScenes$d__1
    $get_AllScenes$d__1(int $$1__state_ = {}, UnityEngine::SceneManagement::Scene $$2__current_ = {}, int $$l__initialThreadId_ = {}, int $i$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $i$5__2{$i$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>*>(this);
    }
    // private UnityEngine.SceneManagement.Scene System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current()
    // Offset: 0x13779CC
    UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator$UnityEngine_SceneManagement_Scene$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1377A34
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1375864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$get_AllScenes$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$get_AllScenes$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$get_AllScenes$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13778D4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13778D8
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13779D4
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator()
    // Offset: 0x1377A98
    System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>* System_Collections_Generic_IEnumerable$UnityEngine_SceneManagement_Scene$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1377B30
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/ModestTree.Util.<get_AllScenes>d__1
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$get_AllScenes$d__1), 28 + sizeof(int)> __ModestTree_Util_UnityUtil_$get_AllScenes$d__1SizeCheck;
  static_assert(sizeof(UnityUtil::$get_AllScenes$d__1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*, "ModestTree.Util", "UnityUtil/<get_AllScenes>d__1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_Generic_IEnumerator$UnityEngine_SceneManagement_Scene$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SceneManagement::Scene (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_Generic_IEnumerator$UnityEngine_SceneManagement_Scene$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_Generic_IEnumerable$UnityEngine_SceneManagement_Scene$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>* (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_Generic_IEnumerable$UnityEngine_SceneManagement_Scene$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (ModestTree::Util::UnityUtil::$get_AllScenes$d__1::*)()>(&ModestTree::Util::UnityUtil::$get_AllScenes$d__1::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil::$get_AllScenes$d__1*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
