        LIST

;==========================================================================
; Build date : Dec 08 2015
;  MPASM PIC10LF322 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC10LF322 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC10LF322
;       2. LIST directive in the source file
;               LIST   P=PIC10LF322
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __10LF322
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
PORTA            EQU  H'0005'
TRISA            EQU  H'0006'
LATA             EQU  H'0007'
ANSELA           EQU  H'0008'
WPUA             EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
PIE1             EQU  H'000D'
OPTION_REG       EQU  H'000E'
PCON             EQU  H'000F'
OSCCON           EQU  H'0010'
TMR2             EQU  H'0011'
PR2              EQU  H'0012'
T2CON            EQU  H'0013'
PWM1DCL          EQU  H'0014'
PWM1DCH          EQU  H'0015'
PWM1CON          EQU  H'0016'
PWM1CON0         EQU  H'0016'
PWM2DCL          EQU  H'0017'
PWM2DCH          EQU  H'0018'
PWM2CON          EQU  H'0019'
PWM2CON0         EQU  H'0019'
IOCAP            EQU  H'001A'
IOCAN            EQU  H'001B'
IOCAF            EQU  H'001C'
FVRCON           EQU  H'001D'
ADRES            EQU  H'001E'
ADCON            EQU  H'001F'
PMADR            EQU  H'0020'
PMADRL           EQU  H'0020'
PMADRH           EQU  H'0021'
PMDAT            EQU  H'0022'
PMDATL           EQU  H'0022'
PMDATH           EQU  H'0023'
PMCON1           EQU  H'0024'
PMCON2           EQU  H'0025'
CLKRCON          EQU  H'0026'
NCO1ACC          EQU  H'0027'
NCO1ACCL         EQU  H'0027'
NCO1ACCH         EQU  H'0028'
NCO1ACCU         EQU  H'0029'
NCO1INC          EQU  H'002A'
NCO1INCL         EQU  H'002A'
NCO1INCH         EQU  H'002B'
NCO1INCU         EQU  H'002C'
NCO1CON          EQU  H'002D'
NCO1CLK          EQU  H'002E'
WDTCON           EQU  H'0030'
CLC1CON          EQU  H'0031'
CLC1SEL0         EQU  H'0032'
CLC1SEL1         EQU  H'0033'
CLC1POL          EQU  H'0034'
CLC1GLS0         EQU  H'0035'
CLC1GLS1         EQU  H'0036'
CLC1GLS2         EQU  H'0037'
CLC1GLS3         EQU  H'0038'
CWG1CON0         EQU  H'0039'
CWG1CON1         EQU  H'003A'
CWG1CON2         EQU  H'003B'
CWG1DBR          EQU  H'003C'
CWG1DBF          EQU  H'003D'
VREGCON          EQU  H'003E'
BORCON           EQU  H'003F'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
RP0              EQU  H'0005'
RP1              EQU  H'0006'
IRP              EQU  H'0007'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'


;----- PCLATH Bits -----------------------------------------------------
PCLH0            EQU  H'0000'


;----- INTCON Bits -----------------------------------------------------
IOCIF            EQU  H'0000'
INTF             EQU  H'0001'
TMR0IF           EQU  H'0002'
IOCIE            EQU  H'0003'
INTE             EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR2IF           EQU  H'0001'
CLC1IF           EQU  H'0003'
NCO1IF           EQU  H'0004'
ADIF             EQU  H'0006'


;----- PIE1 Bits -----------------------------------------------------
TMR2IE           EQU  H'0001'
CLC1IE           EQU  H'0003'
NCO1IE           EQU  H'0004'
ADIE             EQU  H'0006'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- OSCCON Bits -----------------------------------------------------
HFIOFS           EQU  H'0000'
LFIOFR           EQU  H'0001'
HFIOFR           EQU  H'0003'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'
IRCF2            EQU  H'0006'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- PWM1DCL Bits -----------------------------------------------------
PWM1DCL0         EQU  H'0006'
PWM1DCL1         EQU  H'0007'


;----- PWM1DCH Bits -----------------------------------------------------
PWM1DCH0         EQU  H'0000'
PWM1DCH1         EQU  H'0001'
PWM1DCH2         EQU  H'0002'
PWM1DCH3         EQU  H'0003'
PWM1DCH4         EQU  H'0004'
PWM1DCH5         EQU  H'0005'
PWM1DCH6         EQU  H'0006'
PWM1DCH7         EQU  H'0007'


;----- PWM1CON Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM1CON0 Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM2DCL Bits -----------------------------------------------------
PWM2DCL0         EQU  H'0006'
PWM2DCL1         EQU  H'0007'


;----- PWM2DCH Bits -----------------------------------------------------
PWM2DCH0         EQU  H'0000'
PWM2DCH1         EQU  H'0001'
PWM2DCH2         EQU  H'0002'
PWM2DCH3         EQU  H'0003'
PWM2DCH4         EQU  H'0004'
PWM2DCH5         EQU  H'0005'
PWM2DCH6         EQU  H'0006'
PWM2DCH7         EQU  H'0007'


;----- PWM2CON Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- PWM2CON0 Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'


;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'


;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'


;----- FVRCON Bits -----------------------------------------------------
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'

ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'


;----- ADCON Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
ADCS0            EQU  H'0005'
ADCS1            EQU  H'0006'
ADCS2            EQU  H'0007'


;----- PMADRH Bits -----------------------------------------------------
PMADR8           EQU  H'0000'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'


;----- CLKRCON Bits -----------------------------------------------------
CLKROE           EQU  H'0006'


;----- NCO1ACCL Bits -----------------------------------------------------
NCO1ACC0         EQU  H'0000'
NCO1ACC1         EQU  H'0001'
NCO1ACC2         EQU  H'0002'
NCO1ACC3         EQU  H'0003'
NCO1ACC4         EQU  H'0004'
NCO1ACC5         EQU  H'0005'
NCO1ACC6         EQU  H'0006'
NCO1ACC7         EQU  H'0007'


;----- NCO1ACCH Bits -----------------------------------------------------
NCO1ACC8         EQU  H'0000'
NCO1ACC9         EQU  H'0001'
NCO1ACC10        EQU  H'0002'
NCO1ACC11        EQU  H'0003'
NCO1ACC12        EQU  H'0004'
NCO1ACC13        EQU  H'0005'
NCO1ACC14        EQU  H'0006'
NCO1ACC15        EQU  H'0007'


;----- NCO1ACCU Bits -----------------------------------------------------
NCO1ACC16        EQU  H'0000'
NCO1ACC17        EQU  H'0001'
NCO1ACC18        EQU  H'0002'
NCO1ACC19        EQU  H'0003'


;----- NCO1INCL Bits -----------------------------------------------------
NCO1INC0         EQU  H'0000'
NCO1INC1         EQU  H'0001'
NCO1INC2         EQU  H'0002'
NCO1INC3         EQU  H'0003'
NCO1INC4         EQU  H'0004'
NCO1INC5         EQU  H'0005'
NCO1INC6         EQU  H'0006'
NCO1INC7         EQU  H'0007'


;----- NCO1INCH Bits -----------------------------------------------------
NCO1INC8         EQU  H'0000'
NCO1INC9         EQU  H'0001'
NCO1INC10        EQU  H'0002'
NCO1INC11        EQU  H'0003'
NCO1INC12        EQU  H'0004'
NCO1INC13        EQU  H'0005'
NCO1INC14        EQU  H'0006'
NCO1INC15        EQU  H'0007'


;----- NCO1CON Bits -----------------------------------------------------
N1PFM            EQU  H'0000'
N1POL            EQU  H'0004'
N1OUT            EQU  H'0005'
N1OE             EQU  H'0006'
N1EN             EQU  H'0007'


;----- NCO1CLK Bits -----------------------------------------------------
N1CKS0           EQU  H'0000'
N1CKS1           EQU  H'0001'
N1PWS0           EQU  H'0005'
N1PWS1           EQU  H'0006'
N1PWS2           EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'
WDTPS4           EQU  H'0005'


;----- CLC1CON Bits -----------------------------------------------------
LC1MODE0         EQU  H'0000'
LC1MODE1         EQU  H'0001'
LC1MODE2         EQU  H'0002'
LC1INTN          EQU  H'0003'
LC1INTP          EQU  H'0004'
LC1OUT           EQU  H'0005'
LC1OE            EQU  H'0006'
LC1EN            EQU  H'0007'

LCMODE0          EQU  H'0000'
LCMODE1          EQU  H'0001'
LCMODE2          EQU  H'0002'
LCINTN           EQU  H'0003'
LCINTP           EQU  H'0004'
LCOUT            EQU  H'0005'
LCOE             EQU  H'0006'
LCEN             EQU  H'0007'



;----- CLC1SEL0 Bits -----------------------------------------------------
LC1D1S0          EQU  H'0000'
LC1D1S1          EQU  H'0001'
LC1D1S2          EQU  H'0002'
LC1D2S0          EQU  H'0004'
LC1D2S1          EQU  H'0005'
LC1D2S2          EQU  H'0006'

D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D2S0             EQU  H'0004'
D2S1             EQU  H'0005'
D2S2             EQU  H'0006'



;----- CLC1SEL1 Bits -----------------------------------------------------
LC1D3S0          EQU  H'0000'
LC1D3S1          EQU  H'0001'
LC1D3S2          EQU  H'0002'
LC1D4S0          EQU  H'0004'
LC1D4S1          EQU  H'0005'
LC1D4S2          EQU  H'0006'

D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D4S0             EQU  H'0004'
D4S1             EQU  H'0005'
D4S2             EQU  H'0006'



;----- CLC1POL Bits -----------------------------------------------------
LC1G1POL         EQU  H'0000'
LC1G2POL         EQU  H'0001'
LC1G3POL         EQU  H'0002'
LC1G4POL         EQU  H'0003'
LC1POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL              EQU  H'0007'


;----- CLC1GLS0 Bits -----------------------------------------------------
LC1G1D1N         EQU  H'0000'
LC1G1D1T         EQU  H'0001'
LC1G1D2N         EQU  H'0002'
LC1G1D2T         EQU  H'0003'
LC1G1D3N         EQU  H'0004'
LC1G1D3T         EQU  H'0005'
LC1G1D4N         EQU  H'0006'
LC1G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS1 Bits -----------------------------------------------------
LC1G2D1N         EQU  H'0000'
LC1G2D1T         EQU  H'0001'
LC1G2D2N         EQU  H'0002'
LC1G2D2T         EQU  H'0003'
LC1G2D3N         EQU  H'0004'
LC1G2D3T         EQU  H'0005'
LC1G2D4N         EQU  H'0006'
LC1G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS2 Bits -----------------------------------------------------
LC1G3D1N         EQU  H'0000'
LC1G3D1T         EQU  H'0001'
LC1G3D2N         EQU  H'0002'
LC1G3D2T         EQU  H'0003'
LC1G3D3N         EQU  H'0004'
LC1G3D3T         EQU  H'0005'
LC1G3D4N         EQU  H'0006'
LC1G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS3 Bits -----------------------------------------------------
LC1G4D1N         EQU  H'0000'
LC1G4D1T         EQU  H'0001'
LC1G4D2N         EQU  H'0002'
LC1G4D2T         EQU  H'0003'
LC1G4D3N         EQU  H'0004'
LC1G4D3T         EQU  H'0005'
LC1G4D4N         EQU  H'0006'
LC1G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


;----- CWG1CON0 Bits -----------------------------------------------------
G1CS0            EQU  H'0000'
G1POLA           EQU  H'0003'
G1POLB           EQU  H'0004'
G1OEA            EQU  H'0005'
G1OEB            EQU  H'0006'
G1EN             EQU  H'0007'



;----- CWG1CON1 Bits -----------------------------------------------------
G1IS0            EQU  H'0000'
G1IS1            EQU  H'0001'

G1ASDLA0         EQU  H'0004'
G1ASDLA1         EQU  H'0005'
G1ASDLB0         EQU  H'0006'
G1ASDLB1         EQU  H'0007'


;----- CWG1CON2 Bits -----------------------------------------------------
G1ASDSFLT        EQU  H'0000'
G1ASDSCLC1       EQU  H'0001'
G1ARSEN          EQU  H'0006'
G1ASE            EQU  H'0007'


;----- CWG1DBR Bits -----------------------------------------------------
CWG1DBR0         EQU  H'0000'
CWG1DBR1         EQU  H'0001'
CWG1DBR2         EQU  H'0002'
CWG1DBR3         EQU  H'0003'
CWG1DBR4         EQU  H'0004'
CWG1DBR5         EQU  H'0005'


;----- CWG1DBF Bits -----------------------------------------------------
CWG1DBF0         EQU  H'0000'
CWG1DBF1         EQU  H'0001'
CWG1DBF2         EQU  H'0002'
CWG1DBF3         EQU  H'0003'
CWG1DBF4         EQU  H'0004'
CWG1DBF5         EQU  H'0005'


;----- VREGCON Bits -----------------------------------------------------
VREGPM0          EQU  H'0000'
VREGPM1          EQU  H'0001'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
SBOREN           EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'007F'
       __BADRAM  H'002F'

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
_CONFIG         EQU  H'2007'

;----- CONFIG Options --------------------------------------------------
_FOSC_INTOSC         EQU  H'3FFE'; INTOSC oscillator: CLKIN function disabled
_FOSC_EC             EQU  H'3FFF'; EC: CLKIN function enabled

_BOREN_OFF           EQU  H'3FF9'; Brown-out Reset disabled
_BOREN_SBODEN        EQU  H'3FFB'; Brown-out Reset controlled by the SBOREN bit in the BORCON register
_BOREN_NSLEEP        EQU  H'3FFD'; Brown-out Reset enabled while running and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'; Brown-out Reset enabled

_WDTE_OFF            EQU  H'3FE7'; WDT disabled
_WDTE_SWDTEN         EQU  H'3FEF'; WDT controlled by the SWDTEN bit in the WDTCON register
_WDTE_NSLEEP         EQU  H'3FF7'; WDT enabled while running and disabled in Sleep
_WDTE_ON             EQU  H'3FFF'; WDT enabled

_PWRTE_ON            EQU  H'3FDF'; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'; PWRT disabled

_MCLRE_OFF           EQU  H'3FBF'; MCLR pin function is digital input, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'3FFF'; MCLR pin function is MCLR

_CP_ON               EQU  H'3F7F'; Program memory code protection is enabled
_CP_OFF              EQU  H'3FFF'; Program memory code protection is disabled

_LVP_OFF             EQU  H'3EFF'; High-voltage on MCLR/VPP must be used for programming
_LVP_ON              EQU  H'3FFF'; Low-voltage programming enabled

_LPBOR_OFF           EQU  H'3DFF'; BOR disabled
_LPBOR_ON            EQU  H'3FFF'; BOR enabled

_BORV_HI             EQU  H'3BFF'; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_27             EQU  H'3BFF'; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO             EQU  H'3FFF'; Brown-out Reset Voltage (Vbor), low trip point selected.
_BORV_19             EQU  H'3FFF'; Brown-out Reset Voltage (Vbor), low trip point selected.

_WRT_ALL             EQU  H'27FF'; 000h to 1FFh write protected, no addresses may be modified by PMCON control
_WRT_HALF            EQU  H'2FFF'; 000h to 0FFh write protected, 100h to 1FFh may be modified by PMCON control
_WRT_BOOT            EQU  H'37FF'; 000h to 07Fh write protected, 080h to 1FFh may be modified by PMCON control
_WRT_OFF             EQU  H'3FFF'; Write protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
