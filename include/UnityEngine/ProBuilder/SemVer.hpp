// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SemVer
  // [] Offset: FFFFFFFF
  class SemVer : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>, public System::IComparable_1<UnityEngine::ProBuilder::SemVer*>, public System::IComparable*/ {
    public:
    // private System.Int32 m_Major
    // Size: 0x4
    // Offset: 0x10
    int m_Major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Minor
    // Size: 0x4
    // Offset: 0x14
    int m_Minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Patch
    // Size: 0x4
    // Offset: 0x18
    int m_Patch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Build
    // Size: 0x4
    // Offset: 0x1C
    int m_Build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_Type
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_Metadata
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_Metadata;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_Date
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_Date;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SemVer
    SemVer(int m_Major_ = {}, int m_Minor_ = {}, int m_Patch_ = {}, int m_Build_ = {}, ::Il2CppString* m_Type_ = {}, ::Il2CppString* m_Metadata_ = {}, ::Il2CppString* m_Date_ = {}) noexcept : m_Major{m_Major_}, m_Minor{m_Minor_}, m_Patch{m_Patch_}, m_Build{m_Build_}, m_Type{m_Type_}, m_Metadata{m_Metadata_}, m_Date{m_Date_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::SemVer*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<UnityEngine::ProBuilder::SemVer*>
    operator System::IComparable_1<UnityEngine::ProBuilder::SemVer*>() noexcept {
      return *reinterpret_cast<System::IComparable_1<UnityEngine::ProBuilder::SemVer*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // static field const value: static public System.String DefaultStringFormat
    static constexpr const char* DefaultStringFormat = "M.m.p-t.b";
    // Get static field: static public System.String DefaultStringFormat
    static ::Il2CppString* _get_DefaultStringFormat();
    // Set static field: static public System.String DefaultStringFormat
    static void _set_DefaultStringFormat(::Il2CppString* value);
    // public System.Int32 get_major()
    // Offset: 0x13CBEEC
    int get_major();
    // public System.Int32 get_minor()
    // Offset: 0x13CBEF4
    int get_minor();
    // public System.Int32 get_patch()
    // Offset: 0x13CBEFC
    int get_patch();
    // public System.Int32 get_build()
    // Offset: 0x13CBF04
    int get_build();
    // public System.String get_type()
    // Offset: 0x13CBF0C
    ::Il2CppString* get_type();
    // public System.String get_metadata()
    // Offset: 0x13CBF64
    ::Il2CppString* get_metadata();
    // public System.String get_date()
    // Offset: 0x13CBFBC
    ::Il2CppString* get_date();
    // public UnityEngine.ProBuilder.SemVer get_MajorMinorPatch()
    // Offset: 0x13CC014
    UnityEngine::ProBuilder::SemVer* get_MajorMinorPatch();
    // public System.Void .ctor(System.String formatted, System.String date)
    // Offset: 0x13CC19C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor(::Il2CppString* formatted, ::Il2CppString* date) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>(formatted, date)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 patch, System.Int32 build, System.String type, System.String date, System.String metadata)
    // Offset: 0x13CC0A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor(int major, int minor, int patch, int build, ::Il2CppString* type, ::Il2CppString* date, ::Il2CppString* metadata) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>(major, minor, patch, build, type, date, metadata)));
    }
    // public System.Boolean IsValid()
    // Offset: 0x13CC6D4
    bool IsValid();
    // static private System.Int32 WrapNoValue(System.Int32 value)
    // Offset: 0x13CCDB8
    static int WrapNoValue(int value);
    // public System.String ToString(System.String format)
    // Offset: 0x13CCEEC
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Boolean TryGetVersionInfo(System.String input, out UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x13CC2A4
    static bool TryGetVersionInfo(::Il2CppString* input, UnityEngine::ProBuilder::SemVer*& version);
    // static private System.Int32 GetBuildNumber(System.String input)
    // Offset: 0x13CD384
    static int GetBuildNumber(::Il2CppString* input);
    // public System.Void .ctor()
    // Offset: 0x13CC138
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemVer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SemVer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemVer*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x13CC704
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13CC9A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Boolean Equals(UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x13CC788
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.SemVer version)
    bool Equals(UnityEngine::ProBuilder::SemVer* version);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x13CCB84
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(UnityEngine.ProBuilder.SemVer version)
    // Offset: 0x13CCBF8
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(UnityEngine.ProBuilder.SemVer version)
    int CompareTo(UnityEngine::ProBuilder::SemVer* version);
    // public override System.String ToString()
    // Offset: 0x13CD164
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.SemVer
  static check_size<sizeof(SemVer), 48 + sizeof(::Il2CppString*)> __UnityEngine_ProBuilder_SemVerSizeCheck;
  static_assert(sizeof(SemVer) == 0x38);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCDC8
  bool operator ==(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCDDC
  bool operator !=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_LessThan(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCE08
  bool operator <(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_GreaterThan(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCE30
  bool operator >(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_LessThanOrEqual(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCE50
  bool operator <=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
  // static public System.Boolean op_GreaterThanOrEqual(UnityEngine.ProBuilder.SemVer left, UnityEngine.ProBuilder.SemVer right)
  // Offset: 0x13CCE94
  bool operator >=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SemVer*, "UnityEngine.ProBuilder", "SemVer");
