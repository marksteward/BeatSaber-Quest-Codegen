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
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.Response
  struct Response : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Response
    constexpr Response(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OnlineServices.API.Response Success
    static constexpr const int Success = 0;
    // Get static field: static public OnlineServices.API.Response Success
    static OnlineServices::API::Response _get_Success();
    // Set static field: static public OnlineServices.API.Response Success
    static void _set_Success(OnlineServices::API::Response value);
    // static field const value: static public OnlineServices.API.Response UnknownError
    static constexpr const int UnknownError = 1;
    // Get static field: static public OnlineServices.API.Response UnknownError
    static OnlineServices::API::Response _get_UnknownError();
    // Set static field: static public OnlineServices.API.Response UnknownError
    static void _set_UnknownError(OnlineServices::API::Response value);
  }; // OnlineServices.API.Response
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::Response, "OnlineServices.API", "Response");
#pragma pack(pop)
