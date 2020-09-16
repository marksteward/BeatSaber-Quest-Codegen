// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.Xml.SecureStringHasher
#include "System/Xml/SecureStringHasher.hpp"
// Including type: System.Xml.XmlWellFormedWriter/Token
#include "System/Xml/XmlWellFormedWriter_Token.hpp"
// Including type: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
#include "System/Xml/XmlWellFormedWriter_NamespaceResolverProxy.hpp"
// Including type: System.Xml.XmlWellFormedWriter/ElementScope
#include "System/Xml/XmlWellFormedWriter_ElementScope.hpp"
// Including type: System.Xml.XmlWellFormedWriter/NamespaceKind
#include "System/Xml/XmlWellFormedWriter_NamespaceKind.hpp"
// Including type: System.Xml.XmlWellFormedWriter/Namespace
#include "System/Xml/XmlWellFormedWriter_Namespace.hpp"
// Including type: System.Xml.XmlWellFormedWriter/AttrName
#include "System/Xml/XmlWellFormedWriter_AttrName.hpp"
// Including type: System.Xml.WriteState
#include "System/Xml/WriteState.hpp"
// Including type: System.Xml.XmlWellFormedWriter/AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
// Including type: System.Xml.XmlException
#include "System/Xml/XmlException.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.String[] stateName
::Array<::Il2CppString*>* System::Xml::XmlWellFormedWriter::_get_stateName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppString*>*>("System.Xml", "XmlWellFormedWriter", "stateName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String[] stateName
void System::Xml::XmlWellFormedWriter::_set_stateName(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlWellFormedWriter", "stateName", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.String[] tokenName
::Array<::Il2CppString*>* System::Xml::XmlWellFormedWriter::_get_tokenName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppString*>*>("System.Xml", "XmlWellFormedWriter", "tokenName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String[] tokenName
void System::Xml::XmlWellFormedWriter::_set_tokenName(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlWellFormedWriter", "tokenName", value));
}
// Autogenerated static field getter
// Get static field: static private System.Xml.WriteState[] state2WriteState
::Array<System::Xml::WriteState>* System::Xml::XmlWellFormedWriter::_get_state2WriteState() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Xml::WriteState>*>("System.Xml", "XmlWellFormedWriter", "state2WriteState"));
}
// Autogenerated static field setter
// Set static field: static private System.Xml.WriteState[] state2WriteState
void System::Xml::XmlWellFormedWriter::_set_state2WriteState(::Array<System::Xml::WriteState>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlWellFormedWriter", "state2WriteState", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Xml.XmlWellFormedWriter/State[] StateTableDocument
::Array<System::Xml::XmlWellFormedWriter::State>* System::Xml::XmlWellFormedWriter::_get_StateTableDocument() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Xml::XmlWellFormedWriter::State>*>("System.Xml", "XmlWellFormedWriter", "StateTableDocument"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Xml.XmlWellFormedWriter/State[] StateTableDocument
void System::Xml::XmlWellFormedWriter::_set_StateTableDocument(::Array<System::Xml::XmlWellFormedWriter::State>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlWellFormedWriter", "StateTableDocument", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Xml.XmlWellFormedWriter/State[] StateTableAuto
::Array<System::Xml::XmlWellFormedWriter::State>* System::Xml::XmlWellFormedWriter::_get_StateTableAuto() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Xml::XmlWellFormedWriter::State>*>("System.Xml", "XmlWellFormedWriter", "StateTableAuto"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Xml.XmlWellFormedWriter/State[] StateTableAuto
void System::Xml::XmlWellFormedWriter::_set_StateTableAuto(::Array<System::Xml::XmlWellFormedWriter::State>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "XmlWellFormedWriter", "StateTableAuto", value));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter..ctor
System::Xml::XmlWellFormedWriter* System::Xml::XmlWellFormedWriter::New_ctor(System::Xml::XmlWriter* writer, System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(il2cpp_utils::New<XmlWellFormedWriter*>(writer, settings));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.get_RawWriter
System::Xml::XmlRawWriter* System::Xml::XmlWellFormedWriter::get_RawWriter() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Xml::XmlRawWriter*>(this, "get_RawWriter"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.get_SaveAttrValue
bool System::Xml::XmlWellFormedWriter::get_SaveAttrValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SaveAttrValue"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.get_InBase64
bool System::Xml::XmlWellFormedWriter::get_InBase64() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_InBase64"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.SetSpecialAttribute
void System::Xml::XmlWellFormedWriter::SetSpecialAttribute(System::Xml::XmlWellFormedWriter::SpecialAttribute special) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSpecialAttribute", special));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteStartDocumentImpl
void System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartDocumentImpl", standalone));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.StartFragment
void System::Xml::XmlWellFormedWriter::StartFragment() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartFragment"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.PushNamespaceImplicit
void System::Xml::XmlWellFormedWriter::PushNamespaceImplicit(::Il2CppString* prefix, ::Il2CppString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PushNamespaceImplicit", prefix, ns));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.PushNamespaceExplicit
bool System::Xml::XmlWellFormedWriter::PushNamespaceExplicit(::Il2CppString* prefix, ::Il2CppString* ns) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "PushNamespaceExplicit", prefix, ns));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.AddNamespace
void System::Xml::XmlWellFormedWriter::AddNamespace(::Il2CppString* prefix, ::Il2CppString* ns, System::Xml::XmlWellFormedWriter::NamespaceKind kind) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddNamespace", prefix, ns, kind));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.AddToNamespaceHashtable
void System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable(int namespaceIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddToNamespaceHashtable", namespaceIndex));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.LookupNamespaceIndex
int System::Xml::XmlWellFormedWriter::LookupNamespaceIndex(::Il2CppString* prefix) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "LookupNamespaceIndex", prefix));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.PopNamespaces
void System::Xml::XmlWellFormedWriter::PopNamespaces(int indexFrom, int indexTo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopNamespaces", indexFrom, indexTo));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.DupAttrException
System::Xml::XmlException* System::Xml::XmlWellFormedWriter::DupAttrException(::Il2CppString* prefix, ::Il2CppString* localName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Xml::XmlException*>("System.Xml", "XmlWellFormedWriter", "DupAttrException", prefix, localName));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.AdvanceState
void System::Xml::XmlWellFormedWriter::AdvanceState(System::Xml::XmlWellFormedWriter::Token token) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdvanceState", token));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.StartElementContent
void System::Xml::XmlWellFormedWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.GetStateName
::Il2CppString* System::Xml::XmlWellFormedWriter::GetStateName(System::Xml::XmlWellFormedWriter::State state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Xml", "XmlWellFormedWriter", "GetStateName", state));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.LookupNamespace
::Il2CppString* System::Xml::XmlWellFormedWriter::LookupNamespace(::Il2CppString* prefix) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "LookupNamespace", prefix));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.LookupLocalNamespace
::Il2CppString* System::Xml::XmlWellFormedWriter::LookupLocalNamespace(::Il2CppString* prefix) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "LookupLocalNamespace", prefix));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.GeneratePrefix
::Il2CppString* System::Xml::XmlWellFormedWriter::GeneratePrefix() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GeneratePrefix"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.CheckNCName
void System::Xml::XmlWellFormedWriter::CheckNCName(::Il2CppString* ncname) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckNCName", ncname));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.InvalidCharsException
System::Exception* System::Xml::XmlWellFormedWriter::InvalidCharsException(::Il2CppString* name, int badCharIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("System.Xml", "XmlWellFormedWriter", "InvalidCharsException", name, badCharIndex));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.ThrowInvalidStateTransition
void System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition(System::Xml::XmlWellFormedWriter::Token token, System::Xml::XmlWellFormedWriter::State currentState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ThrowInvalidStateTransition", token, currentState));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.get_IsClosedOrErrorState
bool System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsClosedOrErrorState"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.AddAttribute
void System::Xml::XmlWellFormedWriter::AddAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* namespaceName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddAttribute", prefix, localName, namespaceName));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.AddToAttrHashTable
void System::Xml::XmlWellFormedWriter::AddToAttrHashTable(int attributeIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddToAttrHashTable", attributeIndex));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter..cctor
void System::Xml::XmlWellFormedWriter::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Xml", "XmlWellFormedWriter", ".cctor"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.get_WriteState
System::Xml::WriteState System::Xml::XmlWellFormedWriter::get_WriteState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Xml::WriteState>(this, "get_WriteState"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteStartDocument
void System::Xml::XmlWellFormedWriter::WriteStartDocument() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartDocument"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteDocType
void System::Xml::XmlWellFormedWriter::WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteStartElement
void System::Xml::XmlWellFormedWriter::WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteEndElement
void System::Xml::XmlWellFormedWriter::WriteEndElement() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteFullEndElement
void System::Xml::XmlWellFormedWriter::WriteFullEndElement() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteStartAttribute
void System::Xml::XmlWellFormedWriter::WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* namespaceName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, namespaceName));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteEndAttribute
void System::Xml::XmlWellFormedWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteCData
void System::Xml::XmlWellFormedWriter::WriteCData(::Il2CppString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCData", text));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteComment
void System::Xml::XmlWellFormedWriter::WriteComment(::Il2CppString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteComment", text));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteProcessingInstruction
void System::Xml::XmlWellFormedWriter::WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", name, text));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteEntityRef
void System::Xml::XmlWellFormedWriter::WriteEntityRef(::Il2CppString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteCharEntity
void System::Xml::XmlWellFormedWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteSurrogateCharEntity
void System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteWhitespace
void System::Xml::XmlWellFormedWriter::WriteWhitespace(::Il2CppString* ws) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteWhitespace", ws));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteString
void System::Xml::XmlWellFormedWriter::WriteString(::Il2CppString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", text));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteChars
void System::Xml::XmlWellFormedWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteRaw
void System::Xml::XmlWellFormedWriter::WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteRaw
void System::Xml::XmlWellFormedWriter::WriteRaw(::Il2CppString* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", data));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteBase64
void System::Xml::XmlWellFormedWriter::WriteBase64(::Array<uint8_t>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteBase64", buffer, index, count));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.Close
void System::Xml::XmlWellFormedWriter::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.Flush
void System::Xml::XmlWellFormedWriter::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.LookupPrefix
::Il2CppString* System::Xml::XmlWellFormedWriter::LookupPrefix(::Il2CppString* ns) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "LookupPrefix", ns));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteValue
void System::Xml::XmlWellFormedWriter::WriteValue(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteValue", value));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter.WriteBinHex
void System::Xml::XmlWellFormedWriter::WriteBinHex(::Array<uint8_t>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteBinHex", buffer, index, count));
}
