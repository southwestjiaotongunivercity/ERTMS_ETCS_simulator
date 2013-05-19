//
// Generated file, do not edit! Created by opp_msgc 4.2 from DriftSrbConfiguration.msg.
//

#ifndef _DRIFTSRBCONFIGURATION_M_H_
#define _DRIFTSRBCONFIGURATION_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>DriftSrbConfiguration.msg</tt> by opp_msgc.
 * <pre>
 * message DriftSrbConfiguration
 * {
 *     int idDriftSrb;
 * }
 * </pre>
 */
class DriftSrbConfiguration : public ::cMessage
{
  protected:
    int idDriftSrb_var;

  private:
    void copy(const DriftSrbConfiguration& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DriftSrbConfiguration&);

  public:
    DriftSrbConfiguration(const char *name=NULL, int kind=0);
    DriftSrbConfiguration(const DriftSrbConfiguration& other);
    virtual ~DriftSrbConfiguration();
    DriftSrbConfiguration& operator=(const DriftSrbConfiguration& other);
    virtual DriftSrbConfiguration *dup() const {return new DriftSrbConfiguration(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getIdDriftSrb() const;
    virtual void setIdDriftSrb(int idDriftSrb);
};

inline void doPacking(cCommBuffer *b, DriftSrbConfiguration& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DriftSrbConfiguration& obj) {obj.parsimUnpack(b);}


#endif // _DRIFTSRBCONFIGURATION_M_H_
