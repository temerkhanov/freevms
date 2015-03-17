#ifndef opcmsg_h
#define opcmsg_h

#define		OPCOM$_FACILITY		5
#define		OPC$_TERMENAB		360449
#define		OPC$_LOGINIT		360457
#define		OPC$_TERMDSBL		360465
#define		OPC$_RQSTABORT		360476
#define		OPC$_RQSTPEND		360481
#define		OPC$_RQSTCMPLTE		360489
#define		OPC$_LOGFAIL		360500
#define		OPC$_TERMFAIL		360508
#define		OPC$_NOSUCHRQST		360516
#define		OPC$_DEVOFFLINE		360524
#define		OPC$_DEVONLINE		360532
#define		OPC$_NOCLI		360540
#define		OPC$_NOPERATOR		360545
#define		OPC$_UNKNOPR		360556
#define		OPC$_DEVNOTERM		360564
#define		OPC$_ILLRQST		360572
#define		OPC$_RQSTCAN		360580
#define		OPC$_OPRNOTIF		360585
#define		OPC$_OPREPLY		360593
#define		OPC$_LOGTIME		360601
#define		OPC$_LOGCLOS		360612
#define		OPC$_USERQST		360619
#define		OPC$_USERMSG		360627
#define		OPC$_LOGSTS		360635
#define		OPC$_OPERSTS		360643
#define		OPC$_RQSTSTST		360651
#define		OPC$_SHUTDOWN		360659
#define		OPC$_SYSTEMOPER		360667
#define		OPC$_GROUPOPER		360675
#define		OPC$_USEROPER		360683
#define		OPC$_NOTENABLED		360691

#define		OPC$_CENTRL		360699
#define		OPC$_PRINT		360707
#define		OPC$_TAPES		360715
#define		OPC$_DISKS		360723
#define		OPC$_DEVICE		360731
#define		OPC$_CARDS		360739
#define		OPC$_NTWORK		360747
#define		OPC$_CLUSTER		360755
#define		OPC$_SECURITY		360763
#define		OPC$_REPLY		360771
#define		OPC$_SOFTWARE		360779
#define		OPC$_LICENSE		360787
#define		OPC$_OPER1		360795
#define		OPC$_OPER2		360803
#define		OPC$_OPER3		360811
#define		OPC$_OPER4		360819
#define		OPC$_OPER5		360827
#define		OPC$_OPER6		360835
#define		OPC$_OPER7		360843
#define		OPC$_OPER8		360851
#define		OPC$_OPER9		360859
#define		OPC$_OPER10		360867
#define		OPC$_OPER11		360875
#define		OPC$_OPER12		360883

#define		OPC$_DEVOFFLINX		360891
#define		OPC$_WRONGVOL		360899
#define		OPC$_DEVWRTLCK		360907

#define		OPC$_INITAPE		360915
#define		OPC$_RQSTDONE		360923
#define		OPC$_BLANKTAPE		360931

#define		OPC$_MVCOMPLETE		360939
#define		OPC$_MVABORTED		360947
#define		OPC$_CTLRUCODE		360955
#define		OPC$_DUPUNITNO		360963
#define		OPC$_SECUR_ALARM	360971
#define		OPC$_COUNTERFEIT	360979
#define		OPC$_NODE_ACTIVE	360987
#define		OPC$_NODE_DELETE	360995
#define		OPC$_NODE_DEPARTED	361003
#define		OPC$_NODE_INIT		361011
#define		OPC$_NODE_RETRY		361019
#define		OPC$_NODE_START		361027
#define		OPC$_UNKNOWN		361035
#define		OPC$_CLUSCOMM		361043
#define		OPC$_VALUERR		361052
#define		OPC$_NOTRQCB		361060
#define		OPC$_REPLY_GENERAL	361067
#define		OPC$_REPLY_SHUTDOWN	361075
#define		OPC$_REPLY_URGENT	361083
#define		OPC$_REPLY_NOTALL	361091
#define		OPC$_REPLY_NOTALLN	361099
#define		OPC$_REPLY_NOTDEV	361107
#define		OPC$_REPLY_NOTUSE	361115
#define		OPC$_REPLY_NOTUSEN	361123
#define		OPC$_ON_NODE		361131
#define		OPC$_HEADER		361139
#define		OPC$_RQST_PROMPT	361147
#define		OPC$_NOLCLBROAD		361152
#define		OPC$_NOREMBROAD		361160
#define		OPC$_NOREMWAIT		361168

#define		OPC$_CLU_NEWSYS		361179
#define		OPC$_CLU_CNX		361187
#define		OPC$_CLU_RECNX		361195
#define		OPC$_CLU_LOSTCNX	361203
#define		OPC$_CLU_TIMCNX		361211
#define		OPC$_CLU_INIFORM	361219
#define		OPC$_CLU_INIADD		361227
#define		OPC$_CLU_INIRECNFIG	361235
#define		OPC$_CLU_MEMREQ		361243
#define		OPC$_CLU_ABORT		361251
#define		OPC$_CLU_ADD		361259
#define		OPC$_CLU_DROPNODE	361267
#define		OPC$_CLU_FORNCLUS	361275
#define		OPC$_CLU_INQUORUM	361283
#define		OPC$_CLU_LOSTDISK	361291
#define		OPC$_CLU_GAINDISK	361299
#define		OPC$_CLU_DISKRDERR	361307
#define		OPC$_CLU_DISKWRERR	361315
#define		OPC$_CLU_DISKINVDAT	361323
#define		OPC$_CLU_DISKTIMEOUT	361331
#define		OPC$_CLU_LOSTMSG	361339
#define		OPC$_CLU_NOQUORUM	361347
#define		OPC$_CLU_FORNDISK	361355
#define		OPC$_CLU_COMPLETE	361363
#define		OPC$_CLU_QUORUM		361371
#define		OPC$_CLU_ECNX		361379
#define		OPC$_CLU_HAVEDISK	361387
#define		OPC$_CLU_REMOTE		361395
#define		OPC$_CLU_LOCAL		361403
#define		OPC$_CLU_WTCHTIMEOUT	361411
#define		OPC$_CLU_NOTRUST	361419

#define		OPC$_SHACHASTA		361427
#define		OPC$_SHAMEMFAL		361435
#define		OPC$_SHARDUCED		361443
#define		OPC$_SHACOPCOM		361451
#define		OPC$_SHACOPBEG		361459
#define		OPC$_SHAALLCOM		361467
#define		OPC$_SHAWROMEM		361475
#define		OPC$_SHAREDZER		361483
#define		OPC$_SHAPOSMEM		361491
#define		OPC$_SHAORGMEM		361499
#define		OPC$_NOOPCOM		361504

#define		OPC$_SHAADPBAD		361515
#define		OPC$_SHAEMUPTH		361523
#define		OPC$_SHABENODMP		361531
#define		OPC$_SHABNODMP		361539
#define		OPC$_SHALOCDEV		361547
#define		OPC$_SHANOBPOK		361555
#define		OPC$_SHABDMPOK		361563
#define		OPC$_BOOTDMPOK		361571
#define		OPC$_SHABDBCK		361579
#define		OPC$_SHANODMP		361587
#define		OPC$_SHADMPOK		361595

#define		OPC$_PATHNOTAVL		361603
#define		OPC$_PATHAVL		361611
#define		OPC$_PATHUSERD		361619
#define		OPC$_PATHAUTSW		361627
#define		OPC$_PATHMANSW		361635
#define		OPC$_OPA0CLERR		361640
#define		OPC$_LOGFCLERR		361648
#define		OPC$_WSINCLUSTER	361659
#define		OPC$_LOGIN_REJECTED	361664

#endif

