// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.AssemblyLoadEventArgs
#include "System/AssemblyLoadEventArgs.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.AssemblyLoadEventArgs..ctor
System::AssemblyLoadEventArgs* System::AssemblyLoadEventArgs::New_ctor(System::Reflection::Assembly* loadedAssembly) {
  return THROW_UNLESS(il2cpp_utils::New<AssemblyLoadEventArgs*>(loadedAssembly));
}
