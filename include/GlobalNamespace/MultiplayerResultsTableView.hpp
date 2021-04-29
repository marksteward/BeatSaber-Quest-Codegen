// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsTableCell
  class MultiplayerResultsTableCell;
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsTableView
  class MultiplayerResultsTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1
    class $$c__DisplayClass30_1;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31
    class $PlayRandomRowSlideInSound$d__31;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$PlayAvatarSlideInSound$d__32
    class $PlayAvatarSlideInSound$d__32;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private UnityEngine.RectTransform _tableViewRectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* tableViewRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private MultiplayerResultsTableCell _winnerTableCell
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerResultsTableCell* winnerTableCell;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsTableCell*) == 0x8);
    // private MultiplayerResultsTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerResultsTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsTableCell*) == 0x8);
    // [SpaceAttribute] Offset: 0xD469A0
    // private System.Single _startRowXPosition
    // Size: 0x4
    // Offset: 0x38
    float startRowXPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x3C
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rowXOffset
    // Size: 0x4
    // Offset: 0x40
    float rowXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x44
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationSeparationTime
    // Size: 0x4
    // Offset: 0x48
    float animationSeparationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _winnerAnimationDuration
    // Size: 0x4
    // Offset: 0x4C
    float winnerAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _duelTablePosXOffset
    // Size: 0x4
    // Offset: 0x50
    float duelTablePosXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duelTablePosXOffset and: multiplayerOffsetByLocalPlayerPosition
    char __padding10[0x4] = {};
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*) == 0x8);
    // [HeaderAttribute] Offset: 0xD46A48
    // private UnityEngine.AudioSource _outroSfxAudioSource
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::AudioSource* outroSfxAudioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip[] _rowSlideAudioClips
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::AudioClip*>* rowSlideAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private UnityEngine.AudioClip _avatarSlideAudioClip
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AudioClip* avatarSlideAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0xD46AB4
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x78
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD46AC4
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xD46AD4
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rotationOffset
    // Size: 0x10
    // Offset: 0xA4
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _lastParentPosition
    // Size: 0xC
    // Offset: 0xB4
    UnityEngine::Vector3 lastParentPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _lastParentRotation
    // Size: 0x10
    // Offset: 0xC0
    UnityEngine::Quaternion lastParentRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: MultiplayerResultsTableView
    MultiplayerResultsTableView(HMUI::TableView* tableView_ = {}, UnityEngine::RectTransform* tableViewRectTransform_ = {}, GlobalNamespace::MultiplayerResultsTableCell* winnerTableCell_ = {}, GlobalNamespace::MultiplayerResultsTableCell* cellPrefab_ = {}, float startRowXPosition_ = {}, float rowHeight_ = {}, float rowXOffset_ = {}, float animationDuration_ = {}, float animationSeparationTime_ = {}, float winnerAnimationDuration_ = {}, float duelTablePosXOffset_ = {}, GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition_ = {}, UnityEngine::AudioSource* outroSfxAudioSource_ = {}, ::Array<UnityEngine::AudioClip*>* rowSlideAudioClips_ = {}, UnityEngine::AudioClip* avatarSlideAudioClip_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList_ = {}, UnityEngine::Vector3 positionOffset_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, UnityEngine::Vector3 lastParentPosition_ = {}, UnityEngine::Quaternion lastParentRotation_ = {}) noexcept : tableView{tableView_}, tableViewRectTransform{tableViewRectTransform_}, winnerTableCell{winnerTableCell_}, cellPrefab{cellPrefab_}, startRowXPosition{startRowXPosition_}, rowHeight{rowHeight_}, rowXOffset{rowXOffset_}, animationDuration{animationDuration_}, animationSeparationTime{animationSeparationTime_}, winnerAnimationDuration{winnerAnimationDuration_}, duelTablePosXOffset{duelTablePosXOffset_}, multiplayerOffsetByLocalPlayerPosition{multiplayerOffsetByLocalPlayerPosition_}, outroSfxAudioSource{outroSfxAudioSource_}, rowSlideAudioClips{rowSlideAudioClips_}, avatarSlideAudioClip{avatarSlideAudioClip_}, tweeningManager{tweeningManager_}, layoutProvider{layoutProvider_}, container{container_}, dataList{dataList_}, positionOffset{positionOffset_}, rotationOffset{rotationOffset_}, lastParentPosition{lastParentPosition_}, lastParentRotation{lastParentRotation_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Single CellSize()
    // Offset: 0x100EBA8
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x100EBB0
    int NumberOfCells();
    // protected System.Void Awake()
    // Offset: 0x100EC20
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x100EC80
    void OnDestroy();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x100ED18
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> dataList)
    // Offset: 0x100F160
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);
    // public System.Single StartAnimation()
    // Offset: 0x100F408
    float StartAnimation();
    // private System.Collections.IEnumerator PlayRandomRowSlideInSound(System.Single delay)
    // Offset: 0x100FC8C
    System::Collections::IEnumerator* PlayRandomRowSlideInSound(float delay);
    // private System.Collections.IEnumerator PlayAvatarSlideInSound(System.Single delay)
    // Offset: 0x100FD38
    System::Collections::IEnumerator* PlayAvatarSlideInSound(float delay);
    // private System.Void <StartAnimation>b__30_1()
    // Offset: 0x100FE00
    void $StartAnimation$b__30_1();
    // private System.Void <StartAnimation>b__30_4()
    // Offset: 0x100FE34
    void $StartAnimation$b__30_4();
    // private System.Void <StartAnimation>b__30_5(System.Single val)
    // Offset: 0x100FE68
    void $StartAnimation$b__30_5(float val);
    // public System.Void .ctor()
    // Offset: 0x100FDE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsTableView*, creationType>()));
    }
  }; // MultiplayerResultsTableView
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsTableView), 192 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_MultiplayerResultsTableViewSizeCheck;
  static_assert(sizeof(MultiplayerResultsTableView) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView*, "", "MultiplayerResultsTableView");
