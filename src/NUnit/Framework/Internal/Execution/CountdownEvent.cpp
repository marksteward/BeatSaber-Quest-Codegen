// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Execution.CountdownEvent
#include "NUnit/Framework/Internal/Execution/CountdownEvent.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.Execution.CountdownEvent..ctor
NUnit::Framework::Internal::Execution::CountdownEvent* NUnit::Framework::Internal::Execution::CountdownEvent::New_ctor(int initialCount) {
  return THROW_UNLESS(il2cpp_utils::New<CountdownEvent*>(initialCount));
}
// Autogenerated method: NUnit.Framework.Internal.Execution.CountdownEvent.get_CurrentCount
int NUnit::Framework::Internal::Execution::CountdownEvent::get_CurrentCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_CurrentCount"));
}
// Autogenerated method: NUnit.Framework.Internal.Execution.CountdownEvent.Signal
void NUnit::Framework::Internal::Execution::CountdownEvent::Signal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Signal"));
}
