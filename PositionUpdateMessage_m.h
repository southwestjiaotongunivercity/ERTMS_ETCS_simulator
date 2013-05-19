//
// Generated file, do not edit! Created by opp_msgc 4.2 from PositionUpdateMessage.msg.
//

#ifndef _POSITIONUPDATEMESSAGE_M_H_
#define _POSITIONUPDATEMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>PositionUpdateMessage.msg</tt> by opp_msgc.
 * <pre>
 * message PositionUpdateMessage
 * {
 *     int idMs;
 *     double deltaX;
 *     double deltaY;
 * }
 * </pre>
 */
class PositionUpdateMessage : public ::cMessage
{
  protected:
    int idMs_var;
    double deltaX_var;
    double deltaY_var;

  private:
    void copy(const PositionUpdateMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PositionUpdateMessage&);

  public:
    PositionUpdateMessage(const char *name=NULL, int kind=0);
    PositionUpdateMessage(const PositionUpdateMessage& other);
    virtual ~PositionUpdateMessage();
    PositionUpdateMessage& operator=(const PositionUpdateMessage& other);
    virtual PositionUpdateMessage *dup() const {return new PositionUpdateMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getIdMs() const;
    virtual void setIdMs(int idMs);
    virtual double getDeltaX() const;
    virtual void setDeltaX(double deltaX);
    virtual double getDeltaY() const;
    virtual void setDeltaY(double deltaY);
};

inline void doPacking(cCommBuffer *b, PositionUpdateMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PositionUpdateMessage& obj) {obj.parsimUnpack(b);}


#endif // _POSITIONUPDATEMESSAGE_M_H_
