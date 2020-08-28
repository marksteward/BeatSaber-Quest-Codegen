// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.PInfo
  struct PInfo : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: PInfo
    constexpr PInfo(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Reflection.PInfo Attributes
    static constexpr const int Attributes = 1;
    // Get static field: static public System.Reflection.PInfo Attributes
    static System::Reflection::PInfo _get_Attributes();
    // Set static field: static public System.Reflection.PInfo Attributes
    static void _set_Attributes(System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo GetMethod
    static constexpr const int GetMethod = 2;
    // Get static field: static public System.Reflection.PInfo GetMethod
    static System::Reflection::PInfo _get_GetMethod();
    // Set static field: static public System.Reflection.PInfo GetMethod
    static void _set_GetMethod(System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo SetMethod
    static constexpr const int SetMethod = 4;
    // Get static field: static public System.Reflection.PInfo SetMethod
    static System::Reflection::PInfo _get_SetMethod();
    // Set static field: static public System.Reflection.PInfo SetMethod
    static void _set_SetMethod(System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo ReflectedType
    static constexpr const int ReflectedType = 8;
    // Get static field: static public System.Reflection.PInfo ReflectedType
    static System::Reflection::PInfo _get_ReflectedType();
    // Set static field: static public System.Reflection.PInfo ReflectedType
    static void _set_ReflectedType(System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo DeclaringType
    static constexpr const int DeclaringType = 16;
    // Get static field: static public System.Reflection.PInfo DeclaringType
    static System::Reflection::PInfo _get_DeclaringType();
    // Set static field: static public System.Reflection.PInfo DeclaringType
    static void _set_DeclaringType(System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo Name
    static constexpr const int Name = 32;
    // Get static field: static public System.Reflection.PInfo Name
    static System::Reflection::PInfo _get_Name();
    // Set static field: static public System.Reflection.PInfo Name
    static void _set_Name(System::Reflection::PInfo value);
  }; // System.Reflection.PInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PInfo, "System.Reflection", "PInfo");
#pragma pack(pop)
