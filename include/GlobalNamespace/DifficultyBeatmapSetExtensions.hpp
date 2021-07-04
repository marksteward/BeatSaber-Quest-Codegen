// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyBeatmapSetExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DifficultyBeatmapSetExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DifficultyBeatmapSetExtensions
    DifficultyBeatmapSetExtensions() noexcept {}
    // static public T[] GetDifficultyBeatmapSetsWithout360Movement(T[] difficultyBeatmapSets)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetDifficultyBeatmapSetsWithout360Movement(::Array<T>* difficultyBeatmapSets) {
      static_assert(std::is_base_of_v<GlobalNamespace::IDifficultyBeatmapSet, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "DifficultyBeatmapSetExtensions", "GetDifficultyBeatmapSetsWithout360Movement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(difficultyBeatmapSets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, difficultyBeatmapSets);
    }
    // static public PreviewDifficultyBeatmapSet[] GetPreviewDifficultyBeatmapSets(T[] difficultyBeatmapSets)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* GetPreviewDifficultyBeatmapSets(::Array<T>* difficultyBeatmapSets) {
      static_assert(std::is_base_of_v<GlobalNamespace::IDifficultyBeatmapSet, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "DifficultyBeatmapSetExtensions", "GetPreviewDifficultyBeatmapSets", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(difficultyBeatmapSets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, difficultyBeatmapSets);
    }
  }; // DifficultyBeatmapSetExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSetExtensions*, "", "DifficultyBeatmapSetExtensions");
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSetExtensions::GetDifficultyBeatmapSetsWithout360Movement
// Il2CppName: GetDifficultyBeatmapSetsWithout360Movement
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSets
// Il2CppName: GetPreviewDifficultyBeatmapSets
// Cannot write MetadataGetter for generic methods!
