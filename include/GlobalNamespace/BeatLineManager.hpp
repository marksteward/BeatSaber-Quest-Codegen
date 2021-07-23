// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatLine
#include "GlobalNamespace/BeatLine.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: BeatLineManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatLineManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _linesYPosition
    // Size: 0x4
    // Offset: 0x18
    float linesYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: linesYPosition and: beatmapObjectManager
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xE031DC
    // private BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE031EC
    // private BeatLine/Pool _beatLinePool
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatLine::Pool* beatLinePool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLine::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0xE031FC
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* activeBeatLines;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Vector4>* removeBeatLineKeyList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector4>*) == 0x8);
    // private System.Boolean _isMidRotationValid
    // Size: 0x1
    // Offset: 0x48
    bool isMidRotationValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMidRotationValid and: midRotation
    char __padding6[0x3] = {};
    // private System.Single _midRotation
    // Size: 0x4
    // Offset: 0x4C
    float midRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationRange
    // Size: 0x4
    // Offset: 0x50
    float rotationRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatLineManager
    BeatLineManager(float linesYPosition_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::BeatLine::Pool* beatLinePool_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* activeBeatLines_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector4>* removeBeatLineKeyList_ = {}, bool isMidRotationValid_ = {}, float midRotation_ = {}, float rotationRange_ = {}) noexcept : linesYPosition{linesYPosition_}, beatmapObjectManager{beatmapObjectManager_}, beatLinePool{beatLinePool_}, audioTimeSyncController{audioTimeSyncController_}, activeBeatLines{activeBeatLines_}, removeBeatLineKeyList{removeBeatLineKeyList_}, isMidRotationValid{isMidRotationValid_}, midRotation{midRotation_}, rotationRange{rotationRange_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _linesYPosition
    float _get__linesYPosition();
    // Set instance field: private System.Single _linesYPosition
    void _set__linesYPosition(float value);
    // Get instance field: private BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager* _get__beatmapObjectManager();
    // Set instance field: private BeatmapObjectManager _beatmapObjectManager
    void _set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager* value);
    // Get instance field: private BeatLine/Pool _beatLinePool
    GlobalNamespace::BeatLine::Pool* _get__beatLinePool();
    // Set instance field: private BeatLine/Pool _beatLinePool
    void _set__beatLinePool(GlobalNamespace::BeatLine::Pool* value);
    // Get instance field: private AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController* _get__audioTimeSyncController();
    // Set instance field: private AudioTimeSyncController _audioTimeSyncController
    void _set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController* value);
    // Get instance field: private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* _get__activeBeatLines();
    // Set instance field: private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    void _set__activeBeatLines(System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* value);
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    System::Collections::Generic::List_1<UnityEngine::Vector4>* _get__removeBeatLineKeyList();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    void _set__removeBeatLineKeyList(System::Collections::Generic::List_1<UnityEngine::Vector4>* value);
    // Get instance field: private System.Boolean _isMidRotationValid
    bool _get__isMidRotationValid();
    // Set instance field: private System.Boolean _isMidRotationValid
    void _set__isMidRotationValid(bool value);
    // Get instance field: private System.Single _midRotation
    float _get__midRotation();
    // Set instance field: private System.Single _midRotation
    void _set__midRotation(float value);
    // Get instance field: private System.Single _rotationRange
    float _get__rotationRange();
    // Set instance field: private System.Single _rotationRange
    void _set__rotationRange(float value);
    // public System.Boolean get_isMidRotationValid()
    // Offset: 0x1187E68
    bool get_isMidRotationValid();
    // public System.Single get_midRotation()
    // Offset: 0x1187E70
    float get_midRotation();
    // public System.Single get_rotationRange()
    // Offset: 0x1187E78
    float get_rotationRange();
    // protected System.Void Start()
    // Offset: 0x1187E80
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1187F14
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1187FA8
    void Update();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x118835C
    void HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x1188558
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatLineManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatLineManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatLineManager*, creationType>()));
    }
  }; // BeatLineManager
  #pragma pack(pop)
  static check_size<sizeof(BeatLineManager), 80 + sizeof(float)> __GlobalNamespace_BeatLineManagerSizeCheck;
  static_assert(sizeof(BeatLineManager) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLineManager*, "", "BeatLineManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_isMidRotationValid
// Il2CppName: get_isMidRotationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_isMidRotationValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_isMidRotationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_midRotation
// Il2CppName: get_midRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_midRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_midRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::get_rotationRange
// Il2CppName: get_rotationRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::get_rotationRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "get_rotationRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)()>(&GlobalNamespace::BeatLineManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::HandleNoteWasSpawned
// Il2CppName: HandleNoteWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatLineManager::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::BeatLineManager::HandleNoteWasSpawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatLineManager*), "HandleNoteWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatLineManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
