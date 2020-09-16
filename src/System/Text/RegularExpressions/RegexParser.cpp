// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexParser
#include "System/Text/RegularExpressions/RegexParser.hpp"
// Including type: System.Text.RegularExpressions.RegexNode
#include "System/Text/RegularExpressions/RegexNode.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Text.RegularExpressions.RegexTree
#include "System/Text/RegularExpressions/RegexTree.hpp"
// Including type: System.Text.RegularExpressions.RegexCharClass
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Byte[] _category
::Array<uint8_t>* System::Text::RegularExpressions::RegexParser::_get__category() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Text.RegularExpressions", "RegexParser", "_category"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Byte[] _category
void System::Text::RegularExpressions::RegexParser::_set__category(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "RegexParser", "_category", value));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.Parse
System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexParser::Parse(::Il2CppString* re, System::Text::RegularExpressions::RegexOptions op) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexTree*>("System.Text.RegularExpressions", "RegexParser", "Parse", re, op));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser..ctor
System::Text::RegularExpressions::RegexParser* System::Text::RegularExpressions::RegexParser::New_ctor(System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::New<RegexParser*>(culture));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.SetPattern
void System::Text::RegularExpressions::RegexParser::SetPattern(::Il2CppString* Re) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPattern", Re));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.Reset
void System::Text::RegularExpressions::RegexParser::Reset(System::Text::RegularExpressions::RegexOptions topopts) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", topopts));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanRegex
System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanRegex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexNode*>(this, "ScanRegex"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanCharClass
System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexParser::ScanCharClass(bool caseInsensitive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexCharClass*>(this, "ScanCharClass", caseInsensitive));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanCharClass
System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexParser::ScanCharClass(bool caseInsensitive, bool scanOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexCharClass*>(this, "ScanCharClass", caseInsensitive, scanOnly));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanGroupOpen
System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanGroupOpen() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexNode*>(this, "ScanGroupOpen"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanBlank
void System::Text::RegularExpressions::RegexParser::ScanBlank() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ScanBlank"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanBackslash
System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBackslash() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexNode*>(this, "ScanBackslash"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanBasicBackslash
System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBasicBackslash() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexNode*>(this, "ScanBasicBackslash"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanCapname
::Il2CppString* System::Text::RegularExpressions::RegexParser::ScanCapname() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ScanCapname"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanOctal
::Il2CppChar System::Text::RegularExpressions::RegexParser::ScanOctal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ScanOctal"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanDecimal
int System::Text::RegularExpressions::RegexParser::ScanDecimal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ScanDecimal"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanHex
::Il2CppChar System::Text::RegularExpressions::RegexParser::ScanHex(int c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ScanHex", c));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.HexDigit
int System::Text::RegularExpressions::RegexParser::HexDigit(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Text.RegularExpressions", "RegexParser", "HexDigit", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanControl
::Il2CppChar System::Text::RegularExpressions::RegexParser::ScanControl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ScanControl"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsOnlyTopOption
bool System::Text::RegularExpressions::RegexParser::IsOnlyTopOption(System::Text::RegularExpressions::RegexOptions option) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsOnlyTopOption", option));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanOptions
void System::Text::RegularExpressions::RegexParser::ScanOptions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ScanOptions"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ScanCharEscape
::Il2CppChar System::Text::RegularExpressions::RegexParser::ScanCharEscape() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ScanCharEscape"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.ParseProperty
::Il2CppString* System::Text::RegularExpressions::RegexParser::ParseProperty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ParseProperty"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.TypeFromCode
int System::Text::RegularExpressions::RegexParser::TypeFromCode(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "TypeFromCode", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.OptionFromCode
System::Text::RegularExpressions::RegexOptions System::Text::RegularExpressions::RegexParser::OptionFromCode(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexOptions>("System.Text.RegularExpressions", "RegexParser", "OptionFromCode", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.CountCaptures
void System::Text::RegularExpressions::RegexParser::CountCaptures() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CountCaptures"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.NoteCaptureSlot
void System::Text::RegularExpressions::RegexParser::NoteCaptureSlot(int i, int pos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NoteCaptureSlot", i, pos));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.NoteCaptureName
void System::Text::RegularExpressions::RegexParser::NoteCaptureName(::Il2CppString* name, int pos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NoteCaptureName", name, pos));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AssignNameSlots
void System::Text::RegularExpressions::RegexParser::AssignNameSlots() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AssignNameSlots"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.CaptureSlotFromName
int System::Text::RegularExpressions::RegexParser::CaptureSlotFromName(::Il2CppString* capname) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CaptureSlotFromName", capname));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsCaptureSlot
bool System::Text::RegularExpressions::RegexParser::IsCaptureSlot(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsCaptureSlot", i));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsCaptureName
bool System::Text::RegularExpressions::RegexParser::IsCaptureName(::Il2CppString* capname) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsCaptureName", capname));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionN
bool System::Text::RegularExpressions::RegexParser::UseOptionN() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionN"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionI
bool System::Text::RegularExpressions::RegexParser::UseOptionI() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionI"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionM
bool System::Text::RegularExpressions::RegexParser::UseOptionM() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionM"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionS
bool System::Text::RegularExpressions::RegexParser::UseOptionS() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionS"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionX
bool System::Text::RegularExpressions::RegexParser::UseOptionX() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionX"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.UseOptionE
bool System::Text::RegularExpressions::RegexParser::UseOptionE() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOptionE"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsSpecial
bool System::Text::RegularExpressions::RegexParser::IsSpecial(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Text.RegularExpressions", "RegexParser", "IsSpecial", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsStopperX
bool System::Text::RegularExpressions::RegexParser::IsStopperX(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Text.RegularExpressions", "RegexParser", "IsStopperX", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsQuantifier
bool System::Text::RegularExpressions::RegexParser::IsQuantifier(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Text.RegularExpressions", "RegexParser", "IsQuantifier", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsTrueQuantifier
bool System::Text::RegularExpressions::RegexParser::IsTrueQuantifier() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsTrueQuantifier"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.IsSpace
bool System::Text::RegularExpressions::RegexParser::IsSpace(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Text.RegularExpressions", "RegexParser", "IsSpace", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddConcatenate
void System::Text::RegularExpressions::RegexParser::AddConcatenate(int pos, int cch, bool isReplacement) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddConcatenate", pos, cch, isReplacement));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.PushGroup
void System::Text::RegularExpressions::RegexParser::PushGroup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PushGroup"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.PopGroup
void System::Text::RegularExpressions::RegexParser::PopGroup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopGroup"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.EmptyStack
bool System::Text::RegularExpressions::RegexParser::EmptyStack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EmptyStack"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.StartGroup
void System::Text::RegularExpressions::RegexParser::StartGroup(System::Text::RegularExpressions::RegexNode* openGroup) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartGroup", openGroup));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddAlternate
void System::Text::RegularExpressions::RegexParser::AddAlternate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddAlternate"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddConcatenate
void System::Text::RegularExpressions::RegexParser::AddConcatenate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddConcatenate"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddConcatenate
void System::Text::RegularExpressions::RegexParser::AddConcatenate(bool lazy, int min, int max) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddConcatenate", lazy, min, max));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.Unit
System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::Unit() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexNode*>(this, "Unit"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddUnitOne
void System::Text::RegularExpressions::RegexParser::AddUnitOne(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUnitOne", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddUnitNotone
void System::Text::RegularExpressions::RegexParser::AddUnitNotone(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUnitNotone", ch));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddUnitSet
void System::Text::RegularExpressions::RegexParser::AddUnitSet(::Il2CppString* cc) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUnitSet", cc));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddUnitNode
void System::Text::RegularExpressions::RegexParser::AddUnitNode(System::Text::RegularExpressions::RegexNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUnitNode", node));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddUnitType
void System::Text::RegularExpressions::RegexParser::AddUnitType(int type) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUnitType", type));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.AddGroup
void System::Text::RegularExpressions::RegexParser::AddGroup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddGroup"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.PushOptions
void System::Text::RegularExpressions::RegexParser::PushOptions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PushOptions"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.PopOptions
void System::Text::RegularExpressions::RegexParser::PopOptions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopOptions"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.EmptyOptionsStack
bool System::Text::RegularExpressions::RegexParser::EmptyOptionsStack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EmptyOptionsStack"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.PopKeepOptions
void System::Text::RegularExpressions::RegexParser::PopKeepOptions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopKeepOptions"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.MakeException
System::ArgumentException* System::Text::RegularExpressions::RegexParser::MakeException(::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ArgumentException*>(this, "MakeException", message));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.Textpos
int System::Text::RegularExpressions::RegexParser::Textpos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Textpos"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.Textto
void System::Text::RegularExpressions::RegexParser::Textto(int pos) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Textto", pos));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.MoveRightGetChar
::Il2CppChar System::Text::RegularExpressions::RegexParser::MoveRightGetChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "MoveRightGetChar"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.MoveRight
void System::Text::RegularExpressions::RegexParser::MoveRight() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveRight"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.MoveRight
void System::Text::RegularExpressions::RegexParser::MoveRight(int i) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveRight", i));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.MoveLeft
void System::Text::RegularExpressions::RegexParser::MoveLeft() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLeft"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.CharAt
::Il2CppChar System::Text::RegularExpressions::RegexParser::CharAt(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "CharAt", i));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.RightChar
::Il2CppChar System::Text::RegularExpressions::RegexParser::RightChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "RightChar"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.RightChar
::Il2CppChar System::Text::RegularExpressions::RegexParser::RightChar(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "RightChar", i));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser.CharsRight
int System::Text::RegularExpressions::RegexParser::CharsRight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CharsRight"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexParser..cctor
void System::Text::RegularExpressions::RegexParser::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Text.RegularExpressions", "RegexParser", ".cctor"));
}
