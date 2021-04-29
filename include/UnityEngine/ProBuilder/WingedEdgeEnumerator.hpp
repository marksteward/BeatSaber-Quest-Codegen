// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdgeEnumerator
  class WingedEdgeEnumerator : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge*>*/ {
    public:
    // private UnityEngine.ProBuilder.WingedEdge m_Start
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::WingedEdge* m_Start;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // private UnityEngine.ProBuilder.WingedEdge m_Current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::WingedEdge* m_Current;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // Creating value type constructor for type: WingedEdgeEnumerator
    WingedEdgeEnumerator(UnityEngine::ProBuilder::WingedEdge* m_Start_ = {}, UnityEngine::ProBuilder::WingedEdge* m_Current_ = {}) noexcept : m_Start{m_Start_}, m_Current{m_Current_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.WingedEdge start)
    // Offset: 0x209E554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdgeEnumerator* New_ctor(UnityEngine::ProBuilder::WingedEdge* start) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::WingedEdgeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdgeEnumerator*, creationType>(start)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x209E860
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x20AA7D4
    void Reset();
    // public UnityEngine.ProBuilder.WingedEdge get_Current()
    // Offset: 0x209E580
    UnityEngine::ProBuilder::WingedEdge* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x20AA7DC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x20AA820
    void Dispose();
  }; // UnityEngine.ProBuilder.WingedEdgeEnumerator
  #pragma pack(pop)
  static check_size<sizeof(WingedEdgeEnumerator), 24 + sizeof(UnityEngine::ProBuilder::WingedEdge*)> __UnityEngine_ProBuilder_WingedEdgeEnumeratorSizeCheck;
  static_assert(sizeof(WingedEdgeEnumerator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdgeEnumerator*, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
