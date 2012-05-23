//
// h46026.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H46026

#ifndef __H46026_H
#define __H46026_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

//
// FrameData
//

class H46026_FrameData : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46026_FrameData, PASN_Choice);
#endif
  public:
    H46026_FrameData(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_rtp,
      e_rtcp
    };

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// ArrayOf_FrameData
//

class H46026_FrameData;

class H46026_ArrayOf_FrameData : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46026_ArrayOf_FrameData, PASN_Array);
#endif
  public:
    H46026_ArrayOf_FrameData(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H46026_FrameData & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// UDPFrame
//

class H46026_UDPFrame : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46026_UDPFrame, PASN_Sequence);
#endif
  public:
    H46026_UDPFrame(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Integer m_sessionId;
    PASN_Boolean m_dataFrame;
    H46026_ArrayOf_FrameData m_frame;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


#endif // __H46026_H

#endif // if ! H323_DISABLE_H46026


// End of h46026.h