// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeType
#include "System/TimeType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TimeType..ctor
System::TimeType* System::TimeType::New_ctor(int offset, bool is_dst, ::Il2CppString* abbrev) {
  return THROW_UNLESS(il2cpp_utils::New<TimeType*>(offset, is_dst, abbrev));
}
// Autogenerated method: System.TimeType.ToString
::Il2CppString* System::TimeType::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
