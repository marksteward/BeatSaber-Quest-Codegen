// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.StreamingContextStates
#include "System/Runtime/Serialization/StreamingContextStates.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Serialization.StreamingContext
  // [ComVisibleAttribute] Offset: D7DF34
  struct StreamingContext/*, public System::ValueType*/ {
    public:
    // System.Object m_additionalContext
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* m_additionalContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Serialization.StreamingContextStates m_state
    // Size: 0x4
    // Offset: 0x8
    System::Runtime::Serialization::StreamingContextStates m_state;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContextStates) == 0x4);
    // Creating value type constructor for type: StreamingContext
    constexpr StreamingContext(::Il2CppObject* m_additionalContext_ = {}, System::Runtime::Serialization::StreamingContextStates m_state_ = {}) noexcept : m_additionalContext{m_additionalContext_}, m_state{m_state_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContextStates state)
    // Offset: 0xEF9CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    StreamingContext(System::Runtime::Serialization::StreamingContextStates state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::StreamingContext::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(state)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, state);
    }
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContextStates state, System.Object additional)
    // Offset: 0xEF9D08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    StreamingContext(System::Runtime::Serialization::StreamingContextStates state, ::Il2CppObject* additional) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::StreamingContext::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(state), ::il2cpp_utils::ExtractType(additional)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, state, additional);
    }
    // public System.Runtime.Serialization.StreamingContextStates get_State()
    // Offset: 0xEF9D24
    System::Runtime::Serialization::StreamingContextStates get_State();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEF9D14
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEF9D1C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.Serialization.StreamingContext
  #pragma pack(pop)
  static check_size<sizeof(StreamingContext), 8 + sizeof(System::Runtime::Serialization::StreamingContextStates)> __System_Runtime_Serialization_StreamingContextSizeCheck;
  static_assert(sizeof(StreamingContext) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::StreamingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::StreamingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::get_State
// Il2CppName: get_State
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
