#ifndef ucbdef_h
#define ucbdef_h

#include "../../freevms/lib/src/tqedef.h"

#define UCB$M_TIM 0x1
#define UCB$M_INT 0x2
#define UCB$M_ERLOGIP 0x4
#define UCB$M_CANCEL 0x8
#define UCB$M_ONLINE 0x10
#define UCB$M_POWER 0x20
#define UCB$M_TIMOUT 0x40
#define UCB$M_INTTYPE 0x80
#define UCB$M_BSY 0x100
#define UCB$M_MOUNTING 0x200
#define UCB$M_DEADMO 0x400
#define UCB$M_VALID 0x800
#define UCB$M_UNLOAD 0x1000
#define UCB$M_TEMPLATE 0x2000
#define UCB$M_MNTVERIP 0x4000
#define UCB$M_WRONGVOL 0x8000
#define UCB$M_DELETEUCB 0x10000
#define UCB$M_LCL_VALID 0x20000
#define UCB$M_SUPMVMSG 0x40000
#define UCB$M_MNTVERPND 0x80000
#define UCB$M_DISMOUNT 0x100000
#define UCB$M_CLUTRAN 0x200000
#define UCB$M_WRTLOCKMV 0x400000
#define UCB$M_SVPN_END 0x800000
#define UCB$M_ALTBSY 0x1000000
#define UCB$M_SNAPSHOT 0x2000000
#define UCB$M_NO_ASSIGN 0x4000000
#define UCB$M_EXFUNC_SUPP 0x8000000
#define UCB$M_FAST_PATH 0x10000000
#define UCB$M_PATHVERIP 0x20000000
#define UCB$M_FP_HW_INT 0x40000000
#define UCB$M_JOB 0x1
#define UCB$M_TEMPL_BSY 0x40
#define UCB$M_PRMMBX 0x1
#define UCB$M_DELMBX 0x2
#define UCB$M_TT_TIMO 0x2
#define UCB$M_TT_NOTIF 0x4
#define UCB$M_TT_HANGUP 0x8
#define UCB$M_TT_NOLOGINS 0x8000
#define UCB$M_NT_BFROVF 0x4
#define UCB$M_NT_NAME 0x10
#define UCB$M_NT_BREAK 0x20
#define UCB$M_ECC 0x1
#define UCB$M_DIAGBUF 0x2
#define UCB$M_NOCNVRT 0x4
#define UCB$M_DX_WRITE 0x8
#define UCB$M_DATACACHE 0x10
#define UCB$M_MSCP_MNTVERIP 0x100
#define UCB$M_MSCP_INITING 0x200
#define UCB$M_MSCP_WAITBMP 0x400
#define UCB$M_MSCP_FLOVR 0x800
#define UCB$M_MSCP_PKACK 0x1000
#define UCB$M_MSCP_WRTP 0x2000
#define UCB$M_MSCP_IGNSRV 0x4000
#define UCB$M_MSCP_MVRESTART 0x8000
#define UCB$M_DU_SHMV_STRTD 0x8
#define UCB$M_DU_0MNOTE 0x20
#define UCB$M_MVFKBBSY 0x40
#define UCB$M_GTUNMBSY 0x80
#define UCB$M_TU_OVRSQCHK 0x1
#define UCB$M_TU_TRACEACT 0x2
#define UCB$M_TU_SEQNOP 0x4
#define UCB$M_TU_1DENS 0x8
#define UCB$M_TU_DENS_DETERMINED 0x10
#define UCB$M_TU_MEDIA_LOADED 0x20
#define UCB$M_SHD_WLG_INV 0x80
#define UCB$M_SHD_SEQCMD_HERE 0x400
#define UCB$M_SHD_SEQCMD_THERE 0x800
#define UCB$M_SHD_PASSIVE_MV 0x1000
#define UCB$M_SHD_NODE_FAILURE 0x2000
#define UCB$M_SHD_WLGSTA_CHA 0x4000
#define UCB$M_SHD_VCB_DEQUEUE 0x8000
#define UCB$M_PORT_ONLINE 0x1
#define UCB$M_FKLOCK 0x2
#define UCB$M_MSGFKLOCK 0x4
#define UCB$M_INIFKLOCK 0x8
#define UCB$M_BAD_REV 0x10
#define UCB$M_PA_ERLOGIP 0x20
#define UCB$M_MFQEFKLOCK 0x40
#define UCB$M_MFQE_LOST 0x80
#define UCB$M_ADMIN_ONLINE 0x100
#define UCB$M_ADMIN_INIT 0x200
#define UCB$M_ADMIN_TEAR_DOWN 0x400
#define UCB$M_CHAN_ONLINE 0x10000
#define UCB$M_CHAN_INIT 0x20000
#define UCB$M_CHAN_TEAR_DOWN 0x40000
#define UCB$M_PB_TQE_BUSY 0x1000000
#define UCB$M_MBR_CALLBACK 0x2000000
#define UCB$M_SHUTDOWN_REQ 0x4000000
#define UCB$M_SHUTDOWN_IP 0x8000000
#define UCB$M_PB_LAST_GASP_EMULATED 0x10000000
	
#define SUD$C_LENGTH 200
#define SUD$K_LENGTH 200
 
#define UCB$K_LENGTH 240
#define UCB$C_LENGTH 240
#define UCB$S_UCBDEF 240

struct _ucb {
struct _fkb *ucb$l_fqfl;
struct _fkb *ucb$l_fqbl;
unsigned short int ucb$w_size;
unsigned char ucb$b_type;
unsigned char ucb$b_flck;
void (*ucb$l_fpc)(void);
unsigned long ucb$l_fr3;
unsigned long ucb$l_fr4;
unsigned short ucb$w_bufquo;
unsigned short ucb$w_iniquo;
struct _orb *ucb$l_orb;
unsigned long ucb$l_lockid;
struct _crb *ucb$l_crb;
struct _spl *ucb$l_dlck;
struct _ddb *ucb$l_ddb;
unsigned long ucb$l_pid;
struct _ucb *ucb$l_link;
struct _vcb *ucb$l_vcb;
unsigned long ucb$q_devchar;
unsigned long ucb$q_devchar2;
unsigned long ucb$l_affinity;
unsigned long reserved;
unsigned char ucb$b_devclass;
unsigned char ucb$b_devtype;
unsigned short ucb$w_devbufsiz;
unsigned long ucb$q_devdepend;
unsigned long ucb$l_devdepend2;
struct _irp *ucb$l_ioqfl;
struct _irp *ucb$l_ioqbl;
unsigned short ucb$w_unit;
unsigned short ucb$w_charge;
struct _irp *ucb$l_irp;
unsigned short ucb$w_refc;
unsigned char ucb$b_dipl;
unsigned char ucb$b_amod;
struct _ucb *ucb$l_amb;
unsigned long ucb$l_sts;
unsigned short ucb$w_devsts;
unsigned short ucb$w_qlen;
unsigned long ucb$l_duetim;
unsigned long ucb$l_opcnt;
unsigned long ucb$l_svpn;
void *ucb$l_svapte;
unsigned short ucb$w_boff;
unsigned short ucb$w_bcnt;
unsigned char ucb$b_ertcnt;
unsigned char ucb$b_ertmax;
unsigned short ucb$w_errcnt;
struct _pdt *ucb$l_pdt;
struct _ddt *ucb$l_ddt;
unsigned long ucb$l_media_id;
};

#endif
