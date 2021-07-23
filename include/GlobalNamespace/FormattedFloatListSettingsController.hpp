// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: FormattedFloatListSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class FormattedFloatListSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // Nested type: GlobalNamespace::FormattedFloatListSettingsController::ValueType
    struct ValueType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: FormattedFloatListSettingsController/ValueType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ValueType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ValueType
      constexpr ValueType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public FormattedFloatListSettingsController/ValueType Normal
      static constexpr const int Normal = 0;
      // Get static field: static public FormattedFloatListSettingsController/ValueType Normal
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_Normal();
      // Set static field: static public FormattedFloatListSettingsController/ValueType Normal
      static void _set_Normal(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsController/ValueType Normalized
      static constexpr const int Normalized = 1;
      // Get static field: static public FormattedFloatListSettingsController/ValueType Normalized
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_Normalized();
      // Set static field: static public FormattedFloatListSettingsController/ValueType Normalized
      static void _set_Normalized(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static constexpr const int InvertedNormalized = 2;
      // Get static field: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_InvertedNormalized();
      // Set static field: static public FormattedFloatListSettingsController/ValueType InvertedNormalized
      static void _set_InvertedNormalized(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // FormattedFloatListSettingsController/ValueType
    #pragma pack(pop)
    static check_size<sizeof(FormattedFloatListSettingsController::ValueType), 0 + sizeof(int)> __GlobalNamespace_FormattedFloatListSettingsController_ValueTypeSizeCheck;
    static_assert(sizeof(FormattedFloatListSettingsController::ValueType) == 0x4);
    // private System.Single[] _values
    // Size: 0x8
    // Offset: 0x28
    ::Array<float>* values;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.String _formattingString
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* formattingString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private FormattedFloatListSettingsController/ValueType valueType
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::FormattedFloatListSettingsController::ValueType valueType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController::ValueType) == 0x4);
    // Padding between fields: valueType and: valueDidChangeEvent
    char __padding2[0x4] = {};
    // private System.Action`2<FormattedFloatListSettingsController,System.Single> valueDidChangeEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* valueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>*) == 0x8);
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x48
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _min
    // Size: 0x4
    // Offset: 0x4C
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _max
    // Size: 0x4
    // Offset: 0x50
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hasValue
    // Size: 0x1
    // Offset: 0x54
    bool hasValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FormattedFloatListSettingsController
    FormattedFloatListSettingsController(::Array<float>* values_ = {}, ::Il2CppString* formattingString_ = {}, GlobalNamespace::FormattedFloatListSettingsController::ValueType valueType_ = {}, System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* valueDidChangeEvent_ = {}, float value_ = {}, float min_ = {}, float max_ = {}, bool hasValue_ = {}) noexcept : values{values_}, formattingString{formattingString_}, valueType{valueType_}, valueDidChangeEvent{valueDidChangeEvent_}, value{value_}, min{min_}, max{max_}, hasValue{hasValue_} {}
    // Get instance field: private System.Single[] _values
    ::Array<float>* _get__values();
    // Set instance field: private System.Single[] _values
    void _set__values(::Array<float>* value);
    // Get instance field: private System.String _formattingString
    ::Il2CppString* _get__formattingString();
    // Set instance field: private System.String _formattingString
    void _set__formattingString(::Il2CppString* value);
    // Get instance field: private FormattedFloatListSettingsController/ValueType valueType
    GlobalNamespace::FormattedFloatListSettingsController::ValueType _get_valueType();
    // Set instance field: private FormattedFloatListSettingsController/ValueType valueType
    void _set_valueType(GlobalNamespace::FormattedFloatListSettingsController::ValueType value);
    // Get instance field: private System.Action`2<FormattedFloatListSettingsController,System.Single> valueDidChangeEvent
    System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* _get_valueDidChangeEvent();
    // Set instance field: private System.Action`2<FormattedFloatListSettingsController,System.Single> valueDidChangeEvent
    void _set_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value);
    // Get instance field: private System.Single _value
    float _get__value();
    // Set instance field: private System.Single _value
    void _set__value(float value);
    // Get instance field: private System.Single _min
    float _get__min();
    // Set instance field: private System.Single _min
    void _set__min(float value);
    // Get instance field: private System.Single _max
    float _get__max();
    // Set instance field: private System.Single _max
    void _set__max(float value);
    // Get instance field: private System.Boolean _hasValue
    bool _get__hasValue();
    // Set instance field: private System.Boolean _hasValue
    void _set__hasValue(bool value);
    // public System.Single get_value()
    // Offset: 0x102BE80
    float get_value();
    // public System.Single[] get_values()
    // Offset: 0x102BE88
    ::Array<float>* get_values();
    // public System.Void set_values(System.Single[] value)
    // Offset: 0x102BE90
    void set_values(::Array<float>* value);
    // public System.Void add_valueDidChangeEvent(System.Action`2<FormattedFloatListSettingsController,System.Single> value)
    // Offset: 0x102BD38
    void add_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`2<FormattedFloatListSettingsController,System.Single> value)
    // Offset: 0x102BDDC
    void remove_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value);
    // public System.Void SetValue(System.Single value, System.Boolean callCallback)
    // Offset: 0x102BEA0
    void SetValue(float value, bool callCallback);
    // public System.Void .ctor()
    // Offset: 0x102C1A0
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormattedFloatListSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FormattedFloatListSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormattedFloatListSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x102BEB8
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x102C010
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x102C0B4
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
  }; // FormattedFloatListSettingsController
  #pragma pack(pop)
  static check_size<sizeof(FormattedFloatListSettingsController), 84 + sizeof(bool)> __GlobalNamespace_FormattedFloatListSettingsControllerSizeCheck;
  static_assert(sizeof(FormattedFloatListSettingsController) == 0x55);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsController*, "", "FormattedFloatListSettingsController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsController::ValueType, "", "FormattedFloatListSettingsController/ValueType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FormattedFloatListSettingsController::*)()>(&GlobalNamespace::FormattedFloatListSettingsController::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::get_values
// Il2CppName: get_values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<float>* (GlobalNamespace::FormattedFloatListSettingsController::*)()>(&GlobalNamespace::FormattedFloatListSettingsController::get_values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "get_values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::set_values
// Il2CppName: set_values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(::Array<float>*)>(&GlobalNamespace::FormattedFloatListSettingsController::set_values)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "set_values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent
// Il2CppName: add_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>*)>(&GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "add_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent
// Il2CppName: remove_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>*)>(&GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "remove_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(float, bool)>(&GlobalNamespace::FormattedFloatListSettingsController::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, callCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FormattedFloatListSettingsController::*)(int&, int&)>(&GlobalNamespace::FormattedFloatListSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(int)>(&GlobalNamespace::FormattedFloatListSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FormattedFloatListSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FormattedFloatListSettingsController::*)(int)>(&GlobalNamespace::FormattedFloatListSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FormattedFloatListSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
