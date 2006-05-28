/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiTriStrips.h"

//Definition of TYPE constant
const Type NiTriStrips::TYPE("NiTriStrips", &NI_TRI_STRIPS_PARENT::TYPE );

NiTriStrips::NiTriStrips() NI_TRI_STRIPS_CONSTRUCT {}

NiTriStrips::~NiTriStrips() {}

void NiTriStrips::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	NI_TRI_STRIPS_READ
}

void NiTriStrips::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_TRI_STRIPS_WRITE
}

string NiTriStrips::asString( bool verbose ) const {
	NI_TRI_STRIPS_STRING
}

void NiTriStrips::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	NI_TRI_STRIPS_FIXLINKS
}
