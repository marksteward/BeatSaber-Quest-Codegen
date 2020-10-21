// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.RijndaelManaged
#include "System/Security/Cryptography/RijndaelManaged.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.RijndaelManagedTransformMode
#include "System/Security/Cryptography/RijndaelManagedTransformMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.RijndaelManaged.NewEncryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::NewEncryptor(::Array<uint8_t>* rgbKey, System::Security::Cryptography::CipherMode mode, ::Array<uint8_t>* rgbIV, int feedbackSize, System::Security::Cryptography::RijndaelManagedTransformMode encryptMode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "NewEncryptor", rgbKey, mode, rgbIV, feedbackSize, encryptMode));
}
// Autogenerated method: System.Security.Cryptography.RijndaelManaged..ctor
System::Security::Cryptography::RijndaelManaged* System::Security::Cryptography::RijndaelManaged::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<RijndaelManaged*>());
}
// Autogenerated method: System.Security.Cryptography.RijndaelManaged.CreateEncryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateEncryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.RijndaelManaged.CreateDecryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateDecryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.RijndaelManaged.GenerateKey
void System::Security::Cryptography::RijndaelManaged::GenerateKey() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateKey"));
}
// Autogenerated method: System.Security.Cryptography.RijndaelManaged.GenerateIV
void System::Security::Cryptography::RijndaelManaged::GenerateIV() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateIV"));
}