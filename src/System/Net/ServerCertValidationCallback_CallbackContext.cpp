// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ServerCertValidationCallback/CallbackContext
#include "System/Net/ServerCertValidationCallback_CallbackContext.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Chain
#include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.ServerCertValidationCallback/CallbackContext..ctor
System::Net::ServerCertValidationCallback::CallbackContext* System::Net::ServerCertValidationCallback::CallbackContext::New_ctor(::Il2CppObject* request, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  return THROW_UNLESS(il2cpp_utils::New<ServerCertValidationCallback::CallbackContext*>(request, certificate, chain, sslPolicyErrors));
}