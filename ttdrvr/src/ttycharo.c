#include <ttydef.h>
#include <ttyucbdef.h>
#include <ttytadef.h>
#include <system_data_cells.h>
#include <ttyrbdef.h>
#include <ssdef.h>
#include <irpdef.h>

int tty$getnextchar(int * chr, int * CC, struct _ucb * u) {
 again:
  *CC=0;
  *chr=0;
  struct _tty_ucb * tty=u;
  struct _ltrm_ucb * lt=u;
  tty->ucb$b_tt_outype=0;
  if (tty->tty$v_st_write) {
    struct _twp * wb = tty->ucb$l_tt_wrtbuf;
    char * wrtc = wb->tty$l_wb_next;
    //    wb->tty$l_wb_next++;
    struct _irp * i = wb->tty$l_wb_irp;
    if (wb->tty$l_wb_next>=wb->tty$l_wb_end) { 
      // end of data
      i->irp$q_tt_state &= ~TTY$M_ST_WRITE;
      tty->ucb$q_tt_state &= ~TTY$M_ST_WRITE; // here?
      //not yet: fork 
      //wb->tty$l_wb_fpc=?;
      //exe_std$primitive_fork(wb,i,wb);
      struct _irp * temp_irp = lt->ucb$l_tl_phyucb->ucb$l_irp;
      kfree(temp_irp->irp$l_svapte); // have to get rid of this first?
      temp_irp->irp$l_svapte=0;
      int status = ioc$reqcom(SS$_NORMAL,0,lt->ucb$l_tl_phyucb);
      goto again;
    } else {
      // more data
      char character = * wrtc;
      tty->ucb$b_tt_lastc = character;
      *CC=1;
      tty->ucb$b_tt_outype=1;
      wb->tty$l_wb_next++;
      //i->irp$q_tt_state &= ~TTY$M_ST_WRITE;
      *chr = character;
      return;
    }
    return; 
    // return  tty$putnextchar(chr,u); // this made a loop, implement some other way
  }
  tty->tty$v_st_read=1; // mark reader?
  if (tty->ucb$l_tt_typahd==0)
    return;
  struct _tt_type_ahd * ahd = tty->ucb$l_tt_typahd;

  if (ahd->tty$w_ta_inahd==0)
    return;

  *CC=1;
  tty->ucb$b_tt_outype=1;
  char * c=ahd->tty$l_ta_get;
  *chr=*c;
  ahd->tty$l_ta_get=(long)ahd->tty$l_ta_get+1;
  ahd->tty$w_ta_inahd--;

  if (ahd->tty$l_ta_get>=ahd->tty$l_ta_end)
    ahd->tty$l_ta_get=ahd->tty$l_ta_data;

}
