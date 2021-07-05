// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IReadonlyBeatmapLineData
#include "GlobalNamespace/IReadonlyBeatmapLineData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLineData
  class BeatmapLineData : public ::Il2CppObject/*, public GlobalNamespace::IReadonlyBeatmapLineData*/ {
    public:
    // private readonly System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectsData
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLineData
    BeatmapLineData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData_ = {}) noexcept : beatmapObjectsData{beatmapObjectsData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IReadonlyBeatmapLineData
    operator GlobalNamespace::IReadonlyBeatmapLineData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReadonlyBeatmapLineData*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*() const noexcept {
      return beatmapObjectsData;
    }
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0x23DFB08
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x23DFB10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLineData* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLineData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLineData*, creationType>(initialCapacity)));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapObjectData> beatmapObjectData)
    // Offset: 0x23DFB94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLineData* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLineData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLineData*, creationType>(beatmapObjectData)));
    }
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x23DFBC0
    void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
  }; // BeatmapLineData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLineData), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*)> __GlobalNamespace_BeatmapLineDataSizeCheck;
  static_assert(sizeof(BeatmapLineData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLineData*, "", "BeatmapLineData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLineData::get_beatmapObjectsData
// Il2CppName: get_beatmapObjectsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::BeatmapLineData::*)()>(&GlobalNamespace::BeatmapLineData::get_beatmapObjectsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLineData*), "get_beatmapObjectsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLineData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLineData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLineData::AddBeatmapObjectData
// Il2CppName: AddBeatmapObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLineData::*)(GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::BeatmapLineData::AddBeatmapObjectData)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLineData*), "AddBeatmapObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
