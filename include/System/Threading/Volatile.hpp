// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Volatile
  // [TokenAttribute] Offset: FFFFFFFF
  class Volatile : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Volatile
    Volatile() noexcept {}
    // static public System.Boolean Read(ref System.Boolean location)
    // Offset: 0x188EE98
    static bool Read(bool& location);
    // static public System.Int32 Read(ref System.Int32 location)
    // Offset: 0x188EEBC
    static int Read(int& location);
    // static public T Read(ref T location)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Read(T& location) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Volatile::Read");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Volatile", "Read", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, location);
    }
    // static public System.Void Write(ref System.Boolean location, System.Boolean value)
    // Offset: 0x188EEE0
    static void Write(bool& location, bool value);
    // static public System.Void Write(ref System.Int32 location, System.Int32 value)
    // Offset: 0x188EF08
    static void Write(int& location, int value);
    // static public System.Void Write(ref T location, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Write(T& location, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Volatile::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading", "Volatile", "Write", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(location), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, location, value);
    }
  }; // System.Threading.Volatile
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Volatile*, "System.Threading", "Volatile");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool&)>(&System::Threading::Volatile::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int&)>(&System::Threading::Volatile::Read)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Read
// Il2CppName: Read
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool&, bool)>(&System::Threading::Volatile::Write)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int&, int)>(&System::Threading::Volatile::Write)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Volatile*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, value});
  }
};
// Writing MetadataGetter for method: System::Threading::Volatile::Write
// Il2CppName: Write
// Cannot write MetadataGetter for generic methods!
