        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC10F220 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC10F220 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC10F220
;       2. LIST directive in the source file
;               LIST   P=PIC10F220
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __10F220
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
ADCON0           EQU  H'0007'
ADRES            EQU  H'0008'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
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


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
ANS0             EQU  H'0006'
ANS1             EQU  H'0007'

NOT_DONE         EQU  H'0001'


;----- ADRES Bits -----------------------------------------------------
ADRES0           EQU  H'0000'
ADRES1           EQU  H'0001'
ADRES2           EQU  H'0002'
ADRES3           EQU  H'0003'
ADRES4           EQU  H'0004'
ADRES5           EQU  H'0005'
ADRES6           EQU  H'0006'
ADRES7           EQU  H'0007'



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



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'001F'
       __BADRAM  H'0009'-H'000F'

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
_IOSCFS_4MHZ         EQU  H'0FFE'    ; 4 MHz
_IOSCFS_8MHZ         EQU  H'0FFF'    ; 8 MHz

_IOFSCS_4MHZ         EQU  H'0FFE'    ; 4 MHz
_IOFSCS_8MHZ         EQU  H'0FFF'    ; 8 MHz

_MCPU_ON             EQU  H'0FFD'    ; Pull-up enabled
_MCPU_OFF            EQU  H'0FFF'    ; Pull-up disabled

_WDTE_OFF            EQU  H'0FFB'    ; WDT disabled
_WDT_OFF             EQU  H'0FFB'    ; WDT disabled
_WDTE_ON             EQU  H'0FFF'    ; WDT enabled
_WDT_ON              EQU  H'0FFF'    ; WDT enabled

_CP_ON               EQU  H'0FF7'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FEF'    ; GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'0FFF'    ; GP3/MCLR pin function is MCLR


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'100'
_IDLOC1          EQU  H'101'
_IDLOC2          EQU  H'102'
_IDLOC3          EQU  H'103'

        LIST
