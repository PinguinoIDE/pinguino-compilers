        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC12F617 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC12F617 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC12F617
;       2. LIST directive in the source file
;               LIST   P=PIC12F617
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __12F617
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
GPIO             EQU  H'0005'
PORTA            EQU  H'0005'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
CCPR1            EQU  H'0013'
CCPR1L           EQU  H'0013'
CCPR1H           EQU  H'0014'
CCP1CON          EQU  H'0015'
PWM1CON          EQU  H'0016'
ECCPAS           EQU  H'0017'
VRCON            EQU  H'0019'
CMCON0           EQU  H'001A'
CMCON1           EQU  H'001C'
ADRESH           EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISIO           EQU  H'0085'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
OSCTUNE          EQU  H'0090'
PR2              EQU  H'0092'
APFCON           EQU  H'0093'
WPU              EQU  H'0095'
WPUA             EQU  H'0095'
IOC              EQU  H'0096'
IOCA             EQU  H'0096'
PMCON1           EQU  H'0098'
PMCON2           EQU  H'0099'
PMADRL           EQU  H'009A'
PMADRH           EQU  H'009B'
PMDATL           EQU  H'009C'
PMDATH           EQU  H'009D'
ADRESL           EQU  H'009E'
ANSEL            EQU  H'009F'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
IRP              EQU  H'0007'

RP0              EQU  H'0005'
RP1              EQU  H'0006'


;----- GPIO Bits -----------------------------------------------------
GP0              EQU  H'0000'
GP1              EQU  H'0001'
GP2              EQU  H'0002'
GP3              EQU  H'0003'
GP4              EQU  H'0004'
GP5              EQU  H'0005'

GPIO0            EQU  H'0000'
GPIO1            EQU  H'0001'
GPIO2            EQU  H'0002'
GPIO3            EQU  H'0003'
GPIO4            EQU  H'0004'
GPIO5            EQU  H'0005'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'


;----- PORTA Bits -----------------------------------------------------
GP0              EQU  H'0000'
GP1              EQU  H'0001'
GP2              EQU  H'0002'
GP3              EQU  H'0003'
GP4              EQU  H'0004'
GP5              EQU  H'0005'

GPIO0            EQU  H'0000'
GPIO1            EQU  H'0001'
GPIO2            EQU  H'0002'
GPIO3            EQU  H'0003'
GPIO4            EQU  H'0004'
GPIO5            EQU  H'0005'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'


;----- INTCON Bits -----------------------------------------------------
GPIF             EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
GPIE             EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

TMR0IF           EQU  H'0002'
TMR0IE           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CMIF             EQU  H'0003'
CCP1IF           EQU  H'0005'
ADIF             EQU  H'0006'

C1IF             EQU  H'0003'
CCPIF            EQU  H'0005'

ECCPIF           EQU  H'0005'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'
T1GINV           EQU  H'0007'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- CCP1CON Bits -----------------------------------------------------
P1M              EQU  H'0007'

CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DCB0             EQU  H'0004'
DCB1             EQU  H'0005'


;----- PWM1CON Bits -----------------------------------------------------
PRSEN            EQU  H'0007'

PDC0             EQU  H'0000'
PDC1             EQU  H'0001'
PDC2             EQU  H'0002'
PDC3             EQU  H'0003'
PDC4             EQU  H'0004'
PDC5             EQU  H'0005'
PDC6             EQU  H'0006'


;----- ECCPAS Bits -----------------------------------------------------
ECCPASE          EQU  H'0007'

PSSBD0           EQU  H'0000'
PSSBD1           EQU  H'0001'
PSSAC0           EQU  H'0002'
PSSAC1           EQU  H'0003'
ECCPAS0          EQU  H'0004'
ECCPAS1          EQU  H'0005'
ECCPAS2          EQU  H'0006'


;----- VRCON Bits -----------------------------------------------------
FVREN            EQU  H'0004'
VRR              EQU  H'0005'
CMVREN           EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'
C1VREN           EQU  H'0007'


;----- CMCON0 Bits -----------------------------------------------------
CMCH             EQU  H'0000'
CMR              EQU  H'0002'
CMPOL            EQU  H'0004'
CMOE             EQU  H'0005'
COUT             EQU  H'0006'
CMON             EQU  H'0007'

C1CH             EQU  H'0000'
C1R              EQU  H'0002'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CMCON1 Bits -----------------------------------------------------
CMSYNC           EQU  H'0000'
T1GSS            EQU  H'0001'
CMHYS            EQU  H'0003'
T1ACS            EQU  H'0004'

C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0003'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
VCFG             EQU  H'0006'
ADFM             EQU  H'0007'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_GPPU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISA Bits -----------------------------------------------------
TRISIO0          EQU  H'0000'
TRISIO1          EQU  H'0001'
TRISIO2          EQU  H'0002'
TRISIO3          EQU  H'0003'
TRISIO4          EQU  H'0004'
TRISIO5          EQU  H'0005'

TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'


;----- TRISIO Bits -----------------------------------------------------
TRISIO0          EQU  H'0000'
TRISIO1          EQU  H'0001'
TRISIO2          EQU  H'0002'
TRISIO3          EQU  H'0003'
TRISIO4          EQU  H'0004'
TRISIO5          EQU  H'0005'

TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CMIE             EQU  H'0003'
CCP1IE           EQU  H'0005'
ADIE             EQU  H'0006'

C1IE             EQU  H'0003'
CCPIE            EQU  H'0005'

ECCPIE           EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'


;----- APFCON Bits -----------------------------------------------------
P1ASEL           EQU  H'0000'
P1BSEL           EQU  H'0001'
T1GSEL           EQU  H'0004'


;----- WPU Bits -----------------------------------------------------
WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'

WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- WPUA Bits -----------------------------------------------------
WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'

WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- IOC Bits -----------------------------------------------------
IOC0             EQU  H'0000'
IOC1             EQU  H'0001'
IOC2             EQU  H'0002'
IOC3             EQU  H'0003'
IOC4             EQU  H'0004'
IOC5             EQU  H'0005'

IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'


;----- IOCA Bits -----------------------------------------------------
IOC0             EQU  H'0000'
IOC1             EQU  H'0001'
IOC2             EQU  H'0002'
IOC3             EQU  H'0003'
IOC4             EQU  H'0004'
IOC5             EQU  H'0005'

IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'


;----- PMADRL Bits -----------------------------------------------------
PMADRL0          EQU  H'0000'
PMADRL1          EQU  H'0001'
PMADRL2          EQU  H'0002'
PMADRL3          EQU  H'0003'
PMADRL4          EQU  H'0004'
PMADRL5          EQU  H'0005'
PMADRL6          EQU  H'0006'
PMADRL7          EQU  H'0007'


;----- PMADRH Bits -----------------------------------------------------
PMADRH0          EQU  H'0000'
PMADRH1          EQU  H'0001'
PMADRH2          EQU  H'0002'


;----- PMDATL Bits -----------------------------------------------------
PMDATL0          EQU  H'0000'
PMDATL1          EQU  H'0001'
PMDATL2          EQU  H'0002'
PMDATL3          EQU  H'0003'
PMDATL4          EQU  H'0004'
PMDATL5          EQU  H'0005'
PMDATL6          EQU  H'0006'
PMDATL7          EQU  H'0007'


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'00FF'
       __BADRAM  H'0006'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'0018'
       __BADRAM  H'001B'
       __BADRAM  H'001D'
       __BADRAM  H'0086'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'008F'
       __BADRAM  H'0091'
       __BADRAM  H'0094'
       __BADRAM  H'0097'
       __BADRAM  H'00C0'-H'00EF'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG            2007h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG          EQU  H'2007'

;----- CONFIG Options --------------------------------------------------
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/AN3/T1G/OSC2/CLKOUT
_FOSC_EC             EQU  H'3FFB'    ; EC: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, CLKIN on RA5/T1CKI/OSC1/CLKIN
_EC_OSC              EQU  H'3FFB'    ; EC: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, CLKIN on RA5/T1CKI/OSC1/CLKIN
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, I/O function on RA5/T1CKI/OSC1/CLKIN
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, I/O function on RA5/T1CKI/OSC1/CLKIN
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/AN3/T1G/OSC2/CLKOUT, I/O function on RA5/T1CKI/OSC1/CLKIN
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/AN3/T1G/OSC2/CLKOUT, I/O function on RA5/T1CKI/OSC1/CLKIN
_FOSC_EXTRCIO        EQU  H'3FFE'    ; EXTRCIO oscillator: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, RC on RA5/T1CKI/OSC1/CLKIN
_EXTRC_OSC_NOCLKOUT  EQU  H'3FFE'    ; EXTRCIO oscillator: I/O function on RA4/AN3/T1G/OSC2/CLKOUT, RC on RA5/T1CKI/OSC1/CLKIN
_FOSC_EXTRCCLK       EQU  H'3FFF'    ; EXTRC oscillator: CLKOUT function on RA4/AN3/T1G/OSC2/CLKOUT, RC on RA5/T1CKI/OSC1/CLKIN
_EXTRC_OSC_CLKOUT    EQU  H'3FFF'    ; EXTRC oscillator: CLKOUT function on RA4/AN3/T1G/OSC2/CLKOUT, RC on RA5/T1CKI/OSC1/CLKIN

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDT_OFF             EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; MCLR pin is alternate function, MCLR function is internally disabled
_MCLRE_ON            EQU  H'3FFF'    ; MCLR pin is MCLR function and weak internal pull-up is enabled

_CP_ON               EQU  H'3FBF'    ; Program memory is external read and write protected
_CP_OFF              EQU  H'3FFF'    ; Program memory is not code protected

_IOSCFS_4MHZ         EQU  H'3F7F'    ; 4 MHz
_IOSCFS_8MHZ         EQU  H'3FFF'    ; 8 MHz

_BOREN_OFF           EQU  H'3CFF'    ; BOR disabled
_BOR_OFF             EQU  H'3CFF'    ; BOR disabled
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOR_NSLEEP          EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BOR_ON              EQU  H'3FFF'    ; BOR enabled

_WRT_ALL             EQU  H'33FF'    ; 000h to 7FFh write protected, entire program memory is write protected.
_WRT_HALF            EQU  H'37FF'    ; 000h to 3FFh write protected, 400h to 7FFh may be modified by PMCON1 control
_WRT_BOOT            EQU  H'3BFF'    ; 000h to 1FFh write protected, 200h to 7FFh may be modified by PMCON1 control
_WRT_OFF             EQU  H'3FFF'    ; Write protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
