// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SaberActivityLineGraph
  class SaberActivityLineGraph : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SaberActivityLineGraph::$UpdateGraphCoroutine$d__12
    class $UpdateGraphCoroutine$d__12;
    // private SaberActivityCounter _saberActivityCounter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityCounter*) == 0x8);
    // private UnityEngine.LineRenderer _lineRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.LineRenderer _lineRenderer2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::LineRenderer* lineRenderer2;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // private System.Int32 _pointCount
    // Size: 0x4
    // Offset: 0x30
    int pointCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _pointDistance
    // Size: 0x4
    // Offset: 0x34
    float pointDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _scale
    // Size: 0x4
    // Offset: 0x38
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _updateFps
    // Size: 0x4
    // Offset: 0x3C
    float updateFps;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] _pointPositions
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Vector3>* pointPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Single> _pointsValues
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::Queue_1<float>* pointsValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<float>*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Single> _pointsValues2
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Queue_1<float>* pointsValues2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<float>*) == 0x8);
    // Creating value type constructor for type: SaberActivityLineGraph
    SaberActivityLineGraph(GlobalNamespace::SaberActivityCounter* saberActivityCounter_ = {}, UnityEngine::LineRenderer* lineRenderer_ = {}, UnityEngine::LineRenderer* lineRenderer2_ = {}, int pointCount_ = {}, float pointDistance_ = {}, float scale_ = {}, float updateFps_ = {}, ::Array<UnityEngine::Vector3>* pointPositions_ = {}, System::Collections::Generic::Queue_1<float>* pointsValues_ = {}, System::Collections::Generic::Queue_1<float>* pointsValues2_ = {}) noexcept : saberActivityCounter{saberActivityCounter_}, lineRenderer{lineRenderer_}, lineRenderer2{lineRenderer2_}, pointCount{pointCount_}, pointDistance{pointDistance_}, scale{scale_}, updateFps{updateFps_}, pointPositions{pointPositions_}, pointsValues{pointsValues_}, pointsValues2{pointsValues2_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x10B4B88
    void Awake();
    // protected System.Void Start()
    // Offset: 0x10B4D4C
    void Start();
    // private System.Collections.IEnumerator UpdateGraphCoroutine()
    // Offset: 0x10B4D78
    System::Collections::IEnumerator* UpdateGraphCoroutine();
    // public System.Void .ctor()
    // Offset: 0x10B4E14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberActivityLineGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberActivityLineGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberActivityLineGraph*, creationType>()));
    }
  }; // SaberActivityLineGraph
  #pragma pack(pop)
  static check_size<sizeof(SaberActivityLineGraph), 80 + sizeof(System::Collections::Generic::Queue_1<float>*)> __GlobalNamespace_SaberActivityLineGraphSizeCheck;
  static_assert(sizeof(SaberActivityLineGraph) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityLineGraph*, "", "SaberActivityLineGraph");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityLineGraph::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityLineGraph::*)()>(&GlobalNamespace::SaberActivityLineGraph::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityLineGraph*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityLineGraph::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityLineGraph::*)()>(&GlobalNamespace::SaberActivityLineGraph::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityLineGraph*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityLineGraph::UpdateGraphCoroutine
// Il2CppName: UpdateGraphCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SaberActivityLineGraph::*)()>(&GlobalNamespace::SaberActivityLineGraph::UpdateGraphCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityLineGraph*), "UpdateGraphCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityLineGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
