// Automatically generated from runtime/RegExpObject.cpp using /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct HashTableValue regExpTableValues[5] = {
   { "global", DontDelete|ReadOnly|DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpObjectGlobal), (intptr_t)0, NoIntrinsic },
   { "ignoreCase", DontDelete|ReadOnly|DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpObjectIgnoreCase), (intptr_t)0, NoIntrinsic },
   { "multiline", DontDelete|ReadOnly|DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpObjectMultiline), (intptr_t)0, NoIntrinsic },
   { "source", DontDelete|ReadOnly|DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpObjectSource), (intptr_t)0, NoIntrinsic },
   { 0, 0, 0, 0, NoIntrinsic }
};

extern const struct HashTable regExpTable =
    { 9, 7, regExpTableValues, 0 };
} // namespace
