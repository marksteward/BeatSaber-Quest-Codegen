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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerName
  class ConnectedPlayerName : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xE159C0
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: ConnectedPlayerName
    ConnectedPlayerName(TMPro::TextMeshProUGUI* nameText_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : nameText{nameText_}, connectedPlayer{connectedPlayer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x119585C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1195928
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerName*, creationType>()));
    }
  }; // ConnectedPlayerName
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerName), 32 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_ConnectedPlayerNameSizeCheck;
  static_assert(sizeof(ConnectedPlayerName) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerName*, "", "ConnectedPlayerName");
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerName::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
