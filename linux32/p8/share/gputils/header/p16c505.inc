        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16C505 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16C505 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16C505
;       2. LIST directive in the source file
;               LIST   P=PIC16C505
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16C505
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
PORTC            EQU  H'0007'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
PA0              EQU  H'0005'
RBWUF            EQU  H'0007'


;----- OSCCAL Bits -----------------------------------------------------
CAL0             EQU  H'0002'
CAL1             EQU  H'0003'
CAL2             EQU  H'0004'
CAL3             EQU  H'0005'
CAL4             EQU  H'0006'
CAL5             EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'



;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
NOT_RBPU         EQU  H'0006'
NOT_RBWU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'


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
       __MAXRAM  H'007F'

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
_OSC_LP              EQU  H'0FF8'    ; LP oscillator
_LP_OSC              EQU  H'0FF8'    ; LP oscillator
_OSC_XT              EQU  H'0FF9'    ; XT oscillator
_XT_OSC              EQU  H'0FF9'    ; XT oscillator
_OSC_HS              EQU  H'0FFA'    ; HS oscillator
_HS_OSC              EQU  H'0FFA'    ; HS oscillator
_OSC_IntRC_RB4EN     EQU  H'0FFC'    ; Internal RC No Clock
_IntRC_OSC_RB4EN     EQU  H'0FFC'    ; Internal RC No Clock
_OSC_IntRC_CLKOUTEN  EQU  H'0FFD'    ; Internal RC Clockout
_IntRC_OSC_CLKOUTEN  EQU  H'0FFD'    ; Internal RC Clockout
_OSC_ExtRC_RB4EN     EQU  H'0FFE'    ; External RC No Clock
_ExtRC_OSC_RB4EN     EQU  H'0FFE'    ; External RC No Clock
_OSC_ExtRC_CLKOUTEN  EQU  H'0FFF'    ; External RC Clockout
_ExtRC_OSC_CLKOUTEN  EQU  H'0FFF'    ; External RC Clockout

_WDT_OFF             EQU  H'0FF7'    ; WDT disabled
_WDT_ON              EQU  H'0FFF'    ; WDT enabled

_CP_ON               EQU  H'002F'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FDF'    ; RB3/MCLR pin function is digital I/O, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'0FFF'    ; RB3/MCLR pin function is MCLR


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'400'
_IDLOC1          EQU  H'401'
_IDLOC2          EQU  H'402'
_IDLOC3          EQU  H'403'

        LIST
