        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC12F519 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC12F519 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC12F519
;       2. LIST directive in the source file
;               LIST   P=PIC12F519
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __12F519
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

RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'


;----- PORTB Bits -----------------------------------------------------
GP0              EQU  H'0000'
GP1              EQU  H'0001'
GP2              EQU  H'0002'
GP3              EQU  H'0003'
GP4              EQU  H'0004'
GP5              EQU  H'0005'

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
NOT_GPPU         EQU  H'0006'
NOT_GPWU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISB Bits -----------------------------------------------------
TRISGPIO0        EQU  H'0000'
TRISGPIO1        EQU  H'0001'
TRISGPIO2        EQU  H'0002'
TRISGPIO3        EQU  H'0003'
TRISGPIO4        EQU  H'0004'
TRISGPIO5        EQU  H'0005'

TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'


;----- TRISGPIO Bits -----------------------------------------------------
TRISGPIO0        EQU  H'0000'
TRISGPIO1        EQU  H'0001'
TRISGPIO2        EQU  H'0002'
TRISGPIO3        EQU  H'0003'
TRISGPIO4        EQU  H'0004'
TRISGPIO5        EQU  H'0005'

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
_FOSC_LP             EQU  H'0FFC'    ; LP Osc With 18 ms DRT
_LP_OSC              EQU  H'0FFC'    ; LP Osc With 18 ms DRT
_FOSC_XT             EQU  H'0FFD'    ; XT Osc With 18 ms DRT
_XT_OSC              EQU  H'0FFD'    ; XT Osc With 18 ms DRT
_FOSC_INTRC          EQU  H'0FFE'    ; INTRC With 1 ms DRT
_IntRC_OSC           EQU  H'0FFE'    ; INTRC With 1 ms DRT
_FOSC_EXTRC          EQU  H'0FFF'    ; EXTRC With 1 ms DRT
_ExtRC_OSC           EQU  H'0FFF'    ; EXTRC With 1 ms DRT

_WDTE_OFF            EQU  H'0FFB'    ; Disabled
_WDTE_ON             EQU  H'0FFF'    ; Enabled

_CP_ON               EQU  H'0FF7'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FEF'    ; RB3/MCLR Functions as RB3
_MCLRE_ON            EQU  H'0FFF'    ; RB3/MCLR Functions as MCLR

_IOSCFS_4MHz         EQU  H'0FDF'    ; 4 MHz INTOSC Speed
_IOSCFS_8MHz         EQU  H'0FFF'    ; 8 MHz INTOSC Speed

_CPDF_ON             EQU  H'0FBF'    ; Code protection on
_CPDF_OFF            EQU  H'0FFF'    ; Code protection off


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'440'
_IDLOC1          EQU  H'441'
_IDLOC2          EQU  H'442'
_IDLOC3          EQU  H'443'

        LIST
