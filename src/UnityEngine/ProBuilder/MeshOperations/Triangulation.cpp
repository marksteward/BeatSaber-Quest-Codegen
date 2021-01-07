// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass7_0
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation_--c__DisplayClass7_0.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass8_0
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation_--c__DisplayClass8_0.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationContext.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.ProBuilder.Vertex
#include "UnityEngine/ProBuilder/Vertex.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.ProBuilder.Poly2Tri.TriangulationContext s_TriangulationContext
UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::_get_s_TriangulationContext() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("_get_s_TriangulationContext");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "s_TriangulationContext"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.ProBuilder.Poly2Tri.TriangulationContext s_TriangulationContext
void UnityEngine::ProBuilder::MeshOperations::Triangulation::_set_s_TriangulationContext(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("_set_s_TriangulationContext");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "s_TriangulationContext", value));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.get_triangulationContext
UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("get_triangulationContext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "get_triangulationContext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.SortAndTriangulate
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::List_1<int>*& indexes, bool convex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("SortAndTriangulate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "SortAndTriangulate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(points, indexes, convex)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, points, indexes, convex);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.TriangulateVertices
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<int>*& triangles, bool unordered, bool convex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("TriangulateVertices");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "TriangulateVertices", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(vertices, triangles, unordered, convex)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, vertices, triangles, unordered, convex);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.TriangulateVertices
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::Array<UnityEngine::Vector3>* vertices, System::Collections::Generic::List_1<int>*& triangles, ::Array<::Array<UnityEngine::Vector3>*>* holes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("TriangulateVertices");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "TriangulateVertices", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(vertices, triangles, holes)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, vertices, triangles, holes);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.TriangulateVertices
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::Array<UnityEngine::Vector3>* vertices, System::Collections::Generic::List_1<int>*& triangles, bool unordered, bool convex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("TriangulateVertices");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "TriangulateVertices", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(vertices, triangles, unordered, convex)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, vertices, triangles, unordered, convex);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.Triangulate
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::List_1<int>*& indexes, bool convex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("Triangulate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "Triangulate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(points, indexes, convex)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, points, indexes, convex);
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Triangulation.Triangulate
bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector2>*>* holes, System::Collections::Generic::List_1<int>*& indexes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("Triangulation").WithContext("Triangulate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder.MeshOperations", "Triangulation", "Triangulate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(points, holes, indexes)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, points, holes, indexes);
}
