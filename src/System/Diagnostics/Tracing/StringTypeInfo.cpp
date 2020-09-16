// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.StringTypeInfo
#include "System/Diagnostics/Tracing/StringTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.StringTypeInfo.WriteData
void System::Diagnostics::Tracing::StringTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppString*& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.StringTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::StringTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.StringTypeInfo.GetData
::Il2CppObject* System::Diagnostics::Tracing::StringTypeInfo::GetData(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetData", value));
}
// Autogenerated method: System.Diagnostics.Tracing.StringTypeInfo..ctor
System::Diagnostics::Tracing::StringTypeInfo* System::Diagnostics::Tracing::StringTypeInfo::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<StringTypeInfo*>());
}
