// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ScoreUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreUIController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScoreUIController::InitData
    class InitData;
    // Nested type: GlobalNamespace::ScoreUIController::ScoreDisplayType
    struct ScoreDisplayType;
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xEB2DB4
    // private ScoreUIController/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScoreUIController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreUIController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xEB2DC4
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // private System.Text.StringBuilder _stringBuilder
    // Size: 0x8
    // Offset: 0x30
    System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // Creating value type constructor for type: ScoreUIController
    ScoreUIController(TMPro::TextMeshProUGUI* scoreText_ = {}, GlobalNamespace::ScoreUIController::InitData* initData_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, System::Text::StringBuilder* stringBuilder_ = {}) noexcept : scoreText{scoreText_}, initData{initData_}, scoreController{scoreController_}, stringBuilder{stringBuilder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfDigits
    static constexpr const int kMaxNumberOfDigits = 9;
    // Get static field: static private System.Int32 kMaxNumberOfDigits
    static int _get_kMaxNumberOfDigits();
    // Set static field: static private System.Int32 kMaxNumberOfDigits
    static void _set_kMaxNumberOfDigits(int value);
    // Get instance field: private TMPro.TextMeshProUGUI _scoreText
    TMPro::TextMeshProUGUI* _get__scoreText();
    // Set instance field: private TMPro.TextMeshProUGUI _scoreText
    void _set__scoreText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private ScoreUIController/InitData _initData
    GlobalNamespace::ScoreUIController::InitData* _get__initData();
    // Set instance field: private ScoreUIController/InitData _initData
    void _set__initData(GlobalNamespace::ScoreUIController::InitData* value);
    // Get instance field: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController* _get__scoreController();
    // Set instance field: private readonly IScoreController _scoreController
    void _set__scoreController(GlobalNamespace::IScoreController* value);
    // Get instance field: private System.Text.StringBuilder _stringBuilder
    System::Text::StringBuilder* _get__stringBuilder();
    // Set instance field: private System.Text.StringBuilder _stringBuilder
    void _set__stringBuilder(System::Text::StringBuilder* value);
    // protected System.Void Start()
    // Offset: 0x1F842B8
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1F846E0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1F846E4
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x1F84330
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1F846E8
    void UnregisterFromEvents();
    // private System.Void HandleScoreDidChangeRealtime(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0x1F847E8
    void HandleScoreDidChangeRealtime(int rawScore, int modifiedScore);
    // protected System.Void UpdateScore(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0x1F844D8
    void UpdateScore(int rawScore, int modifiedScore);
    // static private System.Void Append000Number(System.Text.StringBuilder stringBuilder, System.Int32 number)
    // Offset: 0x1F847EC
    static void Append000Number(System::Text::StringBuilder* stringBuilder, int number);
    // public System.Void .ctor()
    // Offset: 0x1F8489C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreUIController*, creationType>()));
    }
  }; // ScoreUIController
  #pragma pack(pop)
  static check_size<sizeof(ScoreUIController), 48 + sizeof(System::Text::StringBuilder*)> __GlobalNamespace_ScoreUIControllerSizeCheck;
  static_assert(sizeof(ScoreUIController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController*, "", "ScoreUIController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)()>(&GlobalNamespace::ScoreUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)()>(&GlobalNamespace::ScoreUIController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)()>(&GlobalNamespace::ScoreUIController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)()>(&GlobalNamespace::ScoreUIController::RegisterForEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "RegisterForEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)()>(&GlobalNamespace::ScoreUIController::UnregisterFromEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "UnregisterFromEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime
// Il2CppName: HandleScoreDidChangeRealtime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)(int, int)>(&GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime)> {
  static const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "HandleScoreDidChangeRealtime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, modifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::UpdateScore
// Il2CppName: UpdateScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreUIController::*)(int, int)>(&GlobalNamespace::ScoreUIController::UpdateScore)> {
  static const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "UpdateScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, modifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::Append000Number
// Il2CppName: Append000Number
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int)>(&GlobalNamespace::ScoreUIController::Append000Number)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreUIController*), "Append000Number", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder, number});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
