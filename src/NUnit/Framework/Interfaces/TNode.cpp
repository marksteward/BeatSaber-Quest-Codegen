// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.TNode
#include "NUnit/Framework/Interfaces/TNode.hpp"
// Including type: NUnit.Framework.Interfaces.AttributeDictionary
#include "NUnit/Framework/Interfaces/AttributeDictionary.hpp"
// Including type: NUnit.Framework.Interfaces.NodeList
#include "NUnit/Framework/Interfaces/NodeList.hpp"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
// Including type: System.Text.RegularExpressions.MatchEvaluator
#include "System/Text/RegularExpressions/MatchEvaluator.hpp"
// Including type: System.Xml.XmlWriter
#include "System/Xml/XmlWriter.hpp"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
System::Text::RegularExpressions::Regex* NUnit::Framework::Interfaces::TNode::_get_InvalidXmlCharactersRegex() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::RegularExpressions::Regex*>("NUnit.Framework.Interfaces", "TNode", "InvalidXmlCharactersRegex"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
void NUnit::Framework::Interfaces::TNode::_set_InvalidXmlCharactersRegex(System::Text::RegularExpressions::Regex* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Interfaces", "TNode", "InvalidXmlCharactersRegex", value));
}
// Autogenerated static field getter
// Get static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
System::Text::RegularExpressions::MatchEvaluator* NUnit::Framework::Interfaces::TNode::_get_CS$$$9__CachedAnonymousMethodDelegate1() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Text::RegularExpressions::MatchEvaluator*>("NUnit.Framework.Interfaces", "TNode", "CS$<>9__CachedAnonymousMethodDelegate1")));
}
// Autogenerated static field setter
// Set static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
void NUnit::Framework::Interfaces::TNode::_set_CS$$$9__CachedAnonymousMethodDelegate1(System::Text::RegularExpressions::MatchEvaluator* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Interfaces", "TNode", "CS$<>9__CachedAnonymousMethodDelegate1", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode..ctor
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::New_ctor(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::New<TNode*>(name));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode..ctor
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::New_ctor(::Il2CppString* name, ::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::New<TNode*>(name, value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode..ctor
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::New_ctor(::Il2CppString* name, ::Il2CppString* value, bool valueIsCDATA) {
  return THROW_UNLESS(il2cpp_utils::New<TNode*>(name, value, valueIsCDATA));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_Name
::Il2CppString* NUnit::Framework::Interfaces::TNode::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Name"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.set_Name
void NUnit::Framework::Interfaces::TNode::set_Name(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Name", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_Value
::Il2CppString* NUnit::Framework::Interfaces::TNode::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Value"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.set_Value
void NUnit::Framework::Interfaces::TNode::set_Value(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Value", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_ValueIsCDATA
bool NUnit::Framework::Interfaces::TNode::get_ValueIsCDATA() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ValueIsCDATA"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.set_ValueIsCDATA
void NUnit::Framework::Interfaces::TNode::set_ValueIsCDATA(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ValueIsCDATA", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_Attributes
NUnit::Framework::Interfaces::AttributeDictionary* NUnit::Framework::Interfaces::TNode::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::AttributeDictionary*>(this, "get_Attributes"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.set_Attributes
void NUnit::Framework::Interfaces::TNode::set_Attributes(NUnit::Framework::Interfaces::AttributeDictionary* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Attributes", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_ChildNodes
NUnit::Framework::Interfaces::NodeList* NUnit::Framework::Interfaces::TNode::get_ChildNodes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::NodeList*>(this, "get_ChildNodes"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.set_ChildNodes
void NUnit::Framework::Interfaces::TNode::set_ChildNodes(NUnit::Framework::Interfaces::NodeList* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ChildNodes", value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.get_OuterXml
::Il2CppString* NUnit::Framework::Interfaces::TNode::get_OuterXml() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_OuterXml"));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.AddElement
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::AddElement(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddElement", name));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.AddElement
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::AddElement(::Il2CppString* name, ::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddElement", name, value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.AddElementWithCDATA
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Interfaces::TNode::AddElementWithCDATA(::Il2CppString* name, ::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddElementWithCDATA", name, value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.AddAttribute
void NUnit::Framework::Interfaces::TNode::AddAttribute(::Il2CppString* name, ::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddAttribute", name, value));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.WriteTo
void NUnit::Framework::Interfaces::TNode::WriteTo(System::Xml::XmlWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteTo", writer));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.EscapeInvalidXmlCharacters
::Il2CppString* NUnit::Framework::Interfaces::TNode::EscapeInvalidXmlCharacters(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Interfaces", "TNode", "EscapeInvalidXmlCharacters", str));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.CharToUnicodeSequence
::Il2CppString* NUnit::Framework::Interfaces::TNode::CharToUnicodeSequence(::Il2CppChar symbol) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Interfaces", "TNode", "CharToUnicodeSequence", symbol));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.WriteCDataTo
void NUnit::Framework::Interfaces::TNode::WriteCDataTo(System::Xml::XmlWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCDataTo", writer));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode.<EscapeInvalidXmlCharacters>b__0
::Il2CppString* NUnit::Framework::Interfaces::TNode::$EscapeInvalidXmlCharacters$b__0(System::Text::RegularExpressions::Match* match) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<::Il2CppString*>("NUnit.Framework.Interfaces", "TNode", "<EscapeInvalidXmlCharacters>b__0", match)));
}
// Autogenerated method: NUnit.Framework.Interfaces.TNode..cctor
void NUnit::Framework::Interfaces::TNode::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Interfaces", "TNode", ".cctor"));
}
