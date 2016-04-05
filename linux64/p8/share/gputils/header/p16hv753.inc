        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16HV753 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16HV753 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16HV753
;       2. LIST directive in the source file
;               LIST   P=PIC16HV753
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16HV753
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
PORTC            EQU  H'0007'
IOCAF            EQU  H'0008'
IOCCF            EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
PIR2             EQU  H'000D'
TMR1             EQU  H'000F'
TMR1L            EQU  H'000F'
TMR1H            EQU  H'0010'
T1CON            EQU  H'0011'
T1GCON           EQU  H'0012'
CCPR1            EQU  H'0013'
CCPR1L           EQU  H'0013'
CCPR1H           EQU  H'0014'
CCP1CON          EQU  H'0015'
ADRES            EQU  H'001C'
ADRESL           EQU  H'001C'
ADRESH           EQU  H'001D'
ADCON0           EQU  H'001E'
ADCON1           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISC            EQU  H'0087'
IOCAP            EQU  H'0088'
IOCCP            EQU  H'0089'
PIE1             EQU  H'008C'
PIE2             EQU  H'008D'
OSCCON           EQU  H'008F'
FVR1CON0         EQU  H'0090'
DAC1CON0         EQU  H'0091'
DAC1REFL         EQU  H'0092'
DAC1REFH         EQU  H'0093'
OPA1CON          EQU  H'0096'
C2CON0           EQU  H'009B'
CM2CON0          EQU  H'009B'
C2CON1           EQU  H'009C'
CM2CON1          EQU  H'009C'
C1CON0           EQU  H'009D'
CM1CON0          EQU  H'009D'
C1CON1           EQU  H'009E'
CM1CON1          EQU  H'009E'
CMOUT            EQU  H'009F'
MCOUT            EQU  H'009F'

;-----Bank2------------------
LATA             EQU  H'0105'
LATC             EQU  H'0107'
IOCAN            EQU  H'0108'
IOCCN            EQU  H'0109'
WPUA             EQU  H'010C'
WPUC             EQU  H'010D'
SLRCONC          EQU  H'010E'
PCON             EQU  H'010F'
TMR2             EQU  H'0110'
PR2              EQU  H'0111'
T2CON            EQU  H'0112'
HLTMR1           EQU  H'0113'
HLTPR1           EQU  H'0114'
HLT1CON0         EQU  H'0115'
HLT1CON1         EQU  H'0116'
HLTMR2           EQU  H'0117'
HLTPR2           EQU  H'0118'
HLT2CON0         EQU  H'0119'
HLT2CON1         EQU  H'011A'
SLPC1CON0        EQU  H'011E'
SLPCCON0         EQU  H'011E'
SLPC1CON1        EQU  H'011F'
SLPCCON1         EQU  H'011F'

;-----Bank3------------------
ANSELA           EQU  H'0185'
ANSELC           EQU  H'0187'
APFCON           EQU  H'0188'
OSCTUNE          EQU  H'0189'
PMCON1           EQU  H'018C'
PMCON2           EQU  H'018D'
PMADR            EQU  H'018E'
PMADRL           EQU  H'018E'
PMADRH           EQU  H'018F'
PMDAT            EQU  H'0190'
PMDATL           EQU  H'0190'
PMDATH           EQU  H'0191'
COG1PHR          EQU  H'0192'
COG1PHF          EQU  H'0193'
COG1BKR          EQU  H'0194'
COG1BKF          EQU  H'0195'
COG1DBR          EQU  H'0196'
COG1DBF          EQU  H'0197'
COG1CON0         EQU  H'0198'
COG1CON1         EQU  H'0199'
COG1RIS          EQU  H'019A'
COG1RSIM         EQU  H'019B'
COG1FIS          EQU  H'019C'
COG1FSIM         EQU  H'019D'
COG1ASD0         EQU  H'019E'
COG1ASD1         EQU  H'019F'

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
RA4              EQU  H'0004'
RA5              EQU  H'0005'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'


;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'


;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'


;----- INTCON Bits -----------------------------------------------------
IOCIF            EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
IOCIE            EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
HLTMR1IF         EQU  H'0002'
HLTMR2IF         EQU  H'0003'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP1IF           EQU  H'0000'
COG1IF           EQU  H'0002'
C1IF             EQU  H'0004'
C2IF             EQU  H'0005'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GGO            EQU  H'0003'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
ADFM             EQU  H'0007'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
ADPREF1          EQU  H'0000'

ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RAPU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'


;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
HLTMR1IE         EQU  H'0002'
HLTMR2IE         EQU  H'0003'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP1IE           EQU  H'0000'
COG1IE           EQU  H'0002'
C1IE             EQU  H'0004'
C2IE             EQU  H'0005'


;----- OSCCON Bits -----------------------------------------------------
LTS              EQU  H'0001'
HTS              EQU  H'0002'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'


;----- FVR1CON0 Bits -----------------------------------------------------
FVRBUFEN         EQU  H'0000'
FVROE            EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'

FVRBUSS0         EQU  H'0003'
FVRBUSS1         EQU  H'0004'


;----- DAC1CON0 Bits -----------------------------------------------------
DACOE            EQU  H'0005'
DACFM            EQU  H'0006'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'


;----- OPA1CON Bits -----------------------------------------------------
OPAUGM           EQU  H'0004'
OPAEN            EQU  H'0007'

OPA1PCH0         EQU  H'0000'
OPA1PCH1         EQU  H'0001'
OPA1NCH0         EQU  H'0002'
OPA1NCH1         EQU  H'0003'


;----- C2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- C2CON1 Bits -----------------------------------------------------
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0003'
C2PCH1           EQU  H'0004'
C2PCH2           EQU  H'0005'


;----- CM2CON1 Bits -----------------------------------------------------
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0003'
C2PCH1           EQU  H'0004'
C2PCH2           EQU  H'0005'


;----- C1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- C1CON1 Bits -----------------------------------------------------
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0003'
C1PCH1           EQU  H'0004'
C1PCH2           EQU  H'0005'


;----- CM1CON1 Bits -----------------------------------------------------
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0003'
C1PCH1           EQU  H'0004'
C1PCH2           EQU  H'0005'


;----- CMOUT Bits -----------------------------------------------------
MCOUT1           EQU  H'0000'
MCOUT2           EQU  H'0001'


;----- MCOUT Bits -----------------------------------------------------
MCOUT1           EQU  H'0000'
MCOUT2           EQU  H'0001'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'


;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'


;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'


;----- SLRCONC Bits -----------------------------------------------------
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- HLT1CON0 Bits -----------------------------------------------------
H1ON             EQU  H'0002'

H1CKPS0          EQU  H'0000'
H1CKPS1          EQU  H'0001'
H1OUTPS0         EQU  H'0003'
H1OUTPS1         EQU  H'0004'
H1OUTPS2         EQU  H'0005'
H1OUTPS3         EQU  H'0006'


;----- HLT1CON1 Bits -----------------------------------------------------
H1REREN          EQU  H'0000'
H1FEREN          EQU  H'0001'
H1RES            EQU  H'0006'
H1FES            EQU  H'0007'

H1ERS0           EQU  H'0002'
H1ERS1           EQU  H'0003'
H1ERS2           EQU  H'0004'


;----- HLT2CON0 Bits -----------------------------------------------------
H2ON             EQU  H'0002'

H2CKPS0          EQU  H'0000'
H2CKPS1          EQU  H'0001'
H2OUTPS0         EQU  H'0003'
H2OUTPS1         EQU  H'0004'
H2OUTPS2         EQU  H'0005'
H2OUTPS3         EQU  H'0006'


;----- HLT2CON1 Bits -----------------------------------------------------
H2REREN          EQU  H'0000'
H2FEREN          EQU  H'0001'
H2RES            EQU  H'0006'
H2FES            EQU  H'0007'

H2ERS0           EQU  H'0002'
H2ERS1           EQU  H'0003'
H2ERS2           EQU  H'0004'


;----- SLPC1CON0 Bits -----------------------------------------------------
SC1INS           EQU  H'0000'
SC1POL           EQU  H'0004'
SC1MRPE          EQU  H'0005'
SC1EN            EQU  H'0007'

SCS1TSS0         EQU  H'0002'
SCS1TSS1         EQU  H'0003'


;----- SLPCCON0 Bits -----------------------------------------------------
SC1INS           EQU  H'0000'
SC1POL           EQU  H'0004'
SC1MRPE          EQU  H'0005'
SC1EN            EQU  H'0007'

SCS1TSS0         EQU  H'0002'
SCS1TSS1         EQU  H'0003'


;----- SLPC1CON1 Bits -----------------------------------------------------
SC1RNG           EQU  H'0004'

SC1ISET0         EQU  H'0000'
SC1ISET1         EQU  H'0001'
SC1ISET2         EQU  H'0002'
SC1ISET3         EQU  H'0003'


;----- SLPCCON1 Bits -----------------------------------------------------
SC1RNG           EQU  H'0004'

SC1ISET0         EQU  H'0000'
SC1ISET1         EQU  H'0001'
SC1ISET2         EQU  H'0002'
SC1ISET3         EQU  H'0003'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'


;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'


;----- APFCON Bits -----------------------------------------------------
T1GSEL           EQU  H'0004'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'


;----- COG1PHR Bits -----------------------------------------------------
G1PHR0           EQU  H'0000'
G1PHR1           EQU  H'0001'
G1PHR2           EQU  H'0002'
G1PHR3           EQU  H'0003'


;----- COG1PHF Bits -----------------------------------------------------
G1PHF0           EQU  H'0000'
G1PHF1           EQU  H'0001'
G1PHF2           EQU  H'0002'
G1PHF3           EQU  H'0003'


;----- COG1BKR Bits -----------------------------------------------------
G1BKR0           EQU  H'0000'
G1BKR1           EQU  H'0001'
G1BKR2           EQU  H'0002'
G1BKR3           EQU  H'0003'


;----- COG1BKF Bits -----------------------------------------------------
G1BKF0           EQU  H'0000'
G1BKF1           EQU  H'0001'
G1BKF2           EQU  H'0002'
G1BKF3           EQU  H'0003'


;----- COG1DBR Bits -----------------------------------------------------
G1DBR0           EQU  H'0000'
G1DBR1           EQU  H'0001'
G1DBR2           EQU  H'0002'
G1DBR3           EQU  H'0003'


;----- COG1DBF Bits -----------------------------------------------------
G1DBF0           EQU  H'0000'
G1DBF1           EQU  H'0001'
G1DBF2           EQU  H'0002'
G1DBF3           EQU  H'0003'


;----- COG1CON0 Bits -----------------------------------------------------
G1MD             EQU  H'0000'
G1LD             EQU  H'0002'
G1POL0           EQU  H'0003'
G1POL1           EQU  H'0004'
G1OE0            EQU  H'0005'
G1OE1            EQU  H'0006'
G1EN             EQU  H'0007'


;----- COG1CON1 Bits -----------------------------------------------------
G1FDBTS          EQU  H'0006'
G1RDBTS          EQU  H'0007'

G1CS0            EQU  H'0000'
G1CS1            EQU  H'0001'


;----- COG1RIS Bits -----------------------------------------------------
G1RIC1           EQU  H'0000'
G1RIC2           EQU  H'0001'
C1RICCP1         EQU  H'0002'
G1RIFLT          EQU  H'0003'
G1RIT2M          EQU  H'0004'
G1R1HLT1         EQU  H'0005'
G1RIHLT2         EQU  H'0006'


;----- COG1RSIM Bits -----------------------------------------------------
G1RMC1           EQU  H'0000'
G1RMC2           EQU  H'0001'
G1RMCCP1         EQU  H'0002'
G1RMFLT          EQU  H'0003'
G1RTM2M          EQU  H'0004'
G1RMHLT1         EQU  H'0005'
G1RMHLT2         EQU  H'0006'


;----- COG1FIS Bits -----------------------------------------------------
G1FIC1           EQU  H'0000'
G1FIC2           EQU  H'0001'
G1FICCP1         EQU  H'0002'
G1FIFLT          EQU  H'0003'
G1FIT2M          EQU  H'0004'
G1FIHLT1         EQU  H'0005'
G1FIHLT2         EQU  H'0006'


;----- COG1FSIM Bits -----------------------------------------------------
G1FMC1           EQU  H'0000'
G1FMC2           EQU  H'0001'
G1FMCCP1         EQU  H'0002'
G1FMFLT          EQU  H'0003'
G1FMT2M          EQU  H'0004'
G1FMHLT1         EQU  H'0005'
G1FMHLT2         EQU  H'0006'


;----- COG1ASD0 Bits -----------------------------------------------------
G1ARSEN          EQU  H'0006'
G1ASDE           EQU  H'0007'

G1ASD0L0         EQU  H'0002'
G1ASD0L1         EQU  H'0003'
G1ASD1L0         EQU  H'0004'
G1ASD1L1         EQU  H'0005'


;----- COG1ASD1 Bits -----------------------------------------------------
G1ASDSFLT        EQU  H'0000'
G1ASDSC1         EQU  H'0001'
G1ASDSC2         EQU  H'0002'
G1ASDSHLT1       EQU  H'0003'
G1ASDSHLT2       EQU  H'0004'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0006'
       __BADRAM  H'000E'
       __BADRAM  H'0016'-H'001B'
       __BADRAM  H'0086'
       __BADRAM  H'008E'
       __BADRAM  H'0094'-H'0095'
       __BADRAM  H'0097'-H'009A'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'0106'
       __BADRAM  H'011B'-H'011D'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'0186'
       __BADRAM  H'01A0'-H'01EF'

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
_FOSC0_INT           EQU  H'3FFE'    ; Internal oscillator mode.  I/O function on RA5/CLKIN
_FOSC0_EC            EQU  H'3FFF'    ; EC oscillator mode.  CLKIN function on RA5/CLKIN

_WDTE_OFF            EQU  H'3FF7'    ; Watchdog Timer disabled
_WDTE_ON             EQU  H'3FFF'    ; Watchdog Timer enabled

_PWRTE_ON            EQU  H'3FEF'    ; Power-up Timer enabled
_PWRTE_OFF           EQU  H'3FFF'    ; Power-up Timer disabled

_MCLRE_OFF           EQU  H'3FDF'    ; MCLR pin is alternate function
_MCLRE_ON            EQU  H'3FFF'    ; MCLR pin is MCLR function with internal weak pullup

_CP_ON               EQU  H'3FBF'    ; Program memory code protection is enabled
_CP_OFF              EQU  H'3FFF'    ; Program memory code protection is disabled

_BOREN_DIS           EQU  H'3CFF'    ; BOR disabled
_BOREN_SLEEP_DIS     EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_EN            EQU  H'3FFF'    ; BOR enabled

_WRT_ALL             EQU  H'33FF'    ; 000h to 3FFh self-write protected
_WRT_HALF            EQU  H'37FF'    ; 000h to 1FFh self-write protected
_WRT_FOURTH          EQU  H'3BFF'    ; 000h to 0FFh self-write protected
_WRT_OFF             EQU  H'3FFF'    ; Flash self-write protection off

_CLKOUTEN_ON         EQU  H'2FFF'    ; CLKOUT function enabled.  CLKOUT pin is CLKOUT
_CLKOUTEN_OFF        EQU  H'3FFF'    ; CLKOUT function disabled.  CLKOUT pin acts as I/O

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
