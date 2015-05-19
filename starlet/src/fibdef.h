#ifndef FIBDEF_H
#define FIBDEF_H

/* Fibdef.h v1.3    Definition of 'struct _fibdef' */

/*
        This is part of ODS2 written by Paul Nankervis,
        email address:  Paulnank@au1.ibm.com

        ODS2 is distributed freely for all members of the
        VMS community to use. However all derived works
        must maintain comments in their source to acknowledge
        the contribution of the original author.
*/

#define FIB$M_NOWRITE 0x1
#define FIB$M_DLOCK 0x2
#define FIB$M_BLK_LOCK 0x4
#define FIB$M_FASTRDSQNOS 0x8
#define FIB$M_SPOOL 0x10
#define FIB$M_WRITECK 0x20
#define FIB$M_SEQONLY 0x40
#define FIB$M_SEQNO 0x80
#define FIB$M_WRITE 0x100
#define FIB$M_READCK 0x200
#define FIB$M_NOREAD 0x400
#define FIB$M_NOTRUNC 0x800
#define FIB$M_CONTROL 0x1000
#define FIB$M_NO_READ_DATA 0x2000
#define FIB$M_EXECUTE 0x10000
#define FIB$M_PRSRV_ATR 0x20000
#define FIB$M_RMSLOCK 0x40000
#define FIB$M_WRITETHRU 0x80000
#define FIB$M_NOLOCK 0x100000
#define FIB$M_NORECORD 0x200000
#define FIB$M_NOVERIFY 0x400000
#define FIB$M_CHANGE_VOL 0x800000
#define FIB$M_REWIND 0x8
#define FIB$M_CURPOS 0x10
#define FIB$M_UPDATE 0x40
#define FIB$K_ACCDATA 10
#define FIB$C_ACCDATA 10
#define FIB$K_DIRDATA 22
#define FIB$C_DIRDATA 22
#define FIB$M_NAMES_8BIT 0x1
#define FIB$M_NAMES_16BIT 0x2
#define FIB$M_PERCENT_LITERAL 0x4
#define FIB$M_ALLVER 0x8
#define FIB$M_ALLTYP 0x10
#define FIB$M_ALLNAM 0x20
#define FIB$M_WILD 0x100
#define FIB$M_NEWVER 0x200
#define FIB$M_SUPERSEDE 0x400
#define FIB$M_FINDFID 0x800
#define FIB$M_LOWVER 0x4000
#define FIB$M_HIGHVER 0x8000
#define FIB$M_ALCON 0x1
#define FIB$M_ALCONB 0x2
#define FIB$M_FILCON 0x4
#define FIB$M_ALDEF 0x8
#define FIB$M_ALLOCATR 0x10
#define FIB$M_EXTEND 0x80
#define FIB$M_TRUNC 0x100
#define FIB$M_NOHDREXT 0x200
#define FIB$M_MARKBAD 0x400
#define FIB$M_NOPLACE 0x4000
#define FIB$M_NOCHARGE 0x8000
#define FIB$K_EXTDATA 32
#define FIB$C_EXTDATA 32
#define FIB$M_EXACT 0x1
#define FIB$M_ONCYL 0x2
#define FIB$C_CYL 1
#define FIB$C_LBN 2
#define FIB$C_VBN 3
#define FIB$C_RFI 4
#define FIB$K_ALCDATA 44
#define FIB$C_ALCDATA 44
#define FIB$M_ALT_REQ 0x1
#define FIB$M_ALT_GRANTED 0x2
#define FIB$M_DIRACL 0x4
#define FIB$M_PROPAGATE 0x8
#define FIB$M_NOCOPYACL 0x10
#define FIB$M_NOCOPYOWNER 0x20
#define FIB$M_NOCOPYPROT 0x40
#define FIB$M_EXCLPREVIOUS 0x80
#define FIB$M_ALIAS_ENTRY 0x100
#define FIB$M_WILDFID_FLAG 0x200
#define FIB$M_DID_FILESPEC 0x400
#define FIB$K_MOVEFILE 72
#define FIB$C_MOVEFILE 72
#define FIB$M_FILE_ATTRIBUTES 0xF
#define FIB$M_FILE_CONTENTS 0xF0
#define FIB$C_DEFAULT 0
#define FIB$C_WRITETHROUGH 1
#define FIB$C_WRITEBEHIND 2
#define FIB$C_NOCACHING 3
#define FIB$M_FLUSH_ON_CLOSE 0xF00
#define FIB$C_FLUSH 1
#define FIB$C_NOFLUSH 2
#define FIB$M_CACHING_OPTIONS_MBZ 0xFFFFF000
#define FIB$C_ODS2 0
#define FIB$C_ISL1 1
#define FIB$C_ISO_LATIN 1
#define FIB$C_UCS2 3
#define FIB$C_NAMETYPE_LEN 96
#define FIB$K_LENGTH 96
#define FIB$C_LENGTH 96
#define FIB$K_F64LEN 96
#define FIB$C_F64LEN 96

#define FIB$C_REWINDVOL 1
#define FIB$C_POSEND 2
#define FIB$C_NEXTVOL 3
#define FIB$C_SPACE 4
#define FIB$C_ILLEGAL 5
#define FIB$C_REWINDFIL 6
#define FIB$C_LOCK_VOL 7
#define FIB$C_UNLK_VOL 8

#define FIB$C_ENA_QUOTA 9
#define FIB$C_DSA_QUOTA 10
#define FIB$C_ADD_QUOTA 11
#define FIB$C_EXA_QUOTA 12
#define FIB$C_MOD_QUOTA 13
#define FIB$C_REM_QUOTA 14
#define FIB$C_USEREOT 15
#define FIB$C_REMAP 16
#define FIB$C_CLSEREXCP 17
#define FIB$C_FLUSH_CACHE 18
#define FIB$C_FORCE_MV 19
#define FIB$C_VALIDATE_VOLUME 20
#define FIB$C_VALIDATE_FILE 21
#define FIB$C_UPDATE_VOL_PROFILE 22
#define FIB$C_UPDATE_FIL_PROFILE 23
#define FIB$C_CHECK_PROTECTION 24
#define FIB$C_ADD_THREAD 25
#define FIB$C_REM_THREAD 26
#define FIB$C_EXA_THREAD 27
#define FIB$C_CHECK_PATH 28
#define FIB$C_ENA_DW 29
#define FIB$C_DSA_DW 30
#define FIB$K_MTALEN 28
#define FIB$C_MTALEN 28

#define FIB$C_FID_CACHE 1
#define FIB$C_EXTENT_CACHE 2
#define FIB$C_QUOTA_CACHE 3
#define FIB$C_BFRD_CACHE 4
#define FIB$C_VBN_CACHE 5

#define FIB$M_ALL_MEM 0x1
#define FIB$M_ALL_GRP 0x2
#define FIB$M_MOD_USE 0x4
#define FIB$M_MOD_PERM 0x8
#define FIB$M_MOD_OVER 0x10

struct _fibdef
{
    unsigned fib$l_acctl;
    unsigned short fib$w_fid_num;
    unsigned short fib$w_fid_seq;
    unsigned char fib$b_fid_rvn;
    unsigned char fib$b_fid_nmx;
    unsigned short fib$w_did_num;
    unsigned short fib$w_did_seq;
    unsigned char fib$b_did_rvn;
    unsigned char fib$b_did_nmx;
    unsigned long fib$l_wcc; // check. is index. drop long later.
    unsigned fib$w_nmctl;
    unsigned fib$l_exsz;
    unsigned fib$w_exctl;
    unsigned short fib$w_file_hdrseq_incr;
    unsigned short fib$w_dir_hdrseq_incr;
};

#endif
