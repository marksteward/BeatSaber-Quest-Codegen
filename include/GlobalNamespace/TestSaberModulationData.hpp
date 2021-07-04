// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: TestSaberModulationData
  class TestSaberModulationData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::TestSaberModulationData::ModulationType
    struct ModulationType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TestSaberModulationData/ModulationType
    struct ModulationType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ModulationType
      constexpr ModulationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TestSaberModulationData/ModulationType Off
      static constexpr const int Off = 0;
      // Get static field: static public TestSaberModulationData/ModulationType Off
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Off();
      // Set static field: static public TestSaberModulationData/ModulationType Off
      static void _set_Off(GlobalNamespace::TestSaberModulationData::ModulationType value);
      // static field const value: static public TestSaberModulationData/ModulationType Linear
      static constexpr const int Linear = 1;
      // Get static field: static public TestSaberModulationData/ModulationType Linear
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Linear();
      // Set static field: static public TestSaberModulationData/ModulationType Linear
      static void _set_Linear(GlobalNamespace::TestSaberModulationData::ModulationType value);
      // static field const value: static public TestSaberModulationData/ModulationType Sinus
      static constexpr const int Sinus = 2;
      // Get static field: static public TestSaberModulationData/ModulationType Sinus
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Sinus();
      // Set static field: static public TestSaberModulationData/ModulationType Sinus
      static void _set_Sinus(GlobalNamespace::TestSaberModulationData::ModulationType value);
      // static field const value: static public TestSaberModulationData/ModulationType Square
      static constexpr const int Square = 4;
      // Get static field: static public TestSaberModulationData/ModulationType Square
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Square();
      // Set static field: static public TestSaberModulationData/ModulationType Square
      static void _set_Square(GlobalNamespace::TestSaberModulationData::ModulationType value);
      // static field const value: static public TestSaberModulationData/ModulationType Perlin
      static constexpr const int Perlin = 8;
      // Get static field: static public TestSaberModulationData/ModulationType Perlin
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Perlin();
      // Set static field: static public TestSaberModulationData/ModulationType Perlin
      static void _set_Perlin(GlobalNamespace::TestSaberModulationData::ModulationType value);
      // static field const value: static public TestSaberModulationData/ModulationType Random
      static constexpr const int Random = 128;
      // Get static field: static public TestSaberModulationData/ModulationType Random
      static GlobalNamespace::TestSaberModulationData::ModulationType _get_Random();
      // Set static field: static public TestSaberModulationData/ModulationType Random
      static void _set_Random(GlobalNamespace::TestSaberModulationData::ModulationType value);
    }; // TestSaberModulationData/ModulationType
    #pragma pack(pop)
    static check_size<sizeof(TestSaberModulationData::ModulationType), 0 + sizeof(int)> __GlobalNamespace_TestSaberModulationData_ModulationTypeSizeCheck;
    static_assert(sizeof(TestSaberModulationData::ModulationType) == 0x4);
    // [RangeAttribute] Offset: 0xE14290
    // private System.Single _baseValue
    // Size: 0x4
    // Offset: 0x10
    float baseValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public TestSaberModulationData/ModulationType _modulationType
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::TestSaberModulationData::ModulationType modulationType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestSaberModulationData::ModulationType) == 0x4);
    // [RangeAttribute] Offset: 0xE142D0
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x18
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE14310
    // private System.Single _amount
    // Size: 0x4
    // Offset: 0x1C
    float amount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _multiplier
    // Size: 0x4
    // Offset: 0x20
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TestSaberModulationData
    TestSaberModulationData(float baseValue_ = {}, GlobalNamespace::TestSaberModulationData::ModulationType modulationType_ = {}, float speed_ = {}, float amount_ = {}, float multiplier_ = {}) noexcept : baseValue{baseValue_}, modulationType{modulationType_}, speed{speed_}, amount{amount_}, multiplier{multiplier_} {}
    // public System.Single Evaluate(System.Single time)
    // Offset: 0x1118468
    float Evaluate(float time);
    // public System.Void .ctor()
    // Offset: 0x11185EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSaberModulationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestSaberModulationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSaberModulationData*, creationType>()));
    }
  }; // TestSaberModulationData
  #pragma pack(pop)
  static check_size<sizeof(TestSaberModulationData), 32 + sizeof(float)> __GlobalNamespace_TestSaberModulationDataSizeCheck;
  static_assert(sizeof(TestSaberModulationData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestSaberModulationData*, "", "TestSaberModulationData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestSaberModulationData::ModulationType, "", "TestSaberModulationData/ModulationType");
// Writing MetadataGetter for method: GlobalNamespace::TestSaberModulationData::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TestSaberModulationData::*)(float)>(&GlobalNamespace::TestSaberModulationData::Evaluate)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestSaberModulationData*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestSaberModulationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
