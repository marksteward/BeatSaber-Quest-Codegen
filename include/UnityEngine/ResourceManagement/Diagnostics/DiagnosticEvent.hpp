// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
  struct DiagnosticEvent/*, public System::ValueType*/ {
    public:
    // private System.String m_Graph
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_Graph;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32[] m_Dependencies
    // Size: 0x8
    // Offset: 0x8
    ::Array<int>* m_Dependencies;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 m_ObjectId
    // Size: 0x4
    // Offset: 0x10
    int m_ObjectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ObjectId and: m_DisplayName
    char __padding2[0x4] = {};
    // private System.String m_DisplayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_Stream
    // Size: 0x4
    // Offset: 0x20
    int m_Stream;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Frame
    // Size: 0x4
    // Offset: 0x24
    int m_Frame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Value
    // Size: 0x4
    // Offset: 0x28
    int m_Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DiagnosticEvent
    constexpr DiagnosticEvent(::Il2CppString* m_Graph_ = {}, ::Array<int>* m_Dependencies_ = {}, int m_ObjectId_ = {}, ::Il2CppString* m_DisplayName_ = {}, int m_Stream_ = {}, int m_Frame_ = {}, int m_Value_ = {}) noexcept : m_Graph{m_Graph_}, m_Dependencies{m_Dependencies_}, m_ObjectId{m_ObjectId_}, m_DisplayName{m_DisplayName_}, m_Stream{m_Stream_}, m_Frame{m_Frame_}, m_Value{m_Value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_Graph()
    // Offset: 0xF02CD4
    ::Il2CppString* get_Graph();
    // public System.Int32 get_ObjectId()
    // Offset: 0xF02CDC
    int get_ObjectId();
    // public System.String get_DisplayName()
    // Offset: 0xF02CE4
    ::Il2CppString* get_DisplayName();
    // public System.Int32[] get_Dependencies()
    // Offset: 0xF02CEC
    ::Array<int>* get_Dependencies();
    // public System.Int32 get_Stream()
    // Offset: 0xF02CF4
    int get_Stream();
    // public System.Int32 get_Frame()
    // Offset: 0xF02CFC
    int get_Frame();
    // public System.Int32 get_Value()
    // Offset: 0xF02D04
    int get_Value();
    // public System.Void .ctor(System.String graph, System.String name, System.Int32 id, System.Int32 stream, System.Int32 frame, System.Int32 value, System.Int32[] deps)
    // Offset: 0xF02D0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DiagnosticEvent(::Il2CppString* graph, ::Il2CppString* name, int id, int stream, int frame, int value, ::Array<int>* deps) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(graph), ::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(stream), ::il2cpp_utils::ExtractType(frame), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(deps)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, graph, name, id, stream, frame, value, deps);
    }
    // System.Byte[] Serialize()
    // Offset: 0xF02D24
    ::Array<uint8_t>* Serialize();
    // static public UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent Deserialize(System.Byte[] data)
    // Offset: 0x19C1BB8
    static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent Deserialize(::Array<uint8_t>* data);
  }; // UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
  #pragma pack(pop)
  static check_size<sizeof(DiagnosticEvent), 40 + sizeof(int)> __UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventSizeCheck;
  static_assert(sizeof(DiagnosticEvent) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Graph
// Il2CppName: get_Graph
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_ObjectId
// Il2CppName: get_ObjectId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_DisplayName
// Il2CppName: get_DisplayName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Dependencies
// Il2CppName: get_Dependencies
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Stream
// Il2CppName: get_Stream
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Frame
// Il2CppName: get_Frame
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::get_Value
// Il2CppName: get_Value
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::DiagnosticEvent
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Serialize
// Il2CppName: Serialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent::Deserialize
// Il2CppName: Deserialize
// Cannot perform method pointer template specialization from operators!
