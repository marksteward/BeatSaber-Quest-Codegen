// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: ShapeType
  struct ShapeType;
  // Forward declaring type: PivotLocation
  struct PivotLocation;
  // Forward declaring type: Axis
  struct Axis;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ShapeGenerator
  class ShapeGenerator : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ShapeGenerator
    ShapeGenerator() noexcept {}
    // Get static field: static private readonly UnityEngine.Vector3[] k_IcosphereVertices
    static ::Array<UnityEngine::Vector3>* _get_k_IcosphereVertices();
    // Set static field: static private readonly UnityEngine.Vector3[] k_IcosphereVertices
    static void _set_k_IcosphereVertices(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly System.Int32[] k_IcosphereTriangles
    static ::Array<int>* _get_k_IcosphereTriangles();
    // Set static field: static private readonly System.Int32[] k_IcosphereTriangles
    static void _set_k_IcosphereTriangles(::Array<int>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] k_CubeVertices
    static ::Array<UnityEngine::Vector3>* _get_k_CubeVertices();
    // Set static field: static private readonly UnityEngine.Vector3[] k_CubeVertices
    static void _set_k_CubeVertices(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly System.Int32[] k_CubeTriangles
    static ::Array<int>* _get_k_CubeTriangles();
    // Set static field: static private readonly System.Int32[] k_CubeTriangles
    static void _set_k_CubeTriangles(::Array<int>* value);
    // static public UnityEngine.ProBuilder.ProBuilderMesh CreateShape(UnityEngine.ProBuilder.ShapeType shape, UnityEngine.ProBuilder.PivotLocation pivotType)
    // Offset: 0x14EEF08
    static UnityEngine::ProBuilder::ProBuilderMesh* CreateShape(UnityEngine::ProBuilder::ShapeType shape, UnityEngine::ProBuilder::PivotLocation pivotType);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateStair(UnityEngine.ProBuilder.PivotLocation pivotType, UnityEngine.Vector3 size, System.Int32 steps, System.Boolean buildSides)
    // Offset: 0x14EF7BC
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size, int steps, bool buildSides);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateCurvedStair(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single stairWidth, System.Single height, System.Single innerRadius, System.Single circumference, System.Int32 steps, System.Boolean buildSides)
    // Offset: 0x14F04C0
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateCurvedStair(UnityEngine::ProBuilder::PivotLocation pivotType, float stairWidth, float height, float innerRadius, float circumference, int steps, bool buildSides);
    // static UnityEngine.ProBuilder.ProBuilderMesh GenerateStair(UnityEngine.ProBuilder.PivotLocation pivotType, System.Int32 steps, System.Single width, System.Single height, System.Single depth, System.Boolean sidesGoToFloor, System.Boolean generateBack, System.Boolean platformsOnly)
    // Offset: 0x14F6400
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair(UnityEngine::ProBuilder::PivotLocation pivotType, int steps, float width, float height, float depth, bool sidesGoToFloor, bool generateBack, bool platformsOnly);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateCube(UnityEngine.ProBuilder.PivotLocation pivotType, UnityEngine.Vector3 size)
    // Offset: 0x14EF580
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateCube(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateCylinder(UnityEngine.ProBuilder.PivotLocation pivotType, System.Int32 axisDivisions, System.Single radius, System.Single height, System.Int32 heightCuts, System.Int32 smoothing)
    // Offset: 0x14F1DF8
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateCylinder(UnityEngine::ProBuilder::PivotLocation pivotType, int axisDivisions, float radius, float height, int heightCuts, int smoothing);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GeneratePrism(UnityEngine.ProBuilder.PivotLocation pivotType, UnityEngine.Vector3 size)
    // Offset: 0x14F1618
    static UnityEngine::ProBuilder::ProBuilderMesh* GeneratePrism(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateDoor(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single totalWidth, System.Single totalHeight, System.Single ledgeHeight, System.Single legWidth, System.Single depth)
    // Offset: 0x14F2F48
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateDoor(UnityEngine::ProBuilder::PivotLocation pivotType, float totalWidth, float totalHeight, float ledgeHeight, float legWidth, float depth);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GeneratePlane(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single width, System.Single height, System.Int32 widthCuts, System.Int32 heightCuts, UnityEngine.ProBuilder.Axis axis)
    // Offset: 0x14F2874
    static UnityEngine::ProBuilder::ProBuilderMesh* GeneratePlane(UnityEngine::ProBuilder::PivotLocation pivotType, float width, float height, int widthCuts, int heightCuts, UnityEngine::ProBuilder::Axis axis);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GeneratePipe(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single radius, System.Single height, System.Single thickness, System.Int32 subdivAxis, System.Int32 subdivHeight)
    // Offset: 0x14F3B10
    static UnityEngine::ProBuilder::ProBuilderMesh* GeneratePipe(UnityEngine::ProBuilder::PivotLocation pivotType, float radius, float height, float thickness, int subdivAxis, int subdivHeight);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateCone(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single radius, System.Single height, System.Int32 subdivAxis)
    // Offset: 0x14F443C
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateCone(UnityEngine::ProBuilder::PivotLocation pivotType, float radius, float height, int subdivAxis);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateArch(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single angle, System.Single radius, System.Single width, System.Single depth, System.Int32 radialCuts, System.Boolean insideFaces, System.Boolean outsideFaces, System.Boolean frontFaces, System.Boolean backFaces, System.Boolean endCaps)
    // Offset: 0x14F4AD4
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateArch(UnityEngine::ProBuilder::PivotLocation pivotType, float angle, float radius, float width, float depth, int radialCuts, bool insideFaces, bool outsideFaces, bool frontFaces, bool backFaces, bool endCaps);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateIcosahedron(UnityEngine.ProBuilder.PivotLocation pivotType, System.Single radius, System.Int32 subdivisions, System.Boolean weldVertices, System.Boolean manualUvs)
    // Offset: 0x14F55BC
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateIcosahedron(UnityEngine::ProBuilder::PivotLocation pivotType, float radius, int subdivisions, bool weldVertices, bool manualUvs);
    // static private UnityEngine.Vector3[] SubdivideIcosahedron(UnityEngine.Vector3[] vertices, System.Single radius)
    // Offset: 0x14F6AC0
    static ::Array<UnityEngine::Vector3>* SubdivideIcosahedron(::Array<UnityEngine::Vector3>* vertices, float radius);
    // static private UnityEngine.Vector3[] GetCirclePoints(System.Int32 segments, System.Single radius, System.Single circumference, UnityEngine.Quaternion rotation, System.Single offset)
    // Offset: 0x14F6F6C
    static ::Array<UnityEngine::Vector3>* GetCirclePoints(int segments, float radius, float circumference, UnityEngine::Quaternion rotation, float offset);
    // static public UnityEngine.ProBuilder.ProBuilderMesh GenerateTorus(UnityEngine.ProBuilder.PivotLocation pivotType, System.Int32 rows, System.Int32 columns, System.Single innerRadius, System.Single outerRadius, System.Boolean smooth, System.Single horizontalCircumference, System.Single verticalCircumference, System.Boolean manualUvs)
    // Offset: 0x14F5E04
    static UnityEngine::ProBuilder::ProBuilderMesh* GenerateTorus(UnityEngine::ProBuilder::PivotLocation pivotType, int rows, int columns, float innerRadius, float outerRadius, bool smooth, float horizontalCircumference, float verticalCircumference, bool manualUvs);
    // static private System.Void .cctor()
    // Offset: 0x14F742C
    static void _cctor();
  }; // UnityEngine.ProBuilder.ShapeGenerator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ShapeGenerator*, "UnityEngine.ProBuilder", "ShapeGenerator");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::CreateShape
// Il2CppName: CreateShape
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateStair
// Il2CppName: GenerateStair
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateCurvedStair
// Il2CppName: GenerateCurvedStair
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateStair
// Il2CppName: GenerateStair
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateCube
// Il2CppName: GenerateCube
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateCylinder
// Il2CppName: GenerateCylinder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GeneratePrism
// Il2CppName: GeneratePrism
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateDoor
// Il2CppName: GenerateDoor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GeneratePlane
// Il2CppName: GeneratePlane
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GeneratePipe
// Il2CppName: GeneratePipe
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateCone
// Il2CppName: GenerateCone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateArch
// Il2CppName: GenerateArch
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateIcosahedron
// Il2CppName: GenerateIcosahedron
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::SubdivideIcosahedron
// Il2CppName: SubdivideIcosahedron
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GetCirclePoints
// Il2CppName: GetCirclePoints
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::GenerateTorus
// Il2CppName: GenerateTorus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ShapeGenerator::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
