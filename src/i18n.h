#ifndef I18N_H
#define I18N_H

#include <stringImproved.h>

//Translate a string with a loaded translation.
// If no translation was loaded, return the origonal string unmodified.
// There functions are not in the i18n namespace to prevent very long identifiers.
const string& tr(const string& input);
const string& tr(const char* context, const string& input);

//Mark a string for translation without actually translating it.
// This can be used in case the actual translation needs to happen in a different part of the code
// compared to the string location.
const string& trMark(const string& input) { return input; }
const string& trMark(const char* context, const string& input) { return input; }

namespace i18n {

//Load a translation file.
//  This can be a gettext .po or .mo file.
//  Multiple files can be loaded and the translations will be merged.
//  Returns true if loading was succesful.
bool load(const string& resource_name);
void reset();

}//!namespace i18n

#endif//I18N_H
