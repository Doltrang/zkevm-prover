#ifndef CONSTANT_POLS_HPP
#define CONSTANT_POLS_HPP

#include <cstdint>
#include "ff/ff.hpp"

class GlobalConstantPols
{
public:
    FieldElement * ZH;
    FieldElement * ZHINV;
    uint8_t * L1;
    FieldElement * BYTE;
    FieldElement * BYTE2;

    GlobalConstantPols (void * pAddress)
    {
        ZH = (FieldElement *)((uint8_t *)pAddress + 0);
        ZHINV = (FieldElement *)((uint8_t *)pAddress + 33554432);
        L1 = (uint8_t *)((uint8_t *)pAddress + 67108864);
        BYTE = (FieldElement *)((uint8_t *)pAddress + 71303168);
        BYTE2 = (FieldElement *)((uint8_t *)pAddress + 104857600);
    }

    GlobalConstantPols (void * pAddress, uint64_t degree)
    {
        ZH = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ZHINV = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        L1 = (uint8_t *)((uint8_t *)pAddress + 16*degree);
        BYTE = (FieldElement *)((uint8_t *)pAddress + 17*degree);
        BYTE2 = (FieldElement *)((uint8_t *)pAddress + 25*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 33; }
};

class RomConstantPols
{
public:
    FieldElement * CONST0;
    uint32_t * CONST1;
    uint32_t * CONST2;
    uint32_t * CONST3;
    uint32_t * CONST4;
    uint32_t * CONST5;
    uint32_t * CONST6;
    uint32_t * CONST7;
    uint32_t * offset;
    FieldElement * inA;
    FieldElement * inB;
    FieldElement * inC;
    FieldElement * inD;
    FieldElement * inE;
    FieldElement * inSR;
    FieldElement * inFREE;
    FieldElement * inCTX;
    FieldElement * inSP;
    FieldElement * inPC;
    FieldElement * inGAS;
    FieldElement * inMAXMEM;
    FieldElement * inHASHPOS;
    FieldElement * inSTEP;
    FieldElement * inRR;
    uint8_t * setA;
    uint8_t * setB;
    uint8_t * setC;
    uint8_t * setD;
    uint8_t * setE;
    uint8_t * setSR;
    uint8_t * setCTX;
    uint8_t * setSP;
    uint8_t * setPC;
    uint8_t * setGAS;
    uint8_t * setMAXMEM;
    uint8_t * setHASHPOS;
    uint8_t * JMP;
    uint8_t * JMPN;
    uint8_t * JMPC;
    uint8_t * setRR;
    int32_t * incStack;
    int32_t * incCode;
    uint8_t * isStack;
    uint8_t * isCode;
    uint8_t * isMem;
    uint8_t * ind;
    uint8_t * indRR;
    uint8_t * useCTX;
    uint8_t * mOp;
    uint8_t * mWR;
    uint8_t * sWR;
    uint8_t * sRD;
    uint8_t * arith;
    uint8_t * arithEq0;
    uint8_t * arithEq1;
    uint8_t * arithEq2;
    uint8_t * arithEq3;
    uint8_t * memAlign;
    uint8_t * memAlignWR;
    uint8_t * hashK;
    uint8_t * hashKLen;
    uint8_t * hashKDigest;
    uint8_t * hashP;
    uint8_t * hashPLen;
    uint8_t * hashPDigest;
    uint8_t * bin;
    uint8_t * binOpcode;
    uint8_t * assert;
    uint8_t * opcodeRomMap;
    uint32_t * line;
    uint8_t * opCodeNum;
    uint32_t * opCodeAddr;

    RomConstantPols (void * pAddress)
    {
        CONST0 = (FieldElement *)((uint8_t *)pAddress + 138412032);
        CONST1 = (uint32_t *)((uint8_t *)pAddress + 171966464);
        CONST2 = (uint32_t *)((uint8_t *)pAddress + 205520896);
        CONST3 = (uint32_t *)((uint8_t *)pAddress + 239075328);
        CONST4 = (uint32_t *)((uint8_t *)pAddress + 272629760);
        CONST5 = (uint32_t *)((uint8_t *)pAddress + 306184192);
        CONST6 = (uint32_t *)((uint8_t *)pAddress + 339738624);
        CONST7 = (uint32_t *)((uint8_t *)pAddress + 373293056);
        offset = (uint32_t *)((uint8_t *)pAddress + 406847488);
        inA = (FieldElement *)((uint8_t *)pAddress + 440401920);
        inB = (FieldElement *)((uint8_t *)pAddress + 473956352);
        inC = (FieldElement *)((uint8_t *)pAddress + 507510784);
        inD = (FieldElement *)((uint8_t *)pAddress + 541065216);
        inE = (FieldElement *)((uint8_t *)pAddress + 574619648);
        inSR = (FieldElement *)((uint8_t *)pAddress + 608174080);
        inFREE = (FieldElement *)((uint8_t *)pAddress + 641728512);
        inCTX = (FieldElement *)((uint8_t *)pAddress + 675282944);
        inSP = (FieldElement *)((uint8_t *)pAddress + 708837376);
        inPC = (FieldElement *)((uint8_t *)pAddress + 742391808);
        inGAS = (FieldElement *)((uint8_t *)pAddress + 775946240);
        inMAXMEM = (FieldElement *)((uint8_t *)pAddress + 809500672);
        inHASHPOS = (FieldElement *)((uint8_t *)pAddress + 843055104);
        inSTEP = (FieldElement *)((uint8_t *)pAddress + 876609536);
        inRR = (FieldElement *)((uint8_t *)pAddress + 910163968);
        setA = (uint8_t *)((uint8_t *)pAddress + 943718400);
        setB = (uint8_t *)((uint8_t *)pAddress + 947912704);
        setC = (uint8_t *)((uint8_t *)pAddress + 952107008);
        setD = (uint8_t *)((uint8_t *)pAddress + 956301312);
        setE = (uint8_t *)((uint8_t *)pAddress + 960495616);
        setSR = (uint8_t *)((uint8_t *)pAddress + 964689920);
        setCTX = (uint8_t *)((uint8_t *)pAddress + 968884224);
        setSP = (uint8_t *)((uint8_t *)pAddress + 973078528);
        setPC = (uint8_t *)((uint8_t *)pAddress + 977272832);
        setGAS = (uint8_t *)((uint8_t *)pAddress + 981467136);
        setMAXMEM = (uint8_t *)((uint8_t *)pAddress + 985661440);
        setHASHPOS = (uint8_t *)((uint8_t *)pAddress + 989855744);
        JMP = (uint8_t *)((uint8_t *)pAddress + 994050048);
        JMPN = (uint8_t *)((uint8_t *)pAddress + 998244352);
        JMPC = (uint8_t *)((uint8_t *)pAddress + 1002438656);
        setRR = (uint8_t *)((uint8_t *)pAddress + 1006632960);
        incStack = (int32_t *)((uint8_t *)pAddress + 1010827264);
        incCode = (int32_t *)((uint8_t *)pAddress + 1027604480);
        isStack = (uint8_t *)((uint8_t *)pAddress + 1044381696);
        isCode = (uint8_t *)((uint8_t *)pAddress + 1048576000);
        isMem = (uint8_t *)((uint8_t *)pAddress + 1052770304);
        ind = (uint8_t *)((uint8_t *)pAddress + 1056964608);
        indRR = (uint8_t *)((uint8_t *)pAddress + 1061158912);
        useCTX = (uint8_t *)((uint8_t *)pAddress + 1065353216);
        mOp = (uint8_t *)((uint8_t *)pAddress + 1069547520);
        mWR = (uint8_t *)((uint8_t *)pAddress + 1073741824);
        sWR = (uint8_t *)((uint8_t *)pAddress + 1077936128);
        sRD = (uint8_t *)((uint8_t *)pAddress + 1082130432);
        arith = (uint8_t *)((uint8_t *)pAddress + 1086324736);
        arithEq0 = (uint8_t *)((uint8_t *)pAddress + 1090519040);
        arithEq1 = (uint8_t *)((uint8_t *)pAddress + 1094713344);
        arithEq2 = (uint8_t *)((uint8_t *)pAddress + 1098907648);
        arithEq3 = (uint8_t *)((uint8_t *)pAddress + 1103101952);
        memAlign = (uint8_t *)((uint8_t *)pAddress + 1107296256);
        memAlignWR = (uint8_t *)((uint8_t *)pAddress + 1111490560);
        hashK = (uint8_t *)((uint8_t *)pAddress + 1115684864);
        hashKLen = (uint8_t *)((uint8_t *)pAddress + 1119879168);
        hashKDigest = (uint8_t *)((uint8_t *)pAddress + 1124073472);
        hashP = (uint8_t *)((uint8_t *)pAddress + 1128267776);
        hashPLen = (uint8_t *)((uint8_t *)pAddress + 1132462080);
        hashPDigest = (uint8_t *)((uint8_t *)pAddress + 1136656384);
        bin = (uint8_t *)((uint8_t *)pAddress + 1140850688);
        binOpcode = (uint8_t *)((uint8_t *)pAddress + 1145044992);
        assert = (uint8_t *)((uint8_t *)pAddress + 1149239296);
        opcodeRomMap = (uint8_t *)((uint8_t *)pAddress + 1153433600);
        line = (uint32_t *)((uint8_t *)pAddress + 1157627904);
        opCodeNum = (uint8_t *)((uint8_t *)pAddress + 1191182336);
        opCodeAddr = (uint32_t *)((uint8_t *)pAddress + 1195376640);
    }

    RomConstantPols (void * pAddress, uint64_t degree)
    {
        CONST0 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        CONST1 = (uint32_t *)((uint8_t *)pAddress + 8*degree);
        CONST2 = (uint32_t *)((uint8_t *)pAddress + 16*degree);
        CONST3 = (uint32_t *)((uint8_t *)pAddress + 24*degree);
        CONST4 = (uint32_t *)((uint8_t *)pAddress + 32*degree);
        CONST5 = (uint32_t *)((uint8_t *)pAddress + 40*degree);
        CONST6 = (uint32_t *)((uint8_t *)pAddress + 48*degree);
        CONST7 = (uint32_t *)((uint8_t *)pAddress + 56*degree);
        offset = (uint32_t *)((uint8_t *)pAddress + 64*degree);
        inA = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        inB = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        inC = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        inD = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        inE = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        inSR = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        inFREE = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        inCTX = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        inSP = (FieldElement *)((uint8_t *)pAddress + 136*degree);
        inPC = (FieldElement *)((uint8_t *)pAddress + 144*degree);
        inGAS = (FieldElement *)((uint8_t *)pAddress + 152*degree);
        inMAXMEM = (FieldElement *)((uint8_t *)pAddress + 160*degree);
        inHASHPOS = (FieldElement *)((uint8_t *)pAddress + 168*degree);
        inSTEP = (FieldElement *)((uint8_t *)pAddress + 176*degree);
        inRR = (FieldElement *)((uint8_t *)pAddress + 184*degree);
        setA = (uint8_t *)((uint8_t *)pAddress + 192*degree);
        setB = (uint8_t *)((uint8_t *)pAddress + 193*degree);
        setC = (uint8_t *)((uint8_t *)pAddress + 194*degree);
        setD = (uint8_t *)((uint8_t *)pAddress + 195*degree);
        setE = (uint8_t *)((uint8_t *)pAddress + 196*degree);
        setSR = (uint8_t *)((uint8_t *)pAddress + 197*degree);
        setCTX = (uint8_t *)((uint8_t *)pAddress + 198*degree);
        setSP = (uint8_t *)((uint8_t *)pAddress + 199*degree);
        setPC = (uint8_t *)((uint8_t *)pAddress + 200*degree);
        setGAS = (uint8_t *)((uint8_t *)pAddress + 201*degree);
        setMAXMEM = (uint8_t *)((uint8_t *)pAddress + 202*degree);
        setHASHPOS = (uint8_t *)((uint8_t *)pAddress + 203*degree);
        JMP = (uint8_t *)((uint8_t *)pAddress + 204*degree);
        JMPN = (uint8_t *)((uint8_t *)pAddress + 205*degree);
        JMPC = (uint8_t *)((uint8_t *)pAddress + 206*degree);
        setRR = (uint8_t *)((uint8_t *)pAddress + 207*degree);
        incStack = (int32_t *)((uint8_t *)pAddress + 208*degree);
        incCode = (int32_t *)((uint8_t *)pAddress + 212*degree);
        isStack = (uint8_t *)((uint8_t *)pAddress + 216*degree);
        isCode = (uint8_t *)((uint8_t *)pAddress + 217*degree);
        isMem = (uint8_t *)((uint8_t *)pAddress + 218*degree);
        ind = (uint8_t *)((uint8_t *)pAddress + 219*degree);
        indRR = (uint8_t *)((uint8_t *)pAddress + 220*degree);
        useCTX = (uint8_t *)((uint8_t *)pAddress + 221*degree);
        mOp = (uint8_t *)((uint8_t *)pAddress + 222*degree);
        mWR = (uint8_t *)((uint8_t *)pAddress + 223*degree);
        sWR = (uint8_t *)((uint8_t *)pAddress + 224*degree);
        sRD = (uint8_t *)((uint8_t *)pAddress + 225*degree);
        arith = (uint8_t *)((uint8_t *)pAddress + 226*degree);
        arithEq0 = (uint8_t *)((uint8_t *)pAddress + 227*degree);
        arithEq1 = (uint8_t *)((uint8_t *)pAddress + 228*degree);
        arithEq2 = (uint8_t *)((uint8_t *)pAddress + 229*degree);
        arithEq3 = (uint8_t *)((uint8_t *)pAddress + 230*degree);
        memAlign = (uint8_t *)((uint8_t *)pAddress + 231*degree);
        memAlignWR = (uint8_t *)((uint8_t *)pAddress + 232*degree);
        hashK = (uint8_t *)((uint8_t *)pAddress + 233*degree);
        hashKLen = (uint8_t *)((uint8_t *)pAddress + 234*degree);
        hashKDigest = (uint8_t *)((uint8_t *)pAddress + 235*degree);
        hashP = (uint8_t *)((uint8_t *)pAddress + 236*degree);
        hashPLen = (uint8_t *)((uint8_t *)pAddress + 237*degree);
        hashPDigest = (uint8_t *)((uint8_t *)pAddress + 238*degree);
        bin = (uint8_t *)((uint8_t *)pAddress + 239*degree);
        binOpcode = (uint8_t *)((uint8_t *)pAddress + 240*degree);
        assert = (uint8_t *)((uint8_t *)pAddress + 241*degree);
        opcodeRomMap = (uint8_t *)((uint8_t *)pAddress + 242*degree);
        line = (uint32_t *)((uint8_t *)pAddress + 243*degree);
        opCodeNum = (uint8_t *)((uint8_t *)pAddress + 251*degree);
        opCodeAddr = (uint32_t *)((uint8_t *)pAddress + 252*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 260; }
};

class Byte4ConstantPols
{
public:
    uint8_t * SET;

    Byte4ConstantPols (void * pAddress)
    {
        SET = (uint8_t *)((uint8_t *)pAddress + 1228931072);
    }

    Byte4ConstantPols (void * pAddress, uint64_t degree)
    {
        SET = (uint8_t *)((uint8_t *)pAddress + 0*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 1; }
};

class MemAlignConstantPols
{
public:
    uint8_t * BYTE2A;
    uint8_t * BYTE2B;
    FieldElement * FACTOR0[8];
    FieldElement * FACTOR1[8];
    FieldElement * FACTORV[8];
    FieldElement * STEP;
    uint8_t * WR;
    uint8_t * OFFSET;
    uint8_t * RESET;
    uint8_t * RESETL;
    uint8_t * SELW;

    MemAlignConstantPols (void * pAddress)
    {
        BYTE2A = (uint8_t *)((uint8_t *)pAddress + 1233125376);
        BYTE2B = (uint8_t *)((uint8_t *)pAddress + 1237319680);
        FACTOR0[0] = (FieldElement *)((uint8_t *)pAddress + 1241513984);
        FACTOR0[1] = (FieldElement *)((uint8_t *)pAddress + 1275068416);
        FACTOR0[2] = (FieldElement *)((uint8_t *)pAddress + 1308622848);
        FACTOR0[3] = (FieldElement *)((uint8_t *)pAddress + 1342177280);
        FACTOR0[4] = (FieldElement *)((uint8_t *)pAddress + 1375731712);
        FACTOR0[5] = (FieldElement *)((uint8_t *)pAddress + 1409286144);
        FACTOR0[6] = (FieldElement *)((uint8_t *)pAddress + 1442840576);
        FACTOR0[7] = (FieldElement *)((uint8_t *)pAddress + 1476395008);
        FACTOR1[0] = (FieldElement *)((uint8_t *)pAddress + 1509949440);
        FACTOR1[1] = (FieldElement *)((uint8_t *)pAddress + 1543503872);
        FACTOR1[2] = (FieldElement *)((uint8_t *)pAddress + 1577058304);
        FACTOR1[3] = (FieldElement *)((uint8_t *)pAddress + 1610612736);
        FACTOR1[4] = (FieldElement *)((uint8_t *)pAddress + 1644167168);
        FACTOR1[5] = (FieldElement *)((uint8_t *)pAddress + 1677721600);
        FACTOR1[6] = (FieldElement *)((uint8_t *)pAddress + 1711276032);
        FACTOR1[7] = (FieldElement *)((uint8_t *)pAddress + 1744830464);
        FACTORV[0] = (FieldElement *)((uint8_t *)pAddress + 1778384896);
        FACTORV[1] = (FieldElement *)((uint8_t *)pAddress + 1811939328);
        FACTORV[2] = (FieldElement *)((uint8_t *)pAddress + 1845493760);
        FACTORV[3] = (FieldElement *)((uint8_t *)pAddress + 1879048192);
        FACTORV[4] = (FieldElement *)((uint8_t *)pAddress + 1912602624);
        FACTORV[5] = (FieldElement *)((uint8_t *)pAddress + 1946157056);
        FACTORV[6] = (FieldElement *)((uint8_t *)pAddress + 1979711488);
        FACTORV[7] = (FieldElement *)((uint8_t *)pAddress + 2013265920);
        STEP = (FieldElement *)((uint8_t *)pAddress + 2046820352);
        WR = (uint8_t *)((uint8_t *)pAddress + 2080374784);
        OFFSET = (uint8_t *)((uint8_t *)pAddress + 2084569088);
        RESET = (uint8_t *)((uint8_t *)pAddress + 2088763392);
        RESETL = (uint8_t *)((uint8_t *)pAddress + 2092957696);
        SELW = (uint8_t *)((uint8_t *)pAddress + 2097152000);
    }

    MemAlignConstantPols (void * pAddress, uint64_t degree)
    {
        BYTE2A = (uint8_t *)((uint8_t *)pAddress + 0*degree);
        BYTE2B = (uint8_t *)((uint8_t *)pAddress + 1*degree);
        FACTOR0[0] = (FieldElement *)((uint8_t *)pAddress + 2*degree);
        FACTOR0[1] = (FieldElement *)((uint8_t *)pAddress + 10*degree);
        FACTOR0[2] = (FieldElement *)((uint8_t *)pAddress + 18*degree);
        FACTOR0[3] = (FieldElement *)((uint8_t *)pAddress + 26*degree);
        FACTOR0[4] = (FieldElement *)((uint8_t *)pAddress + 34*degree);
        FACTOR0[5] = (FieldElement *)((uint8_t *)pAddress + 42*degree);
        FACTOR0[6] = (FieldElement *)((uint8_t *)pAddress + 50*degree);
        FACTOR0[7] = (FieldElement *)((uint8_t *)pAddress + 58*degree);
        FACTOR1[0] = (FieldElement *)((uint8_t *)pAddress + 66*degree);
        FACTOR1[1] = (FieldElement *)((uint8_t *)pAddress + 74*degree);
        FACTOR1[2] = (FieldElement *)((uint8_t *)pAddress + 82*degree);
        FACTOR1[3] = (FieldElement *)((uint8_t *)pAddress + 90*degree);
        FACTOR1[4] = (FieldElement *)((uint8_t *)pAddress + 98*degree);
        FACTOR1[5] = (FieldElement *)((uint8_t *)pAddress + 106*degree);
        FACTOR1[6] = (FieldElement *)((uint8_t *)pAddress + 114*degree);
        FACTOR1[7] = (FieldElement *)((uint8_t *)pAddress + 122*degree);
        FACTORV[0] = (FieldElement *)((uint8_t *)pAddress + 130*degree);
        FACTORV[1] = (FieldElement *)((uint8_t *)pAddress + 138*degree);
        FACTORV[2] = (FieldElement *)((uint8_t *)pAddress + 146*degree);
        FACTORV[3] = (FieldElement *)((uint8_t *)pAddress + 154*degree);
        FACTORV[4] = (FieldElement *)((uint8_t *)pAddress + 162*degree);
        FACTORV[5] = (FieldElement *)((uint8_t *)pAddress + 170*degree);
        FACTORV[6] = (FieldElement *)((uint8_t *)pAddress + 178*degree);
        FACTORV[7] = (FieldElement *)((uint8_t *)pAddress + 186*degree);
        STEP = (FieldElement *)((uint8_t *)pAddress + 194*degree);
        WR = (uint8_t *)((uint8_t *)pAddress + 202*degree);
        OFFSET = (uint8_t *)((uint8_t *)pAddress + 203*degree);
        RESET = (uint8_t *)((uint8_t *)pAddress + 204*degree);
        RESETL = (uint8_t *)((uint8_t *)pAddress + 205*degree);
        SELW = (uint8_t *)((uint8_t *)pAddress + 206*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 207; }
};

class ArithConstantPols
{
public:
    FieldElement * BIT19;
    FieldElement * GL_SIGNED_4BITS;
    FieldElement * GL_SIGNED_18BITS;
    uint8_t * ck[32];

    ArithConstantPols (void * pAddress)
    {
        BIT19 = (FieldElement *)((uint8_t *)pAddress + 2101346304);
        GL_SIGNED_4BITS = (FieldElement *)((uint8_t *)pAddress + 2134900736);
        GL_SIGNED_18BITS = (FieldElement *)((uint8_t *)pAddress + 2168455168);
        ck[0] = (uint8_t *)((uint8_t *)pAddress + 2202009600);
        ck[1] = (uint8_t *)((uint8_t *)pAddress + 2206203904);
        ck[2] = (uint8_t *)((uint8_t *)pAddress + 2210398208);
        ck[3] = (uint8_t *)((uint8_t *)pAddress + 2214592512);
        ck[4] = (uint8_t *)((uint8_t *)pAddress + 2218786816);
        ck[5] = (uint8_t *)((uint8_t *)pAddress + 2222981120);
        ck[6] = (uint8_t *)((uint8_t *)pAddress + 2227175424);
        ck[7] = (uint8_t *)((uint8_t *)pAddress + 2231369728);
        ck[8] = (uint8_t *)((uint8_t *)pAddress + 2235564032);
        ck[9] = (uint8_t *)((uint8_t *)pAddress + 2239758336);
        ck[10] = (uint8_t *)((uint8_t *)pAddress + 2243952640);
        ck[11] = (uint8_t *)((uint8_t *)pAddress + 2248146944);
        ck[12] = (uint8_t *)((uint8_t *)pAddress + 2252341248);
        ck[13] = (uint8_t *)((uint8_t *)pAddress + 2256535552);
        ck[14] = (uint8_t *)((uint8_t *)pAddress + 2260729856);
        ck[15] = (uint8_t *)((uint8_t *)pAddress + 2264924160);
        ck[16] = (uint8_t *)((uint8_t *)pAddress + 2269118464);
        ck[17] = (uint8_t *)((uint8_t *)pAddress + 2273312768);
        ck[18] = (uint8_t *)((uint8_t *)pAddress + 2277507072);
        ck[19] = (uint8_t *)((uint8_t *)pAddress + 2281701376);
        ck[20] = (uint8_t *)((uint8_t *)pAddress + 2285895680);
        ck[21] = (uint8_t *)((uint8_t *)pAddress + 2290089984);
        ck[22] = (uint8_t *)((uint8_t *)pAddress + 2294284288);
        ck[23] = (uint8_t *)((uint8_t *)pAddress + 2298478592);
        ck[24] = (uint8_t *)((uint8_t *)pAddress + 2302672896);
        ck[25] = (uint8_t *)((uint8_t *)pAddress + 2306867200);
        ck[26] = (uint8_t *)((uint8_t *)pAddress + 2311061504);
        ck[27] = (uint8_t *)((uint8_t *)pAddress + 2315255808);
        ck[28] = (uint8_t *)((uint8_t *)pAddress + 2319450112);
        ck[29] = (uint8_t *)((uint8_t *)pAddress + 2323644416);
        ck[30] = (uint8_t *)((uint8_t *)pAddress + 2327838720);
        ck[31] = (uint8_t *)((uint8_t *)pAddress + 2332033024);
    }

    ArithConstantPols (void * pAddress, uint64_t degree)
    {
        BIT19 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        GL_SIGNED_4BITS = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        GL_SIGNED_18BITS = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        ck[0] = (uint8_t *)((uint8_t *)pAddress + 24*degree);
        ck[1] = (uint8_t *)((uint8_t *)pAddress + 25*degree);
        ck[2] = (uint8_t *)((uint8_t *)pAddress + 26*degree);
        ck[3] = (uint8_t *)((uint8_t *)pAddress + 27*degree);
        ck[4] = (uint8_t *)((uint8_t *)pAddress + 28*degree);
        ck[5] = (uint8_t *)((uint8_t *)pAddress + 29*degree);
        ck[6] = (uint8_t *)((uint8_t *)pAddress + 30*degree);
        ck[7] = (uint8_t *)((uint8_t *)pAddress + 31*degree);
        ck[8] = (uint8_t *)((uint8_t *)pAddress + 32*degree);
        ck[9] = (uint8_t *)((uint8_t *)pAddress + 33*degree);
        ck[10] = (uint8_t *)((uint8_t *)pAddress + 34*degree);
        ck[11] = (uint8_t *)((uint8_t *)pAddress + 35*degree);
        ck[12] = (uint8_t *)((uint8_t *)pAddress + 36*degree);
        ck[13] = (uint8_t *)((uint8_t *)pAddress + 37*degree);
        ck[14] = (uint8_t *)((uint8_t *)pAddress + 38*degree);
        ck[15] = (uint8_t *)((uint8_t *)pAddress + 39*degree);
        ck[16] = (uint8_t *)((uint8_t *)pAddress + 40*degree);
        ck[17] = (uint8_t *)((uint8_t *)pAddress + 41*degree);
        ck[18] = (uint8_t *)((uint8_t *)pAddress + 42*degree);
        ck[19] = (uint8_t *)((uint8_t *)pAddress + 43*degree);
        ck[20] = (uint8_t *)((uint8_t *)pAddress + 44*degree);
        ck[21] = (uint8_t *)((uint8_t *)pAddress + 45*degree);
        ck[22] = (uint8_t *)((uint8_t *)pAddress + 46*degree);
        ck[23] = (uint8_t *)((uint8_t *)pAddress + 47*degree);
        ck[24] = (uint8_t *)((uint8_t *)pAddress + 48*degree);
        ck[25] = (uint8_t *)((uint8_t *)pAddress + 49*degree);
        ck[26] = (uint8_t *)((uint8_t *)pAddress + 50*degree);
        ck[27] = (uint8_t *)((uint8_t *)pAddress + 51*degree);
        ck[28] = (uint8_t *)((uint8_t *)pAddress + 52*degree);
        ck[29] = (uint8_t *)((uint8_t *)pAddress + 53*degree);
        ck[30] = (uint8_t *)((uint8_t *)pAddress + 54*degree);
        ck[31] = (uint8_t *)((uint8_t *)pAddress + 55*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 56; }
};

class BinaryConstantPols
{
public:
    uint8_t * P_OPCODE;
    uint8_t * P_A;
    uint8_t * P_B;
    uint8_t * P_CIN;
    uint8_t * P_LAST;
    uint8_t * P_C;
    uint8_t * P_COUT;
    uint8_t * RESET;
    uint32_t * FACTOR[8];

    BinaryConstantPols (void * pAddress)
    {
        P_OPCODE = (uint8_t *)((uint8_t *)pAddress + 2336227328);
        P_A = (uint8_t *)((uint8_t *)pAddress + 2340421632);
        P_B = (uint8_t *)((uint8_t *)pAddress + 2344615936);
        P_CIN = (uint8_t *)((uint8_t *)pAddress + 2348810240);
        P_LAST = (uint8_t *)((uint8_t *)pAddress + 2353004544);
        P_C = (uint8_t *)((uint8_t *)pAddress + 2357198848);
        P_COUT = (uint8_t *)((uint8_t *)pAddress + 2361393152);
        RESET = (uint8_t *)((uint8_t *)pAddress + 2365587456);
        FACTOR[0] = (uint32_t *)((uint8_t *)pAddress + 2369781760);
        FACTOR[1] = (uint32_t *)((uint8_t *)pAddress + 2403336192);
        FACTOR[2] = (uint32_t *)((uint8_t *)pAddress + 2436890624);
        FACTOR[3] = (uint32_t *)((uint8_t *)pAddress + 2470445056);
        FACTOR[4] = (uint32_t *)((uint8_t *)pAddress + 2503999488);
        FACTOR[5] = (uint32_t *)((uint8_t *)pAddress + 2537553920);
        FACTOR[6] = (uint32_t *)((uint8_t *)pAddress + 2571108352);
        FACTOR[7] = (uint32_t *)((uint8_t *)pAddress + 2604662784);
    }

    BinaryConstantPols (void * pAddress, uint64_t degree)
    {
        P_OPCODE = (uint8_t *)((uint8_t *)pAddress + 0*degree);
        P_A = (uint8_t *)((uint8_t *)pAddress + 1*degree);
        P_B = (uint8_t *)((uint8_t *)pAddress + 2*degree);
        P_CIN = (uint8_t *)((uint8_t *)pAddress + 3*degree);
        P_LAST = (uint8_t *)((uint8_t *)pAddress + 4*degree);
        P_C = (uint8_t *)((uint8_t *)pAddress + 5*degree);
        P_COUT = (uint8_t *)((uint8_t *)pAddress + 6*degree);
        RESET = (uint8_t *)((uint8_t *)pAddress + 7*degree);
        FACTOR[0] = (uint32_t *)((uint8_t *)pAddress + 8*degree);
        FACTOR[1] = (uint32_t *)((uint8_t *)pAddress + 16*degree);
        FACTOR[2] = (uint32_t *)((uint8_t *)pAddress + 24*degree);
        FACTOR[3] = (uint32_t *)((uint8_t *)pAddress + 32*degree);
        FACTOR[4] = (uint32_t *)((uint8_t *)pAddress + 40*degree);
        FACTOR[5] = (uint32_t *)((uint8_t *)pAddress + 48*degree);
        FACTOR[6] = (uint32_t *)((uint8_t *)pAddress + 56*degree);
        FACTOR[7] = (uint32_t *)((uint8_t *)pAddress + 64*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 72; }
};

class PoseidonGConstantPols
{
public:
    FieldElement * LAST;
    FieldElement * LATCH;
    FieldElement * LASTBLOCK;
    FieldElement * PARTIAL;
    FieldElement * C[12];

    PoseidonGConstantPols (void * pAddress)
    {
        LAST = (FieldElement *)((uint8_t *)pAddress + 2638217216);
        LATCH = (FieldElement *)((uint8_t *)pAddress + 2671771648);
        LASTBLOCK = (FieldElement *)((uint8_t *)pAddress + 2705326080);
        PARTIAL = (FieldElement *)((uint8_t *)pAddress + 2738880512);
        C[0] = (FieldElement *)((uint8_t *)pAddress + 2772434944);
        C[1] = (FieldElement *)((uint8_t *)pAddress + 2805989376);
        C[2] = (FieldElement *)((uint8_t *)pAddress + 2839543808);
        C[3] = (FieldElement *)((uint8_t *)pAddress + 2873098240);
        C[4] = (FieldElement *)((uint8_t *)pAddress + 2906652672);
        C[5] = (FieldElement *)((uint8_t *)pAddress + 2940207104);
        C[6] = (FieldElement *)((uint8_t *)pAddress + 2973761536);
        C[7] = (FieldElement *)((uint8_t *)pAddress + 3007315968);
        C[8] = (FieldElement *)((uint8_t *)pAddress + 3040870400);
        C[9] = (FieldElement *)((uint8_t *)pAddress + 3074424832);
        C[10] = (FieldElement *)((uint8_t *)pAddress + 3107979264);
        C[11] = (FieldElement *)((uint8_t *)pAddress + 3141533696);
    }

    PoseidonGConstantPols (void * pAddress, uint64_t degree)
    {
        LAST = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        LATCH = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        LASTBLOCK = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        PARTIAL = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        C[0] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        C[1] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        C[2] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        C[3] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        C[4] = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        C[5] = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        C[6] = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        C[7] = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        C[8] = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        C[9] = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        C[10] = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        C[11] = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 128; }
};

class PaddingPGConstantPols
{
public:
    FieldElement * F[8];
    FieldElement * lastBlock;
    FieldElement * k_crOffset;
    FieldElement * k_crF0;
    FieldElement * k_crF1;
    FieldElement * k_crF2;
    FieldElement * k_crF3;
    FieldElement * k_crF4;
    FieldElement * k_crF5;
    FieldElement * k_crF6;
    FieldElement * k_crF7;

    PaddingPGConstantPols (void * pAddress)
    {
        F[0] = (FieldElement *)((uint8_t *)pAddress + 3175088128);
        F[1] = (FieldElement *)((uint8_t *)pAddress + 3208642560);
        F[2] = (FieldElement *)((uint8_t *)pAddress + 3242196992);
        F[3] = (FieldElement *)((uint8_t *)pAddress + 3275751424);
        F[4] = (FieldElement *)((uint8_t *)pAddress + 3309305856);
        F[5] = (FieldElement *)((uint8_t *)pAddress + 3342860288);
        F[6] = (FieldElement *)((uint8_t *)pAddress + 3376414720);
        F[7] = (FieldElement *)((uint8_t *)pAddress + 3409969152);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 3443523584);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 3477078016);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 3510632448);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 3544186880);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 3577741312);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 3611295744);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 3644850176);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 3678404608);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 3711959040);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 3745513472);
    }

    PaddingPGConstantPols (void * pAddress, uint64_t degree)
    {
        F[0] = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        F[1] = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        F[2] = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        F[3] = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        F[4] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        F[5] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        F[6] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        F[7] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 136*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 144; }
};

class StorageConstantPols
{
public:
    FieldElement * rHash;
    FieldElement * rHashType;
    FieldElement * rLatchGet;
    FieldElement * rLatchSet;
    FieldElement * rClimbRkey;
    FieldElement * rClimbSiblingRkey;
    FieldElement * rClimbSiblingRkeyN;
    FieldElement * rRotateLevel;
    FieldElement * rJmpz;
    FieldElement * rJmp;
    FieldElement * rConst0;
    FieldElement * rConst1;
    FieldElement * rConst2;
    FieldElement * rConst3;
    FieldElement * rAddress;
    FieldElement * rLine;

    StorageConstantPols (void * pAddress)
    {
        rHash = (FieldElement *)((uint8_t *)pAddress + 3779067904);
        rHashType = (FieldElement *)((uint8_t *)pAddress + 3812622336);
        rLatchGet = (FieldElement *)((uint8_t *)pAddress + 3846176768);
        rLatchSet = (FieldElement *)((uint8_t *)pAddress + 3879731200);
        rClimbRkey = (FieldElement *)((uint8_t *)pAddress + 3913285632);
        rClimbSiblingRkey = (FieldElement *)((uint8_t *)pAddress + 3946840064);
        rClimbSiblingRkeyN = (FieldElement *)((uint8_t *)pAddress + 3980394496);
        rRotateLevel = (FieldElement *)((uint8_t *)pAddress + 4013948928);
        rJmpz = (FieldElement *)((uint8_t *)pAddress + 4047503360);
        rJmp = (FieldElement *)((uint8_t *)pAddress + 4081057792);
        rConst0 = (FieldElement *)((uint8_t *)pAddress + 4114612224);
        rConst1 = (FieldElement *)((uint8_t *)pAddress + 4148166656);
        rConst2 = (FieldElement *)((uint8_t *)pAddress + 4181721088);
        rConst3 = (FieldElement *)((uint8_t *)pAddress + 4215275520);
        rAddress = (FieldElement *)((uint8_t *)pAddress + 4248829952);
        rLine = (FieldElement *)((uint8_t *)pAddress + 4282384384);
    }

    StorageConstantPols (void * pAddress, uint64_t degree)
    {
        rHash = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        rHashType = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        rLatchGet = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        rLatchSet = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        rClimbRkey = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        rClimbSiblingRkey = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        rClimbSiblingRkeyN = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        rRotateLevel = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        rJmpz = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        rJmp = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        rConst0 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        rConst1 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        rConst2 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        rConst3 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        rAddress = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        rLine = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 128; }
};

class NormGate9ConstantPols
{
public:
    FieldElement * Value3;
    FieldElement * Value3Norm;
    FieldElement * Gate9Type;
    FieldElement * Gate9A;
    FieldElement * Gate9B;
    FieldElement * Gate9C;
    FieldElement * Latch;
    FieldElement * Factor;

    NormGate9ConstantPols (void * pAddress)
    {
        Value3 = (FieldElement *)((uint8_t *)pAddress + 4315938816);
        Value3Norm = (FieldElement *)((uint8_t *)pAddress + 4349493248);
        Gate9Type = (FieldElement *)((uint8_t *)pAddress + 4383047680);
        Gate9A = (FieldElement *)((uint8_t *)pAddress + 4416602112);
        Gate9B = (FieldElement *)((uint8_t *)pAddress + 4450156544);
        Gate9C = (FieldElement *)((uint8_t *)pAddress + 4483710976);
        Latch = (FieldElement *)((uint8_t *)pAddress + 4517265408);
        Factor = (FieldElement *)((uint8_t *)pAddress + 4550819840);
    }

    NormGate9ConstantPols (void * pAddress, uint64_t degree)
    {
        Value3 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        Value3Norm = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        Gate9Type = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        Gate9A = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        Gate9B = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        Gate9C = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        Latch = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        Factor = (FieldElement *)((uint8_t *)pAddress + 56*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 64; }
};

class KeccakFConstantPols
{
public:
    FieldElement * ConnA;
    FieldElement * ConnB;
    FieldElement * ConnC;
    FieldElement * NormalizedGate;
    FieldElement * GateType;

    KeccakFConstantPols (void * pAddress)
    {
        ConnA = (FieldElement *)((uint8_t *)pAddress + 4584374272);
        ConnB = (FieldElement *)((uint8_t *)pAddress + 4617928704);
        ConnC = (FieldElement *)((uint8_t *)pAddress + 4651483136);
        NormalizedGate = (FieldElement *)((uint8_t *)pAddress + 4685037568);
        GateType = (FieldElement *)((uint8_t *)pAddress + 4718592000);
    }

    KeccakFConstantPols (void * pAddress, uint64_t degree)
    {
        ConnA = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ConnB = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        ConnC = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        NormalizedGate = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        GateType = (FieldElement *)((uint8_t *)pAddress + 32*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 40; }
};

class Nine2OneConstantPols
{
public:
    FieldElement * Field9latch;
    FieldElement * Factor;

    Nine2OneConstantPols (void * pAddress)
    {
        Field9latch = (FieldElement *)((uint8_t *)pAddress + 4752146432);
        Factor = (FieldElement *)((uint8_t *)pAddress + 4785700864);
    }

    Nine2OneConstantPols (void * pAddress, uint64_t degree)
    {
        Field9latch = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        Factor = (FieldElement *)((uint8_t *)pAddress + 8*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 16; }
};

class PaddingKKBitConstantPols
{
public:
    FieldElement * r8Id;
    FieldElement * sOutId;
    FieldElement * latchR8;
    FieldElement * Fr8;
    FieldElement * rBitValid;
    FieldElement * latchSOut;
    FieldElement * FSOut0;
    FieldElement * FSOut1;
    FieldElement * FSOut2;
    FieldElement * FSOut3;
    FieldElement * FSOut4;
    FieldElement * FSOut5;
    FieldElement * FSOut6;
    FieldElement * FSOut7;
    FieldElement * ConnSOutBit;
    FieldElement * ConnSInBit;
    FieldElement * ConnNine2OneBit;

    PaddingKKBitConstantPols (void * pAddress)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 4819255296);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 4852809728);
        latchR8 = (FieldElement *)((uint8_t *)pAddress + 4886364160);
        Fr8 = (FieldElement *)((uint8_t *)pAddress + 4919918592);
        rBitValid = (FieldElement *)((uint8_t *)pAddress + 4953473024);
        latchSOut = (FieldElement *)((uint8_t *)pAddress + 4987027456);
        FSOut0 = (FieldElement *)((uint8_t *)pAddress + 5020581888);
        FSOut1 = (FieldElement *)((uint8_t *)pAddress + 5054136320);
        FSOut2 = (FieldElement *)((uint8_t *)pAddress + 5087690752);
        FSOut3 = (FieldElement *)((uint8_t *)pAddress + 5121245184);
        FSOut4 = (FieldElement *)((uint8_t *)pAddress + 5154799616);
        FSOut5 = (FieldElement *)((uint8_t *)pAddress + 5188354048);
        FSOut6 = (FieldElement *)((uint8_t *)pAddress + 5221908480);
        FSOut7 = (FieldElement *)((uint8_t *)pAddress + 5255462912);
        ConnSOutBit = (FieldElement *)((uint8_t *)pAddress + 5289017344);
        ConnSInBit = (FieldElement *)((uint8_t *)pAddress + 5322571776);
        ConnNine2OneBit = (FieldElement *)((uint8_t *)pAddress + 5356126208);
    }

    PaddingKKBitConstantPols (void * pAddress, uint64_t degree)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        latchR8 = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        Fr8 = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        rBitValid = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        latchSOut = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        FSOut0 = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        FSOut1 = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        FSOut2 = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        FSOut3 = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        FSOut4 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        FSOut5 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        FSOut6 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        FSOut7 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        ConnSOutBit = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        ConnSInBit = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        ConnNine2OneBit = (FieldElement *)((uint8_t *)pAddress + 128*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 136; }
};

class PaddingKKConstantPols
{
public:
    FieldElement * r8Id;
    FieldElement * lastBlock;
    FieldElement * lastBlockLatch;
    FieldElement * r8valid;
    FieldElement * sOutId;
    FieldElement * forceLastHash;
    FieldElement * k_crOffset;
    FieldElement * k_crF0;
    FieldElement * k_crF1;
    FieldElement * k_crF2;
    FieldElement * k_crF3;
    FieldElement * k_crF4;
    FieldElement * k_crF5;
    FieldElement * k_crF6;
    FieldElement * k_crF7;
    FieldElement * crValid;

    PaddingKKConstantPols (void * pAddress)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 5389680640);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 5423235072);
        lastBlockLatch = (FieldElement *)((uint8_t *)pAddress + 5456789504);
        r8valid = (FieldElement *)((uint8_t *)pAddress + 5490343936);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 5523898368);
        forceLastHash = (FieldElement *)((uint8_t *)pAddress + 5557452800);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 5591007232);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 5624561664);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 5658116096);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 5691670528);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 5725224960);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 5758779392);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 5792333824);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 5825888256);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 5859442688);
        crValid = (FieldElement *)((uint8_t *)pAddress + 5892997120);
    }

    PaddingKKConstantPols (void * pAddress, uint64_t degree)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        lastBlockLatch = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        r8valid = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        forceLastHash = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        crValid = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 128; }
};

class MemConstantPols
{
public:
    FieldElement * INCS;
    FieldElement * ISNOTLAST;

    MemConstantPols (void * pAddress)
    {
        INCS = (FieldElement *)((uint8_t *)pAddress + 5926551552);
        ISNOTLAST = (FieldElement *)((uint8_t *)pAddress + 5960105984);
    }

    MemConstantPols (void * pAddress, uint64_t degree)
    {
        INCS = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ISNOTLAST = (FieldElement *)((uint8_t *)pAddress + 8*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 16; }
};

class MainConstantPols
{
public:
    uint32_t * STEP;

    MainConstantPols (void * pAddress)
    {
        STEP = (uint32_t *)((uint8_t *)pAddress + 5993660416);
    }

    MainConstantPols (void * pAddress, uint64_t degree)
    {
        STEP = (uint32_t *)((uint8_t *)pAddress + 0*degree);
    }

    static uint64_t degree (void) { return 4194304; }
    static uint64_t size (void) { return 8; }
};

class ConstantPols
{
public:
    GlobalConstantPols Global;
    RomConstantPols Rom;
    Byte4ConstantPols Byte4;
    MemAlignConstantPols MemAlign;
    ArithConstantPols Arith;
    BinaryConstantPols Binary;
    PoseidonGConstantPols PoseidonG;
    PaddingPGConstantPols PaddingPG;
    StorageConstantPols Storage;
    NormGate9ConstantPols NormGate9;
    KeccakFConstantPols KeccakF;
    Nine2OneConstantPols Nine2One;
    PaddingKKBitConstantPols PaddingKKBit;
    PaddingKKConstantPols PaddingKK;
    MemConstantPols Mem;
    MainConstantPols Main;

    ConstantPols (void * pAddress) : Global(pAddress), Rom(pAddress), Byte4(pAddress), MemAlign(pAddress), Arith(pAddress), Binary(pAddress), PoseidonG(pAddress), PaddingPG(pAddress), Storage(pAddress), NormGate9(pAddress), KeccakF(pAddress), Nine2One(pAddress), PaddingKKBit(pAddress), PaddingKK(pAddress), Mem(pAddress), Main(pAddress) {}

    static uint64_t size (void) { return 6027214848; }
};

#endif // CONSTANT_POLS_HPP