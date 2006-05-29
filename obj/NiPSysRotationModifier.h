/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSROTATIONMODIFIER_H_
#define _NIPSYSROTATIONMODIFIER_H_

#include "xml_extract.h"
#include NI_P_SYS_ROTATION_MODIFIER_INCLUDE

/*
 * NiPSysRotationModifier
 */

class NiPSysRotationModifier;
typedef Ref<NiPSysRotationModifier> NiPSysRotationModifierRef;

class NiPSysRotationModifier : public NI_P_SYS_ROTATION_MODIFIER_PARENT {
public:
  NiPSysRotationModifier();
  ~NiPSysRotationModifier();
  //Run-Time Type Information
  static const Type TYPE;
  virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
  virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
  virtual string asString( bool verbose = false ) const;
  virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
  virtual const Type & GetType() const;
protected:
  NI_P_SYS_ROTATION_MODIFIER_MEMBERS
};

#endif
