// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketError
  // [] Offset: FFFFFFFF
  struct SocketError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SocketError
    constexpr SocketError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketError Success
    static constexpr const int Success = 0;
    // Get static field: static public System.Net.Sockets.SocketError Success
    static System::Net::Sockets::SocketError _get_Success();
    // Set static field: static public System.Net.Sockets.SocketError Success
    static void _set_Success(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError SocketError
    static constexpr const int _SocketError = -1;
    // Get static field: static public System.Net.Sockets.SocketError SocketError
    static System::Net::Sockets::SocketError _get_SocketError();
    // Set static field: static public System.Net.Sockets.SocketError SocketError
    static void _set_SocketError(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError Interrupted
    static constexpr const int Interrupted = 10004;
    // Get static field: static public System.Net.Sockets.SocketError Interrupted
    static System::Net::Sockets::SocketError _get_Interrupted();
    // Set static field: static public System.Net.Sockets.SocketError Interrupted
    static void _set_Interrupted(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError AccessDenied
    static constexpr const int AccessDenied = 10013;
    // Get static field: static public System.Net.Sockets.SocketError AccessDenied
    static System::Net::Sockets::SocketError _get_AccessDenied();
    // Set static field: static public System.Net.Sockets.SocketError AccessDenied
    static void _set_AccessDenied(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError Fault
    static constexpr const int Fault = 10014;
    // Get static field: static public System.Net.Sockets.SocketError Fault
    static System::Net::Sockets::SocketError _get_Fault();
    // Set static field: static public System.Net.Sockets.SocketError Fault
    static void _set_Fault(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError InvalidArgument
    static constexpr const int InvalidArgument = 10022;
    // Get static field: static public System.Net.Sockets.SocketError InvalidArgument
    static System::Net::Sockets::SocketError _get_InvalidArgument();
    // Set static field: static public System.Net.Sockets.SocketError InvalidArgument
    static void _set_InvalidArgument(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError TooManyOpenSockets
    static constexpr const int TooManyOpenSockets = 10024;
    // Get static field: static public System.Net.Sockets.SocketError TooManyOpenSockets
    static System::Net::Sockets::SocketError _get_TooManyOpenSockets();
    // Set static field: static public System.Net.Sockets.SocketError TooManyOpenSockets
    static void _set_TooManyOpenSockets(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError WouldBlock
    static constexpr const int WouldBlock = 10035;
    // Get static field: static public System.Net.Sockets.SocketError WouldBlock
    static System::Net::Sockets::SocketError _get_WouldBlock();
    // Set static field: static public System.Net.Sockets.SocketError WouldBlock
    static void _set_WouldBlock(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError InProgress
    static constexpr const int InProgress = 10036;
    // Get static field: static public System.Net.Sockets.SocketError InProgress
    static System::Net::Sockets::SocketError _get_InProgress();
    // Set static field: static public System.Net.Sockets.SocketError InProgress
    static void _set_InProgress(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError AlreadyInProgress
    static constexpr const int AlreadyInProgress = 10037;
    // Get static field: static public System.Net.Sockets.SocketError AlreadyInProgress
    static System::Net::Sockets::SocketError _get_AlreadyInProgress();
    // Set static field: static public System.Net.Sockets.SocketError AlreadyInProgress
    static void _set_AlreadyInProgress(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NotSocket
    static constexpr const int NotSocket = 10038;
    // Get static field: static public System.Net.Sockets.SocketError NotSocket
    static System::Net::Sockets::SocketError _get_NotSocket();
    // Set static field: static public System.Net.Sockets.SocketError NotSocket
    static void _set_NotSocket(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError DestinationAddressRequired
    static constexpr const int DestinationAddressRequired = 10039;
    // Get static field: static public System.Net.Sockets.SocketError DestinationAddressRequired
    static System::Net::Sockets::SocketError _get_DestinationAddressRequired();
    // Set static field: static public System.Net.Sockets.SocketError DestinationAddressRequired
    static void _set_DestinationAddressRequired(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError MessageSize
    static constexpr const int MessageSize = 10040;
    // Get static field: static public System.Net.Sockets.SocketError MessageSize
    static System::Net::Sockets::SocketError _get_MessageSize();
    // Set static field: static public System.Net.Sockets.SocketError MessageSize
    static void _set_MessageSize(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ProtocolType
    static constexpr const int ProtocolType = 10041;
    // Get static field: static public System.Net.Sockets.SocketError ProtocolType
    static System::Net::Sockets::SocketError _get_ProtocolType();
    // Set static field: static public System.Net.Sockets.SocketError ProtocolType
    static void _set_ProtocolType(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ProtocolOption
    static constexpr const int ProtocolOption = 10042;
    // Get static field: static public System.Net.Sockets.SocketError ProtocolOption
    static System::Net::Sockets::SocketError _get_ProtocolOption();
    // Set static field: static public System.Net.Sockets.SocketError ProtocolOption
    static void _set_ProtocolOption(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ProtocolNotSupported
    static constexpr const int ProtocolNotSupported = 10043;
    // Get static field: static public System.Net.Sockets.SocketError ProtocolNotSupported
    static System::Net::Sockets::SocketError _get_ProtocolNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError ProtocolNotSupported
    static void _set_ProtocolNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError SocketNotSupported
    static constexpr const int SocketNotSupported = 10044;
    // Get static field: static public System.Net.Sockets.SocketError SocketNotSupported
    static System::Net::Sockets::SocketError _get_SocketNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError SocketNotSupported
    static void _set_SocketNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError OperationNotSupported
    static constexpr const int OperationNotSupported = 10045;
    // Get static field: static public System.Net.Sockets.SocketError OperationNotSupported
    static System::Net::Sockets::SocketError _get_OperationNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError OperationNotSupported
    static void _set_OperationNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ProtocolFamilyNotSupported
    static constexpr const int ProtocolFamilyNotSupported = 10046;
    // Get static field: static public System.Net.Sockets.SocketError ProtocolFamilyNotSupported
    static System::Net::Sockets::SocketError _get_ProtocolFamilyNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError ProtocolFamilyNotSupported
    static void _set_ProtocolFamilyNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError AddressFamilyNotSupported
    static constexpr const int AddressFamilyNotSupported = 10047;
    // Get static field: static public System.Net.Sockets.SocketError AddressFamilyNotSupported
    static System::Net::Sockets::SocketError _get_AddressFamilyNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError AddressFamilyNotSupported
    static void _set_AddressFamilyNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError AddressAlreadyInUse
    static constexpr const int AddressAlreadyInUse = 10048;
    // Get static field: static public System.Net.Sockets.SocketError AddressAlreadyInUse
    static System::Net::Sockets::SocketError _get_AddressAlreadyInUse();
    // Set static field: static public System.Net.Sockets.SocketError AddressAlreadyInUse
    static void _set_AddressAlreadyInUse(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError AddressNotAvailable
    static constexpr const int AddressNotAvailable = 10049;
    // Get static field: static public System.Net.Sockets.SocketError AddressNotAvailable
    static System::Net::Sockets::SocketError _get_AddressNotAvailable();
    // Set static field: static public System.Net.Sockets.SocketError AddressNotAvailable
    static void _set_AddressNotAvailable(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NetworkDown
    static constexpr const int NetworkDown = 10050;
    // Get static field: static public System.Net.Sockets.SocketError NetworkDown
    static System::Net::Sockets::SocketError _get_NetworkDown();
    // Set static field: static public System.Net.Sockets.SocketError NetworkDown
    static void _set_NetworkDown(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NetworkUnreachable
    static constexpr const int NetworkUnreachable = 10051;
    // Get static field: static public System.Net.Sockets.SocketError NetworkUnreachable
    static System::Net::Sockets::SocketError _get_NetworkUnreachable();
    // Set static field: static public System.Net.Sockets.SocketError NetworkUnreachable
    static void _set_NetworkUnreachable(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NetworkReset
    static constexpr const int NetworkReset = 10052;
    // Get static field: static public System.Net.Sockets.SocketError NetworkReset
    static System::Net::Sockets::SocketError _get_NetworkReset();
    // Set static field: static public System.Net.Sockets.SocketError NetworkReset
    static void _set_NetworkReset(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ConnectionAborted
    static constexpr const int ConnectionAborted = 10053;
    // Get static field: static public System.Net.Sockets.SocketError ConnectionAborted
    static System::Net::Sockets::SocketError _get_ConnectionAborted();
    // Set static field: static public System.Net.Sockets.SocketError ConnectionAborted
    static void _set_ConnectionAborted(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ConnectionReset
    static constexpr const int ConnectionReset = 10054;
    // Get static field: static public System.Net.Sockets.SocketError ConnectionReset
    static System::Net::Sockets::SocketError _get_ConnectionReset();
    // Set static field: static public System.Net.Sockets.SocketError ConnectionReset
    static void _set_ConnectionReset(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NoBufferSpaceAvailable
    static constexpr const int NoBufferSpaceAvailable = 10055;
    // Get static field: static public System.Net.Sockets.SocketError NoBufferSpaceAvailable
    static System::Net::Sockets::SocketError _get_NoBufferSpaceAvailable();
    // Set static field: static public System.Net.Sockets.SocketError NoBufferSpaceAvailable
    static void _set_NoBufferSpaceAvailable(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError IsConnected
    static constexpr const int IsConnected = 10056;
    // Get static field: static public System.Net.Sockets.SocketError IsConnected
    static System::Net::Sockets::SocketError _get_IsConnected();
    // Set static field: static public System.Net.Sockets.SocketError IsConnected
    static void _set_IsConnected(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NotConnected
    static constexpr const int NotConnected = 10057;
    // Get static field: static public System.Net.Sockets.SocketError NotConnected
    static System::Net::Sockets::SocketError _get_NotConnected();
    // Set static field: static public System.Net.Sockets.SocketError NotConnected
    static void _set_NotConnected(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError Shutdown
    static constexpr const int Shutdown = 10058;
    // Get static field: static public System.Net.Sockets.SocketError Shutdown
    static System::Net::Sockets::SocketError _get_Shutdown();
    // Set static field: static public System.Net.Sockets.SocketError Shutdown
    static void _set_Shutdown(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError TimedOut
    static constexpr const int TimedOut = 10060;
    // Get static field: static public System.Net.Sockets.SocketError TimedOut
    static System::Net::Sockets::SocketError _get_TimedOut();
    // Set static field: static public System.Net.Sockets.SocketError TimedOut
    static void _set_TimedOut(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ConnectionRefused
    static constexpr const int ConnectionRefused = 10061;
    // Get static field: static public System.Net.Sockets.SocketError ConnectionRefused
    static System::Net::Sockets::SocketError _get_ConnectionRefused();
    // Set static field: static public System.Net.Sockets.SocketError ConnectionRefused
    static void _set_ConnectionRefused(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError HostDown
    static constexpr const int HostDown = 10064;
    // Get static field: static public System.Net.Sockets.SocketError HostDown
    static System::Net::Sockets::SocketError _get_HostDown();
    // Set static field: static public System.Net.Sockets.SocketError HostDown
    static void _set_HostDown(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError HostUnreachable
    static constexpr const int HostUnreachable = 10065;
    // Get static field: static public System.Net.Sockets.SocketError HostUnreachable
    static System::Net::Sockets::SocketError _get_HostUnreachable();
    // Set static field: static public System.Net.Sockets.SocketError HostUnreachable
    static void _set_HostUnreachable(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError ProcessLimit
    static constexpr const int ProcessLimit = 10067;
    // Get static field: static public System.Net.Sockets.SocketError ProcessLimit
    static System::Net::Sockets::SocketError _get_ProcessLimit();
    // Set static field: static public System.Net.Sockets.SocketError ProcessLimit
    static void _set_ProcessLimit(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError SystemNotReady
    static constexpr const int SystemNotReady = 10091;
    // Get static field: static public System.Net.Sockets.SocketError SystemNotReady
    static System::Net::Sockets::SocketError _get_SystemNotReady();
    // Set static field: static public System.Net.Sockets.SocketError SystemNotReady
    static void _set_SystemNotReady(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError VersionNotSupported
    static constexpr const int VersionNotSupported = 10092;
    // Get static field: static public System.Net.Sockets.SocketError VersionNotSupported
    static System::Net::Sockets::SocketError _get_VersionNotSupported();
    // Set static field: static public System.Net.Sockets.SocketError VersionNotSupported
    static void _set_VersionNotSupported(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NotInitialized
    static constexpr const int NotInitialized = 10093;
    // Get static field: static public System.Net.Sockets.SocketError NotInitialized
    static System::Net::Sockets::SocketError _get_NotInitialized();
    // Set static field: static public System.Net.Sockets.SocketError NotInitialized
    static void _set_NotInitialized(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError Disconnecting
    static constexpr const int Disconnecting = 10101;
    // Get static field: static public System.Net.Sockets.SocketError Disconnecting
    static System::Net::Sockets::SocketError _get_Disconnecting();
    // Set static field: static public System.Net.Sockets.SocketError Disconnecting
    static void _set_Disconnecting(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError TypeNotFound
    static constexpr const int TypeNotFound = 10109;
    // Get static field: static public System.Net.Sockets.SocketError TypeNotFound
    static System::Net::Sockets::SocketError _get_TypeNotFound();
    // Set static field: static public System.Net.Sockets.SocketError TypeNotFound
    static void _set_TypeNotFound(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError HostNotFound
    static constexpr const int HostNotFound = 11001;
    // Get static field: static public System.Net.Sockets.SocketError HostNotFound
    static System::Net::Sockets::SocketError _get_HostNotFound();
    // Set static field: static public System.Net.Sockets.SocketError HostNotFound
    static void _set_HostNotFound(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError TryAgain
    static constexpr const int TryAgain = 11002;
    // Get static field: static public System.Net.Sockets.SocketError TryAgain
    static System::Net::Sockets::SocketError _get_TryAgain();
    // Set static field: static public System.Net.Sockets.SocketError TryAgain
    static void _set_TryAgain(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NoRecovery
    static constexpr const int NoRecovery = 11003;
    // Get static field: static public System.Net.Sockets.SocketError NoRecovery
    static System::Net::Sockets::SocketError _get_NoRecovery();
    // Set static field: static public System.Net.Sockets.SocketError NoRecovery
    static void _set_NoRecovery(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError NoData
    static constexpr const int NoData = 11004;
    // Get static field: static public System.Net.Sockets.SocketError NoData
    static System::Net::Sockets::SocketError _get_NoData();
    // Set static field: static public System.Net.Sockets.SocketError NoData
    static void _set_NoData(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError IOPending
    static constexpr const int IOPending = 997;
    // Get static field: static public System.Net.Sockets.SocketError IOPending
    static System::Net::Sockets::SocketError _get_IOPending();
    // Set static field: static public System.Net.Sockets.SocketError IOPending
    static void _set_IOPending(System::Net::Sockets::SocketError value);
    // static field const value: static public System.Net.Sockets.SocketError OperationAborted
    static constexpr const int OperationAborted = 995;
    // Get static field: static public System.Net.Sockets.SocketError OperationAborted
    static System::Net::Sockets::SocketError _get_OperationAborted();
    // Set static field: static public System.Net.Sockets.SocketError OperationAborted
    static void _set_OperationAborted(System::Net::Sockets::SocketError value);
  }; // System.Net.Sockets.SocketError
  static check_size<sizeof(SocketError), 0 + sizeof(int)> __System_Net_Sockets_SocketErrorSizeCheck;
  static_assert(sizeof(SocketError) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketError, "System.Net.Sockets", "SocketError");
