#pragma once

#include <types.h>
#include <game/mLib/m_vec.hpp>

class dActor_c;
class dBc_c;
class dRc_c;

class dRide_ctr_c {
public:
    virtual ~dRide_ctr_c();

    dActor_c *mOwner;
    dRide_ctr_c *mPrev;
    dRide_ctr_c *mNext;
    dRc_c *mLinkedRc;
    mVec2_c mRight;
    mVec2_c mLeft;
    mVec2_c mDiff;
    mVec2_c mLastLeft;
    float mLineLength;
    float mLeftYDeltaSinceLastCalc;
    u32 mFlags;
    s16 mRotation;
    u8 mType;
    bool m_43;
    bool mIsLinked;
    u8 mChainlinkMode;
    u8 m_46;
    u8 mSubType;
    u8 m_48;
    u8 m_49;
    u8 mLayer;
    u8 m_4B;
};

class dRc_c {
public:
    dRc_c();
    virtual ~dRc_c();

    void clrLink();
    void chkLink();

    bool check(unsigned long, unsigned long, unsigned long);
    bool check2(unsigned long, unsigned long, unsigned long);
    bool isRideFlag(unsigned short);

    const dRide_ctr_c *getRide();

    void set(dActor_c *, u8);

    dActor_c *owner;
    mVec3_c *ownerPos;
    dRc_c *next;
    dRide_ctr_c *ride;
    dRide_ctr_c *ride2;
    dBc_c *bcRef;
    float pad1[4];
    short rotation;
    u8 mNonCollideMask;
    u8 rideType;
    u8 pad2[2];
    u8 mLayer;
};
