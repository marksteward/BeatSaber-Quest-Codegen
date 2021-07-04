// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardTableView
  class LocalLeaderboardTableView : public GlobalNamespace::LeaderboardTableView {
    public:
    // Creating value type constructor for type: LocalLeaderboardTableView
    LocalLeaderboardTableView() noexcept {}
    // public System.Void SetScores(System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> scores, System.Int32 specialScorePos, System.Int32 maxNumberOfCells)
    // Offset: 0x23F6CF4
    void SetScores(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* scores, int specialScorePos, int maxNumberOfCells);
    // public System.Void .ctor()
    // Offset: 0x23F6EBC
    // Implemented from: LeaderboardTableView
    // Base method: System.Void LeaderboardTableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalLeaderboardTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardTableView*, creationType>()));
    }
  }; // LocalLeaderboardTableView
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardTableView*, "", "LocalLeaderboardTableView");
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardTableView::SetScores
// Il2CppName: SetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardTableView::*)(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>*, int, int)>(&GlobalNamespace::LocalLeaderboardTableView::SetScores)> {
  const MethodInfo* get() {
    static auto* scores = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LocalLeaderboardsModel/ScoreData")})->byval_arg;
    static auto* specialScorePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxNumberOfCells = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardTableView*), "SetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scores, specialScorePos, maxNumberOfCells});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
