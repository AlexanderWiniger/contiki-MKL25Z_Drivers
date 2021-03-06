/* ###################################################################
**     Filename    : Events.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-12, 09:30, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Led_Green.h"
#include "LEDpin2.h"
#include "BitIoLdd2.h"
#include "Led_Yellow.h"
#include "LEDpin3.h"
#include "BitIoLdd3.h"
#include "CC_VREG_EN.h"
#include "BitIoLdd4.h"
#include "CC_RESET.h"
#include "BitIoLdd5.h"
#include "CC_CSN.h"
#include "BitIoLdd6.h"
#include "CC_CLK.h"
#include "BitIoLdd7.h"
#include "CC_FIFO.h"
#include "BitIoLdd8.h"
#include "CC_CCA.h"
#include "BitIoLdd9.h"
#include "CC_SFD.h"
#include "BitIoLdd10.h"
#include "INT_TPM0.h"
#include "INT_SysTick.h"
#include "EE24LC256.h"
#include "MPL_RST.h"
#include "BitIoLdd12.h"
#include "MPL_SHDN.h"
#include "BitIoLdd13.h"
#include "WAIT1.h"
#include "GI2C1.h"
#include "I2C0.h"
#include "CS1.h"
#include "UTIL1.h"
#include "WP.h"
#include "BitIoLdd1.h"
#include "INT_LPTimer.h"
#include "INT_DMA0.h"
#include "INT_PORTD.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnLLSWakeUpINT (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
*/
/*!
**     @brief
**         This event is called when Low Leakage WakeUp interrupt
**         occurs. LLWU flags indicating source of the wakeup can be
**         obtained by calling the [GetLLSWakeUpFlags] method. Flags
**         indicating the external pin wakeup source are automatically
**         cleared after this event is executed. It is responsibility
**         of user to clear flags corresponding to internal modules.
**         This event is automatically enabled when [LLWU interrupt
**         request] is enabled.
*/
/* ===================================================================*/
void Cpu_OnLLSWakeUpINT(void);

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
