        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM MCV08A processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the MCV08A microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /MCV08A
;       2. LIST directive in the source file
;               LIST   P=MCV08A
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __MCV08A
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
CM1CON0          EQU  H'0007'
ADCON0           EQU  H'0008'
ADRES            EQU  H'0009'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
PA0              EQU  H'0005'
CWUF             EQU  H'0006'
GPWUF            EQU  H'0007'


;----- OSCCAL Bits -----------------------------------------------------
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
GP4              EQU  H'0004'
GP5              EQU  H'0005'


;----- CM1CON0 Bits -----------------------------------------------------
NOT_C1WU         EQU  H'0000'
C1PREF           EQU  H'0001'
C1NREF           EQU  H'0002'
C1ON             EQU  H'0003'
NOT_C1T0CS       EQU  H'0004'
C1POL            EQU  H'0005'
NOT_C1OUTEN      EQU  H'0006'
C1OUT            EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ANS0             EQU  H'0006'
ANS1             EQU  H'0007'

NOT_DONE         EQU  H'0001'



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
TRISIO4          EQU  H'0004'
TRISIO5          EQU  H'0005'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'003F'

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
_OSC_LP              EQU  H'0FFC'    ; LP oscillator with 18 ms DRT
_LP_OSC              EQU  H'0FFC'    ; LP oscillator with 18 ms DRT
_OSC_XT              EQU  H'0FFD'    ; XT oscillator with 18 ms DRT
_XT_OSC              EQU  H'0FFD'    ; XT oscillator with 18 ms DRT
_OSC_IntRC           EQU  H'0FFE'    ; INTOSC with 1.125 ms DRT
_IntRC_OSC           EQU  H'0FFE'    ; INTOSC with 1.125 ms DRT
_OSC_ExtRC           EQU  H'0FFF'    ; EXTRC with 1.125 ms DRT
_ExtRC_OSC           EQU  H'0FFF'    ; EXTRC with 1.125 ms DRT

_WDT_OFF             EQU  H'0FFB'    ; WDT disabled
_WDT_ON              EQU  H'0FFF'    ; WDT enabled

_CP_ON               EQU  H'0FF7'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FEF'    ; GP3/MCLR pin functions as GP3, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'0FFF'    ; GP3/MCLR Functions as MCLR

_IOSCFS_OFF          EQU  H'0FDF'    ; 4 MHz INTOSC Speed
_IOSCFS_ON           EQU  H'0FFF'    ; 8 MHz INTOSC Speed


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'400'
_IDLOC1          EQU  H'401'
_IDLOC2          EQU  H'402'
_IDLOC3          EQU  H'403'

        LIST
