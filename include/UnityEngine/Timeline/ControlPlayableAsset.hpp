// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.IPropertyPreview
#include "UnityEngine/Timeline/IPropertyPreview.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
// Including type: UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
#include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.ControlPlayableAsset
  // [NotKeyableAttribute] Offset: CFCAE8
  class ControlPlayableAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::IPropertyPreview, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // Nested type: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__38
    class $GetControlableScripts$d__38;
    // public UnityEngine.ExposedReference`1<UnityEngine.GameObject> sourceGameObject
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    UnityEngine::ExposedReference_1<UnityEngine::GameObject*> sourceGameObject;
    // public UnityEngine.GameObject prefabGameObject
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* prefabGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public System.Boolean updateParticle
    // Size: 0x1
    // Offset: 0x30
    bool updateParticle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.UInt32 particleRandomSeed
    // Size: 0x4
    // Offset: 0x34
    uint particleRandomSeed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean updateDirector
    // Size: 0x1
    // Offset: 0x38
    bool updateDirector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean updateITimeControl
    // Size: 0x1
    // Offset: 0x39
    bool updateITimeControl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean searchHierarchy
    // Size: 0x1
    // Offset: 0x3A
    bool searchHierarchy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean active
    // Size: 0x1
    // Offset: 0x3B
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState postPlayback
    // Size: 0x4
    // Offset: 0x3C
    UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlayback;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState) == 0x4);
    // private UnityEngine.Playables.PlayableAsset m_ControlDirectorAsset
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableAsset*) == 0x8);
    // private System.Double m_Duration
    // Size: 0x8
    // Offset: 0x48
    double m_Duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_SupportLoop
    // Size: 0x1
    // Offset: 0x50
    bool m_SupportLoop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCFDD50
    // private System.Boolean <controllingDirectors>k__BackingField
    // Size: 0x1
    // Offset: 0x51
    bool controllingDirectors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCFDD60
    // private System.Boolean <controllingParticles>k__BackingField
    // Size: 0x1
    // Offset: 0x52
    bool controllingParticles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ControlPlayableAsset
    ControlPlayableAsset(UnityEngine::ExposedReference_1<UnityEngine::GameObject*> sourceGameObject_ = {}, UnityEngine::GameObject* prefabGameObject_ = {}, bool updateParticle_ = {}, uint particleRandomSeed_ = {}, bool updateDirector_ = {}, bool updateITimeControl_ = {}, bool searchHierarchy_ = {}, bool active_ = {}, UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlayback_ = {}, UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset_ = {}, double m_Duration_ = {}, bool m_SupportLoop_ = {}, bool controllingDirectors_ = {}, bool controllingParticles_ = {}) noexcept : sourceGameObject{sourceGameObject_}, prefabGameObject{prefabGameObject_}, updateParticle{updateParticle_}, particleRandomSeed{particleRandomSeed_}, updateDirector{updateDirector_}, updateITimeControl{updateITimeControl_}, searchHierarchy{searchHierarchy_}, active{active_}, postPlayback{postPlayback_}, m_ControlDirectorAsset{m_ControlDirectorAsset_}, m_Duration{m_Duration_}, m_SupportLoop{m_SupportLoop_}, controllingDirectors{controllingDirectors_}, controllingParticles{controllingParticles_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::IPropertyPreview
    operator UnityEngine::Timeline::IPropertyPreview() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::IPropertyPreview*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 k_MaxRandInt
    static constexpr const int k_MaxRandInt = 10000;
    // Get static field: static private System.Int32 k_MaxRandInt
    static int _get_k_MaxRandInt();
    // Set static field: static private System.Int32 k_MaxRandInt
    static void _set_k_MaxRandInt(int value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Playables.PlayableDirector> k_EmptyDirectorsList
    static System::Collections::Generic::List_1<UnityEngine::Playables::PlayableDirector*>* _get_k_EmptyDirectorsList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Playables.PlayableDirector> k_EmptyDirectorsList
    static void _set_k_EmptyDirectorsList(System::Collections::Generic::List_1<UnityEngine::Playables::PlayableDirector*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.ParticleSystem> k_EmptyParticlesList
    static System::Collections::Generic::List_1<UnityEngine::ParticleSystem*>* _get_k_EmptyParticlesList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.ParticleSystem> k_EmptyParticlesList
    static void _set_k_EmptyParticlesList(System::Collections::Generic::List_1<UnityEngine::ParticleSystem*>* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<UnityEngine.Playables.PlayableDirector> s_ProcessedDirectors
    static System::Collections::Generic::HashSet_1<UnityEngine::Playables::PlayableDirector*>* _get_s_ProcessedDirectors();
    // Set static field: static private System.Collections.Generic.HashSet`1<UnityEngine.Playables.PlayableDirector> s_ProcessedDirectors
    static void _set_s_ProcessedDirectors(System::Collections::Generic::HashSet_1<UnityEngine::Playables::PlayableDirector*>* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> s_CreatedPrefabs
    static System::Collections::Generic::HashSet_1<UnityEngine::GameObject*>* _get_s_CreatedPrefabs();
    // Set static field: static private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> s_CreatedPrefabs
    static void _set_s_CreatedPrefabs(System::Collections::Generic::HashSet_1<UnityEngine::GameObject*>* value);
    // System.Boolean get_controllingDirectors()
    // Offset: 0x16825E8
    bool get_controllingDirectors();
    // private System.Void set_controllingDirectors(System.Boolean value)
    // Offset: 0x16825F0
    void set_controllingDirectors(bool value);
    // System.Boolean get_controllingParticles()
    // Offset: 0x16825FC
    bool get_controllingParticles();
    // private System.Void set_controllingParticles(System.Boolean value)
    // Offset: 0x1682604
    void set_controllingParticles(bool value);
    // public System.Void OnEnable()
    // Offset: 0x1682610
    void OnEnable();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1682654
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // static private UnityEngine.Playables.Playable ConnectPlayablesToMixer(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> playables)
    // Offset: 0x1684440
    static UnityEngine::Playables::Playable ConnectPlayablesToMixer(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* playables);
    // private System.Void CreateActivationPlayable(UnityEngine.GameObject root, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0x1683890
    void CreateActivationPlayable(UnityEngine::GameObject* root, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // private System.Void SearchHiearchyAndConnectParticleSystem(System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem> particleSystems, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0x1683D54
    void SearchHiearchyAndConnectParticleSystem(System::Collections::Generic::IEnumerable_1<UnityEngine::ParticleSystem*>* particleSystems, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // private System.Void SearchHierarchyAndConnectDirector(System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableDirector> directors, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables, System.Boolean disableSelfReferences)
    // Offset: 0x1683994
    void SearchHierarchyAndConnectDirector(System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableDirector*>* directors, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables, bool disableSelfReferences);
    // static private System.Void SearchHierarchyAndConnectControlableScripts(System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour> controlableScripts, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0x1684114
    static void SearchHierarchyAndConnectControlableScripts(System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>* controlableScripts, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // static private System.Void ConnectMixerAndPlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable mixer, UnityEngine.Playables.Playable playable, System.Int32 portIndex)
    // Offset: 0x168458C
    static void ConnectMixerAndPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable mixer, UnityEngine::Playables::Playable playable, int portIndex);
    // System.Collections.Generic.IList`1<T> GetComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Collections::Generic::IList_1<T>* GetComponent(UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ControlPlayableAsset::GetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IList_1<T>*, false>(this, ___generic__method, gameObject);
    }
    // static System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour> GetControlableScripts(UnityEngine.GameObject root)
    // Offset: 0x1684094
    static System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>* GetControlableScripts(UnityEngine::GameObject* root);
    // System.Void UpdateDurationAndLoopFlag(System.Collections.Generic.IList`1<UnityEngine.Playables.PlayableDirector> directors, System.Collections.Generic.IList`1<UnityEngine.ParticleSystem> particleSystems)
    // Offset: 0x168302C
    void UpdateDurationAndLoopFlag(System::Collections::Generic::IList_1<UnityEngine::Playables::PlayableDirector*>* directors, System::Collections::Generic::IList_1<UnityEngine::ParticleSystem*>* particleSystems);
    // private System.Collections.Generic.IList`1<UnityEngine.ParticleSystem> GetParticleSystemRoots(UnityEngine.GameObject go)
    // Offset: 0x1682F44
    System::Collections::Generic::IList_1<UnityEngine::ParticleSystem*>* GetParticleSystemRoots(UnityEngine::GameObject* go);
    // static private System.Void GetParticleSystemRoots(UnityEngine.Transform t, System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem> roots)
    // Offset: 0x1684A6C
    static void GetParticleSystemRoots(UnityEngine::Transform* t, System::Collections::Generic::ICollection_1<UnityEngine::ParticleSystem*>* roots);
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0x1684C10
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // static System.Void PreviewParticles(UnityEngine.Timeline.IPropertyCollector driver, System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem> particles)
    // Offset: 0x1684F14
    static void PreviewParticles(UnityEngine::Timeline::IPropertyCollector* driver, System::Collections::Generic::IEnumerable_1<UnityEngine::ParticleSystem*>* particles);
    // static System.Void PreviewActivation(UnityEngine.Timeline.IPropertyCollector driver, System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> objects)
    // Offset: 0x16852D8
    static void PreviewActivation(UnityEngine::Timeline::IPropertyCollector* driver, System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* objects);
    // static System.Void PreviewTimeControl(UnityEngine.Timeline.IPropertyCollector driver, UnityEngine.Playables.PlayableDirector director, System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour> scripts)
    // Offset: 0x16855C4
    static void PreviewTimeControl(UnityEngine::Timeline::IPropertyCollector* driver, UnityEngine::Playables::PlayableDirector* director, System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>* scripts);
    // static System.Void PreviewDirectors(UnityEngine.Timeline.IPropertyCollector driver, System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableDirector> directors)
    // Offset: 0x168595C
    static void PreviewDirectors(UnityEngine::Timeline::IPropertyCollector* driver, System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableDirector*>* directors);
    // public override System.Double get_duration()
    // Offset: 0x168264C
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1682660
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public System.Void .ctor()
    // Offset: 0x1685F48
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControlPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ControlPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControlPlayableAsset*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1685FDC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Timeline.ControlPlayableAsset
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ControlPlayableAsset*, "UnityEngine.Timeline", "ControlPlayableAsset");
