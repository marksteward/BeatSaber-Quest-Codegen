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
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SignalMissingHandlerResponses
  struct SignalMissingHandlerResponses : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SignalMissingHandlerResponses
    constexpr SignalMissingHandlerResponses(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Zenject.SignalMissingHandlerResponses Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Ignore
    static Zenject::SignalMissingHandlerResponses _get_Ignore();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Ignore
    static void _set_Ignore(Zenject::SignalMissingHandlerResponses value);
    // static field const value: static public Zenject.SignalMissingHandlerResponses Throw
    static constexpr const int Throw = 1;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Throw
    static Zenject::SignalMissingHandlerResponses _get_Throw();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Throw
    static void _set_Throw(Zenject::SignalMissingHandlerResponses value);
    // static field const value: static public Zenject.SignalMissingHandlerResponses Warn
    static constexpr const int Warn = 2;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Warn
    static Zenject::SignalMissingHandlerResponses _get_Warn();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Warn
    static void _set_Warn(Zenject::SignalMissingHandlerResponses value);
  }; // Zenject.SignalMissingHandlerResponses
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalMissingHandlerResponses, "Zenject", "SignalMissingHandlerResponses");
#pragma pack(pop)
