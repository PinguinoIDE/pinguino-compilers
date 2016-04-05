        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18LF27J53 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18LF27J53 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18LF27J53
;       2. LIST directive in the source file
;               LIST   P=PIC18LF27J53
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18LF27J53
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF

;==========================================================================
;       18xxxx Family        EQUates
;==========================================================================
FSR0            EQU 0
FSR1            EQU 1
FSR2            EQU 2

FAST            EQU 1

W               EQU 0
A               EQU 0
ACCESS          EQU 0
BANKED          EQU 1
;==========================================================================

;==========================================================================
;       16Cxxx/17Cxxx Substitutions
;==========================================================================
  #define DDRA  TRISA      ; PIC17Cxxx SFR substitution
  #define DDRB  TRISB      ; PIC17Cxxx SFR substitution
  #define DDRC  TRISC      ; PIC17Cxxx SFR substitution
  #define DDRD  TRISD      ; PIC17Cxxx SFR substitution
  #define DDRE  TRISE      ; PIC17Cxxx SFR substitution

;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Files -----------------------------------------------------
ADCTRIG          EQU  H'0EB8'
PD0              EQU  H'0EB9'
PMDIS0           EQU  H'0EB9'
PD1              EQU  H'0EBA'
PMDIS1           EQU  H'0EBA'
PD2              EQU  H'0EBB'
PMDIS2           EQU  H'0EBB'
PD3              EQU  H'0EBC'
PMDIS3           EQU  H'0EBC'
PPSCON           EQU  H'0EBF'
RPOR0            EQU  H'0EC0'
RPOR1            EQU  H'0EC1'
RPOR2            EQU  H'0EC2'
RPOR3            EQU  H'0EC3'
RPOR4            EQU  H'0EC4'
RPOR5            EQU  H'0EC5'
RPOR6            EQU  H'0EC6'
RPOR7            EQU  H'0EC7'
RPOR8            EQU  H'0EC8'
RPOR9            EQU  H'0EC9'
RPOR10           EQU  H'0ECA'
RPOR11           EQU  H'0ECB'
RPOR12           EQU  H'0ECC'
RPOR13           EQU  H'0ECD'
RPOR17           EQU  H'0ED1'
RPOR18           EQU  H'0ED2'
RPINR1           EQU  H'0EE1'
RPINR2           EQU  H'0EE2'
RPINR3           EQU  H'0EE3'
RPINR4           EQU  H'0EE4'
RPINR6           EQU  H'0EE6'
RPINR15          EQU  H'0EE7'
RPINR7           EQU  H'0EE8'
RPINR8           EQU  H'0EE9'
RPINR9           EQU  H'0EEA'
RPINR12          EQU  H'0EF2'
RPINR13          EQU  H'0EF3'
RPINR14          EQU  H'0EF4'
RPINR16          EQU  H'0EF7'
RPINR17          EQU  H'0EF8'
RPINR21          EQU  H'0EFC'
RPINR22          EQU  H'0EFD'
RPINR23          EQU  H'0EFE'
RPINR24          EQU  H'0EFF'
CCP10CON         EQU  H'0F00'
CCPR10L          EQU  H'0F01'
CCPR10H          EQU  H'0F02'
CCP9CON          EQU  H'0F03'
CCPR9L           EQU  H'0F04'
CCPR9H           EQU  H'0F05'
CCP8CON          EQU  H'0F06'
CCPR8L           EQU  H'0F07'
CCPR8H           EQU  H'0F08'
CCP7CON          EQU  H'0F09'
CCPR7L           EQU  H'0F0A'
CCPR7H           EQU  H'0F0B'
CCP6CON          EQU  H'0F0C'
CCPR6L           EQU  H'0F0D'
CCPR6H           EQU  H'0F0E'
CCP5CON          EQU  H'0F0F'
CCPR5L           EQU  H'0F10'
CCPR5H           EQU  H'0F11'
CCP4CON          EQU  H'0F12'
CCPR4L           EQU  H'0F13'
CCPR4H           EQU  H'0F14'
CCP3CON          EQU  H'0F15'
CCPR3L           EQU  H'0F16'
CCPR3H           EQU  H'0F17'
ECCP3DEL         EQU  H'0F18'
ECCP3AS          EQU  H'0F19'
PSTR3CON         EQU  H'0F1A'
T8CON            EQU  H'0F1B'
PR8              EQU  H'0F1C'
TMR8             EQU  H'0F1D'
T6CON            EQU  H'0F1E'
PR6              EQU  H'0F1F'
TMR6             EQU  H'0F20'
T5GCON           EQU  H'0F21'
T5CON            EQU  H'0F22'
TMR5L            EQU  H'0F23'
TMR5H            EQU  H'0F24'
CM3CON           EQU  H'0F25'
UEP0             EQU  H'0F26'
UEP1             EQU  H'0F27'
UEP2             EQU  H'0F28'
UEP3             EQU  H'0F29'
UEP4             EQU  H'0F2A'
UEP5             EQU  H'0F2B'
UEP6             EQU  H'0F2C'
UEP7             EQU  H'0F2D'
UEP8             EQU  H'0F2E'
UEP9             EQU  H'0F2F'
UEP10            EQU  H'0F30'
UEP11            EQU  H'0F31'
UEP12            EQU  H'0F32'
UEP13            EQU  H'0F33'
UEP14            EQU  H'0F34'
UEP15            EQU  H'0F35'
UIE              EQU  H'0F36'
UEIE             EQU  H'0F37'
UADDR            EQU  H'0F38'
UCFG             EQU  H'0F39'
RTCVALL          EQU  H'0F3A'
RTCVALH          EQU  H'0F3B'
PADCFG1          EQU  H'0F3C'
REFOCON          EQU  H'0F3D'
RTCCAL           EQU  H'0F3E'
RTCCFG           EQU  H'0F3F'
ODCON3           EQU  H'0F40'
ODCON2           EQU  H'0F41'
ODCON1           EQU  H'0F42'
ALRMVALL         EQU  H'0F44'
ALRMVALH         EQU  H'0F45'
ALRMRPT          EQU  H'0F46'
ALRMCFG          EQU  H'0F47'
ANCON0           EQU  H'0F48'
ANCON1           EQU  H'0F49'
DSWAKEL          EQU  H'0F4A'
DSWAKEH          EQU  H'0F4B'
DSCONL           EQU  H'0F4C'
DSCONH           EQU  H'0F4D'
DSGPR0           EQU  H'0F4E'
DSGPR1           EQU  H'0F4F'
CCPTMRS2         EQU  H'0F50'
CCPTMRS1         EQU  H'0F51'
CCPTMRS0         EQU  H'0F52'
CVRCON           EQU  H'0F53'
UFRM             EQU  H'0F60'
UFRML            EQU  H'0F60'
UFRMH            EQU  H'0F61'
UIR              EQU  H'0F62'
UEIR             EQU  H'0F63'
USTAT            EQU  H'0F64'
UCON             EQU  H'0F65'
DMABCH           EQU  H'0F66'
DMABCL           EQU  H'0F67'
RXADDRH          EQU  H'0F68'
RXADDRL          EQU  H'0F69'
TXADDRH          EQU  H'0F6A'
TXADDRL          EQU  H'0F6B'
CMSTAT           EQU  H'0F70'
CMSTATUS         EQU  H'0F70'
SSP2CON2         EQU  H'0F71'
SSP2CON1         EQU  H'0F72'
SSP2STAT         EQU  H'0F73'
SSP2ADD          EQU  H'0F74'
SSP2MSK          EQU  H'0F74'
SSP2BUF          EQU  H'0F75'
T4CON            EQU  H'0F76'
PR4              EQU  H'0F77'
TMR4             EQU  H'0F78'
T3CON            EQU  H'0F79'
TMR3             EQU  H'0F7A'
TMR3L            EQU  H'0F7A'
TMR3H            EQU  H'0F7B'
BAUDCON2         EQU  H'0F7C'
SPBRGH2          EQU  H'0F7D'
BAUDCON          EQU  H'0F7E'
BAUDCON1         EQU  H'0F7E'
BAUDCTL          EQU  H'0F7E'
SPBRGH           EQU  H'0F7F'
SPBRGH1          EQU  H'0F7F'
PORTA            EQU  H'0F80'
PORTB            EQU  H'0F81'
PORTC            EQU  H'0F82'
HLVDCON          EQU  H'0F85'
DMACON2          EQU  H'0F86'
OSCCON2          EQU  H'0F87'
DMACON1          EQU  H'0F88'
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
PIE4             EQU  H'0F8E'
PIR4             EQU  H'0F8F'
IPR4             EQU  H'0F90'
PIE5             EQU  H'0F91'
TRISA            EQU  H'0F92'
TRISB            EQU  H'0F93'
TRISC            EQU  H'0F94'
T3GCON           EQU  H'0F97'
PIR5             EQU  H'0F98'
IPR5             EQU  H'0F99'
T1GCON           EQU  H'0F9A'
OSCTUNE          EQU  H'0F9B'
RCSTA2           EQU  H'0F9C'
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
PIE3             EQU  H'0FA3'
PIR3             EQU  H'0FA4'
IPR3             EQU  H'0FA5'
EECON1           EQU  H'0FA6'
EECON2           EQU  H'0FA7'
TXSTA2           EQU  H'0FA8'
TXREG2           EQU  H'0FA9'
RCREG2           EQU  H'0FAA'
SPBRG2           EQU  H'0FAB'
RCSTA            EQU  H'0FAC'
RCSTA1           EQU  H'0FAC'
TXSTA            EQU  H'0FAD'
TXSTA1           EQU  H'0FAD'
TXREG            EQU  H'0FAE'
TXREG1           EQU  H'0FAE'
RCREG            EQU  H'0FAF'
RCREG1           EQU  H'0FAF'
SPBRG            EQU  H'0FB0'
SPBRG1           EQU  H'0FB0'
CTMUICON         EQU  H'0FB1'
CTMUCONL         EQU  H'0FB2'
CTMUCONH         EQU  H'0FB3'
CCP2CON          EQU  H'0FB4'
ECCP2CON         EQU  H'0FB4'
CCPR2            EQU  H'0FB5'
CCPR2L           EQU  H'0FB5'
CCPR2H           EQU  H'0FB6'
ECCP2DEL         EQU  H'0FB7'
PWM2CON          EQU  H'0FB7'
ECCP2AS          EQU  H'0FB8'
PSTR2CON         EQU  H'0FB9'
CCP1CON          EQU  H'0FBA'
ECCP1CON         EQU  H'0FBA'
CCPR1            EQU  H'0FBB'
CCPR1L           EQU  H'0FBB'
CCPR1H           EQU  H'0FBC'
ECCP1DEL         EQU  H'0FBD'
PWM1CON          EQU  H'0FBD'
ECCP1AS          EQU  H'0FBE'
PSTR1CON         EQU  H'0FBF'
WDTCON           EQU  H'0FC0'
ADCON1           EQU  H'0FC1'
ADCON0           EQU  H'0FC2'
ADRES            EQU  H'0FC3'
ADRESL           EQU  H'0FC3'
ADRESH           EQU  H'0FC4'
SSP1CON2         EQU  H'0FC5'
SSPCON2          EQU  H'0FC5'
SSP1CON1         EQU  H'0FC6'
SSPCON1          EQU  H'0FC6'
SSP1STAT         EQU  H'0FC7'
SSPSTAT          EQU  H'0FC7'
SSP1ADD          EQU  H'0FC8'
SSP1MSK          EQU  H'0FC8'
SSPADD           EQU  H'0FC8'
SSP1BUF          EQU  H'0FC9'
SSPBUF           EQU  H'0FC9'
T2CON            EQU  H'0FCA'
PR2              EQU  H'0FCB'
TMR2             EQU  H'0FCC'
T1CON            EQU  H'0FCD'
TMR1             EQU  H'0FCE'
TMR1L            EQU  H'0FCE'
TMR1H            EQU  H'0FCF'
RCON             EQU  H'0FD0'
CM2CON           EQU  H'0FD1'
CM2CON1          EQU  H'0FD1'
CM1CON           EQU  H'0FD2'
CM1CON1          EQU  H'0FD2'
OSCCON           EQU  H'0FD3'
T0CON            EQU  H'0FD5'
TMR0             EQU  H'0FD6'
TMR0L            EQU  H'0FD6'
TMR0H            EQU  H'0FD7'
STATUS           EQU  H'0FD8'
FSR2L            EQU  H'0FD9'
FSR2H            EQU  H'0FDA'
PLUSW2           EQU  H'0FDB'
PREINC2          EQU  H'0FDC'
POSTDEC2         EQU  H'0FDD'
POSTINC2         EQU  H'0FDE'
INDF2            EQU  H'0FDF'
BSR              EQU  H'0FE0'
FSR1L            EQU  H'0FE1'
FSR1H            EQU  H'0FE2'
PLUSW1           EQU  H'0FE3'
PREINC1          EQU  H'0FE4'
POSTDEC1         EQU  H'0FE5'
POSTINC1         EQU  H'0FE6'
INDF1            EQU  H'0FE7'
WREG             EQU  H'0FE8'
FSR0L            EQU  H'0FE9'
FSR0H            EQU  H'0FEA'
PLUSW0           EQU  H'0FEB'
PREINC0          EQU  H'0FEC'
POSTDEC0         EQU  H'0FED'
POSTINC0         EQU  H'0FEE'
INDF0            EQU  H'0FEF'
INTCON3          EQU  H'0FF0'
INTCON2          EQU  H'0FF1'
INTCON           EQU  H'0FF2'
PROD             EQU  H'0FF3'
PRODL            EQU  H'0FF3'
PRODH            EQU  H'0FF4'
TABLAT           EQU  H'0FF5'
TBLPTR           EQU  H'0FF6'
TBLPTRL          EQU  H'0FF6'
TBLPTRH          EQU  H'0FF7'
TBLPTRU          EQU  H'0FF8'
PC               EQU  H'0FF9'
PCL              EQU  H'0FF9'
PCLATH           EQU  H'0FFA'
PCLATU           EQU  H'0FFB'
STKPTR           EQU  H'0FFC'
TOS              EQU  H'0FFD'
TOSL             EQU  H'0FFD'
TOSH             EQU  H'0FFE'
TOSU             EQU  H'0FFF'

;----- ADCTRIG Bits -----------------------------------------------------
SRC0             EQU  H'0000'
SRC1             EQU  H'0001'

TRIGSEL0         EQU  H'0000'
TRIGSEL1         EQU  H'0001'



;----- PD0 Bits -----------------------------------------------------
ADCMD            EQU  H'0000'
SPI1MD           EQU  H'0001'
SPI2MD           EQU  H'0002'
UART1MD          EQU  H'0003'
UART2MD          EQU  H'0004'
ECCP1MD          EQU  H'0005'
ECCP2MD          EQU  H'0006'
ECCP3MD          EQU  H'0007'

PMDMSSP1         EQU  H'0001'
PMDMSSP2         EQU  H'0002'
PMDUART1         EQU  H'0003'
PMDUART2         EQU  H'0004'
PMDECCP1         EQU  H'0005'
PMDECCP2         EQU  H'0006'
PMDECCP3         EQU  H'0007'

PMDADC           EQU  H'0000'



;----- PMDIS0 Bits -----------------------------------------------------
ADCMD            EQU  H'0000'
SPI1MD           EQU  H'0001'
SPI2MD           EQU  H'0002'
UART1MD          EQU  H'0003'
UART2MD          EQU  H'0004'
ECCP1MD          EQU  H'0005'
ECCP2MD          EQU  H'0006'
ECCP3MD          EQU  H'0007'

PMDMSSP1         EQU  H'0001'
PMDMSSP2         EQU  H'0002'
PMDUART1         EQU  H'0003'
PMDUART2         EQU  H'0004'
PMDECCP1         EQU  H'0005'
PMDECCP2         EQU  H'0006'
PMDECCP3         EQU  H'0007'

PMDADC           EQU  H'0000'



;----- PD1 Bits -----------------------------------------------------
TMR1MD           EQU  H'0001'
TMR2MD           EQU  H'0002'
TMR3MD           EQU  H'0003'
TMR4MD           EQU  H'0004'
RTCCMD           EQU  H'0005'
CTMUMD           EQU  H'0006'

PMDTMR1          EQU  H'0001'
PMDTMR2          EQU  H'0002'
PMDTMR3          EQU  H'0003'
PMDTMR4          EQU  H'0004'

PMDRTCC          EQU  H'0005'
PMDCTMU          EQU  H'0006'



;----- PMDIS1 Bits -----------------------------------------------------
TMR1MD           EQU  H'0001'
TMR2MD           EQU  H'0002'
TMR3MD           EQU  H'0003'
TMR4MD           EQU  H'0004'
RTCCMD           EQU  H'0005'
CTMUMD           EQU  H'0006'

PMDTMR1          EQU  H'0001'
PMDTMR2          EQU  H'0002'
PMDTMR3          EQU  H'0003'
PMDTMR4          EQU  H'0004'

PMDRTCC          EQU  H'0005'
PMDCTMU          EQU  H'0006'



;----- PD2 Bits -----------------------------------------------------
CMP1MD           EQU  H'0000'
CMP2MD           EQU  H'0001'
CMP3MD           EQU  H'0002'
TMR5MD           EQU  H'0003'
TMR6MD           EQU  H'0004'
TMR8MD           EQU  H'0006'

PMDCMP1          EQU  H'0000'
PMDCMP2          EQU  H'0001'
PMDCMP3          EQU  H'0002'

PMDTMR5          EQU  H'0003'
PMDTMR6          EQU  H'0004'
PMDTMR8          EQU  H'0006'



;----- PMDIS2 Bits -----------------------------------------------------
CMP1MD           EQU  H'0000'
CMP2MD           EQU  H'0001'
CMP3MD           EQU  H'0002'
TMR5MD           EQU  H'0003'
TMR6MD           EQU  H'0004'
TMR8MD           EQU  H'0006'

PMDCMP1          EQU  H'0000'
PMDCMP2          EQU  H'0001'
PMDCMP3          EQU  H'0002'

PMDTMR5          EQU  H'0003'
PMDTMR6          EQU  H'0004'
PMDTMR8          EQU  H'0006'



;----- PD3 Bits -----------------------------------------------------
CCP4MD           EQU  H'0001'
CCP5MD           EQU  H'0002'
CCP6MD           EQU  H'0003'
CCP7MD           EQU  H'0004'
CCP8MD           EQU  H'0005'
CCP9MD           EQU  H'0006'
CCP10MD          EQU  H'0007'

PMDCCP4          EQU  H'0001'
PMDCCP5          EQU  H'0002'
PMDCCP6          EQU  H'0003'
PMDCCP7          EQU  H'0004'
PMDCCP8          EQU  H'0005'
PMDCCP9          EQU  H'0006'
PMDCCP10         EQU  H'0007'




;----- PMDIS3 Bits -----------------------------------------------------
CCP4MD           EQU  H'0001'
CCP5MD           EQU  H'0002'
CCP6MD           EQU  H'0003'
CCP7MD           EQU  H'0004'
CCP8MD           EQU  H'0005'
CCP9MD           EQU  H'0006'
CCP10MD          EQU  H'0007'

PMDCCP4          EQU  H'0001'
PMDCCP5          EQU  H'0002'
PMDCCP6          EQU  H'0003'
PMDCCP7          EQU  H'0004'
PMDCCP8          EQU  H'0005'
PMDCCP9          EQU  H'0006'
PMDCCP10         EQU  H'0007'




;----- PPSCON Bits -----------------------------------------------------
IOLOCK           EQU  H'0000'


;----- CCP10CON Bits -----------------------------------------------------
CCP10M0          EQU  H'0000'
CCP10M1          EQU  H'0001'
CCP10M2          EQU  H'0002'
CCP10M3          EQU  H'0003'
DC10B0           EQU  H'0004'
DC10B1           EQU  H'0005'


;----- CCP9CON Bits -----------------------------------------------------
CCP9M0           EQU  H'0000'
CCP9M1           EQU  H'0001'
CCP9M2           EQU  H'0002'
CCP9M3           EQU  H'0003'
DC9B0            EQU  H'0004'
DC9B1            EQU  H'0005'


;----- CCP8CON Bits -----------------------------------------------------
CCP8M0           EQU  H'0000'
CCP8M1           EQU  H'0001'
CCP8M2           EQU  H'0002'
CCP8M3           EQU  H'0003'
DC8B0            EQU  H'0004'
DC8B1            EQU  H'0005'


;----- CCP7CON Bits -----------------------------------------------------
CCP7M0           EQU  H'0000'
CCP7M1           EQU  H'0001'
CCP7M2           EQU  H'0002'
CCP7M3           EQU  H'0003'
DC7B0            EQU  H'0004'
DC7B1            EQU  H'0005'


;----- CCP6CON Bits -----------------------------------------------------
CCP6M0           EQU  H'0000'
CCP6M1           EQU  H'0001'
CCP6M2           EQU  H'0002'
CCP6M3           EQU  H'0003'
DC6B0            EQU  H'0004'
DC6B1            EQU  H'0005'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'
P3M0             EQU  H'0006'
P3M1             EQU  H'0007'


;----- ECCP3DEL Bits -----------------------------------------------------
P3RSEN           EQU  H'0007'

P3DC0            EQU  H'0000'
P3DC1            EQU  H'0001'
P3DC2            EQU  H'0002'
P3DC3            EQU  H'0003'
P3DC4            EQU  H'0004'
P3DC5            EQU  H'0005'
P3DC6            EQU  H'0006'


;----- ECCP3AS Bits -----------------------------------------------------
ECCP3ASE         EQU  H'0007'

PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'
ECCP3AS0         EQU  H'0004'
ECCP3AS1         EQU  H'0005'
ECCP3AS2         EQU  H'0006'


;----- PSTR3CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- T8CON Bits -----------------------------------------------------
TMR8ON           EQU  H'0002'

T8CKPS0          EQU  H'0000'
T8CKPS1          EQU  H'0001'
T8OUTPS0         EQU  H'0003'
T8OUTPS1         EQU  H'0004'
T8OUTPS2         EQU  H'0005'
T8OUTPS3         EQU  H'0006'


;----- T6CON Bits -----------------------------------------------------
TMR6ON           EQU  H'0002'

T6CKPS0          EQU  H'0000'
T6CKPS1          EQU  H'0001'
T6OUTPS0         EQU  H'0003'
T6OUTPS1         EQU  H'0004'
T6OUTPS2         EQU  H'0005'
T6OUTPS3         EQU  H'0006'


;----- T5GCON Bits -----------------------------------------------------
T5GVAL           EQU  H'0002'
T5GGO_NOT_T5DONE EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
TMR5GE           EQU  H'0007'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GGO            EQU  H'0003'

NOT_T5DONE       EQU  H'0003'

T5DONE           EQU  H'0003'


;----- T5CON Bits -----------------------------------------------------
TMR5ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T5SYNC       EQU  H'0002'
T5OSCEN          EQU  H'0003'

T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- CM3CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- UEP0 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP1 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP2 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP3 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP4 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP5 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP6 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP7 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP8 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP9 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP10 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP11 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP12 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP13 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP14 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UEP15 Bits -----------------------------------------------------
EPSTALL          EQU  H'0000'
EPINEN           EQU  H'0001'
EPOUTEN          EQU  H'0002'
EPCONDIS         EQU  H'0003'
EPHSHK           EQU  H'0004'


;----- UIE Bits -----------------------------------------------------
URSTIE           EQU  H'0000'
UERRIE           EQU  H'0001'
ACTVIE           EQU  H'0002'
TRNIE            EQU  H'0003'
IDLEIE           EQU  H'0004'
STALLIE          EQU  H'0005'
SOFIE            EQU  H'0006'


;----- UEIE Bits -----------------------------------------------------
PIDEE            EQU  H'0000'
CRC5EE           EQU  H'0001'
CRC16EE          EQU  H'0002'
DFN8EE           EQU  H'0003'
BTOEE            EQU  H'0004'
BTSEE            EQU  H'0007'


;----- UADDR Bits -----------------------------------------------------
ADDR0            EQU  H'0000'
ADDR1            EQU  H'0001'
ADDR2            EQU  H'0002'
ADDR3            EQU  H'0003'
ADDR4            EQU  H'0004'
ADDR5            EQU  H'0005'
ADDR6            EQU  H'0006'


;----- UCFG Bits -----------------------------------------------------
PPB0             EQU  H'0000'
PPB1             EQU  H'0001'
FSEN             EQU  H'0002'
UTRDIS           EQU  H'0003'
UPUEN            EQU  H'0004'
UOEMON           EQU  H'0006'
UTEYE            EQU  H'0007'


;----- PADCFG1 Bits -----------------------------------------------------
RTSECSEL0        EQU  H'0001'
RTSECSEL1        EQU  H'0002'


;----- REFOCON Bits -----------------------------------------------------
ROSEL            EQU  H'0004'
ROSSLP           EQU  H'0005'
ROON             EQU  H'0007'

RODIV0           EQU  H'0000'
RODIV1           EQU  H'0001'
RODIV2           EQU  H'0002'
RODIV3           EQU  H'0003'


;----- RTCCAL Bits -----------------------------------------------------
CAL0             EQU  H'0000'
CAL1             EQU  H'0001'
CAL2             EQU  H'0002'
CAL3             EQU  H'0003'
CAL4             EQU  H'0004'
CAL5             EQU  H'0005'
CAL6             EQU  H'0006'
CAL7             EQU  H'0007'


;----- RTCCFG Bits -----------------------------------------------------
RTCPTR0          EQU  H'0000'
RTCPTR1          EQU  H'0001'
RTCOE            EQU  H'0002'
HALFSEC          EQU  H'0003'
RTCSYNC          EQU  H'0004'
RTCWREN          EQU  H'0005'
RTCEN            EQU  H'0007'


;----- ODCON3 Bits -----------------------------------------------------
SPI1OD           EQU  H'0000'
SPI2OD           EQU  H'0001'


;----- ODCON2 Bits -----------------------------------------------------
U1OD             EQU  H'0000'
U2OD             EQU  H'0001'
CCP9OD           EQU  H'0002'
CCP10OD          EQU  H'0003'


;----- ODCON1 Bits -----------------------------------------------------
ECCP1OD          EQU  H'0000'
ECCP2OD          EQU  H'0001'
ECCP3OD          EQU  H'0002'
CCP4OD           EQU  H'0003'
CCP5OD           EQU  H'0004'
CCP6OD           EQU  H'0005'
CCP7OD           EQU  H'0006'
CCP8OD           EQU  H'0007'


;----- ALRMRPT Bits -----------------------------------------------------
ARPT0            EQU  H'0000'
ARPT1            EQU  H'0001'
ARPT2            EQU  H'0002'
ARPT3            EQU  H'0003'
ARPT4            EQU  H'0004'
ARPT5            EQU  H'0005'
ARPT6            EQU  H'0006'
ARPT7            EQU  H'0007'


;----- ALRMCFG Bits -----------------------------------------------------
CHIME            EQU  H'0006'
ALRMEN           EQU  H'0007'

ALRMPTR0         EQU  H'0000'
ALRMPTR1         EQU  H'0001'
AMASK0           EQU  H'0002'
AMASK1           EQU  H'0003'
AMASK2           EQU  H'0004'
AMASK3           EQU  H'0005'


;----- ANCON0 Bits -----------------------------------------------------
PCFG0            EQU  H'0000'
PCFG1            EQU  H'0001'
PCFG2            EQU  H'0002'
PCFG3            EQU  H'0003'
PCFG4            EQU  H'0004'


;----- ANCON1 Bits -----------------------------------------------------
PCFG8            EQU  H'0000'
PCFG9            EQU  H'0001'
PCFG10           EQU  H'0002'
PCFG11           EQU  H'0003'
PCFG12           EQU  H'0004'
VBGEN            EQU  H'0007'


;----- DSWAKEL Bits -----------------------------------------------------
DSPOR            EQU  H'0000'
DSMCLR           EQU  H'0002'
DSRTC            EQU  H'0003'
DSWDT            EQU  H'0004'
DSULP            EQU  H'0005'
DSFLT            EQU  H'0007'


;----- DSWAKEH Bits -----------------------------------------------------
DSINT0           EQU  H'0000'


;----- DSCONL Bits -----------------------------------------------------
RELEASE          EQU  H'0000'
DSBOR            EQU  H'0001'
ULPWDIS          EQU  H'0002'


;----- DSCONH Bits -----------------------------------------------------
RTCWDIS          EQU  H'0000'
DSULPEN          EQU  H'0001'
DSEN             EQU  H'0007'


;----- CCPTMRS2 Bits -----------------------------------------------------
C9TSEL0          EQU  H'0002'
C10TSEL0         EQU  H'0004'

C8TSEL0          EQU  H'0000'
C8TSEL1          EQU  H'0001'


;----- CCPTMRS1 Bits -----------------------------------------------------
C5TSEL0          EQU  H'0002'
C6TSEL0          EQU  H'0004'

C4TSEL0          EQU  H'0000'
C4TSEL1          EQU  H'0001'
C7TSEL0          EQU  H'0006'
C7TSEL1          EQU  H'0007'


;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C1TSEL2          EQU  H'0002'
C2TSEL0          EQU  H'0003'
C2TSEL1          EQU  H'0004'
C2TSEL2          EQU  H'0005'
C3TSEL0          EQU  H'0006'
C3TSEL1          EQU  H'0007'


;----- CVRCON Bits -----------------------------------------------------
CVRSS            EQU  H'0004'
CVRR             EQU  H'0005'
CVROE            EQU  H'0006'
CVREN            EQU  H'0007'

CVR0             EQU  H'0000'
CVR1             EQU  H'0001'
CVR2             EQU  H'0002'
CVR3             EQU  H'0003'


;----- UFRML Bits -----------------------------------------------------
FRM0             EQU  H'0000'
FRM1             EQU  H'0001'
FRM2             EQU  H'0002'
FRM3             EQU  H'0003'
FRM4             EQU  H'0004'
FRM5             EQU  H'0005'
FRM6             EQU  H'0006'
FRM7             EQU  H'0007'


;----- UFRMH Bits -----------------------------------------------------
FRM8             EQU  H'0000'
FRM9             EQU  H'0001'
FRM10            EQU  H'0002'


;----- UIR Bits -----------------------------------------------------
URSTIF           EQU  H'0000'
UERRIF           EQU  H'0001'
ACTVIF           EQU  H'0002'
TRNIF            EQU  H'0003'
IDLEIF           EQU  H'0004'
STALLIF          EQU  H'0005'
SOFIF            EQU  H'0006'


;----- UEIR Bits -----------------------------------------------------
PIDEF            EQU  H'0000'
CRC5EF           EQU  H'0001'
CRC16EF          EQU  H'0002'
DFN8EF           EQU  H'0003'
BTOEF            EQU  H'0004'
BTSEF            EQU  H'0007'


;----- USTAT Bits -----------------------------------------------------
PPBI             EQU  H'0001'
DIR              EQU  H'0002'

ENDP0            EQU  H'0003'
ENDP1            EQU  H'0004'
ENDP2            EQU  H'0005'
ENDP3            EQU  H'0006'


;----- UCON Bits -----------------------------------------------------
SUSPND           EQU  H'0001'
RESUME           EQU  H'0002'
USBEN            EQU  H'0003'
PKTDIS           EQU  H'0004'
SE0              EQU  H'0005'
PPBRST           EQU  H'0006'


;----- CMSTAT Bits -----------------------------------------------------
COUT1            EQU  H'0000'
COUT2            EQU  H'0001'
COUT3            EQU  H'0002'


;----- CMSTATUS Bits -----------------------------------------------------
COUT1            EQU  H'0000'
COUT2            EQU  H'0001'
COUT3            EQU  H'0002'


;----- SSP2CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


;----- SSP2CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSP2STAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSP2MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- T4CON Bits -----------------------------------------------------
TMR4ON           EQU  H'0002'

T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
T3OSCEN          EQU  H'0003'

T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'


;----- BAUDCON2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
AN4              EQU  H'0005'
OSC2             EQU  H'0006'
OSC1             EQU  H'0007'

C1INA            EQU  H'0000'
C2INA            EQU  H'0001'
VREF_MINUS       EQU  H'0002'
VREF_PLUS        EQU  H'0003'
NOT_SS1          EQU  H'0005'
CLKO             EQU  H'0006'
CLKI             EQU  H'0007'

CVREF            EQU  H'0002'
C1INB            EQU  H'0003'
HLVDIN           EQU  H'0005'

RP0              EQU  H'0000'
RP1              EQU  H'0001'
C2INB            EQU  H'0002'
RCV              EQU  H'0005'

ULPWU            EQU  H'0000'
VBG              EQU  H'0001'
C1IND            EQU  H'0002'
RP2              EQU  H'0005'

C3INB            EQU  H'0002'
C1INC            EQU  H'0005'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'

AN12             EQU  H'0000'
AN10             EQU  H'0001'
AN8              EQU  H'0002'
AN9              EQU  H'0003'
KBI2             EQU  H'0006'
KBI3             EQU  H'0007'

INT0             EQU  H'0000'
CTED1            EQU  H'0002'
CTED2            EQU  H'0003'
KBI0             EQU  H'0004'
KBI1             EQU  H'0005'
PGC              EQU  H'0006'
PGD              EQU  H'0007'

RP3              EQU  H'0000'
RTCC             EQU  H'0001'
SCK1             EQU  H'0004'
SDI1             EQU  H'0005'
RP9              EQU  H'0006'
RP10             EQU  H'0007'

RP4              EQU  H'0001'
VMO              EQU  H'0002'
VPO              EQU  H'0003'
SCL1             EQU  H'0004'
SDA1             EQU  H'0005'

REFO             EQU  H'0002'
RP6              EQU  H'0003'
RP7              EQU  H'0004'
RP8              EQU  H'0005'

C3INC            EQU  H'0001'
RP5              EQU  H'0002'
C3INA            EQU  H'0003'
CCP4             EQU  H'0004'
CCP5             EQU  H'0005'
CCP6             EQU  H'0006'
CCP7             EQU  H'0007'

C3IND            EQU  H'0000'
C2INC            EQU  H'0002'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'

T1OSO            EQU  H'0000'
T1OSI            EQU  H'0001'
AN11             EQU  H'0002'
D_MINUS          EQU  H'0004'
D_PLUS           EQU  H'0005'

T1CKI            EQU  H'0000'
NOT_UOE          EQU  H'0001'
CTPLS            EQU  H'0002'
VM               EQU  H'0004'
VP               EQU  H'0005'
TX1              EQU  H'0006'
RX1              EQU  H'0007'

RP11             EQU  H'0000'
RP12             EQU  H'0001'
RP13             EQU  H'0002'
CK1              EQU  H'0006'
DT1              EQU  H'0007'

RP17             EQU  H'0006'
SDO1             EQU  H'0007'

C2IND            EQU  H'0002'
RP18             EQU  H'0007'

CCP8             EQU  H'0001'
CCP9             EQU  H'0006'
CCP10            EQU  H'0007'


;----- HLVDCON Bits -----------------------------------------------------
HLVDEN           EQU  H'0004'
IRVST            EQU  H'0005'
BGVST            EQU  H'0006'
VDIRMAG          EQU  H'0007'

HLVDL0           EQU  H'0000'
HLVDL1           EQU  H'0001'
HLVDL2           EQU  H'0002'
HLVDL3           EQU  H'0003'


;----- DMACON2 Bits -----------------------------------------------------
INTLVL0          EQU  H'0000'
INTLVL1          EQU  H'0001'
INTLVL2          EQU  H'0002'
INTLVL3          EQU  H'0003'
DLYCYC0          EQU  H'0004'
DLYCYC1          EQU  H'0005'
DLYCYC2          EQU  H'0006'
DLYCYC3          EQU  H'0007'


;----- OSCCON2 Bits -----------------------------------------------------
PRISD            EQU  H'0002'
SOSCGO           EQU  H'0003'
SOSCDRV          EQU  H'0004'
SOSCRUN          EQU  H'0006'


;----- DMACON1 Bits -----------------------------------------------------
DMAEN            EQU  H'0000'
DLYINTEN         EQU  H'0001'
DUPLEX0          EQU  H'0002'
DUPLEX1          EQU  H'0003'
RXINC            EQU  H'0004'
TXINC            EQU  H'0005'
SSCON0           EQU  H'0006'
SSCON1           EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA5            EQU  H'0005'
LATA6            EQU  H'0006'
LATA7            EQU  H'0007'


;----- LATB Bits -----------------------------------------------------
LATB0            EQU  H'0000'
LATB1            EQU  H'0001'
LATB2            EQU  H'0002'
LATB3            EQU  H'0003'
LATB4            EQU  H'0004'
LATB5            EQU  H'0005'
LATB6            EQU  H'0006'
LATB7            EQU  H'0007'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC6            EQU  H'0006'
LATC7            EQU  H'0007'


;----- PIE4 Bits -----------------------------------------------------
CCP3IE           EQU  H'0000'
CCP4IE           EQU  H'0001'
CCP5IE           EQU  H'0002'
CCP6IE           EQU  H'0003'
CCP7IE           EQU  H'0004'
CCP8IE           EQU  H'0005'
CCP9IE           EQU  H'0006'
CCP10IE          EQU  H'0007'


;----- PIR4 Bits -----------------------------------------------------
CCP3IF           EQU  H'0000'
CCP4IF           EQU  H'0001'
CCP5IF           EQU  H'0002'
CCP6IF           EQU  H'0003'
CCP7IF           EQU  H'0004'
CCP8IF           EQU  H'0005'
CCP9IF           EQU  H'0006'
CCP10IF          EQU  H'0007'


;----- IPR4 Bits -----------------------------------------------------
CCP3IP           EQU  H'0000'
CCP4IP           EQU  H'0001'
CCP5IP           EQU  H'0002'
CCP6IP           EQU  H'0003'
CCP7IP           EQU  H'0004'
CCP8IP           EQU  H'0005'
CCP9IP           EQU  H'0006'
CCP10IP          EQU  H'0007'


;----- PIE5 Bits -----------------------------------------------------
TMR1GIE          EQU  H'0000'
TMR5GIE          EQU  H'0001'
TMR5IE           EQU  H'0002'
TMR6IE           EQU  H'0003'
TMR8IE           EQU  H'0004'
CM3IE            EQU  H'0005'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'
TRISA7           EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- T3GCON Bits -----------------------------------------------------
T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GVAL           EQU  H'0002'
T3GGO_T3DONE     EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GGO            EQU  H'0003'

NOT_T3DONE       EQU  H'0003'


;----- PIR5 Bits -----------------------------------------------------
TMR1GIF          EQU  H'0000'
TMR5GIF          EQU  H'0001'
TMR5IF           EQU  H'0002'
TMR6IF           EQU  H'0003'
TMR8IF           EQU  H'0004'
CM3IF            EQU  H'0005'


;----- IPR5 Bits -----------------------------------------------------
TMR1GIP          EQU  H'0000'
TMR5GIP          EQU  H'0001'
TMR5IP           EQU  H'0002'
TMR6IP           EQU  H'0003'
TMR8IP           EQU  H'0004'
CM3IP            EQU  H'0005'


;----- T1GCON Bits -----------------------------------------------------
T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GVAL           EQU  H'0002'
T1GGO_NOT_T1DONE EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GGO            EQU  H'0003'

NOT_T1DONE       EQU  H'0003'

T1DONE           EQU  H'0003'


;----- OSCTUNE Bits -----------------------------------------------------
PLLEN            EQU  H'0006'
INTSRC           EQU  H'0007'

TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RX9D2            EQU  H'0000'
OERR2            EQU  H'0001'
FERR2            EQU  H'0002'
ADDEN2           EQU  H'0003'
CREN2            EQU  H'0004'
SREN2            EQU  H'0005'
RX92             EQU  H'0006'
SPEN2            EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSP1IE           EQU  H'0003'
TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'
ADIE             EQU  H'0006'

SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'
ADIF             EQU  H'0006'

SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
CCP1IP           EQU  H'0002'
SSP1IP           EQU  H'0003'
TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'
ADIP             EQU  H'0006'

SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMR3IE           EQU  H'0001'
LVDIE            EQU  H'0002'
BCL1IE           EQU  H'0003'
USBIE            EQU  H'0004'
CM1IE            EQU  H'0005'
CM2IE            EQU  H'0006'
OSCFIE           EQU  H'0007'

HLVDIE           EQU  H'0002'
BCLIE            EQU  H'0003'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR3IF           EQU  H'0001'
LVDIF            EQU  H'0002'
BCL1IF           EQU  H'0003'
USBIF            EQU  H'0004'
CM1IF            EQU  H'0005'
CM2IF            EQU  H'0006'
OSCFIF           EQU  H'0007'

HLVDIF           EQU  H'0002'
BCLIF            EQU  H'0003'


;----- IPR2 Bits -----------------------------------------------------
CCP2IP           EQU  H'0000'
TMR3IP           EQU  H'0001'
LVDIP            EQU  H'0002'
BCL1IP           EQU  H'0003'
USBIP            EQU  H'0004'
CM1IP            EQU  H'0005'
CM2IP            EQU  H'0006'
OSCFIP           EQU  H'0007'

HLVDIP           EQU  H'0002'
BCLIP            EQU  H'0003'


;----- PIE3 Bits -----------------------------------------------------
RTCCIE           EQU  H'0000'
TMR3GIE          EQU  H'0001'
CTMUIE           EQU  H'0002'
TMR4IE           EQU  H'0003'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'
BCL2IE           EQU  H'0006'
SSP2IE           EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
RTCCIF           EQU  H'0000'
TMR3GIF          EQU  H'0001'
CTMUIF           EQU  H'0002'
TMR4IF           EQU  H'0003'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'
BCL2IF           EQU  H'0006'
SSP2IF           EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
RTCCIP           EQU  H'0000'
TMR3GIP          EQU  H'0001'
CTMUIP           EQU  H'0002'
TMR4IP           EQU  H'0003'
TX2IP            EQU  H'0004'
RC2IP            EQU  H'0005'
BCL2IP           EQU  H'0006'
SSP2IP           EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
WPROG            EQU  H'0005'


;----- TXSTA2 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TX9D2            EQU  H'0000'
TRMT2            EQU  H'0001'
BRGH2            EQU  H'0002'
SENDB2           EQU  H'0003'
SYNC2            EQU  H'0004'
TXEN2            EQU  H'0005'
TX92             EQU  H'0006'
CSRC2            EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
ADEN             EQU  H'0003'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


;----- RCSTA1 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
ADEN             EQU  H'0003'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
TX8_9            EQU  H'0006'

NOT_TX8          EQU  H'0006'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- TXSTA1 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
TX8_9            EQU  H'0006'

NOT_TX8          EQU  H'0006'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- CTMUICON Bits -----------------------------------------------------
IRNG0            EQU  H'0000'
IRNG1            EQU  H'0001'
ITRIM0           EQU  H'0002'
ITRIM1           EQU  H'0003'
ITRIM2           EQU  H'0004'
ITRIM3           EQU  H'0005'
ITRIM4           EQU  H'0006'
ITRIM5           EQU  H'0007'


;----- CTMUCONL Bits -----------------------------------------------------
EDG1STAT         EQU  H'0000'
EDG2STAT         EQU  H'0001'
EDG1SEL0         EQU  H'0002'
EDG1SEL1         EQU  H'0003'
EDG1POL          EQU  H'0004'
EDG2SEL0         EQU  H'0005'
EDG2SEL1         EQU  H'0006'
EDG2POL          EQU  H'0007'


;----- CTMUCONH Bits -----------------------------------------------------
CTTRIG           EQU  H'0000'
IDISSEN          EQU  H'0001'
EDGSEQEN         EQU  H'0002'
EDGEN            EQU  H'0003'
TGEN             EQU  H'0004'
CTMUSIDL         EQU  H'0005'
CTMUEN           EQU  H'0007'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'


;----- ECCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'


;----- ECCP2DEL Bits -----------------------------------------------------
P2RSEN           EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- PWM2CON Bits -----------------------------------------------------
P2RSEN           EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- ECCP2AS Bits -----------------------------------------------------
ECCP2ASE         EQU  H'0007'

PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'
ECCP2AS0         EQU  H'0004'
ECCP2AS1         EQU  H'0005'
ECCP2AS2         EQU  H'0006'


;----- PSTR2CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'
CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


;----- ECCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


;----- ECCP1DEL Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'


;----- PWM1CON Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'


;----- ECCP1AS Bits -----------------------------------------------------
ECCP1ASE         EQU  H'0007'

PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'
ECCP1AS0         EQU  H'0004'
ECCP1AS1         EQU  H'0005'
ECCP1AS2         EQU  H'0006'


;----- PSTR1CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'
CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'
ULPSINK          EQU  H'0001'
ULPEN            EQU  H'0002'
DS               EQU  H'0003'
VBGOE            EQU  H'0004'
ULPLVL           EQU  H'0005'
LVDSTAT          EQU  H'0006'
REGSLP           EQU  H'0007'

SWDTE            EQU  H'0000'


;----- ADCON1 Bits -----------------------------------------------------
ADCAL            EQU  H'0006'
ADFM             EQU  H'0007'

ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ACQT0            EQU  H'0003'
ACQT1            EQU  H'0004'
ACQT2            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

GO_DONE          EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
VCFG0            EQU  H'0006'
VCFG1            EQU  H'0007'

DONE             EQU  H'0001'

GO               EQU  H'0001'

NOT_DONE         EQU  H'0001'


;----- SSP1CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


;----- SSP1CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSPCON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSP1STAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'

R                EQU  H'0002'
D                EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'

R                EQU  H'0002'
D                EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'


;----- SSP1MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- RCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_PD           EQU  H'0002'
NOT_TO           EQU  H'0003'
NOT_RI           EQU  H'0004'
NOT_CM           EQU  H'0005'
IPEN             EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'
CM               EQU  H'0005'


;----- CM2CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM2CON1 Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM1CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM1CON1 Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- OSCCON Bits -----------------------------------------------------
FLTS             EQU  H'0002'
OSTS             EQU  H'0003'
IDLEN            EQU  H'0007'

SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'
IRCF2            EQU  H'0006'


;----- T0CON Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
T08BIT           EQU  H'0006'
TMR0ON           EQU  H'0007'

T0PS0            EQU  H'0000'
T0PS1            EQU  H'0001'
T0PS2            EQU  H'0002'


;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
OV               EQU  H'0003'
N                EQU  H'0004'


;----- INTCON3 Bits -----------------------------------------------------
INT1IF           EQU  H'0000'
INT2IF           EQU  H'0001'
INT3IF           EQU  H'0002'
INT1IE           EQU  H'0003'
INT2IE           EQU  H'0004'
INT3IE           EQU  H'0005'
INT1IP           EQU  H'0006'
INT2IP           EQU  H'0007'

INT1F            EQU  H'0000'
INT2F            EQU  H'0001'
INT3F            EQU  H'0002'
INT1E            EQU  H'0003'
INT2E            EQU  H'0004'
INT3E            EQU  H'0005'
INT1P            EQU  H'0006'
INT2P            EQU  H'0007'


;----- INTCON2 Bits -----------------------------------------------------
RBIP             EQU  H'0000'
INT3IP           EQU  H'0001'
TMR0IP           EQU  H'0002'
INTEDG3          EQU  H'0003'
INTEDG2          EQU  H'0004'
INTEDG1          EQU  H'0005'
INTEDG0          EQU  H'0006'
NOT_RBPU         EQU  H'0007'

INT3P            EQU  H'0001'
T0IP             EQU  H'0002'
RBPU             EQU  H'0007'


;----- INTCON Bits -----------------------------------------------------
RBIF             EQU  H'0000'
INT0IF           EQU  H'0001'
TMR0IF           EQU  H'0002'
RBIE             EQU  H'0003'
INT0IE           EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE_GIEL        EQU  H'0006'
GIE_GIEH         EQU  H'0007'

INT0F            EQU  H'0001'
T0IF             EQU  H'0002'
INT0E            EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

GIEL             EQU  H'0006'
GIEH             EQU  H'0007'


;----- STKPTR Bits -----------------------------------------------------
STKUNF           EQU  H'0006'
STKFUL           EQU  H'0007'

SP0              EQU  H'0000'
SP1              EQU  H'0001'
SP2              EQU  H'0002'
SP3              EQU  H'0003'
SP4              EQU  H'0004'
STKOVF           EQU  H'0007'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'0EB0'-H'0EB7'
       __BADRAM  H'0EBD'-H'0EBE'
       __BADRAM  H'0ECE'-H'0ED0'
       __BADRAM  H'0ED3'-H'0EE0'
       __BADRAM  H'0EE5'
       __BADRAM  H'0EEB'-H'0EF1'
       __BADRAM  H'0EF5'-H'0EF6'
       __BADRAM  H'0EF9'-H'0EFB'
       __BADRAM  H'0F43'
       __BADRAM  H'0F54'-H'0F5F'
       __BADRAM  H'0F6C'-H'0F6F'
       __BADRAM  H'0F83'-H'0F84'
       __BADRAM  H'0F8C'-H'0F8D'
       __BADRAM  H'0F95'-H'0F96'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Watchdog Timer:
;     WDTEN = OFF          Disabled - Controlled by SWDTEN bit
;     WDTEN = ON           Enabled
;
;   PLL Prescaler Selection:
;     PLLDIV = 12          Divide by 12 (48 MHz oscillator input)
;     PLLDIV = 10          Divide by 10 (40 MHz oscillator input)
;     PLLDIV = 6           Divide by 6 (24 MHz oscillator input)
;     PLLDIV = 5           Divide by 5 (20 MHz oscillator input)
;     PLLDIV = 4           Divide by 4 (16 MHz oscillator input)
;     PLLDIV = 3           Divide by 3 (12 MHz oscillator input)
;     PLLDIV = 2           Divide by 2 (8 MHz oscillator input)
;     PLLDIV = 1           No prescale (4 MHz oscillator input drives PLL directly)
;
;   PLL Enable Configuration Bit:
;     CFGPLLEN = ON        PLL Enabled
;     CFGPLLEN = OFF       PLL Disabled
;
;   Stack Overflow/Underflow Reset:
;     STVREN = OFF         Disabled
;     STVREN = ON          Enabled
;
;   Extended Instruction Set:
;     XINST = OFF          Disabled
;     XINST = ON           Enabled
;
;   CPU System Clock Postscaler:
;     CPUDIV = OSC4_PLL6   CPU system clock divide by 6
;     CPUDIV = OSC3_PLL3   CPU system clock divide by 3
;     CPUDIV = OSC2_PLL2   CPU system clock divide by 2
;     CPUDIV = OSC1        No CPU system clock divide
;
;   Code Protect:
;     CP0 = ON             Program memory is code-protected
;     CP0 = OFF            Program memory is not code-protected
;
;   Oscillator:
;     OSC = INTOSC         INTOSC
;     OSC = INTOSCO        INTOSCO (CLKO-RA6)
;     OSC = INTOSCPLL      INTOSCPLL
;     OSC = INTOSCPLLO     INTOSCPLLO (CLKO-RA6)
;     OSC = HS             HS, USB-HS
;     OSC = HSPLL          HS+PLL, USB-HS+PLL
;     OSC = EC             EC (CLKO-RA6), USB-EC
;     OSC = ECPLL          EC+PLL (CLKO-RA6), USB-EC+PLL
;
;   T1OSC/SOSC Power Selection Bits:
;     SOSCSEL = RESERVED   Reserved
;     SOSCSEL = LOW        Low Power T1OSC/SOSC circuit selected
;     SOSCSEL = DIG        Digital (SCLKI) mode selected
;     SOSCSEL = HIGH       High Power T1OSC/SOSC circuit selected
;
;   EC Clock Out Enable Bit :
;     CLKOEC = OFF         CLKO output disabled on the RA6 pin
;     CLKOEC = ON          CLKO output enabled on the RA6 pin
;
;   Fail-Safe Clock Monitor:
;     FCMEN = OFF          Disabled
;     FCMEN = ON           Enabled
;
;   Internal External Oscillator Switch Over Mode:
;     IESO = OFF           Disabled
;     IESO = ON            Enabled
;
;   Watchdog Postscaler:
;     WDTPS = 1            1:1
;     WDTPS = 2            1:2
;     WDTPS = 4            1:4
;     WDTPS = 8            1:8
;     WDTPS = 16           1:16
;     WDTPS = 32           1:32
;     WDTPS = 64           1:64
;     WDTPS = 128          1:128
;     WDTPS = 256          1:256
;     WDTPS = 512          1:512
;     WDTPS = 1024         1:1024
;     WDTPS = 2048         1:2048
;     WDTPS = 4096         1:4096
;     WDTPS = 8192         1:8192
;     WDTPS = 16384        1:16384
;     WDTPS = 32768        1:32768
;
;   DSWDT Clock Select:
;     DSWDTOSC = T1OSCREF  DSWDT uses T1OSC/T1CKI
;     DSWDTOSC = INTOSCREF DSWDT uses INTRC
;
;   RTCC Clock Select:
;     RTCOSC = INTOSCREF   RTCC uses INTRC
;     RTCOSC = T1OSCREF    RTCC uses T1OSC/T1CKI
;
;   Deep Sleep BOR:
;     DSBOREN = OFF        Disabled
;     DSBOREN = ON         Enabled
;
;   Deep Sleep Watchdog Timer:
;     DSWDTEN = OFF        Disabled
;     DSWDTEN = ON         Enabled
;
;   Deep Sleep Watchdog Postscaler:
;     DSWDTPS = 2          1:2 (2.1 ms)
;     DSWDTPS = 8          1:8 (8.3 ms)
;     DSWDTPS = 32         1:32 (33 ms)
;     DSWDTPS = 128        1:128 (132 ms)
;     DSWDTPS = 512        1:512 (528 ms)
;     DSWDTPS = 2048       1:2,048 (2.1 seconds)
;     DSWDTPS = 8192       1:8,192 (8.5 seconds)
;     DSWDTPS = K32        1:32,768 (34 seconds)
;     DSWDTPS = K131       1:131,072 (135 seconds)
;     DSWDTPS = K524       1:524,288 (9 minutes)
;     DSWDTPS = M2         1:2,097,152 (36 minutes)
;     DSWDTPS = M8         1:8,388,608 (2.4 hours)
;     DSWDTPS = M33        1:33,554,432 (9.6 hours)
;     DSWDTPS = M134       1:134,217,728 (38.5 hours)
;     DSWDTPS = M536       1:536,870,912 (6.4 days)
;     DSWDTPS = G2         1:2,147,483,648 (25.7 days)
;
;   IOLOCK One-Way Set Enable bit:
;     IOL1WAY = OFF        The IOLOCK bit (PPSCON<0>) can be set and cleared as needed
;     IOL1WAY = ON         The IOLOCK bit (PPSCON<0>) can be set once
;
;   ADC 10 or 12 Bit Select:
;     ADCSEL = BIT12       12 - Bit ADC Enabled
;     ADCSEL = BIT10       10 - Bit ADC Enabled
;
;   MSSP address masking:
;     MSSP7B_EN = MSK5     5 Bit address masking mode
;     MSSP7B_EN = MSK7     7 Bit address masking mode
;
;   Write/Erase Protect Page Start/End Location:
;     WPFP = PAGE_0        Write Protect Program Flash Page 0
;     WPFP = PAGE_1        Write Protect Program Flash Page 1
;     WPFP = PAGE_2        Write Protect Program Flash Page 2
;     WPFP = PAGE_3        Write Protect Program Flash Page 3
;     WPFP = PAGE_4        Write Protect Program Flash Page 4
;     WPFP = PAGE_5        Write Protect Program Flash Page 5
;     WPFP = PAGE_6        Write Protect Program Flash Page 6
;     WPFP = PAGE_7        Write Protect Program Flash Page 7
;     WPFP = PAGE_8        Write Protect Program Flash Page 8
;     WPFP = PAGE_9        Write Protect Program Flash Page 9
;     WPFP = PAGE_10       Write Protect Program Flash Page 10
;     WPFP = PAGE_11       Write Protect Program Flash Page 11
;     WPFP = PAGE_12       Write Protect Program Flash Page 12
;     WPFP = PAGE_13       Write Protect Program Flash Page 13
;     WPFP = PAGE_14       Write Protect Program Flash Page 14
;     WPFP = PAGE_15       Write Protect Program Flash Page 15
;     WPFP = PAGE_16       Write Protect Program Flash Page 16
;     WPFP = PAGE_17       Write Protect Program Flash Page 17
;     WPFP = PAGE_18       Write Protect Program Flash Page 18
;     WPFP = PAGE_19       Write Protect Program Flash Page 19
;     WPFP = PAGE_20       Write Protect Program Flash Page 20
;     WPFP = PAGE_21       Write Protect Program Flash Page 21
;     WPFP = PAGE_22       Write Protect Program Flash Page 22
;     WPFP = PAGE_23       Write Protect Program Flash Page 23
;     WPFP = PAGE_24       Write Protect Program Flash Page 24
;     WPFP = PAGE_25       Write Protect Program Flash Page 25
;     WPFP = PAGE_26       Write Protect Program Flash Page 26
;     WPFP = PAGE_27       Write Protect Program Flash Page 27
;     WPFP = PAGE_28       Write Protect Program Flash Page 28
;     WPFP = PAGE_29       Write Protect Program Flash Page 29
;     WPFP = PAGE_30       Write Protect Program Flash Page 30
;     WPFP = PAGE_31       Write Protect Program Flash Page 31
;     WPFP = PAGE_32       Write Protect Program Flash Page 32
;     WPFP = PAGE_33       Write Protect Program Flash Page 33
;     WPFP = PAGE_34       Write Protect Program Flash Page 34
;     WPFP = PAGE_35       Write Protect Program Flash Page 35
;     WPFP = PAGE_36       Write Protect Program Flash Page 36
;     WPFP = PAGE_37       Write Protect Program Flash Page 37
;     WPFP = PAGE_38       Write Protect Program Flash Page 38
;     WPFP = PAGE_39       Write Protect Program Flash Page 39
;     WPFP = PAGE_40       Write Protect Program Flash Page 40
;     WPFP = PAGE_41       Write Protect Program Flash Page 41
;     WPFP = PAGE_42       Write Protect Program Flash Page 42
;     WPFP = PAGE_43       Write Protect Program Flash Page 43
;     WPFP = PAGE_44       Write Protect Program Flash Page 44
;     WPFP = PAGE_45       Write Protect Program Flash Page 45
;     WPFP = PAGE_46       Write Protect Program Flash Page 46
;     WPFP = PAGE_47       Write Protect Program Flash Page 47
;     WPFP = PAGE_48       Write Protect Program Flash Page 48
;     WPFP = PAGE_49       Write Protect Program Flash Page 49
;     WPFP = PAGE_50       Write Protect Program Flash Page 50
;     WPFP = PAGE_51       Write Protect Program Flash Page 51
;     WPFP = PAGE_52       Write Protect Program Flash Page 52
;     WPFP = PAGE_53       Write Protect Program Flash Page 53
;     WPFP = PAGE_54       Write Protect Program Flash Page 54
;     WPFP = PAGE_55       Write Protect Program Flash Page 55
;     WPFP = PAGE_56       Write Protect Program Flash Page 56
;     WPFP = PAGE_57       Write Protect Program Flash Page 57
;     WPFP = PAGE_58       Write Protect Program Flash Page 58
;     WPFP = PAGE_59       Write Protect Program Flash Page 59
;     WPFP = PAGE_60       Write Protect Program Flash Page 60
;     WPFP = PAGE_61       Write Protect Program Flash Page 61
;     WPFP = PAGE_62       Write Protect Program Flash Page 62
;     WPFP = PAGE_63       Write Protect Program Flash Page 63
;     WPFP = PAGE_64       Write Protect Program Flash Page 64
;     WPFP = PAGE_65       Write Protect Program Flash Page 65
;     WPFP = PAGE_66       Write Protect Program Flash Page 66
;     WPFP = PAGE_67       Write Protect Program Flash Page 67
;     WPFP = PAGE_68       Write Protect Program Flash Page 68
;     WPFP = PAGE_69       Write Protect Program Flash Page 69
;     WPFP = PAGE_70       Write Protect Program Flash Page 70
;     WPFP = PAGE_71       Write Protect Program Flash Page 71
;     WPFP = PAGE_72       Write Protect Program Flash Page 72
;     WPFP = PAGE_73       Write Protect Program Flash Page 73
;     WPFP = PAGE_74       Write Protect Program Flash Page 74
;     WPFP = PAGE_75       Write Protect Program Flash Page 75
;     WPFP = PAGE_76       Write Protect Program Flash Page 76
;     WPFP = PAGE_77       Write Protect Program Flash Page 77
;     WPFP = PAGE_78       Write Protect Program Flash Page 78
;     WPFP = PAGE_79       Write Protect Program Flash Page 79
;     WPFP = PAGE_80       Write Protect Program Flash Page 80
;     WPFP = PAGE_81       Write Protect Program Flash Page 81
;     WPFP = PAGE_82       Write Protect Program Flash Page 82
;     WPFP = PAGE_83       Write Protect Program Flash Page 83
;     WPFP = PAGE_84       Write Protect Program Flash Page 84
;     WPFP = PAGE_85       Write Protect Program Flash Page 85
;     WPFP = PAGE_86       Write Protect Program Flash Page 86
;     WPFP = PAGE_87       Write Protect Program Flash Page 87
;     WPFP = PAGE_88       Write Protect Program Flash Page 88
;     WPFP = PAGE_89       Write Protect Program Flash Page 89
;     WPFP = PAGE_90       Write Protect Program Flash Page 90
;     WPFP = PAGE_91       Write Protect Program Flash Page 91
;     WPFP = PAGE_92       Write Protect Program Flash Page 92
;     WPFP = PAGE_93       Write Protect Program Flash Page 93
;     WPFP = PAGE_94       Write Protect Program Flash Page 94
;     WPFP = PAGE_95       Write Protect Program Flash Page 95
;     WPFP = PAGE_96       Write Protect Program Flash Page 96
;     WPFP = PAGE_97       Write Protect Program Flash Page 97
;     WPFP = PAGE_98       Write Protect Program Flash Page 98
;     WPFP = PAGE_99       Write Protect Program Flash Page 99
;     WPFP = PAGE_100      Write Protect Program Flash Page 100
;     WPFP = PAGE_101      Write Protect Program Flash Page 101
;     WPFP = PAGE_102      Write Protect Program Flash Page 102
;     WPFP = PAGE_103      Write Protect Program Flash Page 103
;     WPFP = PAGE_104      Write Protect Program Flash Page 104
;     WPFP = PAGE_105      Write Protect Program Flash Page 105
;     WPFP = PAGE_106      Write Protect Program Flash Page 106
;     WPFP = PAGE_107      Write Protect Program Flash Page 107
;     WPFP = PAGE_108      Write Protect Program Flash Page 108
;     WPFP = PAGE_109      Write Protect Program Flash Page 109
;     WPFP = PAGE_110      Write Protect Program Flash Page 110
;     WPFP = PAGE_111      Write Protect Program Flash Page 111
;     WPFP = PAGE_112      Write Protect Program Flash Page 112
;     WPFP = PAGE_113      Write Protect Program Flash Page 113
;     WPFP = PAGE_114      Write Protect Program Flash Page 114
;     WPFP = PAGE_115      Write Protect Program Flash Page 115
;     WPFP = PAGE_116      Write Protect Program Flash Page 116
;     WPFP = PAGE_117      Write Protect Program Flash Page 117
;     WPFP = PAGE_118      Write Protect Program Flash Page 118
;     WPFP = PAGE_119      Write Protect Program Flash Page 119
;     WPFP = PAGE_120      Write Protect Program Flash Page 120
;     WPFP = PAGE_121      Write Protect Program Flash Page 121
;     WPFP = PAGE_122      Write Protect Program Flash Page 122
;     WPFP = PAGE_123      Write Protect Program Flash Page 123
;     WPFP = PAGE_124      Write Protect Program Flash Page 124
;     WPFP = PAGE_125      Write Protect Program Flash Page 125
;     WPFP = PAGE_126      Write Protect Program Flash Page 126
;     WPFP = PAGE_127      Write Protect Program Flash Page 127
;
;   Write/Erase Protect Configuration Region :
;     WPCFG = ON           Configuration Words page erase/write-protected
;     WPCFG = OFF          Configuration Words page not erase/write-protected
;
;   Write Protect Disable bit:
;     WPDIS = ON           WPFP<6:0>/WPEND region erase/write protected
;     WPDIS = OFF          WPFP<6:0>/WPEND region ignored
;
;   Write/Erase Protect Region Select bit (valid when WPDIS = 0):
;     WPEND = PAGE_0       Pages 0 through WPFP<6:0> erase/write protected
;     WPEND = PAGE_WPFP    Pages WPFP<6:0> through Configuration Words erase/write protected
;
;   Low Speed USB mode with 48 MHz system clock bit:
;     LS48MHZ = SYS24X4    System clock at 24 MHz USB CLKEN divide-by is set to 4
;     LS48MHZ = SYS48X8    System clock at 48 MHz USB CLKEN divide-by is set to 8
;
;==========================================================================
;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'3FFFFE'
_DEVID2          EQU  H'3FFFFF'


        LIST
