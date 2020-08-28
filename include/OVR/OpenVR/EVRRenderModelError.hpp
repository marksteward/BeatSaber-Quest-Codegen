// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRRenderModelError
  struct EVRRenderModelError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRRenderModelError
    constexpr EVRRenderModelError(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRRenderModelError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError None
    static OVR::OpenVR::EVRRenderModelError _get_None();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError None
    static void _set_None(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError Loading
    static constexpr const int Loading = 100;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError Loading
    static OVR::OpenVR::EVRRenderModelError _get_Loading();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError Loading
    static void _set_Loading(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError NotSupported
    static constexpr const int NotSupported = 200;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError NotSupported
    static OVR::OpenVR::EVRRenderModelError _get_NotSupported();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError NotSupported
    static void _set_NotSupported(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError InvalidArg
    static constexpr const int InvalidArg = 300;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError InvalidArg
    static OVR::OpenVR::EVRRenderModelError _get_InvalidArg();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError InvalidArg
    static void _set_InvalidArg(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError InvalidModel
    static constexpr const int InvalidModel = 301;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError InvalidModel
    static OVR::OpenVR::EVRRenderModelError _get_InvalidModel();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError InvalidModel
    static void _set_InvalidModel(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError NoShapes
    static constexpr const int NoShapes = 302;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError NoShapes
    static OVR::OpenVR::EVRRenderModelError _get_NoShapes();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError NoShapes
    static void _set_NoShapes(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError MultipleShapes
    static constexpr const int MultipleShapes = 303;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError MultipleShapes
    static OVR::OpenVR::EVRRenderModelError _get_MultipleShapes();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError MultipleShapes
    static void _set_MultipleShapes(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError TooManyVertices
    static constexpr const int TooManyVertices = 304;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError TooManyVertices
    static OVR::OpenVR::EVRRenderModelError _get_TooManyVertices();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError TooManyVertices
    static void _set_TooManyVertices(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError MultipleTextures
    static constexpr const int MultipleTextures = 305;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError MultipleTextures
    static OVR::OpenVR::EVRRenderModelError _get_MultipleTextures();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError MultipleTextures
    static void _set_MultipleTextures(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError BufferTooSmall
    static constexpr const int BufferTooSmall = 306;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError BufferTooSmall
    static OVR::OpenVR::EVRRenderModelError _get_BufferTooSmall();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError BufferTooSmall
    static void _set_BufferTooSmall(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError NotEnoughNormals
    static constexpr const int NotEnoughNormals = 307;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError NotEnoughNormals
    static OVR::OpenVR::EVRRenderModelError _get_NotEnoughNormals();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError NotEnoughNormals
    static void _set_NotEnoughNormals(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError NotEnoughTexCoords
    static constexpr const int NotEnoughTexCoords = 308;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError NotEnoughTexCoords
    static OVR::OpenVR::EVRRenderModelError _get_NotEnoughTexCoords();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError NotEnoughTexCoords
    static void _set_NotEnoughTexCoords(OVR::OpenVR::EVRRenderModelError value);
    // static field const value: static public OVR.OpenVR.EVRRenderModelError InvalidTexture
    static constexpr const int InvalidTexture = 400;
    // Get static field: static public OVR.OpenVR.EVRRenderModelError InvalidTexture
    static OVR::OpenVR::EVRRenderModelError _get_InvalidTexture();
    // Set static field: static public OVR.OpenVR.EVRRenderModelError InvalidTexture
    static void _set_InvalidTexture(OVR::OpenVR::EVRRenderModelError value);
  }; // OVR.OpenVR.EVRRenderModelError
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRRenderModelError, "OVR.OpenVR", "EVRRenderModelError");
#pragma pack(pop)
