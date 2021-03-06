// This is an auto-generated file.
// DON'T manually modify the file but use cmdRspDictGenSrc.exe.

#if !defined(__CMD_RSP_AND_PARMS_DIC_H)
#define __CMD_RSP_AND_PARMS_DIC_H

#define SYSCMD_FIRST_IDX        10000
#define SYSPARM_FIRST_IDX       10000

// commands
typedef enum cmdCodeEnum {
    CMD_SYNC = 0,
        #define CMD_SYNC_RAND  584003679
    CMD_TPCCAL = 1,
        #define CMD_TPCCAL_RAND  1299040070
    CMD_TPCCALRSP = 2,
        #define CMD_TPCCALRSP_RAND  1699217351
    CMD_TPCCALPWR = 3,
        #define CMD_TPCCALPWR_RAND  1654919846
    CMD_TPCCALDATA = 4,
        #define CMD_TPCCALDATA_RAND  2027924831
    CMD_RXGAINCAL = 5,
        #define CMD_RXGAINCAL_RAND  1299041111
    CMD_RXGAINCALRSP = 6,
        #define CMD_RXGAINCALRSP_RAND  1699212222
    CMD_RXGAINCAL_SIGL_DONE = 7,
        #define CMD_RXGAINCAL_SIGL_DONE_RAND  1931385521
    CMD_RXGAINCALRSP_DONE = 8,
        #define CMD_RXGAINCALRSP_DONE_RAND  2027977812
    CMD_REGREAD = 9,
        #define CMD_REGREAD_RAND  3357
    CMD_REGREADRSP = 10,
        #define CMD_REGREADRSP_RAND  28045
    CMD_REGWRITE = 11,
        #define CMD_REGWRITE_RAND  3396
    CMD_REGWRITERSP = 12,
        #define CMD_REGWRITERSP_RAND  25954
    CMD_BASICRSP = 13,
        #define CMD_BASICRSP_RAND  684741659
    CMD_TX = 14,
        #define CMD_TX_RAND  788880175
    CMD_TXSTATUS = 15,
        #define CMD_TXSTATUS_RAND  1786600363
    CMD_TXSTATUSRSP = 16,
        #define CMD_TXSTATUSRSP_RAND  138420902
    CMD_RX = 17,
        #define CMD_RX_RAND  1360680161
    CMD_RXSTATUS = 18,
        #define CMD_RXSTATUS_RAND  68378807
    CMD_RXSTATUSRSP = 19,
        #define CMD_RXSTATUSRSP_RAND  810169362
    CMD_HWCAL = 20,
        #define CMD_HWCAL_RAND  1280063023
    CMD_RXRSP = 21,
        #define CMD_RXRSP_RAND  138356853
    CMD_XTALCALPROC = 22,
        #define CMD_XTALCALPROC_RAND  190849699
    CMD_XTALCALPROCRSP = 23,
        #define CMD_XTALCALPROCRSP_RAND  2058566353
    CMD_READCUSTOTPSPACE = 24,
        #define CMD_READCUSTOTPSPACE_RAND  1177604213
    CMD_READCUSTOTPSPACERSP = 25,
        #define CMD_READCUSTOTPSPACERSP_RAND  593844853
    CMD_WRITECUSTOTPSPACE = 26,
        #define CMD_WRITECUSTOTPSPACE_RAND  1177940841
    CMD_WRITECUSTOTPSPACERSP = 27,
        #define CMD_WRITECUSTOTPSPACERSP_RAND  2119255687
    CMD_GETCUSTOTPSIZE = 28,
        #define CMD_GETCUSTOTPSIZE_RAND  1547973684
    CMD_GETCUSTOTPSIZERSP = 29,
        #define CMD_GETCUSTOTPSIZERSP_RAND  1569440880
    CMD_GETDPDCOMPLETE = 30,
        #define CMD_GETDPDCOMPLETE_RAND  12643513
    CMD_GETDPDCOMPLETERSP = 31,
        #define CMD_GETDPDCOMPLETERSP_RAND  113961185
    CMD_GETTGTPWR = 32,
        #define CMD_GETTGTPWR_RAND  358252260
    CMD_GETTGTPWRRSP = 33,
        #define CMD_GETTGTPWRRSP_RAND  1940800329
    CMD_SETPCIECONFIGPARAMS = 34,
        #define CMD_SETPCIECONFIGPARAMS_RAND  854451531
    CMD_SETPCIECONFIGPARAMSRSP = 35,
        #define CMD_SETPCIECONFIGPARAMSRSP_RAND  1002969271
    CMD_COMMITOTPSTREAM = 36,
        #define CMD_COMMITOTPSTREAM_RAND  259798082
    CMD_COMMITOTPSTREAMRSP = 37,
        #define CMD_COMMITOTPSTREAMRSP_RAND  626266106
    CMD_SETREGDMN = 38,
        #define CMD_SETREGDMN_RAND  1272588943
    CMD_SETREGDMNRSP = 39,
        #define CMD_SETREGDMNRSP_RAND  840458865
    CMD_MEMWRITE = 40,
        #define CMD_MEMWRITE_RAND  250384222
    CMD_MEMWRITERSP = 41,
        #define CMD_MEMWRITERSP_RAND  1909048288
    CMD_MEMREAD = 42,
        #define CMD_MEMREAD_RAND  1875636464
    CMD_MEMREADRSP = 43,
        #define CMD_MEMREADRSP_RAND  1373103096
    CMD_CONFIG = 44,
        #define CMD_CONFIG_RAND  38391143
    CMD_DPDLOOPBACKTIMING = 45,
        #define CMD_DPDLOOPBACKTIMING_RAND  2130387656
    CMD_DPDLOOPBACKTIMINGRSP = 46,
        #define CMD_DPDLOOPBACKTIMINGRSP_RAND  923302095
    CMD_DPDLOOPBACKATTN = 47,
        #define CMD_DPDLOOPBACKATTN_RAND  504153110
    CMD_DPDLOOPBACKATTNRSP = 48,
        #define CMD_DPDLOOPBACKATTNRSP_RAND  761746113
    CMD_DPDTRAININGQUALITY = 49,
        #define CMD_DPDTRAININGQUALITY_RAND  1930865937
    CMD_DPDTRAININGQUALITYRSP = 50,
        #define CMD_DPDTRAININGQUALITYRSP_RAND  937741580
    CMD_DPDAGC2PWR = 51,
        #define CMD_DPDAGC2PWR_RAND  488890671
    CMD_DPDAGC2PWRRSP = 52,
        #define CMD_DPDAGC2PWRRSP_RAND  1535740817
    CMD_LMHWCAL = 53,
        #define CMD_LMHWCAL_RAND  926643455
    CMD_LMHWCALRSP = 54,
        #define CMD_LMHWCALRSP_RAND  1159688475
    CMD_LMTX = 55,
        #define CMD_LMTX_RAND  1990911575
    CMD_MORESEGMENT = 56,
        #define CMD_MORESEGMENT_RAND  31201709
    CMD_MORESEGMENTRSP = 57,
        #define CMD_MORESEGMENTRSP_RAND  1172069290
    CMD_LMRX = 58,
        #define CMD_LMRX_RAND  9799005
    CMD_ADCCAPTURE = 59,
        #define CMD_ADCCAPTURE_RAND  1904298333
    CMD_ADCCAPTURERSP = 60,
        #define CMD_ADCCAPTURERSP_RAND  1147144578
    CMD_GENWAVEFORM = 61,
        #define CMD_GENWAVEFORM_RAND  1904953170
    CMD_GENWAVEFORMRSP = 62,
        #define CMD_GENWAVEFORMRSP_RAND  364454784
    CMD_ENABLEDFE = 63,
        #define CMD_ENABLEDFE_RAND  1905335115
    CMD_ENABLEDFERSP = 64,
        #define CMD_ENABLEDFERSP_RAND  558456703
    CMD_CALCALTIME = 65,
        #define CMD_CALCALTIME_RAND  1905815364
    CMD_CALCALTIMERSP = 66,
        #define CMD_CALCALTIMERSP_RAND  752425854
    CMD_RXDCOGROUP = 67,
        #define CMD_RXDCOGROUP_RAND  1906197309
    CMD_RXDCOGROUPRSP = 68,
        #define CMD_RXDCOGROUPRSP_RAND  946493308
    CMD_SETPHYRFMODE = 69,
        #define CMD_SETPHYRFMODE_RAND  197621630
    CMD_LMCHANNELLIST = 70,
        #define CMD_LMCHANNELLIST_RAND  317875450
    CMD_LMCHANNELLISTRSP = 71,
        #define CMD_LMCHANNELLISTRSP_RAND  666860449
    CMD_LMTXINIT = 72,
        #define CMD_LMTXINIT_RAND  919495963
    CMD_LMTXINITRSP = 73,
        #define CMD_LMTXINITRSP_RAND  1404646771
    CMD_LMGO = 74,
        #define CMD_LMGO_RAND  576873853
    CMD_LMGORSP = 75,
        #define CMD_LMGORSP_RAND  1470391016
    CMD_LMQUERY = 76,
        #define CMD_LMQUERY_RAND  1951425933
    CMD_LMQUERYRSP = 77,
        #define CMD_LMQUERYRSP_RAND  765542353
    CMD_GENERICUTFCMD = 78,
        #define CMD_GENERICUTFCMD_RAND  1940191023
    CMD_GENERICUTFCMDRSP = 79,
        #define CMD_GENERICUTFCMDRSP_RAND  53833771
    CMD_LMRXINIT = 80,
        #define CMD_LMRXINIT_RAND  1823031957
    CMD_LMRXINITRSP = 81,
        #define CMD_LMRXINITRSP_RAND  1736534794
    CMD_NOISEFLOORREAD = 102,
        #define CMD_NOISEFLOORREAD_RAND  1625969506
    CMD_NOISEFLOORREADRSP = 103,
        #define CMD_NOISEFLOORREADRSP_RAND  1241466954
    CMD_LAST,
    CMD_MAX  = CMD_LAST,
    
    // System commands start here - don't delete this line
    SYSCMD_FIRST = SYSCMD_FIRST_IDX,
        #define SYSCMD_FIRST_RAND  626660883
    SYSCMD_SETCHANNEL = 10001,
        #define SYSCMD_SETCHANNEL_RAND  1672108612
    SYSCMD_SETCHANNELRSP = 10002,
        #define SYSCMD_SETCHANNELRSP_RAND  1834572
    SYSCMD_TESTDATA = 10003,
        #define SYSCMD_TESTDATA_RAND  573011746
    SYSCMD_TESTDATARSP = 10004,
        #define SYSCMD_TESTDATARSP_RAND  1365073750
    SYSCMD_GENERIC = 10005,
        #define SYSCMD_GENERIC_RAND  1148939884
    SYSCMD_GENERICRSP = 10006,
        #define SYSCMD_GENERICRSP_RAND  700516982
    SYSCMD_TLVCAPTURECTRL = 10007,
        #define SYSCMD_TLVCAPTURECTRL_RAND  1638034972
    SYSCMD_TLVCAPTURECTRLRSP = 10008,
        #define SYSCMD_TLVCAPTURECTRLRSP_RAND  1385104574
    SYSCMD_PHYDBGDUMP = 10009,
        #define SYSCMD_PHYDBGDUMP_RAND  126447155
    SYSCMD_PHYDBGDUMPRSP = 10010,
        #define SYSCMD_PHYDBGDUMPRSP_RAND  1686859063
    SYSCMD_LAST,
    SYSCMD_MAX  = SYSCMD_LAST,

} CMD_CODE;

// parameters
typedef enum parmCodeEnum {
    PARM_RESERVED = 0,
        #define PARM_RESERVED_RAND  1767181237
    PARM_RADIOID = 1,
        #define PARM_RADIOID_RAND  1078202216
    PARM_NUMFREQ2G = 2,
        #define PARM_NUMFREQ2G_RAND  783992014
    PARM_FREQ2G = 3,
        #define PARM_FREQ2G_RAND  470730988
    PARM_NUMFREQ5G = 4,
        #define PARM_NUMFREQ5G_RAND  176973004
    PARM_FREQ5G = 5,
        #define PARM_FREQ5G_RAND  2010102476
    PARM_NUMCHAIN = 6,
        #define PARM_NUMCHAIN_RAND  639877336
    PARM_NUMCALPT2G = 7,
        #define PARM_NUMCALPT2G_RAND  332852346
    PARM_MEASUREDPWR = 8,
        #define PARM_MEASUREDPWR_RAND  716797366
    PARM_NUMMEASUREDPWR = 9,
        #define PARM_NUMMEASUREDPWR_RAND  165756936
    PARM_CALDATA2G = 10,
        #define PARM_CALDATA2G_RAND  25905134
    PARM_CALDATA2GOFFSET = 11,
        #define PARM_CALDATA2GOFFSET_RAND  908282359
    PARM_CALDATA5G = 12,
        #define PARM_CALDATA5G_RAND  1714114174
    PARM_CALDATA5GOFFSET = 13,
        #define PARM_CALDATA5GOFFSET_RAND  1359093690
    PARM_CALDATA2GLENGTH = 14,
        #define PARM_CALDATA2GLENGTH_RAND  642468564
    PARM_CALDATA5GLENGTH = 15,
        #define PARM_CALDATA5GLENGTH_RAND  1989017899
    PARM_CALPT2G = 16,
        #define PARM_CALPT2G_RAND  463935119
    PARM_NUMTXGAINS2G = 17,
        #define PARM_NUMTXGAINS2G_RAND  1856040979
    PARM_TXGAINS2G = 18,
        #define PARM_TXGAINS2G_RAND  1955125611
    PARM_NUMDACGAINS2G = 19,
        #define PARM_NUMDACGAINS2G_RAND  1076992776
    PARM_DACGAINS2G = 20,
        #define PARM_DACGAINS2G_RAND  267406232
    PARM_NUMPACFG2G = 21,
        #define PARM_NUMPACFG2G_RAND  751352277
    PARM_PACFG2G = 22,
        #define PARM_PACFG2G_RAND  1472306812
    PARM_CHAINMASKS = 23,
        #define PARM_CHAINMASKS_RAND  1876191032
    PARM_NUMCALPT5G = 24,
        #define PARM_NUMCALPT5G_RAND  1910772740
    PARM_CALPT5G = 25,
        #define PARM_CALPT5G_RAND  467317885
    PARM_NUMTXGAINS5G = 26,
        #define PARM_NUMTXGAINS5G_RAND  1817893134
    PARM_TXGAINS5G = 27,
        #define PARM_TXGAINS5G_RAND  711527951
    PARM_NUMDACGAINS5G = 28,
        #define PARM_NUMDACGAINS5G_RAND  230774027
    PARM_DACGAINS5G = 29,
        #define PARM_DACGAINS5G_RAND  1751729643
    PARM_NUMPACFG5G = 30,
        #define PARM_NUMPACFG5G_RAND  963837256
    PARM_PACFG5G = 31,
        #define PARM_PACFG5G_RAND  1083020536
    PARM_MISCFLAGS = 32,
        #define PARM_MISCFLAGS_RAND  351545944
    PARM_TGTPWR2G = 33,
        #define PARM_TGTPWR2G_RAND  167692342
    PARM_TGTPWR5G = 34,
        #define PARM_TGTPWR5G_RAND  807751391
    PARM_CALDATA2G_CLPC = 35,
        #define PARM_CALDATA2G_CLPC_RAND  572790975
    PARM_CALDATA2GOFFSET_CLPC = 36,
        #define PARM_CALDATA2GOFFSET_CLPC_RAND  1472433449
    PARM_CALDATA5G_CLPC = 37,
        #define PARM_CALDATA5G_CLPC_RAND  869450761
    PARM_CALDATA5GOFFSET_CLPC = 38,
        #define PARM_CALDATA5GOFFSET_CLPC_RAND  180798074
    PARM_CALDATA2GLENGTH_CLPC = 39,
        #define PARM_CALDATA2GLENGTH_CLPC_RAND  971133679
    PARM_CALDATA5GLENGTH_CLPC = 40,
        #define PARM_CALDATA5GLENGTH_CLPC_RAND  748974643
    PARM_STATUS = 41,
        #define PARM_STATUS_RAND  748977743
    PARM_BAND = 42,
        #define PARM_BAND_RAND  287998654
    PARM_REFISS = 43,
        #define PARM_REFISS_RAND  957473492
    PARM_RATE = 44,
        #define PARM_RATE_RAND  94874324
    PARM_BANDWIDTH = 45,
        #define PARM_BANDWIDTH_RAND  95926056
    PARM_CHANIDX = 46,
        #define PARM_CHANIDX_RAND  324374234
    PARM_CHAINIDX = 47,
        #define PARM_CHAINIDX_RAND  867448663
    PARM_NUMPACKETS = 48,
        #define PARM_NUMPACKETS_RAND  854372348
    PARM_CHAIN2CAL = 49,
        #define PARM_CHAIN2CAL_RAND  1046839514
    PARM_REGADDRESS = 50,
        #define PARM_REGADDRESS_RAND  20772
    PARM_REGVALUE = 51,
        #define PARM_REGVALUE_RAND  3242
    PARM_CMDID = 52,
        #define PARM_CMDID_RAND  1272413688
    PARM_TXMODE = 53,
        #define PARM_TXMODE_RAND  341460719
    PARM_FREQ = 54,
        #define PARM_FREQ_RAND  1421688400
    PARM_CHAINMASK = 55,
        #define PARM_CHAINMASK_RAND  1381774268
    PARM_WLANMODE = 56,
        #define PARM_WLANMODE_RAND  48372818
    PARM_GI = 57,
        #define PARM_GI_RAND  996941837
    PARM_ANTENNA = 58,
        #define PARM_ANTENNA_RAND  1565073502
    PARM_ENANI = 59,
        #define PARM_ENANI_RAND  1906667634
    PARM_SCRAMBLEROFF = 60,
        #define PARM_SCRAMBLEROFF_RAND  1938175155
    PARM_AIFSN = 61,
        #define PARM_AIFSN_RAND  1120553799
    PARM_BROADCAST = 62,
        #define PARM_BROADCAST_RAND  1342860700
    PARM_AGG = 63,
        #define PARM_AGG_RAND  1351056194
    PARM_SHORTGUARD = 64,
        #define PARM_SHORTGUARD_RAND  42868895
    PARM_DUTYCYCLE = 65,
        #define PARM_DUTYCYCLE_RAND  234446920
    PARM_FLAGS = 66,
        #define PARM_FLAGS_RAND  699759608
    PARM_IR = 67,
        #define PARM_IR_RAND  913400453
    PARM_PKTSZ = 68,
        #define PARM_PKTSZ_RAND  1072443974
    PARM_DATAPATTERN = 69,
        #define PARM_DATAPATTERN_RAND  561322939
    PARM_TXNUMPACKETS = 70,
        #define PARM_TXNUMPACKETS_RAND  798297731
    PARM_TXPATTERN = 71,
        #define PARM_TXPATTERN_RAND  403188442
    PARM_NPATTERN = 72,
        #define PARM_NPATTERN_RAND  1919288377
    PARM_TPCM = 73,
        #define PARM_TPCM_RAND  254567890
    PARM_GAINIDX = 74,
        #define PARM_GAINIDX_RAND  1074466803
    PARM_DACGAIN = 75,
        #define PARM_DACGAIN_RAND  1805933989
    PARM_DACGAINEND = 76,
        #define PARM_DACGAINEND_RAND  269712370
    PARM_DACGAINSTEP = 77,
        #define PARM_DACGAINSTEP_RAND  855533760
    PARM_PACONFIG = 78,
        #define PARM_PACONFIG_RAND  1929993506
    PARM_PACONFIGEND = 79,
        #define PARM_PACONFIGEND_RAND  1305552779
    PARM_PACONFIGSTEP = 80,
        #define PARM_PACONFIGSTEP_RAND  115432525
    PARM_PAD3 = 81,
        #define PARM_PAD3_RAND  1061435199
    PARM_RATEMASK = 82,
        #define PARM_RATEMASK_RAND  177676173
    PARM_RATEMASK11AC = 83,
        #define PARM_RATEMASK11AC_RAND  1976502008
    PARM_PWRGAINSTART = 84,
        #define PARM_PWRGAINSTART_RAND  1427269639
    PARM_PWRGAINEND = 85,
        #define PARM_PWRGAINEND_RAND  424018699
    PARM_PWRGAINSTEP = 86,
        #define PARM_PWRGAINSTEP_RAND  860764118
    PARM_PWRGAINSTART11AC = 87,
        #define PARM_PWRGAINSTART11AC_RAND  2048068249
    PARM_PWRGAINEND11AC = 88,
        #define PARM_PWRGAINEND11AC_RAND  1908020294
    PARM_PWRGAINSTEP11AC = 89,
        #define PARM_PWRGAINSTEP11AC_RAND  96625508
    PARM_BSSID = 90,
        #define PARM_BSSID_RAND  350173251
    PARM_TXSTATION = 91,
        #define PARM_TXSTATION_RAND  1690574818
    PARM_RXSTATION = 92,
        #define PARM_RXSTATION_RAND  88296209
    PARM_NUMOFREPORTS = 93,
        #define PARM_NUMOFREPORTS_RAND  463223138
    PARM_THERMCAL = 94,
        #define PARM_THERMCAL_RAND  534184381
    PARM_PDADC = 95,
        #define PARM_PDADC_RAND  1917267778
    PARM_PACFG = 96,
        #define PARM_PACFG_RAND  1106643480
    PARM_TOTALPACKETS = 97,
        #define PARM_TOTALPACKETS_RAND  1969387163
    PARM_GOODPACKETS = 98,
        #define PARM_GOODPACKETS_RAND  2135183001
    PARM_UNDERRUNS = 99,
        #define PARM_UNDERRUNS_RAND  579092863
    PARM_OTHERERROR = 100,
        #define PARM_OTHERERROR_RAND  1723554567
    PARM_EXCESSRETRIES = 101,
        #define PARM_EXCESSRETRIES_RAND  1241320473
    PARM_RATEBIT = 102,
        #define PARM_RATEBIT_RAND  1640050693
    PARM_SHORTRETRY = 103,
        #define PARM_SHORTRETRY_RAND  1813518400
    PARM_LONGRETRY = 104,
        #define PARM_LONGRETRY_RAND  462764869
    PARM_STARTTIME = 105,
        #define PARM_STARTTIME_RAND  2073904972
    PARM_ENDTIME = 106,
        #define PARM_ENDTIME_RAND  2012028921
    PARM_BYTECOUNT = 107,
        #define PARM_BYTECOUNT_RAND  697976361
    PARM_DONTCOUNT = 108,
        #define PARM_DONTCOUNT_RAND  1558078346
    PARM_RSSI = 109,
        #define PARM_RSSI_RAND  509820842
    PARM_RSSIC = 110,
        #define PARM_RSSIC_RAND  1408979597
    PARM_RSSIE = 111,
        #define PARM_RSSIE_RAND  1138231583
    PARM_RXMODE = 112,
        #define PARM_RXMODE_RAND  1925660275
    PARM_ACK = 113,
        #define PARM_ACK_RAND  1892170080
    PARM_LPL = 114,
        #define PARM_LPL_RAND  866207531
    PARM_ANTSWITCH1 = 115,
        #define PARM_ANTSWITCH1_RAND  189542157
    PARM_ANTSWITCH2 = 116,
        #define PARM_ANTSWITCH2_RAND  618207292
    PARM_PAD2 = 117,
        #define PARM_PAD2_RAND  2121816936
    PARM_SPECTRALSCAN = 118,
        #define PARM_SPECTRALSCAN_RAND  1416654144
    PARM_NOISEFLOOR = 119,
        #define PARM_NOISEFLOOR_RAND  385880570
    PARM_REGDMN = 120,
        #define PARM_REGDMN_RAND  944982574
    PARM_EXPECTEDPKTS = 121,
        #define PARM_EXPECTEDPKTS_RAND  1524444042
    PARM_OTPWRITEFLAG = 122,
        #define PARM_OTPWRITEFLAG_RAND  1809853483
    PARM_STAADDR = 123,
        #define PARM_STAADDR_RAND  1391484308
    PARM_BTADDR = 124,
        #define PARM_BTADDR_RAND  1722170531
    PARM_CRCPACKETS = 125,
        #define PARM_CRCPACKETS_RAND  187516853
    PARM_DECRYPERRORS = 126,
        #define PARM_DECRYPERRORS_RAND  1078090189
    PARM_BADRSSI = 127,
        #define PARM_BADRSSI_RAND  2089647505
    PARM_BADRSSIC = 128,
        #define PARM_BADRSSIC_RAND  1149501459
    PARM_BADRSSIE = 129,
        #define PARM_BADRSSIE_RAND  1256675541
    PARM_EVM = 130,
        #define PARM_EVM_RAND  1459891159
    PARM_BADEVM = 131,
        #define PARM_BADEVM_RAND  2121290035
    PARM_STOPTX = 132,
        #define PARM_STOPTX_RAND  1404993314
    PARM_NEEDREPORT = 133,
        #define PARM_NEEDREPORT_RAND  687894972
    PARM_STOPRX = 134,
        #define PARM_STOPRX_RAND  1380788600
    PARM_CALOP = 135,
        #define PARM_CALOP_RAND  200353319
    PARM_LOOPCNT = 136,
        #define PARM_LOOPCNT_RAND  797993136
    PARM_RSSIINDBM1 = 137,
        #define PARM_RSSIINDBM1_RAND  517422321
    PARM_SECERRPKT = 138,
        #define PARM_SECERRPKT_RAND  1316832418
    PARM_RATECNT = 139,
        #define PARM_RATECNT_RAND  1253205541
    PARM_RATECNT11AC = 140,
        #define PARM_RATECNT11AC_RAND  2135455981
    PARM_LOOPBACK = 141,
        #define PARM_LOOPBACK_RAND  1476462953
    PARM_SAVECAL = 142,
        #define PARM_SAVECAL_RAND  1788939705
    PARM_NOISEFLOORCAL = 143,
        #define PARM_NOISEFLOORCAL_RAND  1788939705
    PARM_CAPIN = 144,
        #define PARM_CAPIN_RAND  1536716510
    PARM_CAPOUT = 145,
        #define PARM_CAPOUT_RAND  1660177319
    PARM_CTRLFLAG = 146,
        #define PARM_CTRLFLAG_RAND  861931537
    PARM_CAPVALMIN = 147,
        #define PARM_CAPVALMIN_RAND  528223855
    PARM_CAPVALMAX = 148,
        #define PARM_CAPVALMAX_RAND  599005719
    PARM_PLLLOCKED = 149,
        #define PARM_PLLLOCKED_RAND  2068468356
    PARM_CUSTDATA = 150,
        #define PARM_CUSTDATA_RAND  213230345
    PARM_OFFSETADDR = 151,
        #define PARM_OFFSETADDR_RAND  1939829656
    PARM_CUSTDATASIZE = 152,
        #define PARM_CUSTDATASIZE_RAND  16323722
    PARM_WRITESTATUS = 153,
        #define PARM_WRITESTATUS_RAND  1098446922
    PARM_OTPCUSTSIZE = 154,
        #define PARM_OTPCUSTSIZE_RAND  1134286375
    PARM_DPDCOMPLETE = 155,
        #define PARM_DPDCOMPLETE_RAND  1612897212
    PARM_USERMODE = 156,
        #define PARM_USERMODE_RAND  1607587425
    PARM_TGTPWR = 157,
        #define PARM_TGTPWR_RAND  1970398708
    PARM_PCIEADDR = 158,
        #define PARM_PCIEADDR_RAND  1305722531
    PARM_PCIEVALUE = 159,
        #define PARM_PCIEVALUE_RAND  1609849136
    PARM_OPERATION = 160,
        #define PARM_OPERATION_RAND  1174835734
    PARM_SIZE = 161,
        #define PARM_SIZE_RAND  645813711
    PARM_MEMADDRESS = 162,
        #define PARM_MEMADDRESS_RAND  1748491149
    PARM_NUMBYTES = 163,
        #define PARM_NUMBYTES_RAND  413261297
    PARM_MEMVALUE = 164,
        #define PARM_MEMVALUE_RAND  1137073552
    PARM_VALUETYPE = 165,
        #define PARM_VALUETYPE_RAND  1187644793
    PARM_PHYID = 166,
        #define PARM_PHYID_RAND  1155944980
    PARM_CALOPFLAG = 167,
        #define PARM_CALOPFLAG_RAND  573680424
    PARM_CALOPORDER = 168,
        #define PARM_CALOPORDER_RAND  1972443252
    PARM_PAD1 = 169,
        #define PARM_PAD1_RAND  1233549092
    PARM_RATESHORTG = 170,
        #define PARM_RATESHORTG_RAND  2080929815
    PARM_RATESHORTG11AC = 171,
        #define PARM_RATESHORTG11AC_RAND  132587500
    PARM_CHANFREQ = 172,
        #define PARM_CHANFREQ_RAND  401369819
    PARM_DPDTIMINGIDX = 173,
        #define PARM_DPDTIMINGIDX_RAND  1449028596
    PARM_DPDLOOPBACKATTN = 174,
        #define PARM_DPDLOOPBACKATTN_RAND  169775228
    PARM_GLUTIDX = 175,
        #define PARM_GLUTIDX_RAND  2017553956
    PARM_DPDTRAINQUAL = 176,
        #define PARM_DPDTRAINQUAL_RAND  592057981
    PARM_DPDAGC2PWR = 177,
        #define PARM_DPDAGC2PWR_RAND  579586160
    PARM_FREQ2 = 178,
        #define PARM_FREQ2_RAND  81761966
    PARM_RATEMASKAC160 = 179,
        #define PARM_RATEMASKAC160_RAND  1270565376
    PARM_WLANMODEMASK = 180,
        #define PARM_WLANMODEMASK_RAND  2123997025
    PARM_FLAG = 181,
        #define PARM_FLAG_RAND  1950621252
    PARM_LM_RESVD0 = 182,
        #define PARM_LM_RESVD0_RAND  1053550234
    PARM_LM_FREQ = 183,
        #define PARM_LM_FREQ_RAND  1173663171
    PARM_LM_FREQ2 = 184,
        #define PARM_LM_FREQ2_RAND  1646381543
    PARM_LM_CHAINMASK = 185,
        #define PARM_LM_CHAINMASK_RAND  1727343482
    PARM_LM_BANDWIDTH = 186,
        #define PARM_LM_BANDWIDTH_RAND  461780291
    PARM_LM_RESVD1 = 187,
        #define PARM_LM_RESVD1_RAND  167171250
    PARM_RSSIINDBM = 188,
        #define PARM_RSSIINDBM_RAND  756697747
    PARM_PWRGAINSTARTAC160 = 189,
        #define PARM_PWRGAINSTARTAC160_RAND  752644342
    PARM_PWRGAINENDAC160 = 190,
        #define PARM_PWRGAINENDAC160_RAND  1276648250
    PARM_PWRGAINSTEPAC160 = 191,
        #define PARM_PWRGAINSTEPAC160_RAND  692870920
    PARM_HWCALTIME = 192,
        #define PARM_HWCALTIME_RAND  99139136
    PARM_WLANMODEMASKEXT = 193,
        #define PARM_WLANMODEMASKEXT_RAND  663217409
    PARM_LENGTH = 194,
        #define PARM_LENGTH_RAND  499671906
    PARM_ADCID = 195,
        #define PARM_ADCID_RAND  1124412343
    PARM_MODEID = 196,
        #define PARM_MODEID_RAND  1342122111
    PARM_DATAI = 197,
        #define PARM_DATAI_RAND  1839601195
    PARM_DATAQ = 198,
        #define PARM_DATAQ_RAND  1223044934
    PARM_WAVEFORMINDEX = 199,
        #define PARM_WAVEFORMINDEX_RAND  380113254
    PARM_ENABLE = 200,
        #define PARM_ENABLE_RAND  1732063252
    PARM_ELAPSEDTIME = 201,
        #define PARM_ELAPSEDTIME_RAND  936529601
    PARM_BBDCOCRANGE = 202,
        #define PARM_BBDCOCRANGE_RAND  140995950
    PARM_RFDCOCRANGE = 203,
        #define PARM_RFDCOCRANGE_RAND  812729550
    PARM_LPBKMODE = 204,
        #define PARM_LPBKMODE_RAND  343625819
    PARM_RFFIRST = 205,
        #define PARM_RFFIRST_RAND  1752307639
    PARM_INITLUT = 206,
        #define PARM_INITLUT_RAND  1396208891
    PARM_RFOVRD = 207,
        #define PARM_RFOVRD_RAND  1112699929
    PARM_BBOVRD = 208,
        #define PARM_BBOVRD_RAND  1011550803
    PARM_NUMGAIN = 209,
        #define PARM_NUMGAIN_RAND  785534531
    PARM_CHAIN = 210,
        #define PARM_CHAIN_RAND  1595497802
    PARM_RFBB = 211,
        #define PARM_RFBB_RAND  370098533
    PARM_DEPTH = 212,
        #define PARM_DEPTH_RAND  794690232
    PARM_USECOSIMSETTING = 213,
        #define PARM_USECOSIMSETTING_RAND  693054023
    PARM_GAINLUT = 214,
        #define PARM_GAINLUT_RAND  85157824
    PARM_RFDOCLUT = 215,
        #define PARM_RFDOCLUT_RAND  33184315
    PARM_BBDOCLUT = 216,
        #define PARM_BBDOCLUT_RAND  1402354784
    PARM_INPUTTABLE2SWPROCESSING = 217,
        #define PARM_INPUTTABLE2SWPROCESSING_RAND  837252689
    PARM_SLEEPTIME = 218,
        #define PARM_SLEEPTIME_RAND  1543859270
    PARM_THRESHOLD = 219,
        #define PARM_THRESHOLD_RAND  685332169
    PARM_PADDING = 220,
        #define PARM_PADDING_RAND  1592400357
    PARM_EXECUTIONTIME = 221,
        #define PARM_EXECUTIONTIME_RAND  323648206
    PARM_DCOI = 222,
        #define PARM_DCOI_RAND  287199177
    PARM_DCOQ = 223,
        #define PARM_DCOQ_RAND  375874657
    PARM_HWPROCESSEDTABLE = 224,
        #define PARM_HWPROCESSEDTABLE_RAND  1474780199

    PARM_CMDIDRXDCOGROUP = 225,
        #define PARM_CMDIDRXDCOGROUP_RAND  1057606577
    PARM_NOISEFLOORARR = 226,
        #define PARM_NOISEFLOORARR_RAND  192951463
    PARM_PILOTEVM = 227,
        #define PARM_PILOTEVM_RAND  446980606
    PARM_PHYRFMODE = 228,
        #define PARM_PHYRFMODE_RAND  1149459996
    PARM_RATEBITINDEX = 229,
        #define PARM_RATEBITINDEX_RAND  8068216
    PARM_TXPOWER = 230,
        #define PARM_TXPOWER_RAND  244205627
    PARM_LM_FLAG = 231,
        #define PARM_LM_FLAG_RAND  998733585
    PARM_LM_ITEMNUM = 232,
        #define PARM_LM_ITEMNUM_RAND  1292111510
    PARM_LM_CBSTATE = 233,
        #define PARM_LM_CBSTATE_RAND  473194520
    PARM_LM_TXPOWER = 234,
        #define PARM_LM_TXPOWER_RAND  797451911
    PARM_LM_PHYID = 235,
        #define PARM_LM_PHYID_RAND  1535848655
    PARM_LM_RATEINDEX = 236,
        #define PARM_LM_RATEINDEX_RAND  687539538
    PARM_TOTALHWCALNUM = 237,
        #define PARM_TOTALHWCALNUM_RAND  342179378
    PARM_TOTALITEMNUM = 238,
        #define PARM_TOTALITEMNUM_RAND  1001802998
    PARM_LM_CMDID = 239,
        #define PARM_LM_CMDID_RAND  554975928
    PARM_TIMEON = 240,
        #define PARM_TIMEON_RAND  60912872
    PARM_TIMEOFF = 241,
        #define PARM_TIMEOFF_RAND  1536324615
    PARM_MEASUREMENT = 242,
        #define PARM_MEASUREMENT_RAND  440216890
    PARM_INPARAMS = 243,
        #define PARM_INPARAMS_RAND  989931480
    PARM_GENERICUTFCMDID = 244,
        #define PARM_GENERICUTFCMDID_RAND  914227993
    PARM_GENERICUTFCMDDONE = 245,
        #define PARM_GENERICUTFCMDDONE_RAND  146343442
    PARM_NUMGENERICUTFCMDRETDATA = 246,
        #define PARM_NUMGENERICUTFCMDRETDATA_RAND  1537027769
    PARM_GENERICUTFCMDSTATUS = 247,
        #define PARM_GENERICUTFCMDSTATUS_RAND  1214869226
    PARM_GENERICUTFCMDRETDATA = 248,
        #define PARM_GENERICUTFCMDRETDATA_RAND  1528819956
    PARM_NFVALUES = 335,
        #define PARM_NFVALUES_RAND  41509484
    PARM_LAST,
    PARM_MAX = PARM_LAST,
    
#ifdef USE_TLV2_SYSCMD

    // System parameters start here - don't delete this line
    SYSPARM_FIRST = SYSPARM_FIRST_IDX,
        #define SYSPARM_FIRST_RAND  1733494398
    SYSPARM_PHY_MASK = 10001,
        #define SYSPARM_PHY_MASK_RAND  1004412723
    SYSPARM_RADIO_MASK = 10002,
        #define SYSPARM_RADIO_MASK_RAND  387924869
    SYSPARM_CROSSING = 10003,
        #define SYSPARM_CROSSING_RAND  2042897209
    SYSPARM_XCONNECTION = 10004,
        #define SYSPARM_XCONNECTION_RAND  1132736999
    SYSPARM_CENTER_CHANNEL_R0 = 10005,
        #define SYSPARM_CENTER_CHANNEL_R0_RAND  1255487137
    SYSPARM_CENTER_CHANNEL_R1 = 10006,
        #define SYSPARM_CENTER_CHANNEL_R1_RAND  2096753993
    SYSPARM_BW_R0 = 10007,
        #define SYSPARM_BW_R0_RAND  323232891
    SYSPARM_BW_R1 = 10008,
        #define SYSPARM_BW_R1_RAND  161036243
    SYSPARM_MODE = 10009,
        #define SYSPARM_MODE_RAND  279811975
    SYSPARM_PRIMARY_LOCATION_R0 = 10010,
        #define SYSPARM_PRIMARY_LOCATION_R0_RAND  435879435
    SYSPARM_PRIMARY_LOCATION_R1 = 10011,
        #define SYSPARM_PRIMARY_LOCATION_R1_RAND  1130539058
    SYSPARM_CAL_MASK = 10012,
        #define SYSPARM_CAL_MASK_RAND  507306480
    SYSPARM_FORCE_CAL_MASK = 10013,
        #define SYSPARM_FORCE_CAL_MASK_RAND  599653006
    SYSPARM_DATA1 = 10014,
        #define SYSPARM_DATA1_RAND  651912622
    SYSPARM_DATA2 = 10015,
        #define SYSPARM_DATA2_RAND  1811564540
    SYSPARM_DATA3 = 10016,
        #define SYSPARM_DATA3_RAND  28990433
    SYSPARM_DATA4 = 10017,
        #define SYSPARM_DATA4_RAND  624179219
    SYSPARM_STATUS32 = 10018,
        #define SYSPARM_STATUS32_RAND  274562173
    SYSPARM_GENERIC_PARAM_CMDID = 10019,
        #define SYSPARM_GENERIC_PARAM_CMDID_RAND  814439195
    SYSPARM_GENERIC_PARAM_01 = 10020,
        #define SYSPARM_GENERIC_PARAM_01_RAND  1274113590
    SYSPARM_GENERIC_PARAM_02 = 10021,
        #define SYSPARM_GENERIC_PARAM_02_RAND  599997568
    SYSPARM_GENERIC_PARAM_03 = 10022,
        #define SYSPARM_GENERIC_PARAM_03_RAND  972292246
    SYSPARM_GENERIC_PARAM_04 = 10023,
        #define SYSPARM_GENERIC_PARAM_04_RAND  942163786
    SYSPARM_GENERIC_PARAM_05 = 10024,
        #define SYSPARM_GENERIC_PARAM_05_RAND  252447580
    SYSPARM_GENERIC_PARAM_06 = 10025,
        #define SYSPARM_GENERIC_PARAM_06_RAND  488898567
    SYSPARM_GENERIC_PARAM_07 = 10026,
        #define SYSPARM_GENERIC_PARAM_07_RAND  19204371
    SYSPARM_GENERIC_PARAM_08 = 10027,
        #define SYSPARM_GENERIC_PARAM_08_RAND  471864386
    SYSPARM_GENERIC_PARAM_09 = 10028,
        #define SYSPARM_GENERIC_PARAM_09_RAND  705193811
    SYSPARM_GENERIC_PARAM_10 = 10029,
        #define SYSPARM_GENERIC_PARAM_10_RAND  1263881967

#endif
    
    SYSPARM_LAST,
    SYSPARM_MAX = SYSPARM_LAST,

} PARM_CODE;

#endif //#if !defined(__CMD_RSP_AND_PARMS_DIC_H)
