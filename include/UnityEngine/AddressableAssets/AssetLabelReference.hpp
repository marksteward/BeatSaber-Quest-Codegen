// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.IKeyEvaluator
#include "UnityEngine/AddressableAssets/IKeyEvaluator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AssetLabelReference
  class AssetLabelReference : public ::Il2CppObject/*, public UnityEngine::AddressableAssets::IKeyEvaluator*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE01860
    // private System.String m_LabelString
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_LabelString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssetLabelReference
    AssetLabelReference(::Il2CppString* m_LabelString_ = {}) noexcept : m_LabelString{m_LabelString_} {}
    // Creating interface conversion operator: operator UnityEngine::AddressableAssets::IKeyEvaluator
    operator UnityEngine::AddressableAssets::IKeyEvaluator() noexcept {
      return *reinterpret_cast<UnityEngine::AddressableAssets::IKeyEvaluator*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_LabelString;
    }
    // public System.String get_labelString()
    // Offset: 0x13D5288
    ::Il2CppString* get_labelString();
    // public System.Void set_labelString(System.String value)
    // Offset: 0x13D5290
    void set_labelString(::Il2CppString* value);
    // public System.Object get_RuntimeKey()
    // Offset: 0x13D5298
    ::Il2CppObject* get_RuntimeKey();
    // public System.Boolean RuntimeKeyIsValid()
    // Offset: 0x13D52F8
    bool RuntimeKeyIsValid();
    // public override System.Int32 GetHashCode()
    // Offset: 0x13D5330
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void .ctor()
    // Offset: 0x13D5350
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetLabelReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetLabelReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetLabelReference*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AssetLabelReference
  #pragma pack(pop)
  static check_size<sizeof(AssetLabelReference), 16 + sizeof(::Il2CppString*)> __UnityEngine_AddressableAssets_AssetLabelReferenceSizeCheck;
  static_assert(sizeof(AssetLabelReference) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetLabelReference*, "UnityEngine.AddressableAssets", "AssetLabelReference");