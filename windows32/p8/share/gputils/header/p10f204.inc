        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC10F204 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC10F204 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC10F204
;       2. LIST directive in the source file
;               LIST   P=PIC10F204
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __10F204
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF



;==========================================================================
;
;       Register Definitions
;
;==========================================================================

W                EQU  H'0000'
F                EQU  H'0001'

;----- Register Files -----------------------------------------------------

;-----Bank0------------------
INDF             EQU  H'0000'
TMR0             EQU  H'0001'
PCL              EQU  H'0002'
STATUS           EQU  H'0003'
FSR              EQU  H'0004'
OSCCAL           EQU  H'0005'
GPIO             EQU  H'0006'
CMCON0           EQU  H'0007'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
CWUF             EQU  H'0006'
GPWUF            EQU  H'0007'


;----- OSCCAL Bits -----------------------------------------------------
FOSC4            EQU  H'0000'

CAL0             EQU  H'0001'
CAL1             EQU  H'0002'
CAL2             EQU  H'0003'
CAL3             EQU  H'0004'
CAL4             EQU  H'0005'
CAL5             EQU  H'0006'
CAL6             EQU  H'0007'


;----- GPIO Bits -----------------------------------------------------
GP0              EQU  H'0000'
GP1              EQU  H'0001'
GP2              EQU  H'0002'
GP3              EQU  H'0003'


;----- CMCON0 Bits -----------------------------------------------------
NOT_CWU          EQU  H'0000'
CPREF            EQU  H'0001'
CNREF            EQU  H'0002'
CMPON            EQU  H'0003'
NOT_CMPT0CS      EQU  H'0004'
POL              EQU  H'0005'
NOT_COUTEN       EQU  H'0006'
CMPOUT           EQU  H'0007'



;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
NOT_GPPU         EQU  H'0006'
NOT_GPWU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISIO Bits -----------------------------------------------------
TRISIO0          EQU  H'0000'
TRISIO1          EQU  H'0001'
TRISIO2          EQU  H'0002'
TRISIO3          EQU  H'0003'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'001F'
       __BADRAM  H'0008'-H'000F'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG             FFFh
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG          EQU  H'FFF'

;----- CONFIG Options --------------------------------------------------
_OSC_IntRC           EQU  H'0FFF'    ; This is the only option. It is here for backward compatibility
_IntRC_OSC           EQU  H'0FFF'    ; This is the only option. It is here for backward compatibility

_WDTE_OFF            EQU  H'0FFB'    ; WDT disabled
_WDT_OFF             EQU  H'0FFB'    ; WDT disabled
_WDTE_ON             EQU  H'0FFF'    ; WDT enabled
_WDT_ON              EQU  H'0FFF'    ; WDT enabled

_CP_ON               EQU  H'0FF7'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FEF'    ; GP3/MCLR pin fuction is digital I/O, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'0FFF'    ; GP3/MCLR pin function  is MCLR


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'100'
_IDLOC1          EQU  H'101'
_IDLOC2          EQU  H'102'
_IDLOC3          EQU  H'103'

        LIST
