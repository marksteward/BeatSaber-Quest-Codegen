// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ISaberSwingRatingCounterDidFinishReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class ISaberSwingRatingCounterDidFinishReceiver : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ISaberSwingRatingCounterDidFinishReceiver
    ISaberSwingRatingCounterDidFinishReceiver() noexcept {}
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter saberSwingRatingCounter)
    // Offset: 0xFFFFFFFF
    void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);
  }; // ISaberSwingRatingCounterDidFinishReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*, "", "ISaberSwingRatingCounterDidFinishReceiver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::*)(GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter});
  }
};
