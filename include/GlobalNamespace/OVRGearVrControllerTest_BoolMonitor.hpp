// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRGearVrControllerTest
#include "GlobalNamespace/OVRGearVrControllerTest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OVRGearVrControllerTest/BoolMonitor
  // [] Offset: FFFFFFFF
  class OVRGearVrControllerTest::BoolMonitor : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator
    class BoolGenerator;
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OVRGearVrControllerTest/BoolMonitor/BoolGenerator m_generator
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator* m_generator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator*) == 0x8);
    // private System.Boolean m_prevValue
    // Size: 0x1
    // Offset: 0x20
    bool m_prevValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValue
    // Size: 0x1
    // Offset: 0x21
    bool m_currentValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValueRecentlyChanged
    // Size: 0x1
    // Offset: 0x22
    bool m_currentValueRecentlyChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_currentValueRecentlyChanged and: m_displayTimeout
    char __padding4[0x1] = {};
    // private System.Single m_displayTimeout
    // Size: 0x4
    // Offset: 0x24
    float m_displayTimeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_displayTimer
    // Size: 0x4
    // Offset: 0x28
    float m_displayTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BoolMonitor
    BoolMonitor(::Il2CppString* m_name_ = {}, GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator* m_generator_ = {}, bool m_prevValue_ = {}, bool m_currentValue_ = {}, bool m_currentValueRecentlyChanged_ = {}, float m_displayTimeout_ = {}, float m_displayTimer_ = {}) noexcept : m_name{m_name_}, m_generator{m_generator_}, m_prevValue{m_prevValue_}, m_currentValue{m_currentValue_}, m_currentValueRecentlyChanged{m_currentValueRecentlyChanged_}, m_displayTimeout{m_displayTimeout_}, m_displayTimer{m_displayTimer_} {}
    // public System.Void .ctor(System.String name, OVRGearVrControllerTest/BoolMonitor/BoolGenerator generator, System.Single displayTimeout)
    // Offset: 0x11B277C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGearVrControllerTest::BoolMonitor* New_ctor(::Il2CppString* name, GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::BoolGenerator* generator, float displayTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRGearVrControllerTest::BoolMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGearVrControllerTest::BoolMonitor*, creationType>(name, generator, displayTimeout)));
    }
    // public System.Void Update()
    // Offset: 0x11B2824
    void Update();
    // public System.Void AppendToStringBuilder(ref System.Text.StringBuilder sb)
    // Offset: 0x11B2AE0
    void AppendToStringBuilder(System::Text::StringBuilder*& sb);
  }; // OVRGearVrControllerTest/BoolMonitor
  static check_size<sizeof(OVRGearVrControllerTest::BoolMonitor), 40 + sizeof(float)> __GlobalNamespace_OVRGearVrControllerTest_BoolMonitorSizeCheck;
  static_assert(sizeof(OVRGearVrControllerTest::BoolMonitor) == 0x2C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGearVrControllerTest::BoolMonitor*, "", "OVRGearVrControllerTest/BoolMonitor");
