// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Random
#include "System/Random.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Forward declaring type: IRandomGenerator
  class IRandomGenerator;
  // Forward declaring type: DigestRandomGenerator
  class DigestRandomGenerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.SecureRandom
  class SecureRandom : public System::Random {
    public:
    // protected readonly Org.BouncyCastle.Crypto.Prng.IRandomGenerator generator
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Prng::IRandomGenerator*) == 0x8);
    // Creating value type constructor for type: SecureRandom
    SecureRandom(Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator_ = {}) noexcept : generator{generator_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Prng::IRandomGenerator*
    constexpr operator Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() const noexcept {
      return generator;
    }
    // Get static field: static private System.Int64 counter
    static int64_t _get_counter();
    // Set static field: static private System.Int64 counter
    static void _set_counter(int64_t value);
    // Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom master
    static Org::BouncyCastle::Security::SecureRandom* _get_master();
    // Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom master
    static void _set_master(Org::BouncyCastle::Security::SecureRandom* value);
    // Get static field: static private readonly System.Double DoubleScale
    static double _get_DoubleScale();
    // Set static field: static private readonly System.Double DoubleScale
    static void _set_DoubleScale(double value);
    // static private System.Int64 NextCounterValue()
    // Offset: 0x1371658
    static int64_t NextCounterValue();
    // static private Org.BouncyCastle.Security.SecureRandom get_Master()
    // Offset: 0x13716C0
    static Org::BouncyCastle::Security::SecureRandom* get_Master();
    // static private Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator CreatePrng(System.String digestName, System.Boolean autoSeed)
    // Offset: 0x1371728
    static Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* CreatePrng(::Il2CppString* digestName, bool autoSeed);
    // static public System.Byte[] GetNextBytes(Org.BouncyCastle.Security.SecureRandom secureRandom, System.Int32 length)
    // Offset: 0x13718E0
    static ::Array<uint8_t>* GetNextBytes(Org::BouncyCastle::Security::SecureRandom* secureRandom, int length);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Prng.IRandomGenerator generator)
    // Offset: 0x13719F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureRandom* New_ctor(Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::SecureRandom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureRandom*, creationType>(generator)));
    }
    // public System.Int32 NextInt()
    // Offset: 0x1371DA8
    int NextInt();
    // public System.Int64 NextLong()
    // Offset: 0x1371E1C
    int64_t NextLong();
    // static private System.Void .cctor()
    // Offset: 0x1371E90
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1371964
    // Implemented from: System.Random
    // Base method: System.Void Random::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureRandom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::SecureRandom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureRandom*, creationType>()));
    }
    // public override System.Int32 Next()
    // Offset: 0x1371A20
    // Implemented from: System.Random
    // Base method: System.Int32 Random::Next()
    int Next();
    // public override System.Int32 Next(System.Int32 maxValue)
    // Offset: 0x1371A40
    // Implemented from: System.Random
    // Base method: System.Int32 Random::Next(System.Int32 maxValue)
    int Next(int maxValue);
    // public override System.Int32 Next(System.Int32 minValue, System.Int32 maxValue)
    // Offset: 0x1371B44
    // Implemented from: System.Random
    // Base method: System.Int32 Random::Next(System.Int32 minValue, System.Int32 maxValue)
    int Next(int minValue, int maxValue);
    // public override System.Void NextBytes(System.Byte[] buf)
    // Offset: 0x1371C28
    // Implemented from: System.Random
    // Base method: System.Void Random::NextBytes(System.Byte[] buf)
    void NextBytes(::Array<uint8_t>* buf);
    // public override System.Double NextDouble()
    // Offset: 0x1371CE8
    // Implemented from: System.Random
    // Base method: System.Double Random::NextDouble()
    double NextDouble();
  }; // Org.BouncyCastle.Security.SecureRandom
  #pragma pack(pop)
  static check_size<sizeof(SecureRandom), 32 + sizeof(Org::BouncyCastle::Crypto::Prng::IRandomGenerator*)> __Org_BouncyCastle_Security_SecureRandomSizeCheck;
  static_assert(sizeof(SecureRandom) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SecureRandom*, "Org.BouncyCastle.Security", "SecureRandom");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::NextCounterValue
// Il2CppName: NextCounterValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Org::BouncyCastle::Security::SecureRandom::NextCounterValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "NextCounterValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::get_Master
// Il2CppName: get_Master
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom* (*)()>(&Org::BouncyCastle::Security::SecureRandom::get_Master)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "get_Master", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::CreatePrng
// Il2CppName: CreatePrng
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* (*)(::Il2CppString*, bool)>(&Org::BouncyCastle::Security::SecureRandom::CreatePrng)> {
  static const MethodInfo* get() {
    static auto* digestName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* autoSeed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "CreatePrng", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digestName, autoSeed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::GetNextBytes
// Il2CppName: GetNextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Security::SecureRandom*, int)>(&Org::BouncyCastle::Security::SecureRandom::GetNextBytes)> {
  static const MethodInfo* get() {
    static auto* secureRandom = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "GetNextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secureRandom, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::NextInt
// Il2CppName: NextInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Security::SecureRandom::*)()>(&Org::BouncyCastle::Security::SecureRandom::NextInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "NextInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::NextLong
// Il2CppName: NextLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Security::SecureRandom::*)()>(&Org::BouncyCastle::Security::SecureRandom::NextLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "NextLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::SecureRandom::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Security::SecureRandom::*)()>(&Org::BouncyCastle::Security::SecureRandom::Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Security::SecureRandom::*)(int)>(&Org::BouncyCastle::Security::SecureRandom::Next)> {
  static const MethodInfo* get() {
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxValue});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Security::SecureRandom::*)(int, int)>(&Org::BouncyCastle::Security::SecureRandom::Next)> {
  static const MethodInfo* get() {
    static auto* minValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minValue, maxValue});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::NextBytes
// Il2CppName: NextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::SecureRandom::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Security::SecureRandom::NextBytes)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "NextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecureRandom::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Org::BouncyCastle::Security::SecureRandom::*)()>(&Org::BouncyCastle::Security::SecureRandom::NextDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::SecureRandom*), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
