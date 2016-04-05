;----------------------------------------------------------------------
;
; p18cxxx.inc - Common include file to PIC18XXXX families.
;
; This file is has been generated using device-manager.pl.
;
;    To the usage of the PIC18F4520 MCU an example:
;
;	1. Command line switch:
;	    gpasm -p pic18f4520 source.asm
;
;	2. The LIST directive in the source file:
;	    list p=18f4520
;		(It does not matter that lowercase or uppercase.)
;
;	3. The PROCESSOR directive in the source file:
;	    processor 18f4520
;		(It does not matter that lowercase or uppercase.)
;
;----------------------------------------------------------------------

ifdef __18CXX
  include <p18c452.inc>
endif
ifdef __18C242
  include <p18c242.inc>
endif
ifdef __18C252
  include <p18c252.inc>
endif
ifdef __18C442
  include <p18c442.inc>
endif
ifdef __18C452
  include <p18c452.inc>
endif
ifdef __18C601
  include <p18c601.inc>
endif
ifdef __18C658
  include <p18c658.inc>
endif
ifdef __18C801
  include <p18c801.inc>
endif
ifdef __18C858
  include <p18c858.inc>
endif
ifdef __18CXX
  include <p18c452.inc>
endif
ifdef __18F13K22
  include <p18f13k22.inc>
endif
ifdef __18F13K50
  include <p18f13k50.inc>
endif
ifdef __18F14K22
  include <p18f14k22.inc>
endif
ifdef __18F14K22LIN
  include <p18f14k22lin.inc>
endif
ifdef __18F14K50
  include <p18f14k50.inc>
endif
ifdef __18F23K20
  include <p18f23k20.inc>
endif
ifdef __18F23K22
  include <p18f23k22.inc>
endif
ifdef __18F24J10
  include <p18f24j10.inc>
endif
ifdef __18F24J11
  include <p18f24j11.inc>
endif
ifdef __18F24J50
  include <p18f24j50.inc>
endif
ifdef __18F24K20
  include <p18f24k20.inc>
endif
ifdef __18F24K22
  include <p18f24k22.inc>
endif
ifdef __18F24K40
  include <p18f24k40.inc>
endif
ifdef __18F24K50
  include <p18f24k50.inc>
endif
ifdef __18F25J10
  include <p18f25j10.inc>
endif
ifdef __18F25J11
  include <p18f25j11.inc>
endif
ifdef __18F25J50
  include <p18f25j50.inc>
endif
ifdef __18F25K20
  include <p18f25k20.inc>
endif
ifdef __18F25K22
  include <p18f25k22.inc>
endif
ifdef __18F25K40
  include <p18f25k40.inc>
endif
ifdef __18F25K50
  include <p18f25k50.inc>
endif
ifdef __18F25K80
  include <p18f25k80.inc>
endif
ifdef __18F26J11
  include <p18f26j11.inc>
endif
ifdef __18F26J13
  include <p18f26j13.inc>
endif
ifdef __18F26J50
  include <p18f26j50.inc>
endif
ifdef __18F26J53
  include <p18f26j53.inc>
endif
ifdef __18F26K20
  include <p18f26k20.inc>
endif
ifdef __18F26K22
  include <p18f26k22.inc>
endif
ifdef __18F26K40
  include <p18f26k40.inc>
endif
ifdef __18F26K80
  include <p18f26k80.inc>
endif
ifdef __18F27J13
  include <p18f27j13.inc>
endif
ifdef __18F27J53
  include <p18f27j53.inc>
endif
ifdef __18F27K40
  include <p18f27k40.inc>
endif
ifdef __18F43K20
  include <p18f43k20.inc>
endif
ifdef __18F43K22
  include <p18f43k22.inc>
endif
ifdef __18F44J10
  include <p18f44j10.inc>
endif
ifdef __18F44J11
  include <p18f44j11.inc>
endif
ifdef __18F44J50
  include <p18f44j50.inc>
endif
ifdef __18F44K20
  include <p18f44k20.inc>
endif
ifdef __18F44K22
  include <p18f44k22.inc>
endif
ifdef __18F45J10
  include <p18f45j10.inc>
endif
ifdef __18F45J11
  include <p18f45j11.inc>
endif
ifdef __18F45J50
  include <p18f45j50.inc>
endif
ifdef __18F45K20
  include <p18f45k20.inc>
endif
ifdef __18F45K22
  include <p18f45k22.inc>
endif
ifdef __18F45K40
  include <p18f45k40.inc>
endif
ifdef __18F45K50
  include <p18f45k50.inc>
endif
ifdef __18F45K80
  include <p18f45k80.inc>
endif
ifdef __18F46J11
  include <p18f46j11.inc>
endif
ifdef __18F46J13
  include <p18f46j13.inc>
endif
ifdef __18F46J50
  include <p18f46j50.inc>
endif
ifdef __18F46J53
  include <p18f46j53.inc>
endif
ifdef __18F46K20
  include <p18f46k20.inc>
endif
ifdef __18F46K22
  include <p18f46k22.inc>
endif
ifdef __18F46K40
  include <p18f46k40.inc>
endif
ifdef __18F46K80
  include <p18f46k80.inc>
endif
ifdef __18F47J13
  include <p18f47j13.inc>
endif
ifdef __18F47J53
  include <p18f47j53.inc>
endif
ifdef __18F47K40
  include <p18f47k40.inc>
endif
ifdef __18F63J11
  include <p18f63j11.inc>
endif
ifdef __18F63J90
  include <p18f63j90.inc>
endif
ifdef __18F64J11
  include <p18f64j11.inc>
endif
ifdef __18F64J15
  include <p18f64j15.inc>
endif
ifdef __18F64J90
  include <p18f64j90.inc>
endif
ifdef __18F65J10
  include <p18f65j10.inc>
endif
ifdef __18F65J11
  include <p18f65j11.inc>
endif
ifdef __18F65J15
  include <p18f65j15.inc>
endif
ifdef __18F65J50
  include <p18f65j50.inc>
endif
ifdef __18F65J90
  include <p18f65j90.inc>
endif
ifdef __18F65J94
  include <p18f65j94.inc>
endif
ifdef __18F65K22
  include <p18f65k22.inc>
endif
ifdef __18F65K40
  include <p18f65k40.inc>
endif
ifdef __18F65K80
  include <p18f65k80.inc>
endif
ifdef __18F65K90
  include <p18f65k90.inc>
endif
ifdef __18F66J10
  include <p18f66j10.inc>
endif
ifdef __18F66J11
  include <p18f66j11.inc>
endif
ifdef __18F66J15
  include <p18f66j15.inc>
endif
ifdef __18F66J16
  include <p18f66j16.inc>
endif
ifdef __18F66J50
  include <p18f66j50.inc>
endif
ifdef __18F66J55
  include <p18f66j55.inc>
endif
ifdef __18F66J60
  include <p18f66j60.inc>
endif
ifdef __18F66J65
  include <p18f66j65.inc>
endif
ifdef __18F66J90
  include <p18f66j90.inc>
endif
ifdef __18F66J93
  include <p18f66j93.inc>
endif
ifdef __18F66J94
  include <p18f66j94.inc>
endif
ifdef __18F66J99
  include <p18f66j99.inc>
endif
ifdef __18F66K22
  include <p18f66k22.inc>
endif
ifdef __18F66K40
  include <p18f66k40.inc>
endif
ifdef __18F66K80
  include <p18f66k80.inc>
endif
ifdef __18F66K90
  include <p18f66k90.inc>
endif
ifdef __18F67J10
  include <p18f67j10.inc>
endif
ifdef __18F67J11
  include <p18f67j11.inc>
endif
ifdef __18F67J50
  include <p18f67j50.inc>
endif
ifdef __18F67J60
  include <p18f67j60.inc>
endif
ifdef __18F67J90
  include <p18f67j90.inc>
endif
ifdef __18F67J93
  include <p18f67j93.inc>
endif
ifdef __18F67J94
  include <p18f67j94.inc>
endif
ifdef __18F67K22
  include <p18f67k22.inc>
endif
ifdef __18F67K40
  include <p18f67k40.inc>
endif
ifdef __18F67K90
  include <p18f67k90.inc>
endif
ifdef __18F83J11
  include <p18f83j11.inc>
endif
ifdef __18F83J90
  include <p18f83j90.inc>
endif
ifdef __18F84J11
  include <p18f84j11.inc>
endif
ifdef __18F84J15
  include <p18f84j15.inc>
endif
ifdef __18F84J90
  include <p18f84j90.inc>
endif
ifdef __18F85J10
  include <p18f85j10.inc>
endif
ifdef __18F85J11
  include <p18f85j11.inc>
endif
ifdef __18F85J15
  include <p18f85j15.inc>
endif
ifdef __18F85J50
  include <p18f85j50.inc>
endif
ifdef __18F85J90
  include <p18f85j90.inc>
endif
ifdef __18F85J94
  include <p18f85j94.inc>
endif
ifdef __18F85K22
  include <p18f85k22.inc>
endif
ifdef __18F85K90
  include <p18f85k90.inc>
endif
ifdef __18F86J10
  include <p18f86j10.inc>
endif
ifdef __18F86J11
  include <p18f86j11.inc>
endif
ifdef __18F86J15
  include <p18f86j15.inc>
endif
ifdef __18F86J16
  include <p18f86j16.inc>
endif
ifdef __18F86J50
  include <p18f86j50.inc>
endif
ifdef __18F86J55
  include <p18f86j55.inc>
endif
ifdef __18F86J60
  include <p18f86j60.inc>
endif
ifdef __18F86J65
  include <p18f86j65.inc>
endif
ifdef __18F86J72
  include <p18f86j72.inc>
endif
ifdef __18F86J90
  include <p18f86j90.inc>
endif
ifdef __18F86J93
  include <p18f86j93.inc>
endif
ifdef __18F86J94
  include <p18f86j94.inc>
endif
ifdef __18F86J99
  include <p18f86j99.inc>
endif
ifdef __18F86K22
  include <p18f86k22.inc>
endif
ifdef __18F86K90
  include <p18f86k90.inc>
endif
ifdef __18F87J10
  include <p18f87j10.inc>
endif
ifdef __18F87J11
  include <p18f87j11.inc>
endif
ifdef __18F87J50
  include <p18f87j50.inc>
endif
ifdef __18F87J60
  include <p18f87j60.inc>
endif
ifdef __18F87J72
  include <p18f87j72.inc>
endif
ifdef __18F87J90
  include <p18f87j90.inc>
endif
ifdef __18F87J93
  include <p18f87j93.inc>
endif
ifdef __18F87J94
  include <p18f87j94.inc>
endif
ifdef __18F87K22
  include <p18f87k22.inc>
endif
ifdef __18F87K90
  include <p18f87k90.inc>
endif
ifdef __18F95J94
  include <p18f95j94.inc>
endif
ifdef __18F96J60
  include <p18f96j60.inc>
endif
ifdef __18F96J65
  include <p18f96j65.inc>
endif
ifdef __18F96J94
  include <p18f96j94.inc>
endif
ifdef __18F96J99
  include <p18f96j99.inc>
endif
ifdef __18F97J60
  include <p18f97j60.inc>
endif
ifdef __18F97J94
  include <p18f97j94.inc>
endif
ifdef __18F242
  include <p18f242.inc>
endif
ifdef __18F248
  include <p18f248.inc>
endif
ifdef __18F252
  include <p18f252.inc>
endif
ifdef __18F258
  include <p18f258.inc>
endif
ifdef __18F442
  include <p18f442.inc>
endif
ifdef __18F448
  include <p18f448.inc>
endif
ifdef __18F452
  include <p18f452.inc>
endif
ifdef __18F458
  include <p18f458.inc>
endif
ifdef __18F1220
  include <p18f1220.inc>
endif
ifdef __18F1230
  include <p18f1230.inc>
endif
ifdef __18F1320
  include <p18f1320.inc>
endif
ifdef __18F1330
  include <p18f1330.inc>
endif
ifdef __18F2220
  include <p18f2220.inc>
endif
ifdef __18F2221
  include <p18f2221.inc>
endif
ifdef __18F2320
  include <p18f2320.inc>
endif
ifdef __18F2321
  include <p18f2321.inc>
endif
ifdef __18F2331
  include <p18f2331.inc>
endif
ifdef __18F2410
  include <p18f2410.inc>
endif
ifdef __18F2420
  include <p18f2420.inc>
endif
ifdef __18F2423
  include <p18f2423.inc>
endif
ifdef __18F2431
  include <p18f2431.inc>
endif
ifdef __18F2439
  include <p18f2439.inc>
endif
ifdef __18F2450
  include <p18f2450.inc>
endif
ifdef __18F2455
  include <p18f2455.inc>
endif
ifdef __18F2458
  include <p18f2458.inc>
endif
ifdef __18F2480
  include <p18f2480.inc>
endif
ifdef __18F2510
  include <p18f2510.inc>
endif
ifdef __18F2515
  include <p18f2515.inc>
endif
ifdef __18F2520
  include <p18f2520.inc>
endif
ifdef __18F2523
  include <p18f2523.inc>
endif
ifdef __18F2525
  include <p18f2525.inc>
endif
ifdef __18F2539
  include <p18f2539.inc>
endif
ifdef __18F2550
  include <p18f2550.inc>
endif
ifdef __18F2553
  include <p18f2553.inc>
endif
ifdef __18F2580
  include <p18f2580.inc>
endif
ifdef __18F2585
  include <p18f2585.inc>
endif
ifdef __18F2610
  include <p18f2610.inc>
endif
ifdef __18F2620
  include <p18f2620.inc>
endif
ifdef __18F2680
  include <p18f2680.inc>
endif
ifdef __18F2681
  include <p18f2681.inc>
endif
ifdef __18F2682
  include <p18f2682.inc>
endif
ifdef __18F2685
  include <p18f2685.inc>
endif
ifdef __18F4220
  include <p18f4220.inc>
endif
ifdef __18F4221
  include <p18f4221.inc>
endif
ifdef __18F4320
  include <p18f4320.inc>
endif
ifdef __18F4321
  include <p18f4321.inc>
endif
ifdef __18F4331
  include <p18f4331.inc>
endif
ifdef __18F4410
  include <p18f4410.inc>
endif
ifdef __18F4420
  include <p18f4420.inc>
endif
ifdef __18F4423
  include <p18f4423.inc>
endif
ifdef __18F4431
  include <p18f4431.inc>
endif
ifdef __18F4439
  include <p18f4439.inc>
endif
ifdef __18F4450
  include <p18f4450.inc>
endif
ifdef __18F4455
  include <p18f4455.inc>
endif
ifdef __18F4458
  include <p18f4458.inc>
endif
ifdef __18F4480
  include <p18f4480.inc>
endif
ifdef __18F4510
  include <p18f4510.inc>
endif
ifdef __18F4515
  include <p18f4515.inc>
endif
ifdef __18F4520
  include <p18f4520.inc>
endif
ifdef __18F4523
  include <p18f4523.inc>
endif
ifdef __18F4525
  include <p18f4525.inc>
endif
ifdef __18F4539
  include <p18f4539.inc>
endif
ifdef __18F4550
  include <p18f4550.inc>
endif
ifdef __18F4553
  include <p18f4553.inc>
endif
ifdef __18F4580
  include <p18f4580.inc>
endif
ifdef __18F4585
  include <p18f4585.inc>
endif
ifdef __18F4610
  include <p18f4610.inc>
endif
ifdef __18F4620
  include <p18f4620.inc>
endif
ifdef __18F4680
  include <p18f4680.inc>
endif
ifdef __18F4681
  include <p18f4681.inc>
endif
ifdef __18F4682
  include <p18f4682.inc>
endif
ifdef __18F4685
  include <p18f4685.inc>
endif
ifdef __18F6310
  include <p18f6310.inc>
endif
ifdef __18F6390
  include <p18f6390.inc>
endif
ifdef __18F6393
  include <p18f6393.inc>
endif
ifdef __18F6410
  include <p18f6410.inc>
endif
ifdef __18F6490
  include <p18f6490.inc>
endif
ifdef __18F6493
  include <p18f6493.inc>
endif
ifdef __18F6520
  include <p18f6520.inc>
endif
ifdef __18F6525
  include <p18f6525.inc>
endif
ifdef __18F6527
  include <p18f6527.inc>
endif
ifdef __18F6585
  include <p18f6585.inc>
endif
ifdef __18F6620
  include <p18f6620.inc>
endif
ifdef __18F6621
  include <p18f6621.inc>
endif
ifdef __18F6622
  include <p18f6622.inc>
endif
ifdef __18F6627
  include <p18f6627.inc>
endif
ifdef __18F6628
  include <p18f6628.inc>
endif
ifdef __18F6680
  include <p18f6680.inc>
endif
ifdef __18F6720
  include <p18f6720.inc>
endif
ifdef __18F6722
  include <p18f6722.inc>
endif
ifdef __18F6723
  include <p18f6723.inc>
endif
ifdef __18F8310
  include <p18f8310.inc>
endif
ifdef __18F8390
  include <p18f8390.inc>
endif
ifdef __18F8393
  include <p18f8393.inc>
endif
ifdef __18F8410
  include <p18f8410.inc>
endif
ifdef __18F8490
  include <p18f8490.inc>
endif
ifdef __18F8493
  include <p18f8493.inc>
endif
ifdef __18F8520
  include <p18f8520.inc>
endif
ifdef __18F8525
  include <p18f8525.inc>
endif
ifdef __18F8527
  include <p18f8527.inc>
endif
ifdef __18F8585
  include <p18f8585.inc>
endif
ifdef __18F8620
  include <p18f8620.inc>
endif
ifdef __18F8621
  include <p18f8621.inc>
endif
ifdef __18F8622
  include <p18f8622.inc>
endif
ifdef __18F8627
  include <p18f8627.inc>
endif
ifdef __18F8628
  include <p18f8628.inc>
endif
ifdef __18F8680
  include <p18f8680.inc>
endif
ifdef __18F8720
  include <p18f8720.inc>
endif
ifdef __18F8722
  include <p18f8722.inc>
endif
ifdef __18F8723
  include <p18f8723.inc>
endif
ifdef __18LF13K22
  include <p18lf13k22.inc>
endif
ifdef __18LF13K50
  include <p18lf13k50.inc>
endif
ifdef __18LF14K22
  include <p18lf14k22.inc>
endif
ifdef __18LF14K50
  include <p18lf14k50.inc>
endif
ifdef __18LF23K22
  include <p18lf23k22.inc>
endif
ifdef __18LF24J10
  include <p18lf24j10.inc>
endif
ifdef __18LF24J11
  include <p18lf24j11.inc>
endif
ifdef __18LF24J50
  include <p18lf24j50.inc>
endif
ifdef __18LF24K22
  include <p18lf24k22.inc>
endif
ifdef __18LF24K40
  include <p18lf24k40.inc>
endif
ifdef __18LF24K50
  include <p18lf24k50.inc>
endif
ifdef __18LF25J10
  include <p18lf25j10.inc>
endif
ifdef __18LF25J11
  include <p18lf25j11.inc>
endif
ifdef __18LF25J50
  include <p18lf25j50.inc>
endif
ifdef __18LF25K22
  include <p18lf25k22.inc>
endif
ifdef __18LF25K40
  include <p18lf25k40.inc>
endif
ifdef __18LF25K50
  include <p18lf25k50.inc>
endif
ifdef __18LF25K80
  include <p18lf25k80.inc>
endif
ifdef __18LF26J11
  include <p18lf26j11.inc>
endif
ifdef __18LF26J13
  include <p18lf26j13.inc>
endif
ifdef __18LF26J50
  include <p18lf26j50.inc>
endif
ifdef __18LF26J53
  include <p18lf26j53.inc>
endif
ifdef __18LF26K22
  include <p18lf26k22.inc>
endif
ifdef __18LF26K40
  include <p18lf26k40.inc>
endif
ifdef __18LF26K80
  include <p18lf26k80.inc>
endif
ifdef __18LF27J13
  include <p18lf27j13.inc>
endif
ifdef __18LF27J53
  include <p18lf27j53.inc>
endif
ifdef __18LF27K40
  include <p18lf27k40.inc>
endif
ifdef __18LF43K22
  include <p18lf43k22.inc>
endif
ifdef __18LF44J10
  include <p18lf44j10.inc>
endif
ifdef __18LF44J11
  include <p18lf44j11.inc>
endif
ifdef __18LF44J50
  include <p18lf44j50.inc>
endif
ifdef __18LF44K22
  include <p18lf44k22.inc>
endif
ifdef __18LF45J10
  include <p18lf45j10.inc>
endif
ifdef __18LF45J11
  include <p18lf45j11.inc>
endif
ifdef __18LF45J50
  include <p18lf45j50.inc>
endif
ifdef __18LF45K22
  include <p18lf45k22.inc>
endif
ifdef __18LF45K40
  include <p18lf45k40.inc>
endif
ifdef __18LF45K50
  include <p18lf45k50.inc>
endif
ifdef __18LF45K80
  include <p18lf45k80.inc>
endif
ifdef __18LF46J11
  include <p18lf46j11.inc>
endif
ifdef __18LF46J13
  include <p18lf46j13.inc>
endif
ifdef __18LF46J50
  include <p18lf46j50.inc>
endif
ifdef __18LF46J53
  include <p18lf46j53.inc>
endif
ifdef __18LF46K22
  include <p18lf46k22.inc>
endif
ifdef __18LF46K40
  include <p18lf46k40.inc>
endif
ifdef __18LF46K80
  include <p18lf46k80.inc>
endif
ifdef __18LF47J13
  include <p18lf47j13.inc>
endif
ifdef __18LF47J53
  include <p18lf47j53.inc>
endif
ifdef __18LF47K40
  include <p18lf47k40.inc>
endif
ifdef __18LF65K40
  include <p18lf65k40.inc>
endif
ifdef __18LF65K80
  include <p18lf65k80.inc>
endif
ifdef __18LF66K40
  include <p18lf66k40.inc>
endif
ifdef __18LF66K80
  include <p18lf66k80.inc>
endif
ifdef __18LF67K40
  include <p18lf67k40.inc>
endif
ifdef __18LF242
  include <p18lf242.inc>
endif
ifdef __18LF248
  include <p18lf248.inc>
endif
ifdef __18LF252
  include <p18lf252.inc>
endif
ifdef __18LF258
  include <p18lf258.inc>
endif
ifdef __18LF442
  include <p18lf442.inc>
endif
ifdef __18LF448
  include <p18lf448.inc>
endif
ifdef __18LF452
  include <p18lf452.inc>
endif
ifdef __18LF458
  include <p18lf458.inc>
endif
ifdef __18LF1220
  include <p18lf1220.inc>
endif
ifdef __18LF1230
  include <p18lf1230.inc>
endif
ifdef __18LF1320
  include <p18lf1320.inc>
endif
ifdef __18LF1330
  include <p18lf1330.inc>
endif
ifdef __18LF2220
  include <p18lf2220.inc>
endif
ifdef __18LF2221
  include <p18lf2221.inc>
endif
ifdef __18LF2320
  include <p18lf2320.inc>
endif
ifdef __18LF2321
  include <p18lf2321.inc>
endif
ifdef __18LF2331
  include <p18lf2331.inc>
endif
ifdef __18LF2410
  include <p18lf2410.inc>
endif
ifdef __18LF2420
  include <p18lf2420.inc>
endif
ifdef __18LF2423
  include <p18lf2423.inc>
endif
ifdef __18LF2431
  include <p18lf2431.inc>
endif
ifdef __18LF2439
  include <p18lf2439.inc>
endif
ifdef __18LF2450
  include <p18lf2450.inc>
endif
ifdef __18LF2455
  include <p18lf2455.inc>
endif
ifdef __18LF2458
  include <p18lf2458.inc>
endif
ifdef __18LF2480
  include <p18lf2480.inc>
endif
ifdef __18LF2510
  include <p18lf2510.inc>
endif
ifdef __18LF2515
  include <p18lf2515.inc>
endif
ifdef __18LF2520
  include <p18lf2520.inc>
endif
ifdef __18LF2523
  include <p18lf2523.inc>
endif
ifdef __18LF2525
  include <p18lf2525.inc>
endif
ifdef __18LF2539
  include <p18lf2539.inc>
endif
ifdef __18LF2550
  include <p18lf2550.inc>
endif
ifdef __18LF2553
  include <p18lf2553.inc>
endif
ifdef __18LF2580
  include <p18lf2580.inc>
endif
ifdef __18LF2585
  include <p18lf2585.inc>
endif
ifdef __18LF2610
  include <p18lf2610.inc>
endif
ifdef __18LF2620
  include <p18lf2620.inc>
endif
ifdef __18LF2680
  include <p18lf2680.inc>
endif
ifdef __18LF2682
  include <p18lf2682.inc>
endif
ifdef __18LF2685
  include <p18lf2685.inc>
endif
ifdef __18LF4220
  include <p18lf4220.inc>
endif
ifdef __18LF4221
  include <p18lf4221.inc>
endif
ifdef __18LF4320
  include <p18lf4320.inc>
endif
ifdef __18LF4321
  include <p18lf4321.inc>
endif
ifdef __18LF4331
  include <p18lf4331.inc>
endif
ifdef __18LF4410
  include <p18lf4410.inc>
endif
ifdef __18LF4420
  include <p18lf4420.inc>
endif
ifdef __18LF4423
  include <p18lf4423.inc>
endif
ifdef __18LF4431
  include <p18lf4431.inc>
endif
ifdef __18LF4439
  include <p18lf4439.inc>
endif
ifdef __18LF4450
  include <p18lf4450.inc>
endif
ifdef __18LF4455
  include <p18lf4455.inc>
endif
ifdef __18LF4458
  include <p18lf4458.inc>
endif
ifdef __18LF4480
  include <p18lf4480.inc>
endif
ifdef __18LF4510
  include <p18lf4510.inc>
endif
ifdef __18LF4515
  include <p18lf4515.inc>
endif
ifdef __18LF4520
  include <p18lf4520.inc>
endif
ifdef __18LF4523
  include <p18lf4523.inc>
endif
ifdef __18LF4525
  include <p18lf4525.inc>
endif
ifdef __18LF4539
  include <p18lf4539.inc>
endif
ifdef __18LF4550
  include <p18lf4550.inc>
endif
ifdef __18LF4553
  include <p18lf4553.inc>
endif
ifdef __18LF4580
  include <p18lf4580.inc>
endif
ifdef __18LF4585
  include <p18lf4585.inc>
endif
ifdef __18LF4610
  include <p18lf4610.inc>
endif
ifdef __18LF4620
  include <p18lf4620.inc>
endif
ifdef __18LF4680
  include <p18lf4680.inc>
endif
ifdef __18LF4682
  include <p18lf4682.inc>
endif
ifdef __18LF4685
  include <p18lf4685.inc>
endif
ifdef __18LF6310
  include <p18lf6310.inc>
endif
ifdef __18LF6390
  include <p18lf6390.inc>
endif
ifdef __18LF6393
  include <p18lf6393.inc>
endif
ifdef __18LF6410
  include <p18lf6410.inc>
endif
ifdef __18LF6490
  include <p18lf6490.inc>
endif
ifdef __18LF6493
  include <p18lf6493.inc>
endif
ifdef __18LF6520
  include <p18lf6520.inc>
endif
ifdef __18LF6525
  include <p18lf6525.inc>
endif
ifdef __18LF6527
  include <p18lf6527.inc>
endif
ifdef __18LF6585
  include <p18lf6585.inc>
endif
ifdef __18LF6620
  include <p18lf6620.inc>
endif
ifdef __18LF6621
  include <p18lf6621.inc>
endif
ifdef __18LF6622
  include <p18lf6622.inc>
endif
ifdef __18LF6627
  include <p18lf6627.inc>
endif
ifdef __18LF6628
  include <p18lf6628.inc>
endif
ifdef __18LF6680
  include <p18lf6680.inc>
endif
ifdef __18LF6720
  include <p18lf6720.inc>
endif
ifdef __18LF6722
  include <p18lf6722.inc>
endif
ifdef __18LF6723
  include <p18lf6723.inc>
endif
ifdef __18LF8310
  include <p18lf8310.inc>
endif
ifdef __18LF8390
  include <p18lf8390.inc>
endif
ifdef __18LF8393
  include <p18lf8393.inc>
endif
ifdef __18LF8410
  include <p18lf8410.inc>
endif
ifdef __18LF8490
  include <p18lf8490.inc>
endif
ifdef __18LF8493
  include <p18lf8493.inc>
endif
ifdef __18LF8520
  include <p18lf8520.inc>
endif
ifdef __18LF8525
  include <p18lf8525.inc>
endif
ifdef __18LF8527
  include <p18lf8527.inc>
endif
ifdef __18LF8585
  include <p18lf8585.inc>
endif
ifdef __18LF8620
  include <p18lf8620.inc>
endif
ifdef __18LF8621
  include <p18lf8621.inc>
endif
ifdef __18LF8622
  include <p18lf8622.inc>
endif
ifdef __18LF8627
  include <p18lf8627.inc>
endif
ifdef __18LF8628
  include <p18lf8628.inc>
endif
ifdef __18LF8680
  include <p18lf8680.inc>
endif
ifdef __18LF8720
  include <p18lf8720.inc>
endif
ifdef __18LF8722
  include <p18lf8722.inc>
endif
ifdef __18LF8723
  include <p18lf8723.inc>
endif
