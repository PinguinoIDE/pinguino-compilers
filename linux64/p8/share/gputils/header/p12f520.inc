        LIST

;==========================================================================
;  MPASM PIC12F520 processor include
; 
;  (c) Copyright 1999-2014 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC12F520 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC12F520
;       2. LIST directive in the source file
;               LIST   P=PIC12F520
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __12F520
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
PORTB            EQU  H'0006'

;-----Bank1------------------
EECON            EQU  H'0021'
EEDATA           EQU  H'0025'
EEADR            EQU  H'0026'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
PA0              EQU  H'0005'
PA1              EQU  H'0006'
RBWUF            EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'


;----- EECON Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'



;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
NOT_RBPU         EQU  H'0006'
NOT_RBWU         EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'00FF'

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
_OSC_LP              EQU  H'0FFC'    ; LP Osc With 18 ms DRT
_OSC_XT              EQU  H'0FFD'    ; XT Osc With 18 ms DRT
_OSC_INTRC           EQU  H'0FFE'    ; INTRC With 1 ms DRT
_OSC_EXTRC           EQU  H'0FFF'    ; EXTRC With 1 ms DRT

_WDT_OFF             EQU  H'0FFB'    ; WDT disabled
_WDT_ON              EQU  H'0FFF'    ; WDT enabled

_CP_ON               EQU  H'0FF7'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLR_OFF            EQU  H'0FEF'    ; RB3/MCLR Functions as RB3
_MCLR_ON             EQU  H'0FFF'    ; RB3/MCLR Functions as MCLR

_IOSCFS_4MHZ         EQU  H'0FDF'    ; 4 MHz INTOSC Speed
_IOSCFS_8MHZ         EQU  H'0FFF'    ; 8 MHz INTOSC Speed

_CPDF_ON             EQU  H'0FBF'    ; Code protection on
_CPDF_OFF            EQU  H'0FFF'    ; Code protection off


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'640'
_IDLOC1          EQU  H'641'
_IDLOC2          EQU  H'642'
_IDLOC3          EQU  H'643'

        LIST
