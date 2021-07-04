// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
// Including type: UnityEngine.Timeline.INotificationOptionProvider
#include "UnityEngine/Timeline/INotificationOptionProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
  // Forward declaring type: NotificationFlags
  struct NotificationFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SignalEmitter
  // [CustomStyleAttribute] Offset: DD75FC
  // [ExcludeFromPresetAttribute] Offset: DD75FC
  class SignalEmitter : public UnityEngine::Timeline::Marker/*, public UnityEngine::Playables::INotification, public UnityEngine::Timeline::INotificationOptionProvider*/ {
    public:
    // private System.Boolean m_Retroactive
    // Size: 0x1
    // Offset: 0x28
    bool m_Retroactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_EmitOnce
    // Size: 0x1
    // Offset: 0x29
    bool m_EmitOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EmitOnce and: m_Asset
    char __padding1[0x6] = {};
    // private UnityEngine.Timeline.SignalAsset m_Asset
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Timeline::SignalAsset* m_Asset;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::SignalAsset*) == 0x8);
    // Creating value type constructor for type: SignalEmitter
    SignalEmitter(bool m_Retroactive_ = {}, bool m_EmitOnce_ = {}, UnityEngine::Timeline::SignalAsset* m_Asset_ = {}) noexcept : m_Retroactive{m_Retroactive_}, m_EmitOnce{m_EmitOnce_}, m_Asset{m_Asset_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::INotification
    operator UnityEngine::Playables::INotification() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotification*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Timeline::INotificationOptionProvider
    operator UnityEngine::Timeline::INotificationOptionProvider() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::INotificationOptionProvider*>(this);
    }
    // public System.Boolean get_retroactive()
    // Offset: 0x17E6158
    bool get_retroactive();
    // public System.Void set_retroactive(System.Boolean value)
    // Offset: 0x17E6160
    void set_retroactive(bool value);
    // public System.Boolean get_emitOnce()
    // Offset: 0x17E616C
    bool get_emitOnce();
    // public System.Void set_emitOnce(System.Boolean value)
    // Offset: 0x17E6174
    void set_emitOnce(bool value);
    // public UnityEngine.Timeline.SignalAsset get_asset()
    // Offset: 0x17E6180
    UnityEngine::Timeline::SignalAsset* get_asset();
    // public System.Void set_asset(UnityEngine.Timeline.SignalAsset value)
    // Offset: 0x17E6188
    void set_asset(UnityEngine::Timeline::SignalAsset* value);
    // private UnityEngine.PropertyName UnityEngine.Playables.INotification.get_id()
    // Offset: 0x17E6190
    UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id();
    // private UnityEngine.Timeline.NotificationFlags UnityEngine.Timeline.INotificationOptionProvider.get_flags()
    // Offset: 0x17E6254
    UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags();
    // public System.Void .ctor()
    // Offset: 0x17E627C
    // Implemented from: UnityEngine.Timeline.Marker
    // Base method: System.Void Marker::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalEmitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalEmitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalEmitter*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalEmitter
  #pragma pack(pop)
  static check_size<sizeof(SignalEmitter), 48 + sizeof(UnityEngine::Timeline::SignalAsset*)> __UnityEngine_Timeline_SignalEmitterSizeCheck;
  static_assert(sizeof(SignalEmitter) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalEmitter*, "UnityEngine.Timeline", "SignalEmitter");
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_retroactive
// Il2CppName: get_retroactive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_retroactive
// Il2CppName: set_retroactive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_emitOnce
// Il2CppName: get_emitOnce
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_emitOnce
// Il2CppName: set_emitOnce
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::get_asset
// Il2CppName: get_asset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::set_asset
// Il2CppName: set_asset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::UnityEngine_Playables_INotification_get_id
// Il2CppName: UnityEngine.Playables.INotification.get_id
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::UnityEngine_Timeline_INotificationOptionProvider_get_flags
// Il2CppName: UnityEngine.Timeline.INotificationOptionProvider.get_flags
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalEmitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
