// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapData
#include "GlobalNamespace/BeatmapData.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapData/<get_beatmapObjectsData>d__31
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapData::$get_beatmapObjectsData$d__31 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private BeatmapObjectData <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectData* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectData*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public BeatmapData <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapData* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // private BeatmapLineData[] <beatmapLinesData>5__2
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::BeatmapLineData*>* $beatmapLinesData$5__2;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLineData*>*) == 0x8);
    // private System.Int32[] <idxs>5__3
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* $idxs$5__3;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private BeatmapObjectData <minBeatmapObjectData>5__4
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectData* $minBeatmapObjectData$5__4;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectData*) == 0x8);
    // Creating value type constructor for type: $get_beatmapObjectsData$d__31
    $get_beatmapObjectsData$d__31(int $$1__state_ = {}, GlobalNamespace::BeatmapObjectData* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::BeatmapData* $$4__this_ = {}, ::Array<GlobalNamespace::BeatmapLineData*>* $beatmapLinesData$5__2_ = {}, ::Array<int>* $idxs$5__3_ = {}, GlobalNamespace::BeatmapObjectData* $minBeatmapObjectData$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $beatmapLinesData$5__2{$beatmapLinesData$5__2_}, $idxs$5__3{$idxs$5__3_}, $minBeatmapObjectData$5__4{$minBeatmapObjectData$5__4_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>*>(this);
    }
    // private BeatmapObjectData System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current()
    // Offset: 0x118F220
    GlobalNamespace::BeatmapObjectData* System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x118F288
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x118D4E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapData::$get_beatmapObjectsData$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapData::$get_beatmapObjectsData$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x118EF50
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x118EF54
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x118F228
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<BeatmapObjectData> System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator()
    // Offset: 0x118F290
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>* System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x118F33C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BeatmapData/<get_beatmapObjectsData>d__31
  #pragma pack(pop)
  static check_size<sizeof(BeatmapData::$get_beatmapObjectsData$d__31), 64 + sizeof(GlobalNamespace::BeatmapObjectData*)> __GlobalNamespace_BeatmapData_$get_beatmapObjectsData$d__31SizeCheck;
  static_assert(sizeof(BeatmapData::$get_beatmapObjectsData$d__31) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*, "", "BeatmapData/<get_beatmapObjectsData>d__31");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectData* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_Generic_IEnumerator$BeatmapObjectData$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.Collections.Generic.IEnumerator<BeatmapObjectData>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_Generic_IEnumerable$BeatmapObjectData$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.Collections.Generic.IEnumerable<BeatmapObjectData>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::*)()>(&GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
