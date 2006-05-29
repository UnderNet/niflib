/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiWireframeProperty.h"

//Definition of TYPE constant
const Type NiWireframeProperty::TYPE("NiWireframeProperty", &NI_WIREFRAME_PROPERTY_PARENT::TYPE );

NiWireframeProperty::NiWireframeProperty() NI_WIREFRAME_PROPERTY_CONSTRUCT {}

NiWireframeProperty::~NiWireframeProperty() {}

void NiWireframeProperty::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
  NI_WIREFRAME_PROPERTY_READ
}

void NiWireframeProperty::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
  NI_WIREFRAME_PROPERTY_WRITE
}

string NiWireframeProperty::asString( bool verbose ) const {
  NI_WIREFRAME_PROPERTY_STRING
}

void NiWireframeProperty::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
  NI_WIREFRAME_PROPERTY_FIXLINKS
}

const Type & NiWireframeProperty::GetType() const {
  return TYPE;
};

