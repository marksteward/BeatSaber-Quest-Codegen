// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableBehaviour
  class IPlayableBehaviour;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ICloneable
  class ICloneable;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.ScriptPlayable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ScriptPlayable_1/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>, public UnityEngine::Playables::IPlayable*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: ScriptPlayable_1
    constexpr ScriptPlayable_1(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>
    operator System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Autogenerated static field getter
    // Get static field: static private readonly UnityEngine.Playables.ScriptPlayable`1<T> m_NullPlayable
    static UnityEngine::Playables::ScriptPlayable_1<T> _get_m_NullPlayable() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::_get_m_NullPlayable");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Playables::ScriptPlayable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "m_NullPlayable"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly UnityEngine.Playables.ScriptPlayable`1<T> m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Playables::ScriptPlayable_1<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::_set_m_NullPlayable");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "m_NullPlayable", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Playables.PlayableHandle m_Handle
    UnityEngine::Playables::PlayableHandle _get_m_Handle() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::_get_m_Handle");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Handle"))->offset;
      return *reinterpret_cast<UnityEngine::Playables::PlayableHandle*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private UnityEngine.Playables.PlayableHandle m_Handle
    void _set_m_Handle(UnityEngine::Playables::PlayableHandle value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::_set_m_Handle");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Handle"))->offset;
      *reinterpret_cast<UnityEngine::Playables::PlayableHandle*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> get_Null()
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> get_Null() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::get_Null");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "get_Null", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ScriptPlayable_1(UnityEngine::Playables::PlayableHandle handle)
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, int inputCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(graph), ::il2cpp_utils::ExtractType(inputCount)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, graph, inputCount);
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> Create(UnityEngine.Playables.PlayableGraph graph, T template, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, T _template, int inputCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(graph), ::il2cpp_utils::ExtractType(_template), ::il2cpp_utils::ExtractType(inputCount)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, graph, _template, inputCount);
    }
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, T template, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, T _template, int inputCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::CreateHandle");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CreateHandle", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(graph), ::il2cpp_utils::ExtractType(_template), ::il2cpp_utils::ExtractType(inputCount)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayableHandle, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, graph, _template, inputCount);
    }
    // static private System.Object CreateScriptInstance()
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CreateScriptInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::CreateScriptInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CreateScriptInstance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Object CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstance(UnityEngine::Playables::IPlayableBehaviour* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::CloneScriptInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, source);
    }
    // static private System.Object CloneScriptInstanceFromEngineObject(UnityEngine.Object source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstanceFromEngineObject(UnityEngine::Object* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::CloneScriptInstanceFromEngineObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromEngineObject", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, source);
    }
    // static private System.Object CloneScriptInstanceFromIClonable(System.ICloneable source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstanceFromIClonable(System::ICloneable* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::CloneScriptInstanceFromIClonable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromIClonable", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, source);
    }
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::PlayableHandle GetHandle() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::GetHandle");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHandle", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayableHandle, false>(*this, ___internal__method);
    }
    // public T GetBehaviour()
    // Offset: 0xFFFFFFFF
    T GetBehaviour() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::GetBehaviour");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetBehaviour", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> op_Explicit(UnityEngine.Playables.Playable playable)
    // Offset: 0xFFFFFFFF
    explicit ScriptPlayable_1(UnityEngine::Playables::Playable& playable) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::op_Explicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "op_Explicit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(playable)})));
      *this = ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::ScriptPlayable_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // public System.Boolean Equals(UnityEngine.Playables.ScriptPlayable`1<T> other)
    // Offset: 0xFFFFFFFF
    bool Equals(UnityEngine::Playables::ScriptPlayable_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::ScriptPlayable_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
    }
  }; // UnityEngine.Playables.ScriptPlayable`1
  // Could not write size check! Type: UnityEngine.Playables.ScriptPlayable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::Playables::ScriptPlayable_1, "UnityEngine.Playables", "ScriptPlayable`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
