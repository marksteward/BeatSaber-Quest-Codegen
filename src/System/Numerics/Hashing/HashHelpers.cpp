// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Numerics.Hashing.HashHelpers
#include "System/Numerics/Hashing/HashHelpers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 RandomSeed
int System::Numerics::Hashing::HashHelpers::_get_RandomSeed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Numerics::Hashing").WithContext("HashHelpers").WithContext("_get_RandomSeed");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Numerics.Hashing", "HashHelpers", "RandomSeed"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 RandomSeed
void System::Numerics::Hashing::HashHelpers::_set_RandomSeed(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Numerics::Hashing").WithContext("HashHelpers").WithContext("_set_RandomSeed");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Numerics.Hashing", "HashHelpers", "RandomSeed", value));
}
// Autogenerated method: System.Numerics.Hashing.HashHelpers.Combine
int System::Numerics::Hashing::HashHelpers::Combine(int h1, int h2) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Numerics::Hashing").WithContext("HashHelpers").WithContext("Combine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Numerics.Hashing", "HashHelpers", "Combine", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(h1, h2)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, h1, h2);
}
// Autogenerated method: System.Numerics.Hashing.HashHelpers..cctor
void System::Numerics::Hashing::HashHelpers::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Numerics::Hashing").WithContext("HashHelpers").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Numerics.Hashing", "HashHelpers", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
