// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Globalization.Unicode.MSCompatUnicodeTable
#include "Mono/Globalization/Unicode/MSCompatUnicodeTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Level2Map
  class Level2Map;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x10
  // Autogenerated type: Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D367D0
  class MSCompatUnicodeTable::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c <>9
    static Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c* _get_$$9();
    // Set static field: static public readonly Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c <>9
    static void _set_$$9(Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c* value);
    // Get static field: static public System.Comparison`1<Mono.Globalization.Unicode.Level2Map> <>9__17_0
    static System::Comparison_1<Mono::Globalization::Unicode::Level2Map*>* _get_$$9__17_0();
    // Set static field: static public System.Comparison`1<Mono.Globalization.Unicode.Level2Map> <>9__17_0
    static void _set_$$9__17_0(System::Comparison_1<Mono::Globalization::Unicode::Level2Map*>* value);
    // static private System.Void .cctor()
    // Offset: 0x151AF08
    static void _cctor();
    // System.Int32 <BuildTailoringTables>b__17_0(Mono.Globalization.Unicode.Level2Map a, Mono.Globalization.Unicode.Level2Map b)
    // Offset: 0x151AF78
    int $BuildTailoringTables$b__17_0(Mono::Globalization::Unicode::Level2Map* a, Mono::Globalization::Unicode::Level2Map* b);
    // public System.Void .ctor()
    // Offset: 0x151AF70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MSCompatUnicodeTable::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MSCompatUnicodeTable::$$c*, creationType>()));
    }
  }; // Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable/<>c");
#pragma pack(pop)
