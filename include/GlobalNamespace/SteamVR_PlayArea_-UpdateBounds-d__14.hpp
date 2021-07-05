// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_PlayArea
#include "GlobalNamespace/SteamVR_PlayArea.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRChaperone
  class CVRChaperone;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_PlayArea/<UpdateBounds>d__14
  // [CompilerGeneratedAttribute] Offset: DD31C8
  class SteamVR_PlayArea::$UpdateBounds$d__14 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public SteamVR_PlayArea <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SteamVR_PlayArea* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_PlayArea*) == 0x8);
    // private Valve.VR.CVRChaperone <chaperone>5__2
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::CVRChaperone* $chaperone$5__2;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRChaperone*) == 0x8);
    // Creating value type constructor for type: $UpdateBounds$d__14
    $UpdateBounds$d__14(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::SteamVR_PlayArea* $$4__this_ = {}, Valve::VR::CVRChaperone* $chaperone$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $chaperone$5__2{$chaperone$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x13D8BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_PlayArea::$UpdateBounds$d__14* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_PlayArea::$UpdateBounds$d__14*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13D8C48
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13D8C4C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13D8D48
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13D8D50
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13D8DB0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SteamVR_PlayArea/<UpdateBounds>d__14
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_PlayArea::$UpdateBounds$d__14), 40 + sizeof(Valve::VR::CVRChaperone*)> __GlobalNamespace_SteamVR_PlayArea_$UpdateBounds$d__14SizeCheck;
  static_assert(sizeof(SteamVR_PlayArea::$UpdateBounds$d__14) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*, "", "SteamVR_PlayArea/<UpdateBounds>d__14");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::*)()>(&GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::*)()>(&GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::*)()>(&GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::*)()>(&GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::*)()>(&GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
