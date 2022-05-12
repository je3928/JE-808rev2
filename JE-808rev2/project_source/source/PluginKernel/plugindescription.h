// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace) 
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_ACDB6EBE38BC310EB43B4A24C16FD31E
#define AU_COCOA_VIEW_NAME AUCocoaView_ACDB6EBE38BC310EB43B4A24C16FD31E

// --- BUNDLE IDs (MacOS Only) 
const char* kAAXBundleID = "developer.aax.je-808rev2.bundleID";
const char* kAUBundleID = "developer.au.je-808rev2.bundleID";
const char* kVST3BundleID = "developer.vst3.je-808rev2.bundleID";

// --- Plugin Names 
const char* kPluginName = "JE-808rev2";
const char* kShortPluginName = "JE-808rev2";
const char* kAUBundleName = "JE-808rev2_AU";

// --- Plugin Type 
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID 
const char* kVSTFUID = "{acdb6ebe-38bc-310e-b43b-4a24c16fd31e}";

// --- 4-char codes 
const int32_t kFourCharCode = 'PLuG';
const int32_t kAAXProductID = 'PLuG';
const int32_t kManufacturerID = 'ASPK';

// --- Vendor information 
const char* kVendorName = "JEPlugins";
const char* kVendorURL = "www.myplugins.com";
const char* kVendorEmail = "support@myplugins.com";

// --- Plugin Options 
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif
