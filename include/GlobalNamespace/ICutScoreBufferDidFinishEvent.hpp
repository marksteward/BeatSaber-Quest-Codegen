// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ICutScoreBufferDidFinishEvent
  class ICutScoreBufferDidFinishEvent {
    public:
    // Creating value type constructor for type: ICutScoreBufferDidFinishEvent
    ICutScoreBufferDidFinishEvent() noexcept {}
    // public System.Void HandleCutScoreBufferDidFinish(CutScoreBuffer cutScoreBuffer)
    // Offset: 0xFFFFFFFF
    void HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
  }; // ICutScoreBufferDidFinishEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICutScoreBufferDidFinishEvent*, "", "ICutScoreBufferDidFinishEvent");
// Writing MetadataGetter for method: GlobalNamespace::ICutScoreBufferDidFinishEvent::HandleCutScoreBufferDidFinish
// Il2CppName: HandleCutScoreBufferDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICutScoreBufferDidFinishEvent::*)(GlobalNamespace::CutScoreBuffer*)>(&GlobalNamespace::ICutScoreBufferDidFinishEvent::HandleCutScoreBufferDidFinish)> {
  const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "CutScoreBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICutScoreBufferDidFinishEvent*), "HandleCutScoreBufferDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer});
  }
};
