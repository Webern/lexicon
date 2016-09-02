// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#include "mxtest/control/CompileControl.h"
#ifdef MX_COMPILE_CORE_TESTS

#pragma once
#include "mxtest/core/HelperFunctions.h"
#include "mx/core/Elements.h"

namespace MxTestHelpers
{
    mx::core::MidiInstrumentPtr tgenMidiInstrument( variant v );
    void tgenMidiInstrumentExpected( std::ostream& os, int indentLevel, variant v );
}

#endif