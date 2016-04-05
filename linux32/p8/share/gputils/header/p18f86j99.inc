        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18F86J99 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18F86J99 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18F86J99
;       2. LIST directive in the source file
;               LIST   P=PIC18F86J99
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18F86J99
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
UEP0             EQU  H'0DFF'
UEP1             EQU  H'0E00'
UEP2             EQU  H'0E01'
UEP3             EQU  H'0E02'
UEP4             EQU  H'0E03'
UEP5             EQU  H'0E04'
UEP6             EQU  H'0E05'
UEP7             EQU  H'0E06'
UEP8             EQU  H'0E07'
UEP9             EQU  H'0E08'
UEP10            EQU  H'0E09'
UEP11            EQU  H'0E0A'
UEP12            EQU  H'0E0B'
UEP13            EQU  H'0E0C'
UEP14            EQU  H'0E0D'
UEP15            EQU  H'0E0E'
UEIE             EQU  H'0E0F'
UIE              EQU  H'0E10'
UCFG             EQU  H'0E11'
RPOR0_1          EQU  H'0E12'
RPOR2_3          EQU  H'0E13'
RPOR4_5          EQU  H'0E14'
RPOR6_7          EQU  H'0E15'
RPOR8_9          EQU  H'0E16'
RPOR10_11        EQU  H'0E17'
RPOR12_13        EQU  H'0E18'
RPOR14_15        EQU  H'0E19'
RPOR16_17        EQU  H'0E1A'
RPOR18_19        EQU  H'0E1B'
RPOR20_21        EQU  H'0E1C'
RPOR22_23        EQU  H'0E1D'
RPOR24_25        EQU  H'0E1E'
RPOR26_27        EQU  H'0E1F'
RPOR28_29        EQU  H'0E20'
RPOR30_31        EQU  H'0E21'
RPOR32_33        EQU  H'0E22'
RPOR34_35        EQU  H'0E23'
RPOR36_37        EQU  H'0E24'
RPOR38_39        EQU  H'0E25'
RPOR40_41        EQU  H'0E26'
RPOR42_43        EQU  H'0E27'
RPOR44_45        EQU  H'0E28'
RPOR46           EQU  H'0E29'
RPINR0_1         EQU  H'0E2A'
RPINR2_3         EQU  H'0E2B'
RPINR4_5         EQU  H'0E2C'
RPINR6_7         EQU  H'0E2D'
RPINR8_9         EQU  H'0E2E'
RPINR10_11       EQU  H'0E2F'
RPINR12_13       EQU  H'0E30'
RPINR14_15       EQU  H'0E31'
RPINR16_17       EQU  H'0E32'
RPINR18_19       EQU  H'0E33'
RPINR20_21       EQU  H'0E34'
RPINR22_23       EQU  H'0E35'
RPINR24_25       EQU  H'0E36'
RPINR26_27       EQU  H'0E37'
RPINR28_29       EQU  H'0E38'
RPINR30_31       EQU  H'0E39'
RPINR32_33       EQU  H'0E3A'
RPINR34_35       EQU  H'0E3B'
RPINR36_37       EQU  H'0E3C'
RPINR38_39       EQU  H'0E3D'
RPINR40_41       EQU  H'0E3E'
RPINR42_43       EQU  H'0E3F'
RPINR44_45       EQU  H'0E40'
RPINR46_47       EQU  H'0E41'
RPINR48_49       EQU  H'0E42'
RPINR50_51       EQU  H'0E43'
RPINR52_53       EQU  H'0E44'
ANCON3           EQU  H'0E45'
ANCON2           EQU  H'0E46'
ANCON1           EQU  H'0E47'
ADCBUF1          EQU  H'0E48'
ADCBUF1L         EQU  H'0E48'
ADCBUF1H         EQU  H'0E49'
ADCBUF2          EQU  H'0E4A'
ADCBUF2L         EQU  H'0E4A'
ADCBUF2H         EQU  H'0E4B'
ADCBUF3          EQU  H'0E4C'
ADCBUF3L         EQU  H'0E4C'
ADCBUF3H         EQU  H'0E4D'
ADCBUF4          EQU  H'0E4E'
ADCBUF4L         EQU  H'0E4E'
ADCBUF4H         EQU  H'0E4F'
ADCBUF5          EQU  H'0E50'
ADCBUF5L         EQU  H'0E50'
ADCBUF5H         EQU  H'0E51'
ADCBUF6          EQU  H'0E52'
ADCBUF6L         EQU  H'0E52'
ADCBUF6H         EQU  H'0E53'
ADCBUF7          EQU  H'0E54'
ADCBUF7L         EQU  H'0E54'
ADCBUF7H         EQU  H'0E55'
ADCBUF8          EQU  H'0E56'
ADCBUF8L         EQU  H'0E56'
ADCBUF8H         EQU  H'0E57'
ADCBUF9          EQU  H'0E58'
ADCBUF9L         EQU  H'0E58'
ADCBUF9H         EQU  H'0E59'
ADCBUF10         EQU  H'0E5A'
ADCBUF10L        EQU  H'0E5A'
ADCBUF10H        EQU  H'0E5B'
ADCBUF11         EQU  H'0E5C'
ADCBUF11L        EQU  H'0E5C'
ADCBUF11H        EQU  H'0E5D'
ADCBUF12         EQU  H'0E5E'
ADCBUF12L        EQU  H'0E5E'
ADCBUF12H        EQU  H'0E5F'
ADCBUF13         EQU  H'0E60'
ADCBUF13L        EQU  H'0E60'
ADCBUF13H        EQU  H'0E61'
ADCBUF14         EQU  H'0E62'
ADCBUF14L        EQU  H'0E62'
ADCBUF14H        EQU  H'0E63'
ADCBUF15         EQU  H'0E64'
ADCBUF15L        EQU  H'0E64'
ADCBUF15H        EQU  H'0E65'
ADCBUF16         EQU  H'0E66'
ADCBUF16L        EQU  H'0E66'
ADCBUF16H        EQU  H'0E67'
ADCBUF17         EQU  H'0E68'
ADCBUF17L        EQU  H'0E68'
ADCBUF17H        EQU  H'0E69'
ADCBUF18         EQU  H'0E6A'
ADCBUF18L        EQU  H'0E6A'
ADCBUF18H        EQU  H'0E6B'
ADCBUF19         EQU  H'0E6C'
ADCBUF19L        EQU  H'0E6C'
ADCBUF19H        EQU  H'0E6D'
ADCBUF20         EQU  H'0E6E'
ADCBUF20L        EQU  H'0E6E'
ADCBUF20H        EQU  H'0E6F'
ADCBUF21         EQU  H'0E70'
ADCBUF21L        EQU  H'0E70'
ADCBUF21H        EQU  H'0E71'
ADCBUF22         EQU  H'0E72'
ADCBUF22L        EQU  H'0E72'
ADCBUF22H        EQU  H'0E73'
ADCBUF23         EQU  H'0E74'
ADCBUF23L        EQU  H'0E74'
ADCBUF23H        EQU  H'0E75'
ADCBUF24         EQU  H'0E76'
ADCBUF24L        EQU  H'0E76'
ADCBUF24H        EQU  H'0E77'
ADCBUF25         EQU  H'0E78'
ADCBUF25L        EQU  H'0E78'
ADCBUF25H        EQU  H'0E79'
ADCTMUEN0L       EQU  H'0E7A'
ADCTMUEN0H       EQU  H'0E7B'
ADCTMUEN1L       EQU  H'0E7C'
ADCTMUEN1H       EQU  H'0E7D'
ADCHIT0L         EQU  H'0E7E'
ADCHIT0H         EQU  H'0E7F'
ADCHIT1L         EQU  H'0E80'
ADCHIT1H         EQU  H'0E81'
ADCSS0L          EQU  H'0E82'
ADCSS0H          EQU  H'0E83'
ADCSS1L          EQU  H'0E84'
ADCSS1H          EQU  H'0E85'
ADCHS0L          EQU  H'0E86'
ADCHS0H          EQU  H'0E87'
ADCON5L          EQU  H'0E88'
ADCON5H          EQU  H'0E89'
ADCON3L          EQU  H'0E8A'
ADCON3H          EQU  H'0E8B'
ADCON2L          EQU  H'0E8C'
ADCON2H          EQU  H'0E8D'
LCDDATA0         EQU  H'0E8E'
LCDDATA1         EQU  H'0E8F'
LCDDATA2         EQU  H'0E90'
LCDDATA3         EQU  H'0E91'
LCDDATA4         EQU  H'0E92'
LCDDATA5         EQU  H'0E93'
LCDDATA6         EQU  H'0E94'
LCDDATA7         EQU  H'0E95'
LCDDATA8         EQU  H'0E96'
LCDDATA9         EQU  H'0E97'
LCDDATA10        EQU  H'0E98'
LCDDATA11        EQU  H'0E99'
LCDDATA12        EQU  H'0E9A'
LCDDATA13        EQU  H'0E9B'
LCDDATA14        EQU  H'0E9C'
LCDDATA15        EQU  H'0E9D'
LCDDATA16        EQU  H'0E9E'
LCDDATA17        EQU  H'0E9F'
LCDDATA18        EQU  H'0EA0'
LCDDATA19        EQU  H'0EA1'
LCDDATA20        EQU  H'0EA2'
LCDDATA21        EQU  H'0EA3'
LCDDATA22        EQU  H'0EA4'
LCDDATA23        EQU  H'0EA5'
LCDDATA24        EQU  H'0EA6'
LCDDATA25        EQU  H'0EA7'
LCDDATA26        EQU  H'0EA8'
LCDDATA27        EQU  H'0EA9'
LCDDATA28        EQU  H'0EAA'
LCDDATA29        EQU  H'0EAB'
LCDDATA30        EQU  H'0EAC'
LCDDATA31        EQU  H'0EAD'
LCDDATA32        EQU  H'0EAE'
LCDDATA33        EQU  H'0EAF'
LCDDATA34        EQU  H'0EB0'
LCDDATA35        EQU  H'0EB1'
LCDDATA36        EQU  H'0EB2'
LCDDATA37        EQU  H'0EB3'
LCDDATA38        EQU  H'0EB4'
LCDDATA39        EQU  H'0EB5'
LCDDATA40        EQU  H'0EB6'
LCDDATA41        EQU  H'0EB7'
LCDDATA42        EQU  H'0EB8'
LCDDATA43        EQU  H'0EB9'
LCDDATA44        EQU  H'0EBA'
LCDDATA45        EQU  H'0EBB'
LCDDATA46        EQU  H'0EBC'
LCDDATA47        EQU  H'0EBD'
LCDDATA48        EQU  H'0EBE'
LCDDATA49        EQU  H'0EBF'
LCDDATA50        EQU  H'0EC0'
LCDDATA51        EQU  H'0EC1'
LCDDATA52        EQU  H'0EC2'
LCDDATA53        EQU  H'0EC3'
LCDDATA54        EQU  H'0EC4'
LCDDATA55        EQU  H'0EC5'
LCDDATA56        EQU  H'0EC6'
LCDDATA57        EQU  H'0EC7'
LCDDATA58        EQU  H'0EC8'
LCDDATA59        EQU  H'0EC9'
LCDDATA60        EQU  H'0ECA'
LCDDATA61        EQU  H'0ECB'
LCDDATA62        EQU  H'0ECC'
LCDDATA63        EQU  H'0ECD'
LCDSE0           EQU  H'0ECE'
LCDSE1           EQU  H'0ECF'
LCDSE2           EQU  H'0ED0'
LCDSE3           EQU  H'0ED1'
LCDSE4           EQU  H'0ED2'
LCDSE5           EQU  H'0ED3'
LCDSE6           EQU  H'0ED4'
LCDSE7           EQU  H'0ED5'
LCDRL            EQU  H'0ED6'
LCDREF           EQU  H'0ED7'
LCDREG           EQU  H'0ED8'
LCDCON           EQU  H'0ED9'
LCDPS            EQU  H'0EDA'
REFO2CON3        EQU  H'0EDB'
REFO2CON2        EQU  H'0EDC'
REFO2CON1        EQU  H'0EDD'
REFO2CON         EQU  H'0EDE'
REFO1CON3        EQU  H'0EDF'
REFO1CON2        EQU  H'0EE0'
REFO1CON1        EQU  H'0EE1'
REFO1CON         EQU  H'0EE2'
MEMCON           EQU  H'0EE3'
ODCON2           EQU  H'0EEA'
ODCON1           EQU  H'0EEB'
MDCARL           EQU  H'0EEC'
MDCARH           EQU  H'0EED'
MDSRC            EQU  H'0EEE'
MDCON            EQU  H'0EEF'
PMD4             EQU  H'0EF0'
PMD3             EQU  H'0EF1'
PMD2             EQU  H'0EF2'
PMD1             EQU  H'0EF3'
PMD0             EQU  H'0EF4'
CTMUCON4         EQU  H'0EF5'
CTMUCON3         EQU  H'0EF6'
CTMUCON2         EQU  H'0EF7'
CTMUCON1         EQU  H'0EF8'
TXREG4           EQU  H'0EF9'
RCREG4           EQU  H'0EFA'
SPBRG4           EQU  H'0EFB'
SPBRGH4          EQU  H'0EFC'
BAUDCON4         EQU  H'0EFD'
TXSTA4           EQU  H'0EFE'
RCSTA4           EQU  H'0EFF'
DMACON2          EQU  H'0F00'
ANCFG            EQU  H'0F01'
SSP2ADD          EQU  H'0F02'
SSP2BUF          EQU  H'0F03'
T4CON            EQU  H'0F04'
PR4              EQU  H'0F05'
TMR4             EQU  H'0F06'
CCP7CON          EQU  H'0F07'
CCPR7            EQU  H'0F08'
CCPR7L           EQU  H'0F08'
CCPR7H           EQU  H'0F09'
CCP6CON          EQU  H'0F0A'
CCPR6            EQU  H'0F0B'
CCPR6L           EQU  H'0F0B'
CCPR6H           EQU  H'0F0C'
CCP5CON          EQU  H'0F0D'
CCPR5            EQU  H'0F0E'
CCPR5L           EQU  H'0F0E'
CCPR5H           EQU  H'0F0F'
CCP4CON          EQU  H'0F10'
CCPR4            EQU  H'0F11'
CCPR4L           EQU  H'0F11'
CCPR4H           EQU  H'0F12'
T5GCON           EQU  H'0F13'
T5CON            EQU  H'0F14'
TMR5             EQU  H'0F15'
TMR5L            EQU  H'0F15'
TMR5H            EQU  H'0F16'
SSP2MSK          EQU  H'0F17'
SSP2CON2         EQU  H'0F18'
SSP2CON1         EQU  H'0F19'
SSP2STAT         EQU  H'0F1A'
PSTR3CON         EQU  H'0F1B'
PSTR2CON         EQU  H'0F1C'
TXREG2           EQU  H'0F1D'
RCREG2           EQU  H'0F1E'
SPBRG2           EQU  H'0F1F'
SPBRGH2          EQU  H'0F20'
DSGPR3           EQU  H'0F21'
DSGPR2           EQU  H'0F22'
DSGPR1           EQU  H'0F23'
DSGPR0           EQU  H'0F24'
DSWAKEH          EQU  H'0F25'
DSWAKEL          EQU  H'0F26'
DSCONH           EQU  H'0F27'
DSCONL           EQU  H'0F28'
TXREG3           EQU  H'0F29'
RCREG3           EQU  H'0F2A'
SPBRG3           EQU  H'0F2B'
SPBRGH3          EQU  H'0F2C'
BAUDCON3         EQU  H'0F2D'
TXSTA3           EQU  H'0F2E'
RCSTA3           EQU  H'0F2F'
SPBRGH           EQU  H'0F30'
SPBRGH1          EQU  H'0F30'
BAUDCON2         EQU  H'0F31'
TXSTA2           EQU  H'0F32'
RCSTA2           EQU  H'0F33'
CCPTMRS2         EQU  H'0F34'
CCPTMRS1         EQU  H'0F35'
CCPTMRS0         EQU  H'0F36'
CM3CON           EQU  H'0F37'
CM2CON           EQU  H'0F38'
SSP2CON3         EQU  H'0F39'
T8CON            EQU  H'0F3A'
PR8              EQU  H'0F3B'
TMR8             EQU  H'0F3C'
T6CON            EQU  H'0F3D'
PR6              EQU  H'0F3E'
TMR6             EQU  H'0F3F'
CCP10CON         EQU  H'0F40'
CCPR10           EQU  H'0F41'
CCPR10L          EQU  H'0F41'
CCPR10H          EQU  H'0F42'
CCP9CON          EQU  H'0F43'
CCPR9            EQU  H'0F44'
CCPR9L           EQU  H'0F44'
CCPR9H           EQU  H'0F45'
CCP8CON          EQU  H'0F46'
CCPR8            EQU  H'0F47'
CCPR8L           EQU  H'0F47'
CCPR8H           EQU  H'0F48'
CCP3CON          EQU  H'0F49'
CCPR3            EQU  H'0F4A'
CCPR3L           EQU  H'0F4A'
CCPR3H           EQU  H'0F4B'
ECCP3DEL         EQU  H'0F4C'
ECCP3AS          EQU  H'0F4D'
CCP2CON          EQU  H'0F4E'
CCPR2            EQU  H'0F4F'
CCPR2L           EQU  H'0F4F'
CCPR2H           EQU  H'0F50'
ECCP2DEL         EQU  H'0F51'
ECCP2AS          EQU  H'0F52'
CM1CON           EQU  H'0F53'
PADCFG1          EQU  H'0F54'
IOCN             EQU  H'0F55'
IOCP             EQU  H'0F56'
RTCCON2          EQU  H'0F57'
ALRMVALL         EQU  H'0F58'
ALRMVALH         EQU  H'0F59'
ALRMRPT          EQU  H'0F5A'
ALRMCFG          EQU  H'0F5B'
RTCVALL          EQU  H'0F5C'
RTCVALH          EQU  H'0F5D'
RTCCAL           EQU  H'0F5E'
RTCCON1          EQU  H'0F5F'
DMACON1          EQU  H'0F60'
PIE6             EQU  H'0F61'
WPUB             EQU  H'0F62'
ACTCON           EQU  H'0F63'
OSCCON4          EQU  H'0F64'
OSCCON3          EQU  H'0F65'
OSCCON2          EQU  H'0F66'
BAUDCON          EQU  H'0F67'
BAUDCON1         EQU  H'0F67'
SSP1MSK          EQU  H'0F68'
SSP1CON3         EQU  H'0F69'
TXBUF            EQU  H'0F6A'
DMABCH           EQU  H'0F6B'
DMABCL           EQU  H'0F6C'
RXADDRH          EQU  H'0F6D'
RXADDRL          EQU  H'0F6E'
TXADDRH          EQU  H'0F6F'
TXADDRL          EQU  H'0F70'
PORTVP           EQU  H'0F71'
LATVP            EQU  H'0F72'
TRISVP           EQU  H'0F73'
UADDR            EQU  H'0F74'
UCON             EQU  H'0F75'
USTAT            EQU  H'0F76'
UEIR             EQU  H'0F77'
UIR              EQU  H'0F78'
UFRM             EQU  H'0F79'
UFRMH            EQU  H'0F79'
UFRML            EQU  H'0F7A'
RCON4            EQU  H'0F7B'
RCON3            EQU  H'0F7C'
RCON2            EQU  H'0F7D'
EECON2           EQU  H'0F7E'
EECON1           EQU  H'0F7F'
PORTA            EQU  H'0F80'
PORTB            EQU  H'0F81'
PORTC            EQU  H'0F82'
PORTD            EQU  H'0F83'
PORTE            EQU  H'0F84'
PORTF            EQU  H'0F85'
PORTG            EQU  H'0F86'
PORTH            EQU  H'0F87'
PORTJ            EQU  H'0F88'
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
LATD             EQU  H'0F8C'
LATE             EQU  H'0F8D'
LATF             EQU  H'0F8E'
LATG             EQU  H'0F8F'
LATH             EQU  H'0F90'
LATJ             EQU  H'0F91'
TRISA            EQU  H'0F92'
TRISB            EQU  H'0F93'
TRISC            EQU  H'0F94'
TRISD            EQU  H'0F95'
TRISE            EQU  H'0F96'
TRISF            EQU  H'0F97'
TRISG            EQU  H'0F98'
TRISH            EQU  H'0F99'
TRISJ            EQU  H'0F9A'
OSCTUNE          EQU  H'0F9B'
PSTR1CON         EQU  H'0F9C'
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
PIE3             EQU  H'0FA3'
PIR3             EQU  H'0FA4'
IPR3             EQU  H'0FA5'
PIR6             EQU  H'0FA6'
PSPCON           EQU  H'0FA7'
HLVDCON          EQU  H'0FA8'
IPR6             EQU  H'0FA9'
T1GCON           EQU  H'0FAA'
RCSTA            EQU  H'0FAB'
RCSTA1           EQU  H'0FAB'
TXSTA            EQU  H'0FAC'
TXSTA1           EQU  H'0FAC'
TXREG            EQU  H'0FAD'
TXREG1           EQU  H'0FAD'
RCREG            EQU  H'0FAE'
RCREG1           EQU  H'0FAE'
SPBRG            EQU  H'0FAF'
SPBRG1           EQU  H'0FAF'
T3GCON           EQU  H'0FB0'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
PIE4             EQU  H'0FB4'
PIR4             EQU  H'0FB5'
IPR4             EQU  H'0FB6'
PIE5             EQU  H'0FB7'
PIR5             EQU  H'0FB8'
CCP1CON          EQU  H'0FB9'
CCPR1            EQU  H'0FBA'
CCPR1L           EQU  H'0FBA'
CCPR1H           EQU  H'0FBB'
ECCP1DEL         EQU  H'0FBC'
ECCP1AS          EQU  H'0FBD'
CVRCONL          EQU  H'0FBE'
CVRCONH          EQU  H'0FBF'
ADCON1L          EQU  H'0FC0'
ADCON1H          EQU  H'0FC1'
ADCBUF0          EQU  H'0FC2'
ADCBUF0L         EQU  H'0FC2'
ADCBUF0H         EQU  H'0FC3'
CMSTAT           EQU  H'0FC4'
SSP1CON2         EQU  H'0FC5'
SSP1CON1         EQU  H'0FC6'
SSP1STAT         EQU  H'0FC7'
SSP1ADD          EQU  H'0FC8'
SSP1BUF          EQU  H'0FC9'
T2CON            EQU  H'0FCA'
PR2              EQU  H'0FCB'
TMR2             EQU  H'0FCC'
T1CON            EQU  H'0FCD'
TMR1             EQU  H'0FCE'
TMR1L            EQU  H'0FCE'
TMR1H            EQU  H'0FCF'
RCON             EQU  H'0FD0'
IOCF             EQU  H'0FD1'
IPR5             EQU  H'0FD2'
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


;----- UEIE Bits -----------------------------------------------------
PIDEE            EQU  H'0000'
CRC5EE           EQU  H'0001'
CRC16EE          EQU  H'0002'
DFN8EE           EQU  H'0003'
BTOEE            EQU  H'0004'
BTSEE            EQU  H'0007'


;----- UIE Bits -----------------------------------------------------
URSTIE           EQU  H'0000'
UERRIE           EQU  H'0001'
ACTVIE           EQU  H'0002'
TRNIE            EQU  H'0003'
IDLEIE           EQU  H'0004'
STALLIE          EQU  H'0005'
SOFIE            EQU  H'0006'


;----- UCFG Bits -----------------------------------------------------
PPB0             EQU  H'0000'
PPB1             EQU  H'0001'
FSEN             EQU  H'0002'
UTRDIS           EQU  H'0003'
UPUEN            EQU  H'0004'
UOEMON           EQU  H'0006'
UTEYE            EQU  H'0007'


;----- RPOR0_1 Bits -----------------------------------------------------
RPO0R0           EQU  H'0000'
RPO0R1           EQU  H'0001'
RPO0R2           EQU  H'0002'
RPO0R3           EQU  H'0003'
RPO1R0           EQU  H'0004'
RPO1R1           EQU  H'0005'
RPO1R2           EQU  H'0006'
RPO1R3           EQU  H'0007'


;----- RPOR2_3 Bits -----------------------------------------------------
RPO2R0           EQU  H'0000'
RPO2R1           EQU  H'0001'
RPO2R2           EQU  H'0002'
RPO2R3           EQU  H'0003'
RPO3R0           EQU  H'0004'
RPO3R1           EQU  H'0005'
RPO3R2           EQU  H'0006'
RPO3R3           EQU  H'0007'


;----- RPOR4_5 Bits -----------------------------------------------------
RPO4R0           EQU  H'0000'
RPO4R1           EQU  H'0001'
RPO4R2           EQU  H'0002'
RPO4R3           EQU  H'0003'
RPO5R0           EQU  H'0004'
RPO5R1           EQU  H'0005'
RPO5R2           EQU  H'0006'
RPO5R3           EQU  H'0007'


;----- RPOR6_7 Bits -----------------------------------------------------
RPO6R0           EQU  H'0000'
RPO6R1           EQU  H'0001'
RPO6R2           EQU  H'0002'
RPO6R3           EQU  H'0003'
RPO7R0           EQU  H'0004'
RPO7R1           EQU  H'0005'
RPO7R2           EQU  H'0006'
RPO7R3           EQU  H'0007'


;----- RPOR8_9 Bits -----------------------------------------------------
RPO8R0           EQU  H'0000'
RPO8R1           EQU  H'0001'
RPO8R2           EQU  H'0002'
RPO8R3           EQU  H'0003'
RPO9R0           EQU  H'0004'
RPO9R1           EQU  H'0005'
RPO9R2           EQU  H'0006'
RPO9R3           EQU  H'0007'


;----- RPOR10_11 Bits -----------------------------------------------------
RPO10R0          EQU  H'0000'
RPO10R1          EQU  H'0001'
RPO10R2          EQU  H'0002'
RPO10R3          EQU  H'0003'
RPO11R0          EQU  H'0004'
RPO11R1          EQU  H'0005'
RPO11R2          EQU  H'0006'
RPO11R3          EQU  H'0007'


;----- RPOR12_13 Bits -----------------------------------------------------
RPO12R0          EQU  H'0000'
RPO12R1          EQU  H'0001'
RPO12R2          EQU  H'0002'
RPO12R3          EQU  H'0003'
RPO13R0          EQU  H'0004'
RPO13R1          EQU  H'0005'
RPO13R2          EQU  H'0006'
RPO13R3          EQU  H'0007'


;----- RPOR14_15 Bits -----------------------------------------------------
RPO14R0          EQU  H'0000'
RPO14R1          EQU  H'0001'
RPO14R2          EQU  H'0002'
RPO14R3          EQU  H'0003'
RPO15R0          EQU  H'0004'
RPO15R1          EQU  H'0005'
RPO15R2          EQU  H'0006'
RPO15R3          EQU  H'0007'


;----- RPOR16_17 Bits -----------------------------------------------------
RPO16R0          EQU  H'0000'
RPO16R1          EQU  H'0001'
RPO16R2          EQU  H'0002'
RPO16R3          EQU  H'0003'
RPO17R0          EQU  H'0004'
RPO17R1          EQU  H'0005'
RPO17R2          EQU  H'0006'
RPO17R3          EQU  H'0007'


;----- RPOR18_19 Bits -----------------------------------------------------
RPO18R0          EQU  H'0000'
RPO18R1          EQU  H'0001'
RPO18R2          EQU  H'0002'
RPO18R3          EQU  H'0003'
RPO19R0          EQU  H'0004'
RPO19R1          EQU  H'0005'
RPO19R2          EQU  H'0006'
RPO19R3          EQU  H'0007'


;----- RPOR20_21 Bits -----------------------------------------------------
RPO20R0          EQU  H'0000'
RPO20R1          EQU  H'0001'
RPO20R2          EQU  H'0002'
RPO20R3          EQU  H'0003'
RPO21R0          EQU  H'0004'
RPO21R1          EQU  H'0005'
RPO21R2          EQU  H'0006'
RPO21R3          EQU  H'0007'


;----- RPOR22_23 Bits -----------------------------------------------------
RPO22R0          EQU  H'0000'
RPO22R1          EQU  H'0001'
RPO22R2          EQU  H'0002'
RPO22R3          EQU  H'0003'
RPO23R0          EQU  H'0004'
RPO23R1          EQU  H'0005'
RPO23R2          EQU  H'0006'
RPO23R3          EQU  H'0007'


;----- RPOR24_25 Bits -----------------------------------------------------
RPO24R0          EQU  H'0000'
RPO24R1          EQU  H'0001'
RPO24R2          EQU  H'0002'
RPO24R3          EQU  H'0003'
RPO25R0          EQU  H'0004'
RPO25R1          EQU  H'0005'
RPO25R2          EQU  H'0006'
RPO25R3          EQU  H'0007'


;----- RPOR26_27 Bits -----------------------------------------------------
RPO26R0          EQU  H'0000'
RPO26R1          EQU  H'0001'
RPO26R2          EQU  H'0002'
RPO26R3          EQU  H'0003'
RPO27R0          EQU  H'0004'
RPO27R1          EQU  H'0005'
RPO27R2          EQU  H'0006'
RPO27R3          EQU  H'0007'


;----- RPOR28_29 Bits -----------------------------------------------------
RPO28R0          EQU  H'0000'
RPO28R1          EQU  H'0001'
RPO28R2          EQU  H'0002'
RPO28R3          EQU  H'0003'
RPO29R0          EQU  H'0004'
RPO29R1          EQU  H'0005'
RPO29R2          EQU  H'0006'
RPO29R3          EQU  H'0007'


;----- RPOR30_31 Bits -----------------------------------------------------
RPO30R0          EQU  H'0000'
RPO30R1          EQU  H'0001'
RPO30R2          EQU  H'0002'
RPO30R3          EQU  H'0003'
RPO31R0          EQU  H'0004'
RPO31R1          EQU  H'0005'
RPO31R2          EQU  H'0006'
RPO31R3          EQU  H'0007'


;----- RPOR32_33 Bits -----------------------------------------------------
RPO32R0          EQU  H'0000'
RPO32R1          EQU  H'0001'
RPO32R2          EQU  H'0002'
RPO32R3          EQU  H'0003'
RPO33R0          EQU  H'0004'
RPO33R1          EQU  H'0005'
RPO33R2          EQU  H'0006'
RPO33R3          EQU  H'0007'


;----- RPOR34_35 Bits -----------------------------------------------------
RPO34R0          EQU  H'0000'
RPO34R1          EQU  H'0001'
RPO34R2          EQU  H'0002'
RPO34R3          EQU  H'0003'
RPO35R0          EQU  H'0004'
RPO35R1          EQU  H'0005'
RPO35R2          EQU  H'0006'
RPO35R3          EQU  H'0007'


;----- RPOR36_37 Bits -----------------------------------------------------
RPO36R0          EQU  H'0000'
RPO36R1          EQU  H'0001'
RPO36R2          EQU  H'0002'
RPO36R3          EQU  H'0003'
RPO37R0          EQU  H'0004'
RPO37R1          EQU  H'0005'
RPO37R2          EQU  H'0006'
RPO37R3          EQU  H'0007'


;----- RPOR38_39 Bits -----------------------------------------------------
RPO38R0          EQU  H'0000'
RPO38R1          EQU  H'0001'
RPO38R2          EQU  H'0002'
RPO38R3          EQU  H'0003'
RPO39R0          EQU  H'0004'
RPO39R1          EQU  H'0005'
RPO39R2          EQU  H'0006'
RPO39R3          EQU  H'0007'


;----- RPOR40_41 Bits -----------------------------------------------------
RPO40R0          EQU  H'0000'
RPO40R1          EQU  H'0001'
RPO40R2          EQU  H'0002'
RPO40R3          EQU  H'0003'
RPO41R0          EQU  H'0004'
RPO41R1          EQU  H'0005'
RPO41R2          EQU  H'0006'
RPO41R3          EQU  H'0007'


;----- RPOR42_43 Bits -----------------------------------------------------
RPO42R0          EQU  H'0000'
RPO42R1          EQU  H'0001'
RPO42R2          EQU  H'0002'
RPO42R3          EQU  H'0003'
RPO43R0          EQU  H'0004'
RPO43R1          EQU  H'0005'
RPO43R2          EQU  H'0006'
RPO43R3          EQU  H'0007'


;----- RPOR44_45 Bits -----------------------------------------------------
RPO44R0          EQU  H'0000'
RPO44R1          EQU  H'0001'
RPO44R2          EQU  H'0002'
RPO44R3          EQU  H'0003'
RPO45R0          EQU  H'0004'
RPO45R1          EQU  H'0005'
RPO45R2          EQU  H'0006'
RPO45R3          EQU  H'0007'


;----- RPOR46 Bits -----------------------------------------------------
RPO46R0          EQU  H'0000'
RPO46R1          EQU  H'0001'
RPO46R2          EQU  H'0002'
RPO46R3          EQU  H'0003'


;----- RPINR0_1 Bits -----------------------------------------------------
U1RXR0           EQU  H'0000'
U1RXR1           EQU  H'0001'
U1RXR2           EQU  H'0002'
U1RXR3           EQU  H'0003'
U1TXR0           EQU  H'0004'
U1TXR1           EQU  H'0005'
U1TXR2           EQU  H'0006'
U1TXR3           EQU  H'0007'


;----- RPINR2_3 Bits -----------------------------------------------------
U2RXR0           EQU  H'0000'
U2RXR1           EQU  H'0001'
U2RXR2           EQU  H'0002'
U2RXR3           EQU  H'0003'
U2TXR0           EQU  H'0004'
U2TXR1           EQU  H'0005'
U2TXR2           EQU  H'0006'
U2TXR3           EQU  H'0007'


;----- RPINR4_5 Bits -----------------------------------------------------
U3RXR0           EQU  H'0000'
U3RXR1           EQU  H'0001'
U3RXR2           EQU  H'0002'
U3RXR3           EQU  H'0003'
U3TXR0           EQU  H'0004'
U3TXR1           EQU  H'0005'
U3TXR2           EQU  H'0006'
U3TXR3           EQU  H'0007'


;----- RPINR6_7 Bits -----------------------------------------------------
U4RXR0           EQU  H'0000'
U4RXR1           EQU  H'0001'
U4RXR2           EQU  H'0002'
U4RXR3           EQU  H'0003'
U4TXR0           EQU  H'0004'
U4TXR1           EQU  H'0005'
U4TXR2           EQU  H'0006'
U4TXR3           EQU  H'0007'


;----- RPINR8_9 Bits -----------------------------------------------------
SCK1R0           EQU  H'0000'
SCK1R1           EQU  H'0001'
SCK1R2           EQU  H'0002'
SCK1R3           EQU  H'0003'
SDI1R0           EQU  H'0004'
SDI1R1           EQU  H'0005'
SDI1R2           EQU  H'0006'
SDI1R3           EQU  H'0007'


;----- RPINR10_11 Bits -----------------------------------------------------
SS1R0            EQU  H'0000'
SS1R1            EQU  H'0001'
SS1R2            EQU  H'0002'
SS1R3            EQU  H'0003'
SCK2R0           EQU  H'0004'
SCK2R1           EQU  H'0005'
SCK2R2           EQU  H'0006'
SCK2R3           EQU  H'0007'


;----- RPINR12_13 Bits -----------------------------------------------------
SDI2R0           EQU  H'0000'
SDI2R1           EQU  H'0001'
SDI2R2           EQU  H'0002'
SDI2R3           EQU  H'0003'
SS2R0            EQU  H'0004'
SS2R1            EQU  H'0005'
SS2R2            EQU  H'0006'
SS2R3            EQU  H'0007'


;----- RPINR14_15 Bits -----------------------------------------------------
FLT0R0           EQU  H'0000'
FLT0R1           EQU  H'0001'
FLT0R2           EQU  H'0002'
FLT0R3           EQU  H'0003'
ECCP1R0          EQU  H'0004'
ECCP1R1          EQU  H'0005'
ECCP1R2          EQU  H'0006'
ECCP1R3          EQU  H'0007'


;----- RPINR16_17 Bits -----------------------------------------------------
ECCP2R0          EQU  H'0000'
ECCP2R1          EQU  H'0001'
ECCP2R2          EQU  H'0002'
ECCP2R3          EQU  H'0003'
ECCP3R0          EQU  H'0004'
ECCP3R1          EQU  H'0005'
ECCP3R2          EQU  H'0006'
ECCP3R3          EQU  H'0007'


;----- RPINR18_19 Bits -----------------------------------------------------
IOC0R0           EQU  H'0000'
IOC0R1           EQU  H'0001'
IOC0R2           EQU  H'0002'
IOC0R3           EQU  H'0003'
IOC1R0           EQU  H'0004'
IOC1R1           EQU  H'0005'
IOC1R2           EQU  H'0006'
IOC1R3           EQU  H'0007'


;----- RPINR20_21 Bits -----------------------------------------------------
IOC2R0           EQU  H'0000'
IOC2R1           EQU  H'0001'
IOC2R2           EQU  H'0002'
IOC2R3           EQU  H'0003'
IOC3R0           EQU  H'0004'
IOC3R1           EQU  H'0005'
IOC3R2           EQU  H'0006'
IOC3R3           EQU  H'0007'


;----- RPINR22_23 Bits -----------------------------------------------------
IOC4R0           EQU  H'0000'
IOC4R1           EQU  H'0001'
IOC4R2           EQU  H'0002'
IOC4R3           EQU  H'0003'
IOC5R0           EQU  H'0004'
IOC5R1           EQU  H'0005'
IOC5R2           EQU  H'0006'
IOC5R3           EQU  H'0007'


;----- RPINR24_25 Bits -----------------------------------------------------
IOC6R0           EQU  H'0000'
IOC6R1           EQU  H'0001'
IOC6R2           EQU  H'0002'
IOC6R3           EQU  H'0003'
IOC7R0           EQU  H'0004'
IOC7R1           EQU  H'0005'
IOC7R2           EQU  H'0006'
IOC7R3           EQU  H'0007'


;----- RPINR26_27 Bits -----------------------------------------------------
INT1R0           EQU  H'0000'
INT1R1           EQU  H'0001'
INT1R2           EQU  H'0002'
INT1R3           EQU  H'0003'
INT2R0           EQU  H'0004'
INT2R1           EQU  H'0005'
INT2R2           EQU  H'0006'
INT2R3           EQU  H'0007'


;----- RPINR28_29 Bits -----------------------------------------------------
INT3R0           EQU  H'0000'
INT3R1           EQU  H'0001'
INT3R2           EQU  H'0002'
INT3R3           EQU  H'0003'
MDMINR0          EQU  H'0004'
MDMINR1          EQU  H'0005'
MDMINR2          EQU  H'0006'
MDMINR3          EQU  H'0007'


;----- RPINR30_31 Bits -----------------------------------------------------
MDCIN1R0         EQU  H'0000'
MDCIN1R1         EQU  H'0001'
MDCIN1R2         EQU  H'0002'
MDCIN1R3         EQU  H'0003'
MDCIN2R0         EQU  H'0004'
MDCIN2R1         EQU  H'0005'
MDCIN2R2         EQU  H'0006'
MDCIN2R3         EQU  H'0007'


;----- RPINR32_33 Bits -----------------------------------------------------
CCP4R0           EQU  H'0000'
CCP4R1           EQU  H'0001'
CCP4R2           EQU  H'0002'
CCP4R3           EQU  H'0003'
CCP5R0           EQU  H'0004'
CCP5R1           EQU  H'0005'
CCP5R2           EQU  H'0006'
CCP5R3           EQU  H'0007'


;----- RPINR34_35 Bits -----------------------------------------------------
CCP6R0           EQU  H'0000'
CCP6R1           EQU  H'0001'
CCP6R2           EQU  H'0002'
CCP6R3           EQU  H'0003'
CCP7R0           EQU  H'0004'
CCP7R1           EQU  H'0005'
CCP7R2           EQU  H'0006'
CCP7R3           EQU  H'0007'


;----- RPINR36_37 Bits -----------------------------------------------------
CCP8R0           EQU  H'0000'
CCP8R1           EQU  H'0001'
CCP8R2           EQU  H'0002'
CCP8R3           EQU  H'0003'
CCP9R0           EQU  H'0004'
CCP9R1           EQU  H'0005'
CCP9R2           EQU  H'0006'
CCP9R3           EQU  H'0007'


;----- RPINR38_39 Bits -----------------------------------------------------
CCP10R0          EQU  H'0000'
CCP10R1          EQU  H'0001'
CCP10R2          EQU  H'0002'
CCP10R3          EQU  H'0003'
T0CKIR0          EQU  H'0004'
T0CKIR1          EQU  H'0005'
T0CKIR2          EQU  H'0006'
T0CKIR3          EQU  H'0007'


;----- RPINR40_41 Bits -----------------------------------------------------
T1GR0            EQU  H'0000'
T1GR1            EQU  H'0001'
T1GR2            EQU  H'0002'
T1GR3            EQU  H'0003'
T1CKIR0          EQU  H'0004'
T1CKIR1          EQU  H'0005'
T1CKIR2          EQU  H'0006'
T1CKIR3          EQU  H'0007'


;----- RPINR42_43 Bits -----------------------------------------------------
T3GR0            EQU  H'0000'
T3GR1            EQU  H'0001'
T3GR2            EQU  H'0002'
T3GR3            EQU  H'0003'
T3CKIR0          EQU  H'0004'
T3CKIR1          EQU  H'0005'
T3CKIR2          EQU  H'0006'
T3CKIR3          EQU  H'0007'


;----- RPINR44_45 Bits -----------------------------------------------------
T5GR0            EQU  H'0000'
T5GR1            EQU  H'0001'
T5GR2            EQU  H'0002'
T5GR3            EQU  H'0003'
T5CKIR0          EQU  H'0004'
T5CKIR1          EQU  H'0005'
T5CKIR2          EQU  H'0006'
T5CKIR3          EQU  H'0007'


;----- RPINR46_47 Bits -----------------------------------------------------
PBIO0R0          EQU  H'0000'
PBIO0R1          EQU  H'0001'
PBIO0R2          EQU  H'0002'
PBIO0R3          EQU  H'0003'
PBIO1R0          EQU  H'0004'
PBIO1R1          EQU  H'0005'
PBIO1R2          EQU  H'0006'
PBIO1R3          EQU  H'0007'


;----- RPINR48_49 Bits -----------------------------------------------------
PBIO2R0          EQU  H'0000'
PBIO2R1          EQU  H'0001'
PBIO2R2          EQU  H'0002'
PBIO2R3          EQU  H'0003'
PBIO3R0          EQU  H'0004'
PBIO3R1          EQU  H'0005'
PBIO3R2          EQU  H'0006'
PBIO3R3          EQU  H'0007'


;----- RPINR50_51 Bits -----------------------------------------------------
PBIO4R0          EQU  H'0000'
PBIO4R1          EQU  H'0001'
PBIO4R2          EQU  H'0002'
PBIO4R3          EQU  H'0003'
PBIO5R0          EQU  H'0004'
PBIO5R1          EQU  H'0005'
PBIO5R2          EQU  H'0006'
PBIO5R3          EQU  H'0007'


;----- RPINR52_53 Bits -----------------------------------------------------
PBIO6R0          EQU  H'0000'
PBIO6R1          EQU  H'0001'
PBIO6R2          EQU  H'0002'
PBIO6R3          EQU  H'0003'
PBIO7R0          EQU  H'0004'
PBIO7R1          EQU  H'0005'
PBIO7R2          EQU  H'0006'
PBIO7R3          EQU  H'0007'


;----- ANCON3 Bits -----------------------------------------------------
ANSEL16          EQU  H'0000'
ANSEL17          EQU  H'0001'
ANSEL18          EQU  H'0002'
ANSEL19          EQU  H'0003'
ANSEL20          EQU  H'0004'
ANSEL21          EQU  H'0005'
ANSEL22          EQU  H'0006'
ANSEL23          EQU  H'0007'


;----- ANCON2 Bits -----------------------------------------------------
ANSEL8           EQU  H'0000'
ANSEL9           EQU  H'0001'
ANSEL10          EQU  H'0002'
ANSEL11          EQU  H'0003'
ANSEL12          EQU  H'0004'
ANSEL13          EQU  H'0005'
ANSEL14          EQU  H'0006'
ANSEL15          EQU  H'0007'


;----- ANCON1 Bits -----------------------------------------------------
ANSEL0           EQU  H'0000'
ANSEL1           EQU  H'0001'
ANSEL2           EQU  H'0002'
ANSEL3           EQU  H'0003'
ANSEL4           EQU  H'0004'
ANSEL5           EQU  H'0005'
ANSEL6           EQU  H'0006'
ANSEL7           EQU  H'0007'


;----- ADCTMUEN0L Bits -----------------------------------------------------
CTMUEN0          EQU  H'0000'
CTMUEN1          EQU  H'0001'
CTMUEN2          EQU  H'0002'
CTMUEN3          EQU  H'0003'
CTMUEN4          EQU  H'0004'
CTMUEN5          EQU  H'0005'
CTMUEN6          EQU  H'0006'
CTMUEN7          EQU  H'0007'


;----- ADCTMUEN0H Bits -----------------------------------------------------
CTMUEN8          EQU  H'0000'
CTMUEN9          EQU  H'0001'
CTMUEN10         EQU  H'0002'
CTMUEN11         EQU  H'0003'
CTMUEN12         EQU  H'0004'
CTMUEN13         EQU  H'0005'
CTMUEN14         EQU  H'0006'
CTMUEN15         EQU  H'0007'


;----- ADCTMUEN1L Bits -----------------------------------------------------
CTUMEN16         EQU  H'0000'
CTUMEN17         EQU  H'0001'
CTUMEN18         EQU  H'0002'
CTUMEN19         EQU  H'0003'
CTMUEN20         EQU  H'0004'
CTMUEN21         EQU  H'0005'
CTMUEN22         EQU  H'0006'
CTMUEN23         EQU  H'0007'


;----- ADCTMUEN1H Bits -----------------------------------------------------
CTUMEN24         EQU  H'0000'
CTUMEN25         EQU  H'0001'
CTUMEN26         EQU  H'0002'
CTUMEN27         EQU  H'0003'
CTUMEN28         EQU  H'0004'
CTUMEN29         EQU  H'0005'
CTMUEN30         EQU  H'0006'


;----- ADCHIT0L Bits -----------------------------------------------------
CHH0             EQU  H'0000'
CHH1             EQU  H'0001'
CHH2             EQU  H'0002'
CHH3             EQU  H'0003'
CHH4             EQU  H'0004'
CHH5             EQU  H'0005'
CHH6             EQU  H'0006'
CHH7             EQU  H'0007'


;----- ADCHIT0H Bits -----------------------------------------------------
CHH8             EQU  H'0000'
CHH9             EQU  H'0001'
CHH10            EQU  H'0002'
CHH11            EQU  H'0003'
CHH12            EQU  H'0004'
CHH13            EQU  H'0005'
CHH14            EQU  H'0006'
CHH15            EQU  H'0007'


;----- ADCHIT1L Bits -----------------------------------------------------
CHH16            EQU  H'0000'
CHH17            EQU  H'0001'
CHH18            EQU  H'0002'
CHH19            EQU  H'0003'
CHH20            EQU  H'0004'
CHH21            EQU  H'0005'
CHH22            EQU  H'0006'
CHH23            EQU  H'0007'


;----- ADCHIT1H Bits -----------------------------------------------------
CHH24            EQU  H'0000'
CHH25            EQU  H'0001'
CHH26            EQU  H'0002'
CHH27            EQU  H'0003'
CHH28            EQU  H'0004'
CHH29            EQU  H'0005'
CHH30            EQU  H'0006'


;----- ADCSS0L Bits -----------------------------------------------------
CSS0             EQU  H'0000'
CSS1             EQU  H'0001'
CSS2             EQU  H'0002'
CSS3             EQU  H'0003'
CSS4             EQU  H'0004'
CSS5             EQU  H'0005'
CSS6             EQU  H'0006'
CSS7             EQU  H'0007'


;----- ADCSS0H Bits -----------------------------------------------------
CSS8             EQU  H'0000'
CSS9             EQU  H'0001'
CSS10            EQU  H'0002'
CSS11            EQU  H'0003'
CSS12            EQU  H'0004'
CSS13            EQU  H'0005'
CSS14            EQU  H'0006'
CSS15            EQU  H'0007'


;----- ADCSS1L Bits -----------------------------------------------------
CSS16            EQU  H'0000'
CSS17            EQU  H'0001'
CSS18            EQU  H'0002'
CSS19            EQU  H'0003'
CSS20            EQU  H'0004'
CSS21            EQU  H'0005'
CSS22            EQU  H'0006'
CSS23            EQU  H'0007'


;----- ADCSS1H Bits -----------------------------------------------------
CSS24            EQU  H'0000'
CSS25            EQU  H'0001'
CSS26            EQU  H'0002'
CSS27            EQU  H'0003'
CSS28            EQU  H'0004'
CSS29            EQU  H'0005'
CSS30            EQU  H'0006'


;----- ADCHS0L Bits -----------------------------------------------------
CH0SA0           EQU  H'0000'
CH0SA1           EQU  H'0001'
CH0SA2           EQU  H'0002'
CH0SA3           EQU  H'0003'
CH0SA4           EQU  H'0004'
CH0NA0           EQU  H'0005'
CH0NA1           EQU  H'0006'
CH0NA2           EQU  H'0007'


;----- ADCHS0H Bits -----------------------------------------------------
CH0SB0           EQU  H'0000'
CH0SB1           EQU  H'0001'
CH0SB2           EQU  H'0002'
CH0SB3           EQU  H'0003'
CH0SB4           EQU  H'0004'
CH0NB0           EQU  H'0005'
CH0NB1           EQU  H'0006'
CH0NB2           EQU  H'0007'


;----- ADCON5L Bits -----------------------------------------------------
CM0              EQU  H'0000'
CM1              EQU  H'0001'
WM0_ADCON5L      EQU  H'0002'
WM1_ADCON5L      EQU  H'0003'


;----- ADCON5H Bits -----------------------------------------------------
CTMUREQ          EQU  H'0005'
LPENA            EQU  H'0006'
ASENA            EQU  H'0007'

ASINTMD0         EQU  H'0000'
ASINTMD1         EQU  H'0001'


;----- ADCON3L Bits -----------------------------------------------------
ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ADCS3            EQU  H'0003'
ADCS4            EQU  H'0004'
ADCS5            EQU  H'0005'
ADCS6            EQU  H'0006'
ADCS7            EQU  H'0007'


;----- ADCON3H Bits -----------------------------------------------------
PUMPEN           EQU  H'0005'
EXTSAM           EQU  H'0006'
ADRC             EQU  H'0007'

SAMC0            EQU  H'0000'
SAMC1            EQU  H'0001'
SAMC2            EQU  H'0002'
SAMC3            EQU  H'0003'
SAMC4            EQU  H'0004'


;----- ADCON2L Bits -----------------------------------------------------
ALTS             EQU  H'0000'
BUFM             EQU  H'0001'
BUFS             EQU  H'0007'

SMPI0            EQU  H'0002'
SMPI1            EQU  H'0003'
SMPI2            EQU  H'0004'
SMPI3            EQU  H'0005'
SMPI4            EQU  H'0006'


;----- ADCON2H Bits -----------------------------------------------------
CSCNA            EQU  H'0002'
BUFREGEN         EQU  H'0003'
OFFCAL           EQU  H'0004'
NVCFG0           EQU  H'0005'

PVCFG0           EQU  H'0006'
PVCFG1           EQU  H'0007'


;----- LCDDATA0 Bits -----------------------------------------------------
S00C0            EQU  H'0000'
S01C0            EQU  H'0001'
S02C0            EQU  H'0002'
S03C0            EQU  H'0003'
S04C0            EQU  H'0004'
S05C0            EQU  H'0005'
S06C0            EQU  H'0006'
S07C0            EQU  H'0007'


;----- LCDDATA1 Bits -----------------------------------------------------
S08C0            EQU  H'0000'
S09C0            EQU  H'0001'
S10C0            EQU  H'0002'
S11C0            EQU  H'0003'
S12C0            EQU  H'0004'
S13C0            EQU  H'0005'
S14C0            EQU  H'0006'
S15C0            EQU  H'0007'


;----- LCDDATA2 Bits -----------------------------------------------------
S16C0            EQU  H'0000'
S17C0            EQU  H'0001'
S18C0            EQU  H'0002'
S19C0            EQU  H'0003'
S20C0            EQU  H'0004'
S21C0            EQU  H'0005'
S22C0            EQU  H'0006'
S23C0            EQU  H'0007'


;----- LCDDATA3 Bits -----------------------------------------------------
S24C0            EQU  H'0000'
S25C0            EQU  H'0001'
S26C0            EQU  H'0002'
S27C0            EQU  H'0003'
S28C0            EQU  H'0004'
S29C0            EQU  H'0005'
S30C0            EQU  H'0006'
S31C0            EQU  H'0007'


;----- LCDDATA4 Bits -----------------------------------------------------
S32C0            EQU  H'0000'
S33C0            EQU  H'0001'
S34C0            EQU  H'0002'
S35C0            EQU  H'0003'
S36C0            EQU  H'0004'
S37C0            EQU  H'0005'
S38C0            EQU  H'0006'
S39C0            EQU  H'0007'


;----- LCDDATA5 Bits -----------------------------------------------------
S40C0            EQU  H'0000'
S41C0            EQU  H'0001'
S42C0            EQU  H'0002'
S43C0            EQU  H'0003'
S44C0            EQU  H'0004'
S45C0            EQU  H'0005'
S46C0            EQU  H'0006'
S47C0            EQU  H'0007'


;----- LCDDATA6 Bits -----------------------------------------------------
S48C0            EQU  H'0000'
S49C0            EQU  H'0001'
S50C0            EQU  H'0002'
S51C0            EQU  H'0003'
S52C0            EQU  H'0004'
S53C0            EQU  H'0005'
S54C0            EQU  H'0006'
S55C0            EQU  H'0007'


;----- LCDDATA7 Bits -----------------------------------------------------
S56C0            EQU  H'0000'
S57C0            EQU  H'0001'
S58C0            EQU  H'0002'
S59C0            EQU  H'0003'
S60C0            EQU  H'0004'
S61C0            EQU  H'0005'
S62C0            EQU  H'0006'
S63C0            EQU  H'0007'


;----- LCDDATA8 Bits -----------------------------------------------------
S00C1            EQU  H'0000'
S01C1            EQU  H'0001'
S02C1            EQU  H'0002'
S03C1            EQU  H'0003'
S04C1            EQU  H'0004'
S05C1            EQU  H'0005'
S06C1            EQU  H'0006'
S07C1            EQU  H'0007'


;----- LCDDATA9 Bits -----------------------------------------------------
S08C1            EQU  H'0000'
S09C1            EQU  H'0001'
S10C1            EQU  H'0002'
S11C1            EQU  H'0003'
S12C1            EQU  H'0004'
S13C1            EQU  H'0005'
S14C1            EQU  H'0006'
S15C1            EQU  H'0007'


;----- LCDDATA10 Bits -----------------------------------------------------
S16C1            EQU  H'0000'
S17C1            EQU  H'0001'
S18C1            EQU  H'0002'
S19C1            EQU  H'0003'
S20C1            EQU  H'0004'
S21C1            EQU  H'0005'
S22C1            EQU  H'0006'
S23C1            EQU  H'0007'


;----- LCDDATA11 Bits -----------------------------------------------------
S24C1            EQU  H'0000'
S25C1            EQU  H'0001'
S26C1            EQU  H'0002'
S27C1            EQU  H'0003'
S28C1            EQU  H'0004'
S29C1            EQU  H'0005'
S30C1            EQU  H'0006'
S31C1            EQU  H'0007'


;----- LCDDATA12 Bits -----------------------------------------------------
S32C1            EQU  H'0000'
S33C1            EQU  H'0001'
S34C1            EQU  H'0002'
S35C1            EQU  H'0003'
S36C1            EQU  H'0004'
S37C1            EQU  H'0005'
S38C1            EQU  H'0006'
S39C1            EQU  H'0007'


;----- LCDDATA13 Bits -----------------------------------------------------
S40C1            EQU  H'0000'
S41C1            EQU  H'0001'
S42C1            EQU  H'0002'
S43C1            EQU  H'0003'
S44C1            EQU  H'0004'
S45C1            EQU  H'0005'
S46C1            EQU  H'0006'
S47C1            EQU  H'0007'


;----- LCDDATA14 Bits -----------------------------------------------------
S48C1            EQU  H'0000'
S49C1            EQU  H'0001'
S50C1            EQU  H'0002'
S51C1            EQU  H'0003'
S52C1            EQU  H'0004'
S53C1            EQU  H'0005'
S54C1            EQU  H'0006'
S55C1            EQU  H'0007'


;----- LCDDATA15 Bits -----------------------------------------------------
S56C1            EQU  H'0000'
S57C1            EQU  H'0001'
S58C1            EQU  H'0002'
S59C1            EQU  H'0003'
S60C1            EQU  H'0004'
S61C1            EQU  H'0005'
S62C1            EQU  H'0006'
S63C1            EQU  H'0007'


;----- LCDDATA16 Bits -----------------------------------------------------
S00C2            EQU  H'0000'
S01C2            EQU  H'0001'
S02C2            EQU  H'0002'
S03C2            EQU  H'0003'
S04C2            EQU  H'0004'
S05C2            EQU  H'0005'
S06C2            EQU  H'0006'
S07C2            EQU  H'0007'


;----- LCDDATA17 Bits -----------------------------------------------------
S08C2            EQU  H'0000'
S09C2            EQU  H'0001'
S10C2            EQU  H'0002'
S11C2            EQU  H'0003'
S12C2            EQU  H'0004'
S13C2            EQU  H'0005'
S14C2            EQU  H'0006'
S15C2            EQU  H'0007'


;----- LCDDATA18 Bits -----------------------------------------------------
S16C2            EQU  H'0000'
S17C2            EQU  H'0001'
S18C2            EQU  H'0002'
S19C2            EQU  H'0003'
S20C2            EQU  H'0004'
S21C2            EQU  H'0005'
S22C2            EQU  H'0006'
S23C2            EQU  H'0007'


;----- LCDDATA19 Bits -----------------------------------------------------
S24C2            EQU  H'0000'
S25C2            EQU  H'0001'
S26C2            EQU  H'0002'
S27C2            EQU  H'0003'
S28C2            EQU  H'0004'
S29C2            EQU  H'0005'
S30C2            EQU  H'0006'
S31C2            EQU  H'0007'


;----- LCDDATA20 Bits -----------------------------------------------------
S32C2            EQU  H'0000'
S33C2            EQU  H'0001'
S34C2            EQU  H'0002'
S35C2            EQU  H'0003'
S36C2            EQU  H'0004'
S37C2            EQU  H'0005'
S38C2            EQU  H'0006'
S39C2            EQU  H'0007'


;----- LCDDATA21 Bits -----------------------------------------------------
S40C2            EQU  H'0000'
S41C2            EQU  H'0001'
S42C2            EQU  H'0002'
S43C2            EQU  H'0003'
S44C2            EQU  H'0004'
S45C2            EQU  H'0005'
S46C2            EQU  H'0006'
S47C2            EQU  H'0007'


;----- LCDDATA22 Bits -----------------------------------------------------
S48C2            EQU  H'0000'
S49C2            EQU  H'0001'
S50C2            EQU  H'0002'
S51C2            EQU  H'0003'
S52C2            EQU  H'0004'
S53C2            EQU  H'0005'
S54C2            EQU  H'0006'
S55C2            EQU  H'0007'


;----- LCDDATA23 Bits -----------------------------------------------------
S56C2            EQU  H'0000'
S57C2            EQU  H'0001'
S58C2            EQU  H'0002'
S59C2            EQU  H'0003'
S60C2            EQU  H'0004'
S61C2            EQU  H'0005'
S62C2            EQU  H'0006'
S63C2            EQU  H'0007'


;----- LCDDATA24 Bits -----------------------------------------------------
S00C3            EQU  H'0000'
S01C3            EQU  H'0001'
S02C3            EQU  H'0002'
S03C3            EQU  H'0003'
S04C3            EQU  H'0004'
S05C3            EQU  H'0005'
S06C3            EQU  H'0006'
S07C3            EQU  H'0007'


;----- LCDDATA25 Bits -----------------------------------------------------
S08C3            EQU  H'0000'
S09C3            EQU  H'0001'
S10C3            EQU  H'0002'
S11C3            EQU  H'0003'
S12C3            EQU  H'0004'
S13C3            EQU  H'0005'
S14C3            EQU  H'0006'
S15C3            EQU  H'0007'


;----- LCDDATA26 Bits -----------------------------------------------------
S16C3            EQU  H'0000'
S17C3            EQU  H'0001'
S18C3            EQU  H'0002'
S19C3            EQU  H'0003'
S20C3            EQU  H'0004'
S21C3            EQU  H'0005'
S22C3            EQU  H'0006'
S23C3            EQU  H'0007'


;----- LCDDATA27 Bits -----------------------------------------------------
S24C3            EQU  H'0000'
S25C3            EQU  H'0001'
S26C3            EQU  H'0002'
S27C3            EQU  H'0003'
S28C3            EQU  H'0004'
S29C3            EQU  H'0005'
S30C3            EQU  H'0006'
S31C3            EQU  H'0007'


;----- LCDDATA28 Bits -----------------------------------------------------
S32C3            EQU  H'0000'
S33C3            EQU  H'0001'
S34C3            EQU  H'0002'
S35C3            EQU  H'0003'
S36C3            EQU  H'0004'
S37C3            EQU  H'0005'
S38C3            EQU  H'0006'
S39C3            EQU  H'0007'


;----- LCDDATA29 Bits -----------------------------------------------------
S40C3            EQU  H'0000'
S41C3            EQU  H'0001'
S42C3            EQU  H'0002'
S43C3            EQU  H'0003'
S44C3            EQU  H'0004'
S45C3            EQU  H'0005'
S46C3            EQU  H'0006'
S47C3            EQU  H'0007'


;----- LCDDATA30 Bits -----------------------------------------------------
S48C3            EQU  H'0000'
S49C3            EQU  H'0001'
S50C3            EQU  H'0002'
S51C3            EQU  H'0003'
S52C3            EQU  H'0004'
S53C3            EQU  H'0005'
S54C3            EQU  H'0006'
S55C3            EQU  H'0007'


;----- LCDDATA31 Bits -----------------------------------------------------
S56C3            EQU  H'0000'
S57C3            EQU  H'0001'
S58C3            EQU  H'0002'
S59C3            EQU  H'0003'
S60C3            EQU  H'0004'
S61C3            EQU  H'0005'
S62C3            EQU  H'0006'
S63C3            EQU  H'0007'


;----- LCDDATA32 Bits -----------------------------------------------------
S00C4            EQU  H'0000'
S01C4            EQU  H'0001'
S02C4            EQU  H'0002'
S03C4            EQU  H'0003'
S04C4            EQU  H'0004'
S05C4            EQU  H'0005'
S06C4            EQU  H'0006'
S07C4            EQU  H'0007'


;----- LCDDATA33 Bits -----------------------------------------------------
S08C4            EQU  H'0000'
S09C4            EQU  H'0001'
S10C4            EQU  H'0002'
S11C4            EQU  H'0003'
S12C4            EQU  H'0004'
S13C4            EQU  H'0005'
S14C4            EQU  H'0006'
S15C4            EQU  H'0007'


;----- LCDDATA34 Bits -----------------------------------------------------
S16C4            EQU  H'0000'
S17C4            EQU  H'0001'
S18C4            EQU  H'0002'
S19C4            EQU  H'0003'
S20C4            EQU  H'0004'
S21C4            EQU  H'0005'
S22C4            EQU  H'0006'
S23C4            EQU  H'0007'


;----- LCDDATA35 Bits -----------------------------------------------------
S24C4            EQU  H'0000'
S25C4            EQU  H'0001'
S26C4            EQU  H'0002'
S27C4            EQU  H'0003'
S28C4            EQU  H'0004'
S29C4            EQU  H'0005'
S30C4            EQU  H'0006'
S31C4            EQU  H'0007'


;----- LCDDATA36 Bits -----------------------------------------------------
S32C4            EQU  H'0000'
S33C4            EQU  H'0001'
S34C4            EQU  H'0002'
S35C4            EQU  H'0003'
S36C4            EQU  H'0004'
S37C4            EQU  H'0005'
S38C4            EQU  H'0006'
S39C4            EQU  H'0007'


;----- LCDDATA37 Bits -----------------------------------------------------
S40C4            EQU  H'0000'
S41C4            EQU  H'0001'
S42C4            EQU  H'0002'
S43C4            EQU  H'0003'
S44C4            EQU  H'0004'
S45C4            EQU  H'0005'
S46C4            EQU  H'0006'
S47C4            EQU  H'0007'


;----- LCDDATA38 Bits -----------------------------------------------------
S48C4            EQU  H'0000'
S49C4            EQU  H'0001'
S50C4            EQU  H'0002'
S51C4            EQU  H'0003'
S52C4            EQU  H'0004'
S53C4            EQU  H'0005'
S54C4            EQU  H'0006'
S55C4            EQU  H'0007'


;----- LCDDATA39 Bits -----------------------------------------------------
S56C4            EQU  H'0000'
S57C4            EQU  H'0001'
S58C4            EQU  H'0002'
S59C4            EQU  H'0003'
S60C4            EQU  H'0004'
S61C4            EQU  H'0005'
S62C4            EQU  H'0006'
S63C4            EQU  H'0007'


;----- LCDDATA40 Bits -----------------------------------------------------
S00C5            EQU  H'0000'
S01C5            EQU  H'0001'
S02C5            EQU  H'0002'
S03C5            EQU  H'0003'
S04C5            EQU  H'0004'
S05C5            EQU  H'0005'
S06C5            EQU  H'0006'
S07C5            EQU  H'0007'


;----- LCDDATA41 Bits -----------------------------------------------------
S08C5            EQU  H'0000'
S09C5            EQU  H'0001'
S10C5            EQU  H'0002'
S11C5            EQU  H'0003'
S12C5            EQU  H'0004'
S13C5            EQU  H'0005'
S14C5            EQU  H'0006'
S15C5            EQU  H'0007'


;----- LCDDATA42 Bits -----------------------------------------------------
S16C5            EQU  H'0000'
S17C5            EQU  H'0001'
S18C5            EQU  H'0002'
S19C5            EQU  H'0003'
S20C5            EQU  H'0004'
S21C5            EQU  H'0005'
S22C5            EQU  H'0006'
S23C5            EQU  H'0007'


;----- LCDDATA43 Bits -----------------------------------------------------
S24C5            EQU  H'0000'
S25C5            EQU  H'0001'
S26C5            EQU  H'0002'
S27C5            EQU  H'0003'
S28C5            EQU  H'0004'
S29C5            EQU  H'0005'
S30C5            EQU  H'0006'
S31C5            EQU  H'0007'


;----- LCDDATA44 Bits -----------------------------------------------------
S32C5            EQU  H'0000'
S33C5            EQU  H'0001'
S34C5            EQU  H'0002'
S35C5            EQU  H'0003'
S36C5            EQU  H'0004'
S37C5            EQU  H'0005'
S38C5            EQU  H'0006'
S39C5            EQU  H'0007'


;----- LCDDATA45 Bits -----------------------------------------------------
S40C5            EQU  H'0000'
S41C5            EQU  H'0001'
S42C5            EQU  H'0002'
S43C5            EQU  H'0003'
S44C5            EQU  H'0004'
S45C5            EQU  H'0005'
S46C5            EQU  H'0006'
S47C5            EQU  H'0007'


;----- LCDDATA46 Bits -----------------------------------------------------
S48C5            EQU  H'0000'
S49C5            EQU  H'0001'
S50C5            EQU  H'0002'
S51C5            EQU  H'0003'
S52C5            EQU  H'0004'
S53C5            EQU  H'0005'
S54C5            EQU  H'0006'
S55C5            EQU  H'0007'


;----- LCDDATA47 Bits -----------------------------------------------------
S56C5            EQU  H'0000'
S57C5            EQU  H'0001'
S58C5            EQU  H'0002'
S59C5            EQU  H'0003'
S60C5            EQU  H'0004'
S61C5            EQU  H'0005'
S62C5            EQU  H'0006'
S63C5            EQU  H'0007'


;----- LCDDATA48 Bits -----------------------------------------------------
S00C6            EQU  H'0000'
S01C6            EQU  H'0001'
S02C6            EQU  H'0002'
S03C6            EQU  H'0003'
S04C6            EQU  H'0004'
S05C6            EQU  H'0005'
S06C6            EQU  H'0006'
S07C6            EQU  H'0007'


;----- LCDDATA49 Bits -----------------------------------------------------
S08C6            EQU  H'0000'
S09C6            EQU  H'0001'
S10C6            EQU  H'0002'
S11C6            EQU  H'0003'
S12C6            EQU  H'0004'
S13C6            EQU  H'0005'
S14C6            EQU  H'0006'
S15C6            EQU  H'0007'


;----- LCDDATA50 Bits -----------------------------------------------------
S16C6            EQU  H'0000'
S17C6            EQU  H'0001'
S18C6            EQU  H'0002'
S19C6            EQU  H'0003'
S20C6            EQU  H'0004'
S21C6            EQU  H'0005'
S22C6            EQU  H'0006'
S23C6            EQU  H'0007'


;----- LCDDATA51 Bits -----------------------------------------------------
S24C6            EQU  H'0000'
S25C6            EQU  H'0001'
S26C6            EQU  H'0002'
S27C6            EQU  H'0003'
S28C6            EQU  H'0004'
S29C6            EQU  H'0005'
S30C6            EQU  H'0006'
S31C6            EQU  H'0007'


;----- LCDDATA52 Bits -----------------------------------------------------
S32C6            EQU  H'0000'
S33C6            EQU  H'0001'
S34C6            EQU  H'0002'
S35C6            EQU  H'0003'
S36C6            EQU  H'0004'
S37C6            EQU  H'0005'
S38C6            EQU  H'0006'
S39C6            EQU  H'0007'


;----- LCDDATA53 Bits -----------------------------------------------------
S40C6            EQU  H'0000'
S41C6            EQU  H'0001'
S42C6            EQU  H'0002'
S43C6            EQU  H'0003'
S44C6            EQU  H'0004'
S45C6            EQU  H'0005'
S46C6            EQU  H'0006'
S47C6            EQU  H'0007'


;----- LCDDATA54 Bits -----------------------------------------------------
S48C6            EQU  H'0000'
S49C6            EQU  H'0001'
S50C6            EQU  H'0002'
S51C6            EQU  H'0003'
S52C6            EQU  H'0004'
S53C6            EQU  H'0005'
S54C6            EQU  H'0006'
S55C6            EQU  H'0007'


;----- LCDDATA55 Bits -----------------------------------------------------
S56C6            EQU  H'0000'
S57C6            EQU  H'0001'
S58C6            EQU  H'0002'
S59C6            EQU  H'0003'
S60C6            EQU  H'0004'
S61C6            EQU  H'0005'
S62C6            EQU  H'0006'
S63C6            EQU  H'0007'


;----- LCDDATA56 Bits -----------------------------------------------------
S00C7            EQU  H'0000'
S01C7            EQU  H'0001'
S02C7            EQU  H'0002'
S03C7            EQU  H'0003'
S04C7            EQU  H'0004'
S05C7            EQU  H'0005'
S06C7            EQU  H'0006'
S07C7            EQU  H'0007'


;----- LCDDATA57 Bits -----------------------------------------------------
S08C7            EQU  H'0000'
S09C7            EQU  H'0001'
S10C7            EQU  H'0002'
S11C7            EQU  H'0003'
S12C7            EQU  H'0004'
S13C7            EQU  H'0005'
S14C7            EQU  H'0006'
S15C7            EQU  H'0007'


;----- LCDDATA58 Bits -----------------------------------------------------
S16C7            EQU  H'0000'
S17C7            EQU  H'0001'
S18C7            EQU  H'0002'
S19C7            EQU  H'0003'
S20C7            EQU  H'0004'
S21C7            EQU  H'0005'
S22C7            EQU  H'0006'
S23C7            EQU  H'0007'


;----- LCDDATA59 Bits -----------------------------------------------------
S24C7            EQU  H'0000'
S25C7            EQU  H'0001'
S26C7            EQU  H'0002'
S27C7            EQU  H'0003'
S28C7            EQU  H'0004'
S29C7            EQU  H'0005'
S30C7            EQU  H'0006'
S31C7            EQU  H'0007'


;----- LCDDATA60 Bits -----------------------------------------------------
S32C7            EQU  H'0000'
S33C7            EQU  H'0001'
S34C7            EQU  H'0002'
S35C7            EQU  H'0003'
S36C7            EQU  H'0004'
S37C7            EQU  H'0005'
S38C7            EQU  H'0006'
S39C7            EQU  H'0007'


;----- LCDDATA61 Bits -----------------------------------------------------
S40C7            EQU  H'0000'
S41C7            EQU  H'0001'
S42C7            EQU  H'0002'
S43C7            EQU  H'0003'
S44C7            EQU  H'0004'
S45C7            EQU  H'0005'
S46C7            EQU  H'0006'
S47C7            EQU  H'0007'


;----- LCDDATA62 Bits -----------------------------------------------------
S48C7            EQU  H'0000'
S49C7            EQU  H'0001'
S50C7            EQU  H'0002'
S51C7            EQU  H'0003'
S52C7            EQU  H'0004'
S53C7            EQU  H'0005'
S54C7            EQU  H'0006'
S55C7            EQU  H'0007'


;----- LCDDATA63 Bits -----------------------------------------------------
S56C7            EQU  H'0000'
S57C7            EQU  H'0001'
S58C7            EQU  H'0002'
S59C7            EQU  H'0003'
S60C7            EQU  H'0004'
S61C7            EQU  H'0005'
S62C7            EQU  H'0006'
S63C7            EQU  H'0007'


;----- LCDSE0 Bits -----------------------------------------------------
SE00             EQU  H'0000'
SE01             EQU  H'0001'
SE02             EQU  H'0002'
SE03             EQU  H'0003'
SE04             EQU  H'0004'
SE05             EQU  H'0005'
SE06             EQU  H'0006'
SE07             EQU  H'0007'


;----- LCDSE1 Bits -----------------------------------------------------
SE08             EQU  H'0000'
SE09             EQU  H'0001'
SE10             EQU  H'0002'
SE11             EQU  H'0003'
SE12             EQU  H'0004'
SE13             EQU  H'0005'
SE14             EQU  H'0006'
SE15             EQU  H'0007'


;----- LCDSE2 Bits -----------------------------------------------------
SE16             EQU  H'0000'
SE17             EQU  H'0001'
SE18             EQU  H'0002'
SE19             EQU  H'0003'
SE20             EQU  H'0004'
SE21             EQU  H'0005'
SE22             EQU  H'0006'
SE23             EQU  H'0007'


;----- LCDSE3 Bits -----------------------------------------------------
SE24             EQU  H'0000'
SE25             EQU  H'0001'
SE26             EQU  H'0002'
SE27             EQU  H'0003'
SE28             EQU  H'0004'
SE29             EQU  H'0005'
SE30             EQU  H'0006'
SE31             EQU  H'0007'


;----- LCDSE4 Bits -----------------------------------------------------
SE32             EQU  H'0000'
SE33             EQU  H'0001'
SE34             EQU  H'0002'
SE35             EQU  H'0003'
SE36             EQU  H'0004'
SE37             EQU  H'0005'
SE38             EQU  H'0006'
SE39             EQU  H'0007'


;----- LCDSE5 Bits -----------------------------------------------------
SE40             EQU  H'0000'
SE41             EQU  H'0001'
SE42             EQU  H'0002'
SE43             EQU  H'0003'
SE44             EQU  H'0004'
SE45             EQU  H'0005'
SE46             EQU  H'0006'
SE47             EQU  H'0007'


;----- LCDSE6 Bits -----------------------------------------------------
SE48             EQU  H'0000'
SE49             EQU  H'0001'
SE50             EQU  H'0002'
SE51             EQU  H'0003'
SE52             EQU  H'0004'
SE53             EQU  H'0005'
SE54             EQU  H'0006'
SE55             EQU  H'0007'


;----- LCDSE7 Bits -----------------------------------------------------
SE56             EQU  H'0000'
SE57             EQU  H'0001'
SE58             EQU  H'0002'
SE59             EQU  H'0003'
SE60             EQU  H'0004'
SE61             EQU  H'0005'
SE62             EQU  H'0006'
SE63             EQU  H'0007'


;----- LCDRL Bits -----------------------------------------------------
LRLAT0           EQU  H'0000'
LRLAT1           EQU  H'0001'
LRLAT2           EQU  H'0002'
LRLBP0           EQU  H'0004'
LRLBP1           EQU  H'0005'
LRLAP0           EQU  H'0006'
LRLAP1           EQU  H'0007'


;----- LCDREF Bits -----------------------------------------------------
VLCD1PE          EQU  H'0000'
VLCD2PE          EQU  H'0001'
VLCD3PE          EQU  H'0002'
LCDIRE           EQU  H'0007'

LCDCST0          EQU  H'0003'
LCDCST1          EQU  H'0004'
LCDCST2          EQU  H'0005'


;----- LCDREG Bits -----------------------------------------------------
MODE13           EQU  H'0002'
CPEN             EQU  H'0007'

CLKSEL0          EQU  H'0000'
CLKSEL1          EQU  H'0001'
BIAS0            EQU  H'0003'
BIAS1            EQU  H'0004'
BIAS2            EQU  H'0005'


;----- LCDCON Bits -----------------------------------------------------
WERR             EQU  H'0005'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'

LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
LMUX2            EQU  H'0002'
CS0              EQU  H'0003'
CS1              EQU  H'0004'


;----- LCDPS Bits -----------------------------------------------------
WA               EQU  H'0004'
LCDA             EQU  H'0005'
BIASMD           EQU  H'0006'
WFT              EQU  H'0007'

LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'


;----- REFO2CON3 Bits -----------------------------------------------------
RODIV8           EQU  H'0000'
RODIV9           EQU  H'0001'
RODIV10          EQU  H'0002'
RODIV11          EQU  H'0003'
RODIV12          EQU  H'0004'
RODIV13          EQU  H'0005'
RODIV14          EQU  H'0006'


;----- REFO2CON2 Bits -----------------------------------------------------
RODIV0           EQU  H'0000'
RODIV1           EQU  H'0001'
RODIV2           EQU  H'0002'
RODIV3           EQU  H'0003'
RODIV4           EQU  H'0004'
RODIV5           EQU  H'0005'
RODIV6           EQU  H'0006'
RODIV7           EQU  H'0007'


;----- REFO2CON1 Bits -----------------------------------------------------
ROSEL0           EQU  H'0000'
ROSEL1           EQU  H'0001'
ROSEL2           EQU  H'0002'
ROSEL3           EQU  H'0003'


;----- REFO2CON Bits -----------------------------------------------------
ACTIVE           EQU  H'0000'
DIVSWEN          EQU  H'0001'
ROSSLP           EQU  H'0003'
ROOE             EQU  H'0004'
ROSIDL           EQU  H'0005'
ROON             EQU  H'0007'


;----- REFO1CON3 Bits -----------------------------------------------------
RODIV8           EQU  H'0000'
RODIV9           EQU  H'0001'
RODIV10          EQU  H'0002'
RODIV11          EQU  H'0003'
RODIV12          EQU  H'0004'
RODIV13          EQU  H'0005'
RODIV14          EQU  H'0006'


;----- REFO1CON2 Bits -----------------------------------------------------
RODIV0           EQU  H'0000'
RODIV1           EQU  H'0001'
RODIV2           EQU  H'0002'
RODIV3           EQU  H'0003'
RODIV4           EQU  H'0004'
RODIV5           EQU  H'0005'
RODIV6           EQU  H'0006'
RODIV7           EQU  H'0007'


;----- REFO1CON1 Bits -----------------------------------------------------
ROSEL0           EQU  H'0000'
ROSEL1           EQU  H'0001'
ROSEL2           EQU  H'0002'
ROSEL3           EQU  H'0003'


;----- REFO1CON Bits -----------------------------------------------------
ACTIVE           EQU  H'0000'
DIVSWEN          EQU  H'0001'
ROSSLP           EQU  H'0003'
ROOE             EQU  H'0004'
ROSIDL           EQU  H'0005'
ROON             EQU  H'0007'


;----- MEMCON Bits -----------------------------------------------------
EBDIS            EQU  H'0007'

WM0_MEMCON       EQU  H'0000'
WM1_MEMCON       EQU  H'0001'
WAIT0            EQU  H'0004'
WAIT1            EQU  H'0005'


;----- ODCON2 Bits -----------------------------------------------------
ECCP3OD          EQU  H'0000'
CCP4OD           EQU  H'0001'
CCP5OD           EQU  H'0002'
CCP6OD           EQU  H'0003'
CCP7OD           EQU  H'0004'
CCP8OD           EQU  H'0005'
CCP9OD           EQU  H'0006'
CCP10OD          EQU  H'0007'


;----- ODCON1 Bits -----------------------------------------------------
SSP1OD           EQU  H'0000'
SSP2OD           EQU  H'0001'
USART1OD         EQU  H'0002'
USART2OD         EQU  H'0003'
USART3OD         EQU  H'0004'
USART4OD         EQU  H'0005'
ECCP1OD          EQU  H'0006'
ECCP2OD          EQU  H'0007'


;----- MDCARL Bits -----------------------------------------------------
MDCLSYNC         EQU  H'0005'
MDCLPOL          EQU  H'0006'
MDCLODIS         EQU  H'0007'

MDCL0            EQU  H'0000'
MDCL1            EQU  H'0001'
MDCL2            EQU  H'0002'
MDCL3            EQU  H'0003'


;----- MDCARH Bits -----------------------------------------------------
MDCHSYNC         EQU  H'0005'
MDCHPOL          EQU  H'0006'
MDCHODIS         EQU  H'0007'

MDCH0            EQU  H'0000'
MDCH1            EQU  H'0001'
MDCH2            EQU  H'0002'
MDCH3            EQU  H'0003'


;----- MDSRC Bits -----------------------------------------------------
MDSODIS          EQU  H'0007'

MDSRC0           EQU  H'0000'
MDSRC1           EQU  H'0001'
MDSRC2           EQU  H'0002'
MDSRC3           EQU  H'0003'


;----- MDCON Bits -----------------------------------------------------
MDBIT            EQU  H'0000'
MDO              EQU  H'0003'
MDOPOL           EQU  H'0004'
MDSLR            EQU  H'0005'
MDOE             EQU  H'0006'
MDEN             EQU  H'0007'


;----- PMD4 Bits -----------------------------------------------------
EMBMD            EQU  H'0000'
LVDMD            EQU  H'0002'
IOCMD            EQU  H'0003'
USBMD            EQU  H'0004'
CMP3MD           EQU  H'0005'
CMP2MD           EQU  H'0006'
CMP1MD           EQU  H'0007'


;----- PMD3 Bits -----------------------------------------------------
REFO2MD          EQU  H'0000'
REFO1MD          EQU  H'0001'
PSPMD            EQU  H'0002'
LCDMD            EQU  H'0003'
RTCCMD           EQU  H'0004'
ADCMD            EQU  H'0005'
CTMUMD           EQU  H'0006'
MODMD            EQU  H'0007'

TXMMD            EQU  H'0007'


;----- PMD2 Bits -----------------------------------------------------
TMR0MD           EQU  H'0000'
TMR1MD           EQU  H'0001'
TMR2MD           EQU  H'0002'
TMR3MD           EQU  H'0003'
TMR4MD           EQU  H'0004'
TMR5MD           EQU  H'0005'
TMR6MD           EQU  H'0006'
TMR8MD           EQU  H'0007'


;----- PMD1 Bits -----------------------------------------------------
SSP1MD           EQU  H'0000'
SSP2MD           EQU  H'0001'
UART1MD          EQU  H'0002'
UART2MD          EQU  H'0003'
UART3MD          EQU  H'0004'
UART4MD          EQU  H'0005'
ECCP1MD          EQU  H'0006'
ECCP2MD          EQU  H'0007'


;----- PMD0 Bits -----------------------------------------------------
ECCP3MD          EQU  H'0000'
CCP4MD           EQU  H'0001'
CCP5MD           EQU  H'0002'
CCP6MD           EQU  H'0003'
CCP7MD           EQU  H'0004'
CCP8MD           EQU  H'0005'
CCP9MD           EQU  H'0006'
CCP10MD          EQU  H'0007'


;----- CTMUCON4 Bits -----------------------------------------------------
EDG1STAT         EQU  H'0000'
EDG2STAT         EQU  H'0001'
EDG1POL          EQU  H'0006'
EDG1EN           EQU  H'0007'

EDG1SEL0         EQU  H'0002'
EDG1SEL1         EQU  H'0003'
EDG1SEL2         EQU  H'0004'
EDG1SEL3         EQU  H'0005'


;----- CTMUCON3 Bits -----------------------------------------------------
EDG2POL          EQU  H'0006'
EDG2EN           EQU  H'0007'

EDG2SEL0         EQU  H'0002'
EDG2SEL1         EQU  H'0003'
EDG2SEL2         EQU  H'0004'
EDG2SEL3         EQU  H'0005'


;----- CTMUCON2 Bits -----------------------------------------------------
IRNG0            EQU  H'0000'
IRNG1            EQU  H'0001'
ITRIM0           EQU  H'0002'
ITRIM1           EQU  H'0003'
ITRIM2           EQU  H'0004'
ITRIM3           EQU  H'0005'
ITRIM4           EQU  H'0006'
ITRIM5           EQU  H'0007'


;----- CTMUCON1 Bits -----------------------------------------------------
CTTRIG           EQU  H'0000'
IDISSEN          EQU  H'0001'
EDGSEQEN         EQU  H'0002'
EDGEN            EQU  H'0003'
TGEN             EQU  H'0004'
CTMUSIDL         EQU  H'0005'
CTMUEN           EQU  H'0007'


;----- SPBRG4 Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGH4 Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- BAUDCON4 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
IREN             EQU  H'0002'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- TXSTA4 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- RCSTA4 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- DMACON2 Bits -----------------------------------------------------
INTLVL0          EQU  H'0000'
INTLVL1          EQU  H'0001'
INTLVL2          EQU  H'0002'
INTLVL3          EQU  H'0003'
DLYCYC0          EQU  H'0004'
DLYCYC1          EQU  H'0005'
DLYCYC2          EQU  H'0006'
DLYCYC3          EQU  H'0007'


;----- ANCFG Bits -----------------------------------------------------
VBGEN            EQU  H'0000'
VBG2EN           EQU  H'0001'
VBG6EN           EQU  H'0002'


;----- T4CON Bits -----------------------------------------------------
TMR4ON           EQU  H'0002'

T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'


;----- CCP7CON Bits -----------------------------------------------------
CCP7M0           EQU  H'0000'
CCP7M1           EQU  H'0001'
CCP7M2           EQU  H'0002'
CCP7M3           EQU  H'0003'
DC7B0            EQU  H'0004'
DC7B1            EQU  H'0005'

CCP7Y            EQU  H'0004'
CCP7X            EQU  H'0005'


;----- CCP6CON Bits -----------------------------------------------------
CCP6M0           EQU  H'0000'
CCP6M1           EQU  H'0001'
CCP6M2           EQU  H'0002'
CCP6M3           EQU  H'0003'
DC6B0            EQU  H'0004'
DC6B1            EQU  H'0005'

CCP6Y            EQU  H'0004'
CCP6X            EQU  H'0005'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'

CCP5Y            EQU  H'0004'
CCP5X            EQU  H'0005'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'

CCP4Y            EQU  H'0004'
CCP4X            EQU  H'0005'


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


;----- T5CON Bits -----------------------------------------------------
TMR5ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T5SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'

T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- SSP2MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


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


;----- PSTR3CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- PSTR2CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- SPBRG2 Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGH2 Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- DSWAKEH Bits -----------------------------------------------------
DSINT0           EQU  H'0000'


;----- DSWAKEL Bits -----------------------------------------------------
DSPOR            EQU  H'0000'
DSICD            EQU  H'0001'
DSMCLR           EQU  H'0002'
DSRTC            EQU  H'0003'
DSWDT            EQU  H'0004'
DSULP            EQU  H'0005'
BOR_DSWAKEL      EQU  H'0006'
DSFLT            EQU  H'0007'


;----- DSCONH Bits -----------------------------------------------------
RTCWDIS          EQU  H'0000'
DSEN             EQU  H'0007'


;----- DSCONL Bits -----------------------------------------------------
RELEASE          EQU  H'0000'
DSBOR            EQU  H'0001'
ULPWDIS          EQU  H'0002'


;----- SPBRG3 Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGH3 Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- BAUDCON3 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
IREN             EQU  H'0002'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- TXSTA3 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- RCSTA3 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- SPBRGH Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- SPBRGH1 Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- BAUDCON2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
IREN             EQU  H'0002'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- TXSTA2 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- CCPTMRS2 Bits -----------------------------------------------------
C9TSEL           EQU  H'0002'
C10TSEL          EQU  H'0004'

C8TSEL0          EQU  H'0000'
C8TSEL1          EQU  H'0001'
C9TSEL0          EQU  H'0002'
C10TSEL0         EQU  H'0004'


;----- CCPTMRS1 Bits -----------------------------------------------------
C5TSEL           EQU  H'0002'
C6TSEL           EQU  H'0004'

C4TSEL0          EQU  H'0000'
C4TSEL1          EQU  H'0001'
C5TSEL0          EQU  H'0002'
C6TSEL0          EQU  H'0004'
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


;----- CM3CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM2CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- SSP2CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


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


;----- CCP10CON Bits -----------------------------------------------------
CCP10M0          EQU  H'0000'
CCP10M1          EQU  H'0001'
CCP10M2          EQU  H'0002'
CCP10M3          EQU  H'0003'
DC10B0           EQU  H'0004'
DC10B1           EQU  H'0005'

CCP10Y           EQU  H'0004'
CCP10X           EQU  H'0005'


;----- CCP9CON Bits -----------------------------------------------------
CCP9M0           EQU  H'0000'
CCP9M1           EQU  H'0001'
CCP9M2           EQU  H'0002'
CCP9M3           EQU  H'0003'
DC9B0            EQU  H'0004'
DC9B1            EQU  H'0005'

CCP9Y            EQU  H'0004'
CCP9X            EQU  H'0005'


;----- CCP8CON Bits -----------------------------------------------------
CCP8M0           EQU  H'0000'
CCP8M1           EQU  H'0001'
CCP8M2           EQU  H'0002'
CCP8M3           EQU  H'0003'
DC8B0            EQU  H'0004'
DC8B1            EQU  H'0005'

CCP8Y            EQU  H'0004'
CCP8X            EQU  H'0005'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'
P3M0             EQU  H'0006'
P3M1             EQU  H'0007'

CCP3Y            EQU  H'0004'
CCP3X            EQU  H'0005'


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


;----- ECCP2DEL Bits -----------------------------------------------------
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


;----- CM1CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- PADCFG1 Bits -----------------------------------------------------
RLPU             EQU  H'0000'
RKPU             EQU  H'0001'
RJPU             EQU  H'0002'
RHPU             EQU  H'0003'
RGPU             EQU  H'0004'
RFPU             EQU  H'0005'
REPU             EQU  H'0006'
RDPU             EQU  H'0007'


;----- IOCN Bits -----------------------------------------------------
IOCN0            EQU  H'0000'
IOCN1            EQU  H'0001'
IOCN2            EQU  H'0002'
IOCN3            EQU  H'0003'
IOCN4            EQU  H'0004'
IOCN5            EQU  H'0005'
IOCN6            EQU  H'0006'
IOCN7            EQU  H'0007'


;----- IOCP Bits -----------------------------------------------------
IOCP0            EQU  H'0000'
IOCP1            EQU  H'0001'
IOCP2            EQU  H'0002'
IOCP3            EQU  H'0003'
IOCP4            EQU  H'0004'
IOCP5            EQU  H'0005'
IOCP6            EQU  H'0006'
IOCP7            EQU  H'0007'


;----- RTCCON2 Bits -----------------------------------------------------
PWCSPRE          EQU  H'0004'
PWCCPRE          EQU  H'0005'
PWCPOL           EQU  H'0006'
PWCEN            EQU  H'0007'

RTCSECSEL0       EQU  H'0000'
RTCSECSEL1       EQU  H'0001'
RTCCLKSEL0       EQU  H'0002'
RTCCLKSEL1       EQU  H'0003'


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


;----- RTCCAL Bits -----------------------------------------------------
CAL0             EQU  H'0000'
CAL1             EQU  H'0001'
CAL2             EQU  H'0002'
CAL3             EQU  H'0003'
CAL4             EQU  H'0004'
CAL5             EQU  H'0005'
CAL6             EQU  H'0006'
CAL7             EQU  H'0007'


;----- RTCCON1 Bits -----------------------------------------------------
RTCOE            EQU  H'0002'
HALFSEC          EQU  H'0003'
RTCSYNC          EQU  H'0004'
RTCWREN          EQU  H'0005'
RTCEN            EQU  H'0007'

RTCPTR0          EQU  H'0000'
RTCPTR1          EQU  H'0001'


;----- DMACON1 Bits -----------------------------------------------------
DMAEN            EQU  H'0000'
DLYINTEN         EQU  H'0001'
RXINC            EQU  H'0004'
TXINC            EQU  H'0005'

DUPLEX0          EQU  H'0002'
DUPLEX1          EQU  H'0003'
SSCON0           EQU  H'0006'
SSCON1           EQU  H'0007'


;----- PIE6 Bits -----------------------------------------------------
CMP1IE           EQU  H'0000'
CMP2IE           EQU  H'0001'
CMP3IE           EQU  H'0002'
TX3IE            EQU  H'0004'
RC3IE            EQU  H'0005'
TX4IE            EQU  H'0006'
RC4IE            EQU  H'0007'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- ACTCON Bits -----------------------------------------------------
ACTORSPOL        EQU  H'0000'
ACTORS           EQU  H'0001'
ACTLOCKPOL       EQU  H'0002'
ACTLOCK          EQU  H'0003'
ACTSRC           EQU  H'0004'
ACTSIDL          EQU  H'0005'
ACTEN            EQU  H'0007'


;----- OSCCON4 Bits -----------------------------------------------------
PLLEN            EQU  H'0005'

CPDIV0           EQU  H'0006'
CPDIV1           EQU  H'0007'


;----- OSCCON3 Bits -----------------------------------------------------
IRCF0            EQU  H'0000'
IRCF1            EQU  H'0001'
IRCF2            EQU  H'0002'


;----- OSCCON2 Bits -----------------------------------------------------
SOSCGO           EQU  H'0001'
POSCEN           EQU  H'0002'
CF               EQU  H'0003'
LOCK             EQU  H'0005'
IOLOCK           EQU  H'0006'
CLKLOCK          EQU  H'0007'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
IREN             EQU  H'0002'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'

SCKP             EQU  H'0004'
RCMT             EQU  H'0006'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
IREN             EQU  H'0002'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'

SCKP             EQU  H'0004'
RCMT             EQU  H'0006'


;----- SSP1MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSP1CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- TXBUF Bits -----------------------------------------------------
TXBUF0           EQU  H'0000'
TXBUF1           EQU  H'0001'
TXBUF2           EQU  H'0002'
TXBUF3           EQU  H'0003'
TXBUF4           EQU  H'0004'
TXBUF5           EQU  H'0005'
TXBUF6           EQU  H'0006'
TXBUF7           EQU  H'0007'


;----- DMABCH Bits -----------------------------------------------------
BC8              EQU  H'0000'
BC9              EQU  H'0001'


;----- DMABCL Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'
BC4              EQU  H'0004'
BC5              EQU  H'0005'
BC6              EQU  H'0006'
BC7              EQU  H'0007'


;----- RXADDRH Bits -----------------------------------------------------
RXADDR8          EQU  H'0000'
RXADDR9          EQU  H'0001'
RXADDR10         EQU  H'0002'
RXADDR11         EQU  H'0003'


;----- RXADDRL Bits -----------------------------------------------------
RXADDR0          EQU  H'0000'
RXADDR1          EQU  H'0001'
RXADDR2          EQU  H'0002'
RXADDR3          EQU  H'0003'
RXADDR4          EQU  H'0004'
RXADDR5          EQU  H'0005'
RXADDR6          EQU  H'0006'
RXADDR7          EQU  H'0007'


;----- TXADDRH Bits -----------------------------------------------------
TXADDR8          EQU  H'0000'
TXADDR9          EQU  H'0001'
TXADDR10         EQU  H'0002'
TXADDR11         EQU  H'0003'


;----- TXADDRL Bits -----------------------------------------------------
TXADDR0          EQU  H'0000'
TXADDR1          EQU  H'0001'
TXADDR2          EQU  H'0002'
TXADDR3          EQU  H'0003'
TXADDR4          EQU  H'0004'
TXADDR5          EQU  H'0005'
TXADDR6          EQU  H'0006'
TXADDR7          EQU  H'0007'


;----- PORTVP Bits -----------------------------------------------------
RVP0             EQU  H'0000'
RVP1             EQU  H'0001'
RVP2             EQU  H'0002'
RVP3             EQU  H'0003'
RVP4             EQU  H'0004'
RVP5             EQU  H'0005'
RVP6             EQU  H'0006'
RVP7             EQU  H'0007'


;----- LATVP Bits -----------------------------------------------------
LATVP0           EQU  H'0000'
LATVP1           EQU  H'0001'
LATVP2           EQU  H'0002'
LATVP3           EQU  H'0003'
LATVP4           EQU  H'0004'
LATVP5           EQU  H'0005'
LATVP6           EQU  H'0006'
LATVP7           EQU  H'0007'


;----- TRISVP Bits -----------------------------------------------------
TRISVP0          EQU  H'0000'
TRISVP1          EQU  H'0001'
TRISVP2          EQU  H'0002'
TRISVP3          EQU  H'0003'
TRISVP4          EQU  H'0004'
TRISVP5          EQU  H'0005'
TRISVP6          EQU  H'0006'
TRISVP7          EQU  H'0007'


;----- UADDR Bits -----------------------------------------------------
ADDR0            EQU  H'0000'
ADDR1            EQU  H'0001'
ADDR2            EQU  H'0002'
ADDR3            EQU  H'0003'
ADDR4            EQU  H'0004'
ADDR5            EQU  H'0005'
ADDR6            EQU  H'0006'


;----- UCON Bits -----------------------------------------------------
SUSPND           EQU  H'0001'
RESUME           EQU  H'0002'
USBEN            EQU  H'0003'
PKTDIS           EQU  H'0004'
SE0              EQU  H'0005'
PPBRST           EQU  H'0006'


;----- USTAT Bits -----------------------------------------------------
PPBI             EQU  H'0001'
DIR              EQU  H'0002'

ENDP0            EQU  H'0003'
ENDP1            EQU  H'0004'
ENDP2            EQU  H'0005'
ENDP3            EQU  H'0006'


;----- UEIR Bits -----------------------------------------------------
PIDEF            EQU  H'0000'
CRC5EF           EQU  H'0001'
CRC16EF          EQU  H'0002'
DFN8EF           EQU  H'0003'
BTOEF            EQU  H'0004'
BTSEF            EQU  H'0007'


;----- UIR Bits -----------------------------------------------------
URSTIF           EQU  H'0000'
UERRIF           EQU  H'0001'
ACTVIF           EQU  H'0002'
TRNIF            EQU  H'0003'
IDLEIF           EQU  H'0004'
STALLIF          EQU  H'0005'
SOFIF            EQU  H'0006'


;----- UFRMH Bits -----------------------------------------------------
FRM8             EQU  H'0000'
FRM9             EQU  H'0001'
FRM10            EQU  H'0002'


;----- UFRML Bits -----------------------------------------------------
FRM0             EQU  H'0000'
FRM1             EQU  H'0001'
FRM2             EQU  H'0002'
FRM3             EQU  H'0003'
FRM4             EQU  H'0004'
FRM5             EQU  H'0005'
FRM6             EQU  H'0006'
FRM7             EQU  H'0007'


;----- RCON4 Bits -----------------------------------------------------
PMSLP            EQU  H'0000'
DPSLP            EQU  H'0002'
SRETEN           EQU  H'0004'


;----- RCON3 Bits -----------------------------------------------------
VBAT             EQU  H'0000'
VBPOR            EQU  H'0001'
VDDPOR           EQU  H'0002'
VDDBOR           EQU  H'0003'
STKERR           EQU  H'0007'


;----- RCON2 Bits -----------------------------------------------------
SWDTEN           EQU  H'0005'
EXTR             EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
WWPROG           EQU  H'0005'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'


;----- PORTF Bits -----------------------------------------------------
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'


;----- PORTH Bits -----------------------------------------------------
RH0              EQU  H'0000'
RH1              EQU  H'0001'
RH2              EQU  H'0002'
RH3              EQU  H'0003'
RH4              EQU  H'0004'
RH5              EQU  H'0005'
RH6              EQU  H'0006'
RH7              EQU  H'0007'


;----- PORTJ Bits -----------------------------------------------------
RJ0              EQU  H'0000'
RJ1              EQU  H'0001'
RJ2              EQU  H'0002'
RJ3              EQU  H'0003'
RJ4              EQU  H'0004'
RJ5              EQU  H'0005'
RJ6              EQU  H'0006'
RJ7              EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA4            EQU  H'0004'
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
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'
LATC6            EQU  H'0006'
LATC7            EQU  H'0007'


;----- LATD Bits -----------------------------------------------------
LATD0            EQU  H'0000'
LATD1            EQU  H'0001'
LATD2            EQU  H'0002'
LATD3            EQU  H'0003'
LATD4            EQU  H'0004'
LATD5            EQU  H'0005'
LATD6            EQU  H'0006'
LATD7            EQU  H'0007'


;----- LATE Bits -----------------------------------------------------
LATE0            EQU  H'0000'
LATE1            EQU  H'0001'
LATE2            EQU  H'0002'
LATE3            EQU  H'0003'
LATE4            EQU  H'0004'
LATE5            EQU  H'0005'
LATE6            EQU  H'0006'
LATE7            EQU  H'0007'


;----- LATF Bits -----------------------------------------------------
LATF2            EQU  H'0002'
LATF3            EQU  H'0003'
LATF4            EQU  H'0004'
LATF5            EQU  H'0005'
LATF6            EQU  H'0006'
LATF7            EQU  H'0007'


;----- LATG Bits -----------------------------------------------------
LATG0            EQU  H'0000'
LATG1            EQU  H'0001'
LATG2            EQU  H'0002'
LATG3            EQU  H'0003'
LATG4            EQU  H'0004'


;----- LATH Bits -----------------------------------------------------
LATH0            EQU  H'0000'
LATH1            EQU  H'0001'
LATH2            EQU  H'0002'
LATH3            EQU  H'0003'
LATH4            EQU  H'0004'
LATH5            EQU  H'0005'
LATH6            EQU  H'0006'
LATH7            EQU  H'0007'


;----- LATJ Bits -----------------------------------------------------
LATJ0            EQU  H'0000'
LATJ1            EQU  H'0001'
LATJ2            EQU  H'0002'
LATJ3            EQU  H'0003'
LATJ4            EQU  H'0004'
LATJ5            EQU  H'0005'
LATJ6            EQU  H'0006'
LATJ7            EQU  H'0007'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
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
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- TRISD Bits -----------------------------------------------------
TRISD0           EQU  H'0000'
TRISD1           EQU  H'0001'
TRISD2           EQU  H'0002'
TRISD3           EQU  H'0003'
TRISD4           EQU  H'0004'
TRISD5           EQU  H'0005'
TRISD6           EQU  H'0006'
TRISD7           EQU  H'0007'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
TRISE3           EQU  H'0003'
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'


;----- TRISF Bits -----------------------------------------------------
TRISF2           EQU  H'0002'
TRISF3           EQU  H'0003'
TRISF4           EQU  H'0004'
TRISF5           EQU  H'0005'
TRISF6           EQU  H'0006'
TRISF7           EQU  H'0007'


;----- TRISG Bits -----------------------------------------------------
TRISG0           EQU  H'0000'
TRISG1           EQU  H'0001'
TRISG2           EQU  H'0002'
TRISG3           EQU  H'0003'
TRISG4           EQU  H'0004'


;----- TRISH Bits -----------------------------------------------------
TRISH0           EQU  H'0000'
TRISH1           EQU  H'0001'
TRISH2           EQU  H'0002'
TRISH3           EQU  H'0003'
TRISH4           EQU  H'0004'
TRISH5           EQU  H'0005'
TRISH6           EQU  H'0006'
TRISH7           EQU  H'0007'


;----- TRISJ Bits -----------------------------------------------------
TRISJ0           EQU  H'0000'
TRISJ1           EQU  H'0001'
TRISJ2           EQU  H'0002'
TRISJ3           EQU  H'0003'
TRISJ4           EQU  H'0004'
TRISJ5           EQU  H'0005'
TRISJ6           EQU  H'0006'
TRISJ7           EQU  H'0007'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- PSTR1CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
TMR1GIE          EQU  H'0002'
SSP1IE           EQU  H'0003'
TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'
ADIE             EQU  H'0006'
PSPIE            EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
TMR1GIF          EQU  H'0002'
SSP1IF           EQU  H'0003'
TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'
ADIF             EQU  H'0006'
PSPIF            EQU  H'0007'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
TMR1GIP          EQU  H'0002'
SSP1IP           EQU  H'0003'
TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'
ADIP             EQU  H'0006'
PSPIP            EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
TMR3GIE          EQU  H'0000'
TMR3IE           EQU  H'0001'
HLVDIE           EQU  H'0002'
BCL1IE           EQU  H'0003'
USBIE            EQU  H'0004'
BCL2IE           EQU  H'0005'
SSP2IE           EQU  H'0006'
OSCFIE           EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
TMR3GIF          EQU  H'0000'
TMR3IF           EQU  H'0001'
HLVDIF           EQU  H'0002'
BCL1IF           EQU  H'0003'
USBIF            EQU  H'0004'
BCL2IF           EQU  H'0005'
SSP2IF           EQU  H'0006'
OSCFIF           EQU  H'0007'

LVDIF            EQU  H'0002'


;----- IPR2 Bits -----------------------------------------------------
TMR3GIP          EQU  H'0000'
TMR3IP           EQU  H'0001'
HLVDIP           EQU  H'0002'
BCL1IP           EQU  H'0003'
USBIP            EQU  H'0004'
BCL2IP           EQU  H'0005'
SSP2IP           EQU  H'0006'
OSCFIP           EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
RTCCIE           EQU  H'0000'
CCP1IE           EQU  H'0001'
CCP2IE           EQU  H'0002'
CTMUIE           EQU  H'0003'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'
LCDIE            EQU  H'0006'
TMR5GIE          EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
RTCCIF           EQU  H'0000'
CCP1IF           EQU  H'0001'
CCP2IF           EQU  H'0002'
CTMUIF           EQU  H'0003'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'
LCDIF            EQU  H'0006'
TMR5GIF          EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
RTCCIP           EQU  H'0000'
CCP1IP           EQU  H'0001'
CCP2IP           EQU  H'0002'
CTMUIP           EQU  H'0003'
TX2IP            EQU  H'0004'
RC2IP            EQU  H'0005'
LCDIP            EQU  H'0006'
TMR5GIP          EQU  H'0007'


;----- PIR6 Bits -----------------------------------------------------
CMP1IF           EQU  H'0000'
CMP2IF           EQU  H'0001'
CMP3IF           EQU  H'0002'
TX3IF            EQU  H'0004'
RC3IF            EQU  H'0005'
TX4IF            EQU  H'0006'
RC4IF            EQU  H'0007'


;----- PSPCON Bits -----------------------------------------------------
PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'


;----- HLVDCON Bits -----------------------------------------------------
HLVDEN           EQU  H'0004'
IRVST            EQU  H'0005'
BGVST            EQU  H'0006'
VDIRMAG          EQU  H'0007'

HLVDL0           EQU  H'0000'
HLVDL1           EQU  H'0001'
HLVDL2           EQU  H'0002'
HLVDL3           EQU  H'0003'


;----- IPR6 Bits -----------------------------------------------------
CMP1IP           EQU  H'0000'
CMP2IP           EQU  H'0001'
CMP3IP           EQU  H'0002'
TX3IP            EQU  H'0004'
RC3IP            EQU  H'0005'
TX4IP            EQU  H'0006'
RC4IP            EQU  H'0007'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_T1DONE EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GGO            EQU  H'0003'

NOT_T1DONE       EQU  H'0003'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'


;----- RCSTA1 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA1 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- SPBRG Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRG1 Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- T3GCON Bits -----------------------------------------------------
T3GVAL           EQU  H'0002'
T3GGO_NOT_T3DONE EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GGO            EQU  H'0003'

NOT_T3DONE       EQU  H'0003'


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'

T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'


;----- PIE4 Bits -----------------------------------------------------
ECCP3IE          EQU  H'0000'
CCP4IE           EQU  H'0001'
CCP5IE           EQU  H'0002'
CCP6IE           EQU  H'0003'
CCP7IE           EQU  H'0004'
CCP8IE           EQU  H'0005'
CCP9IE           EQU  H'0006'
CCP10IE          EQU  H'0007'


;----- PIR4 Bits -----------------------------------------------------
ECCP3IF          EQU  H'0000'
CCP4IF           EQU  H'0001'
CCP5IF           EQU  H'0002'
CCP6IF           EQU  H'0003'
CCP7IF           EQU  H'0004'
CCP8IF           EQU  H'0005'
CCP9IF           EQU  H'0006'
CCP10IF          EQU  H'0007'


;----- IPR4 Bits -----------------------------------------------------
ECCP3IP          EQU  H'0000'
CCP4IP           EQU  H'0001'
CCP5IP           EQU  H'0002'
CCP6IP           EQU  H'0003'
CCP7IP           EQU  H'0004'
CCP8IP           EQU  H'0005'
CCP9IP           EQU  H'0006'
CCP10IP          EQU  H'0007'


;----- PIE5 Bits -----------------------------------------------------
TMR4IE           EQU  H'0000'
TMR5IE           EQU  H'0001'
TMR6IE           EQU  H'0002'
TMR8IE           EQU  H'0004'
ACTLOCKIE        EQU  H'0005'
ACTORSIE         EQU  H'0006'


;----- PIR5 Bits -----------------------------------------------------
TMR4IF           EQU  H'0000'
TMR5IF           EQU  H'0001'
TMR6IF           EQU  H'0002'
TMR8IF           EQU  H'0004'
ACTLOCKIF        EQU  H'0005'
ACTORSIF         EQU  H'0006'


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


;----- ECCP1DEL Bits -----------------------------------------------------
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


;----- CVRCONL Bits -----------------------------------------------------
CVRNSS           EQU  H'0000'
CVROE            EQU  H'0006'
CVREN            EQU  H'0007'

CVRPSS0          EQU  H'0004'
CVRPSS1          EQU  H'0005'


;----- CVRCONH Bits -----------------------------------------------------
CVR0             EQU  H'0000'
CVR1             EQU  H'0001'
CVR2             EQU  H'0002'
CVR3             EQU  H'0003'
CVR4             EQU  H'0004'


;----- ADCON1L Bits -----------------------------------------------------
DONE             EQU  H'0000'
SAMP             EQU  H'0001'
ASAM             EQU  H'0002'

SSRC0            EQU  H'0004'
SSRC1            EQU  H'0005'
SSRC2            EQU  H'0006'
SSRC3            EQU  H'0007'


;----- ADCON1H Bits -----------------------------------------------------
MODE12           EQU  H'0002'
ADON             EQU  H'0007'

FORM0            EQU  H'0000'
FORM1            EQU  H'0001'


;----- CMSTAT Bits -----------------------------------------------------
C1OUT            EQU  H'0000'
C2OUT            EQU  H'0001'
C3OUT            EQU  H'0002'


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


;----- SSP1CON1 Bits -----------------------------------------------------
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
SOSCEN           EQU  H'0003'

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

BOR_RCON         EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'
CM               EQU  H'0005'


;----- IOCF Bits -----------------------------------------------------
IOCF0            EQU  H'0000'
IOCF1            EQU  H'0001'
IOCF2            EQU  H'0002'
IOCF3            EQU  H'0003'
IOCF4            EQU  H'0004'
IOCF5            EQU  H'0005'
IOCF6            EQU  H'0006'
IOCF7            EQU  H'0007'


;----- IPR5 Bits -----------------------------------------------------
TMR4IP           EQU  H'0000'
TMR5IP           EQU  H'0001'
TMR6IP           EQU  H'0002'
TMR8IP           EQU  H'0004'
ACTLOCKIP        EQU  H'0005'
ACTORSIP         EQU  H'0006'


;----- OSCCON Bits -----------------------------------------------------
IDLEN            EQU  H'0007'

NOSC0            EQU  H'0000'
NOSC1            EQU  H'0001'
NOSC2            EQU  H'0002'
COSC0            EQU  H'0004'
COSC1            EQU  H'0005'
COSC2            EQU  H'0006'


;----- T0CON Bits -----------------------------------------------------
PSA              EQU  H'0003'
T08BIT           EQU  H'0006'
TMR0ON           EQU  H'0007'

T0PS0            EQU  H'0000'
T0PS1            EQU  H'0001'
T0PS2            EQU  H'0002'
T0CS0            EQU  H'0004'
T0CS1            EQU  H'0005'


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
IOCIP            EQU  H'0000'
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
IOCIF            EQU  H'0000'
INT0IF           EQU  H'0001'
TMR0IF           EQU  H'0002'
IOCIE            EQU  H'0003'
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
       __BADRAM  H'0DFA'-H'0DFE'
       __BADRAM  H'0EE4'-H'0EE9'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Stack Overflow/Underflow Reset:
;     STVREN = OFF         Disabled
;     STVREN = ON          Enabled
;
;   Extended Instruction Set:
;     XINST = OFF          Disabled
;     XINST = ON           Enabled
;
;   Brown-Out Reset Enable:
;     BOREN = OFF          Disabled in hardware
;     BOREN = ON           Controlled with SBOREN bit, disabled in Deep Sleep
;
;   Brown-out Reset Voltage:
;     BORV = 0             2.0V
;     BORV = 1             1.8V
;
;   Code Protect:
;     CP0 = ON             Program memory is code-protected
;     CP0 = OFF            Program memory is not code-protected
;
;   Oscillator:
;     FOSC = FRC           Fast RC Oscillator (FRC)
;     FOSC = FRCPLL        Fast RC Oscillator with PLL module (FRCPLL)
;     FOSC = PRI           Primary Oscillator (XT, HS, EC)
;     FOSC = PRIPLL        Primary Oscillator with PLL module (XTPLL,HSPLL,ECPLL)
;     FOSC = SOSC          Secondary Oscillator (SOSC)
;     FOSC = LPRC          Low-Power RC Oscillator (LPRC)
;     FOSC = FRC500KHZ     Fast RC Oscillator divided by 16 (500 kHz)
;     FOSC = FRCDIV        Fast RC Oscillator with Postscaler (FRCDIV)
;
;   T1OSC/SOSC Power Selection Bits:
;     SOSCSEL = DIG        Digital (SCLKI) mode
;     SOSCSEL = LOW        Low Power T1OSC/SOSC circuit selected
;
;   Clock Out Enable Bit:
;     CLKOEN = OFF         CLKO output disabled on the RA6 pin
;     CLKOEN = ON          CLKO output enabled on the RA6 pin
;
;   Internal External Oscillator Switch Over Mode:
;     IESO = OFF           Disabled
;     IESO = ON            Enabled
;
;   PLL Frequency Multiplier Select bits:
;     PLLDIV = NODIV       96 MHz PLL selected; No divide - Oscillator used directly (4 MHz input)
;     PLLDIV = DIV2        96 MHz PLL selected; Oscillator divided by 2 (8 MHz input)
;     PLLDIV = DIV3        96 MHz PLL selected; Oscillator divided by 3 (12 MHz input)
;     PLLDIV = DIV4        96 MHz PLL selected; Oscillator divided by 4 (16 MHz input)
;     PLLDIV = DIV5        96 MHz PLL selected; Oscillator divided by 5 (20 MHz input)
;     PLLDIV = DIV6        96 MHz PLL selected; Oscillator divided by 6 (24 MHz input)
;     PLLDIV = DIV10       96 MHz PLL selected; Oscillator divided by 10 (40 MHz input)
;     PLLDIV = DIV12       96 MHz PLL selected; Oscillator divided by 12 (48 MHz input)
;     PLLDIV = RESERVED    RESERVED
;     PLLDIV = RESERVED    RESERVED
;     PLLDIV = RESERVED    RESERVED
;     PLLDIV = RESERVED    RESERVED
;     PLLDIV = PLL4X       4x PLL selected
;     PLLDIV = PLL6X       6x PLL selected
;     PLLDIV = PLL8X       8x PLL selected
;     PLLDIV = NOPLL       No PLL used - PLLGO bit not available to user
;
;   Primary Oscillator Select:
;     POSCMD = EC          External clock mode selected
;     POSCMD = MS          MS oscillator mode selected(3.5 MHz -10 MHz)
;     POSCMD = HS          HS oscillator mode selected(10 MHz - 40 MHz)
;     POSCMD = NONE        Primary oscillator disabled
;
;   Clock Switching and Monitor Selection Configuration bits:
;     FSCM = CSECME        Clock switching is enabled, fail safe clock monitor is enabled
;     FSCM = CSECMD        Clock switching is enabled, fail safe clock monitor is disabled
;     FSCM = CSDCMD        Clock switching is disabled, fail safe clock monitor is disabled
;
;   Write/Erase Protect Page Start/End Boundary:
;     WPFP = WPFP0         Write Protect Program Flash Page 0
;     WPFP = WPFP1         Write Protect Program Flash Page 1
;     WPFP = WPFP2         Write Protect Program Flash Page 2
;     WPFP = WPFP3         Write Protect Program Flash Page 3
;     WPFP = WPFP4         Write Protect Program Flash Page 4
;     WPFP = WPFP5         Write Protect Program Flash Page 5
;     WPFP = WPFP6         Write Protect Program Flash Page 6
;     WPFP = WPFP7         Write Protect Program Flash Page 7
;     WPFP = WPFP8         Write Protect Program Flash Page 8
;     WPFP = WPFP9         Write Protect Program Flash Page 9
;     WPFP = WPFP10        Write Protect Program Flash Page 10
;     WPFP = WPFP11        Write Protect Program Flash Page 11
;     WPFP = WPFP12        Write Protect Program Flash Page 12
;     WPFP = WPFP13        Write Protect Program Flash Page 13
;     WPFP = WPFP14        Write Protect Program Flash Page 14
;     WPFP = WPFP15        Write Protect Program Flash Page 15
;     WPFP = WPFP16        Write Protect Program Flash Page 16
;     WPFP = WPFP17        Write Protect Program Flash Page 17
;     WPFP = WPFP18        Write Protect Program Flash Page 18
;     WPFP = WPFP19        Write Protect Program Flash Page 19
;     WPFP = WPFP20        Write Protect Program Flash Page 20
;     WPFP = WPFP21        Write Protect Program Flash Page 21
;     WPFP = WPFP22        Write Protect Program Flash Page 22
;     WPFP = WPFP23        Write Protect Program Flash Page 23
;     WPFP = WPFP24        Write Protect Program Flash Page 24
;     WPFP = WPFP25        Write Protect Program Flash Page 25
;     WPFP = WPFP26        Write Protect Program Flash Page 26
;     WPFP = WPFP27        Write Protect Program Flash Page 27
;     WPFP = WPFP28        Write Protect Program Flash Page 28
;     WPFP = WPFP29        Write Protect Program Flash Page 29
;     WPFP = WPFP30        Write Protect Program Flash Page 30
;     WPFP = WPFP31        Write Protect Program Flash Page 31
;     WPFP = WPFP32        Write Protect Program Flash Page 32
;     WPFP = WPFP33        Write Protect Program Flash Page 33
;     WPFP = WPFP34        Write Protect Program Flash Page 34
;     WPFP = WPFP35        Write Protect Program Flash Page 35
;     WPFP = WPFP36        Write Protect Program Flash Page 36
;     WPFP = WPFP37        Write Protect Program Flash Page 37
;     WPFP = WPFP38        Write Protect Program Flash Page 38
;     WPFP = WPFP39        Write Protect Program Flash Page 39
;     WPFP = WPFP40        Write Protect Program Flash Page 40
;     WPFP = WPFP41        Write Protect Program Flash Page 41
;     WPFP = WPFP42        Write Protect Program Flash Page 42
;     WPFP = WPFP43        Write Protect Program Flash Page 43
;     WPFP = WPFP44        Write Protect Program Flash Page 44
;     WPFP = WPFP45        Write Protect Program Flash Page 45
;     WPFP = WPFP46        Write Protect Program Flash Page 46
;     WPFP = WPFP47        Write Protect Program Flash Page 47
;     WPFP = WPFP48        Write Protect Program Flash Page 48
;     WPFP = WPFP49        Write Protect Program Flash Page 49
;     WPFP = WPFP50        Write Protect Program Flash Page 50
;     WPFP = WPFP51        Write Protect Program Flash Page 51
;     WPFP = WPFP52        Write Protect Program Flash Page 52
;     WPFP = WPFP53        Write Protect Program Flash Page 53
;     WPFP = WPFP54        Write Protect Program Flash Page 54
;     WPFP = WPFP55        Write Protect Program Flash Page 55
;     WPFP = WPFP56        Write Protect Program Flash Page 56
;     WPFP = WPFP57        Write Protect Program Flash Page 57
;     WPFP = WPFP58        Write Protect Program Flash Page 58
;     WPFP = WPFP59        Write Protect Program Flash Page 59
;     WPFP = WPFP60        Write Protect Program Flash Page 60
;     WPFP = WPFP61        Write Protect Program Flash Page 61
;     WPFP = WPFP62        Write Protect Program Flash Page 62
;     WPFP = WPFP63        Write Protect Program Flash Page 63
;     WPFP = WPFP64        Write Protect Program Flash Page 64
;     WPFP = WPFP65        Write Protect Program Flash Page 65
;     WPFP = WPFP66        Write Protect Program Flash Page 66
;     WPFP = WPFP67        Write Protect Program Flash Page 67
;     WPFP = WPFP68        Write Protect Program Flash Page 68
;     WPFP = WPFP69        Write Protect Program Flash Page 69
;     WPFP = WPFP70        Write Protect Program Flash Page 70
;     WPFP = WPFP71        Write Protect Program Flash Page 71
;     WPFP = WPFP72        Write Protect Program Flash Page 72
;     WPFP = WPFP73        Write Protect Program Flash Page 73
;     WPFP = WPFP74        Write Protect Program Flash Page 74
;     WPFP = WPFP75        Write Protect Program Flash Page 75
;     WPFP = WPFP76        Write Protect Program Flash Page 76
;     WPFP = WPFP77        Write Protect Program Flash Page 77
;     WPFP = WPFP78        Write Protect Program Flash Page 78
;     WPFP = WPFP79        Write Protect Program Flash Page 79
;     WPFP = WPFP80        Write Protect Program Flash Page 80
;     WPFP = WPFP81        Write Protect Program Flash Page 81
;     WPFP = WPFP82        Write Protect Program Flash Page 82
;     WPFP = WPFP83        Write Protect Program Flash Page 83
;     WPFP = WPFP84        Write Protect Program Flash Page 84
;     WPFP = WPFP85        Write Protect Program Flash Page 85
;     WPFP = WPFP86        Write Protect Program Flash Page 86
;     WPFP = WPFP87        Write Protect Program Flash Page 87
;     WPFP = WPFP88        Write Protect Program Flash Page 88
;     WPFP = WPFP89        Write Protect Program Flash Page 89
;     WPFP = WPFP90        Write Protect Program Flash Page 90
;     WPFP = WPFP91        Write Protect Program Flash Page 91
;     WPFP = WPFP92        Write Protect Program Flash Page 92
;     WPFP = WPFP93        Write Protect Program Flash Page 93
;     WPFP = WPFP94        Write Protect Program Flash Page 94
;     WPFP = WPFP95        Write Protect Program Flash Page 95
;     WPFP = WPFP96        Write Protect Program Flash Page 96
;     WPFP = WPFP97        Write Protect Program Flash Page 97
;     WPFP = WPFP98        Write Protect Program Flash Page 98
;     WPFP = WPFP99        Write Protect Program Flash Page 99
;     WPFP = WPFP100       Write Protect Program Flash Page 100
;     WPFP = WPFP101       Write Protect Program Flash Page 101
;     WPFP = WPFP102       Write Protect Program Flash Page 102
;     WPFP = WPFP103       Write Protect Program Flash Page 103
;     WPFP = WPFP104       Write Protect Program Flash Page 104
;     WPFP = WPFP105       Write Protect Program Flash Page 105
;     WPFP = WPFP106       Write Protect Program Flash Page 106
;     WPFP = WPFP107       Write Protect Program Flash Page 107
;     WPFP = WPFP108       Write Protect Program Flash Page 108
;     WPFP = WPFP109       Write Protect Program Flash Page 109
;     WPFP = WPFP110       Write Protect Program Flash Page 110
;     WPFP = WPFP111       Write Protect Program Flash Page 111
;     WPFP = WPFP112       Write Protect Program Flash Page 112
;     WPFP = WPFP113       Write Protect Program Flash Page 113
;     WPFP = WPFP114       Write Protect Program Flash Page 114
;     WPFP = WPFP115       Write Protect Program Flash Page 115
;     WPFP = WPFP116       Write Protect Program Flash Page 116
;     WPFP = WPFP117       Write Protect Program Flash Page 117
;     WPFP = WPFP118       Write Protect Program Flash Page 118
;     WPFP = WPFP119       Write Protect Program Flash Page 119
;     WPFP = WPFP120       Write Protect Program Flash Page 120
;     WPFP = WPFP121       Write Protect Program Flash Page 121
;     WPFP = WPFP122       Write Protect Program Flash Page 122
;     WPFP = WPFP123       Write Protect Program Flash Page 123
;     WPFP = WPFP124       Write Protect Program Flash Page 124
;     WPFP = WPFP125       Write Protect Program Flash Page 125
;     WPFP = WPFP126       Write Protect Program Flash Page 126
;     WPFP = WPFP127       Write Protect Program Flash Page 127
;     WPFP = WPFP128       Write Protect Program Flash Page 128
;     WPFP = WPFP129       Write Protect Program Flash Page 129
;     WPFP = WPFP130       Write Protect Program Flash Page 130
;     WPFP = WPFP131       Write Protect Program Flash Page 131
;     WPFP = WPFP132       Write Protect Program Flash Page 132
;     WPFP = WPFP133       Write Protect Program Flash Page 133
;     WPFP = WPFP134       Write Protect Program Flash Page 134
;     WPFP = WPFP135       Write Protect Program Flash Page 135
;     WPFP = WPFP136       Write Protect Program Flash Page 136
;     WPFP = WPFP137       Write Protect Program Flash Page 137
;     WPFP = WPFP138       Write Protect Program Flash Page 138
;     WPFP = WPFP139       Write Protect Program Flash Page 139
;     WPFP = WPFP140       Write Protect Program Flash Page 140
;     WPFP = WPFP141       Write Protect Program Flash Page 141
;     WPFP = WPFP142       Write Protect Program Flash Page 142
;     WPFP = WPFP143       Write Protect Program Flash Page 143
;     WPFP = WPFP144       Write Protect Program Flash Page 144
;     WPFP = WPFP145       Write Protect Program Flash Page 145
;     WPFP = WPFP146       Write Protect Program Flash Page 146
;     WPFP = WPFP147       Write Protect Program Flash Page 147
;     WPFP = WPFP148       Write Protect Program Flash Page 148
;     WPFP = WPFP149       Write Protect Program Flash Page 149
;     WPFP = WPFP150       Write Protect Program Flash Page 150
;     WPFP = WPFP151       Write Protect Program Flash Page 151
;     WPFP = WPFP152       Write Protect Program Flash Page 152
;     WPFP = WPFP153       Write Protect Program Flash Page 153
;     WPFP = WPFP154       Write Protect Program Flash Page 154
;     WPFP = WPFP155       Write Protect Program Flash Page 155
;     WPFP = WPFP156       Write Protect Program Flash Page 156
;     WPFP = WPFP157       Write Protect Program Flash Page 157
;     WPFP = WPFP158       Write Protect Program Flash Page 158
;     WPFP = WPFP159       Write Protect Program Flash Page 159
;     WPFP = WPFP160       Write Protect Program Flash Page 160
;     WPFP = WPFP161       Write Protect Program Flash Page 161
;     WPFP = WPFP162       Write Protect Program Flash Page 162
;     WPFP = WPFP163       Write Protect Program Flash Page 163
;     WPFP = WPFP164       Write Protect Program Flash Page 164
;     WPFP = WPFP165       Write Protect Program Flash Page 165
;     WPFP = WPFP166       Write Protect Program Flash Page 166
;     WPFP = WPFP167       Write Protect Program Flash Page 167
;     WPFP = WPFP168       Write Protect Program Flash Page 168
;     WPFP = WPFP169       Write Protect Program Flash Page 169
;     WPFP = WPFP170       Write Protect Program Flash Page 170
;     WPFP = WPFP171       Write Protect Program Flash Page 171
;     WPFP = WPFP172       Write Protect Program Flash Page 172
;     WPFP = WPFP173       Write Protect Program Flash Page 173
;     WPFP = WPFP174       Write Protect Program Flash Page 174
;     WPFP = WPFP175       Write Protect Program Flash Page 175
;     WPFP = WPFP176       Write Protect Program Flash Page 176
;     WPFP = WPFP177       Write Protect Program Flash Page 177
;     WPFP = WPFP178       Write Protect Program Flash Page 178
;     WPFP = WPFP179       Write Protect Program Flash Page 179
;     WPFP = WPFP180       Write Protect Program Flash Page 180
;     WPFP = WPFP181       Write Protect Program Flash Page 181
;     WPFP = WPFP182       Write Protect Program Flash Page 182
;     WPFP = WPFP183       Write Protect Program Flash Page 183
;     WPFP = WPFP184       Write Protect Program Flash Page 184
;     WPFP = WPFP185       Write Protect Program Flash Page 185
;     WPFP = WPFP186       Write Protect Program Flash Page 186
;     WPFP = WPFP187       Write Protect Program Flash Page 187
;     WPFP = WPFP188       Write Protect Program Flash Page 188
;     WPFP = WPFP189       Write Protect Program Flash Page 189
;     WPFP = WPFP190       Write Protect Program Flash Page 190
;     WPFP = WPFP191       Write Protect Program Flash Page 191
;     WPFP = WPFP192       Write Protect Program Flash Page 192
;     WPFP = WPFP193       Write Protect Program Flash Page 193
;     WPFP = WPFP194       Write Protect Program Flash Page 194
;     WPFP = WPFP195       Write Protect Program Flash Page 195
;     WPFP = WPFP196       Write Protect Program Flash Page 196
;     WPFP = WPFP197       Write Protect Program Flash Page 197
;     WPFP = WPFP198       Write Protect Program Flash Page 198
;     WPFP = WPFP199       Write Protect Program Flash Page 199
;     WPFP = WPFP200       Write Protect Program Flash Page 200
;     WPFP = WPFP201       Write Protect Program Flash Page 201
;     WPFP = WPFP202       Write Protect Program Flash Page 202
;     WPFP = WPFP203       Write Protect Program Flash Page 203
;     WPFP = WPFP204       Write Protect Program Flash Page 204
;     WPFP = WPFP205       Write Protect Program Flash Page 205
;     WPFP = WPFP206       Write Protect Program Flash Page 206
;     WPFP = WPFP207       Write Protect Program Flash Page 207
;     WPFP = WPFP208       Write Protect Program Flash Page 208
;     WPFP = WPFP209       Write Protect Program Flash Page 209
;     WPFP = WPFP210       Write Protect Program Flash Page 210
;     WPFP = WPFP211       Write Protect Program Flash Page 211
;     WPFP = WPFP212       Write Protect Program Flash Page 212
;     WPFP = WPFP213       Write Protect Program Flash Page 213
;     WPFP = WPFP214       Write Protect Program Flash Page 214
;     WPFP = WPFP215       Write Protect Program Flash Page 215
;     WPFP = WPFP216       Write Protect Program Flash Page 216
;     WPFP = WPFP217       Write Protect Program Flash Page 217
;     WPFP = WPFP218       Write Protect Program Flash Page 218
;     WPFP = WPFP219       Write Protect Program Flash Page 219
;     WPFP = WPFP220       Write Protect Program Flash Page 220
;     WPFP = WPFP221       Write Protect Program Flash Page 221
;     WPFP = WPFP222       Write Protect Program Flash Page 222
;     WPFP = WPFP223       Write Protect Program Flash Page 223
;     WPFP = WPFP224       Write Protect Program Flash Page 224
;     WPFP = WPFP225       Write Protect Program Flash Page 225
;     WPFP = WPFP226       Write Protect Program Flash Page 226
;     WPFP = WPFP227       Write Protect Program Flash Page 227
;     WPFP = WPFP228       Write Protect Program Flash Page 228
;     WPFP = WPFP229       Write Protect Program Flash Page 229
;     WPFP = WPFP230       Write Protect Program Flash Page 230
;     WPFP = WPFP231       Write Protect Program Flash Page 231
;     WPFP = WPFP232       Write Protect Program Flash Page 232
;     WPFP = WPFP233       Write Protect Program Flash Page 233
;     WPFP = WPFP234       Write Protect Program Flash Page 234
;     WPFP = WPFP235       Write Protect Program Flash Page 235
;     WPFP = WPFP236       Write Protect Program Flash Page 236
;     WPFP = WPFP237       Write Protect Program Flash Page 237
;     WPFP = WPFP238       Write Protect Program Flash Page 238
;     WPFP = WPFP239       Write Protect Program Flash Page 239
;     WPFP = WPFP240       Write Protect Program Flash Page 240
;     WPFP = WPFP241       Write Protect Program Flash Page 241
;     WPFP = WPFP242       Write Protect Program Flash Page 242
;     WPFP = WPFP243       Write Protect Program Flash Page 243
;     WPFP = WPFP244       Write Protect Program Flash Page 244
;     WPFP = WPFP245       Write Protect Program Flash Page 245
;     WPFP = WPFP246       Write Protect Program Flash Page 246
;     WPFP = WPFP247       Write Protect Program Flash Page 247
;     WPFP = WPFP248       Write Protect Program Flash Page 248
;     WPFP = WPFP249       Write Protect Program Flash Page 249
;     WPFP = WPFP250       Write Protect Program Flash Page 250
;     WPFP = WPFP251       Write Protect Program Flash Page 251
;     WPFP = WPFP252       Write Protect Program Flash Page 252
;     WPFP = WPFP253       Write Protect Program Flash Page 253
;     WPFP = WPFP254       Write Protect Program Flash Page 254
;     WPFP = WPFP255       Write Protect Program Flash Page 255
;
;   Segment Write Protection Disable:
;     WPDIS = WPEN         Enabled
;     WPDIS = WPDIS        Disabled
;
;   Segment Write Protection End Page Select:
;     WPEND = WPSTARTMEM   write Protect from page 0 to WPFP
;     WPEND = WPENDMEM     Write Protect from WPFP to the last page of memory
;
;   Write Protect Configuration Page Select:
;     WPCFG = WPCFGEN      Enabled
;     WPCFG = WPCFGDIS     Disabled
;
;   TMR5 Gate Select bit:
;     T5GSEL = T3G         TMR5 Gate is driven by the T3G input
;     T5GSEL = T5G         TMR5 Gate is driven by the T5G input
;
;   CxINA Gate Select bit:
;     CINASEL = RA5        C1INA and C3INA are all re-mapped to pin RA5
;     CINASEL = DEFAULT    C1INA and C3INA are on their default pin locations
;
;   External Address Shift bit:
;     EASHFT = OFF         Address Shifting disabled
;     EASHFT = ON          Address Shifting enabled
;
;   Address Bus Width Select bits:
;     ABW = XM20           20-bit address bus
;     ABW = XM16           16-bit address bus
;     ABW = XM12           12-bit address bus
;     ABW = MM             8-bit address bus
;
;   Data Bus Width:
;     BW = 8               8-bit external bus mode
;     BW = 16              16-bit external bus mode
;
;   External Bus Wait:
;     WAIT = ON            Enabled
;     WAIT = OFF           Disabled
;
;   IOLOCK One-Way Set Enable bit:
;     IOL1WAY = OFF        the IOLOCK bit can be set and cleared using the unlock sequence
;     IOL1WAY = ON         Once set, the IOLOCK bit cannot be cleared
;
;   USB Low Speed Clock Select bit:
;     LS48MHZ = SYSX1      Divide-by-1 (System clock must be 6 MHz)
;     LS48MHZ = SYSX2      Divide-by-2 (System clock must be 12 MHz)
;
;   MSSP2 7-Bit Address Masking Mode Enable bit:
;     MSSPMSK2 = MSK5      5 Bit address masking mode
;     MSSPMSK2 = MSK7      7 Bit address masking mode
;
;   MSSP1 7-Bit Address Masking Mode Enable bit:
;     MSSPMSK1 = MSK5      5 bit address masking mode
;     MSSPMSK1 = MSK7      7 Bit address masking mode
;
;   Watch Dog Timer Window:
;     WDTWIN = PS75_0      Watch Dog Timer Window Width is 75 percent
;     WDTWIN = PS50_0      Watch Dog Timer Window Width is 50 percent
;     WDTWIN = PS37_5      Watch Dog Timer Window Width is 37.5 percent
;     WDTWIN = PS25_0      Watch Dog Timer Window Width is 25 percent
;
;   Watch Dog Timer Clock Source:
;     WDTCLK = SYS         Use FOSC/4 when system clock is not INTOSC/LPRC and device is not in Sleep; otherwise, use INTOSC/LPRC
;     WDTCLK = SOSC        Always use SOSC
;     WDTCLK = LPRC        Always use INTOSC/LPRC
;     WDTCLK = FRC         Use FRC when WINDIS = 0, system clock is not INTOSC/LPRC and device is not in Sleep; otherwise, use INTOSC/LPRC
;
;   Watchdog Timer Postscale:
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
;   Watchdog Timer Enable:
;     WDTEN = OFF          WDT disabled in hardware; SWDTEN bit disabled
;     WDTEN = NOSLP        WDT enabled only while device is active and disabled in Sleep mode; SWDTEN bit disabled
;     WDTEN = ON           WDT controlled by SWDTEN bit setting
;     WDTEN = SWDTDIS      WDT enabled in hardware; SWDTEN bit disabled
;
;   Windowed Watchdog Timer Disable:
;     WINDIS = WDTWIN      Windowed WDT enabled
;     WINDIS = WDTSTD      Standard WDT selected; windowed WDT disabled
;
;   WDT Prescaler:
;     WPSA = 32            WDT prescaler ratio of 1:32
;     WPSA = 128           WDT prescaler ratio of 1:128
;
;   Retention Voltage Regulator Control Enable:
;     RETEN = ON           Retention controlled by SRETEN during Sleep
;     RETEN = OFF          Retention not available
;
;   VBAT BOR Enable:
;     VBTBOR = OFF         VBAT BOR is disabled
;     VBTBOR = ON          VBAT BOR is enabled
;
;   Deep Sleep BOR Enable:
;     DSBOREN = OFF        BOR disabled in Deep Sleep (does not affect operation in non-Deep Sleep modes)
;     DSBOREN = ON         BOR enabled in Deep Sleep
;
;   DSEN Bit Enable bit:
;     DSBITEN = OFF        Deep Sleep operation is always disabled
;     DSBITEN = ON         Deep Sleep is controlled by the register bit DSEN
;
;   Deep Sleep Watchdog Timer Postscale Select:
;     DSWDTPS = DSWDTPS0   1:32 (1 mS)
;     DSWDTPS = DSWDTPS1   1:64 (2.1 mS)
;     DSWDTPS = DSWDTPS2   1:128 (4.1 mS)
;     DSWDTPS = DSWDTPS3   1: 256 (8.3 mS)
;     DSWDTPS = DSWDTPS4   1:512 (16.5 mS)
;     DSWDTPS = DSWDTPS5   1:1024 (33 mS)
;     DSWDTPS = DSWDTPS6   1:2048 (66.1 mS)
;     DSWDTPS = DSWDTPS7   1:4096 (132.1 mS)
;     DSWDTPS = DSWDTPS8   1:8192 (264.3 mS)
;     DSWDTPS = DSWDTPS9   1:16384 (528.5 mS)
;     DSWDTPS = DSWDTPSA   1:32768 (1.057 Secs)
;     DSWDTPS = DSWDTPSB   1:65536 (2.114 Secs)
;     DSWDTPS = DSWDTPSC   1:131072 (4.228 Secs)
;     DSWDTPS = DSWDTPSD   1:262114 (8.456 Secs)
;     DSWDTPS = DSWDTPSE   1:524288 (16.912 Secs)
;     DSWDTPS = DSWDTPSF   1:1048576 (33.825 Secs)
;     DSWDTPS = DSWDTPS10  1:2097152 (67.7 Secs)
;     DSWDTPS = DSWDTPS11  1:4194304 (135.3 Secs)
;     DSWDTPS = DSWDTPS12  1:8388608 (4.5 Minutes)
;     DSWDTPS = DSWDTPS13  1:16777216 (9 Minutes)
;     DSWDTPS = DSWDTPS14  1:33554432 (18 Minutes)
;     DSWDTPS = DSWDTPS15  1:67108864 (36.1 Minutes)
;     DSWDTPS = DSWDTPS16  1:134217728 (72.2 Minutes)
;     DSWDTPS = DSWDTPS17  1:268435456 (2.4 Hours)
;     DSWDTPS = DSWDTPS18  1:536870912 (4.8 Hours)
;     DSWDTPS = DSWDTPS19  1:1073741824 (9.6 Hours)
;     DSWDTPS = DSWDTPS1A  1:2147483648 (19.2 Hours)
;     DSWDTPS = DSWDTPS1B  1:4294967296 (38.5 Hours)
;     DSWDTPS = DSWDTPS1C  1:8589934592 (77 Hours)
;     DSWDTPS = DSWDTPS1D  1:17179869184 (6.4 Days)
;     DSWDTPS = DSWDTPS1E  1:34359738368 (12.8  Days)
;     DSWDTPS = DSWDTPS1F  1:68719476736 (25.7 Days)
;
;   Deep Sleep Watchdog Timer Enable:
;     DSWDTEN = OFF        DSWDT Disabled
;     DSWDTEN = ON         DSWDT Enabled
;
;   DSWDT Reference Clock Select:
;     DSWDTOSC = SOSC      DSWDT uses SOSC as reference clock
;     DSWDTOSC = LPRC      DSWDT uses LPRC as reference clock
;
;==========================================================================
;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'3FFFFE'
_DEVID2          EQU  H'3FFFFF'


        LIST
