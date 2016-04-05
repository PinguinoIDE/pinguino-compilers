;----------------------------------------------------------------------
;
; p16f1xxx.inc - Common include file to PIC16XXXX enhanced families.
;
; This file is has been generated using device-manager.pl.
;
;    To the usage of the PIC16F1503 MCU an example:
;
;	1. Command line switch:
;	    gpasm -p pic16f1503 source.asm
;
;	2. The LIST directive in the source file:
;	    list p=16f1503
;		(It does not matter that lowercase or uppercase.)
;
;	3. The PROCESSOR directive in the source file:
;	    processor 16f1503
;		(It does not matter that lowercase or uppercase.)
;
;----------------------------------------------------------------------

ifdef __16F1xxx
  include <p16f1937.inc>
endif
ifdef __12F1501
  include <p12f1501.inc>
endif
ifdef __12F1571
  include <p12f1571.inc>
endif
ifdef __12F1572
  include <p12f1572.inc>
endif
ifdef __12F1612
  include <p12f1612.inc>
endif
ifdef __12F1822
  include <p12f1822.inc>
endif
ifdef __12F1840
  include <p12f1840.inc>
endif
ifdef __12LF1501
  include <p12lf1501.inc>
endif
ifdef __12LF1552
  include <p12lf1552.inc>
endif
ifdef __12LF1571
  include <p12lf1571.inc>
endif
ifdef __12LF1572
  include <p12lf1572.inc>
endif
ifdef __12LF1612
  include <p12lf1612.inc>
endif
ifdef __12LF1822
  include <p12lf1822.inc>
endif
ifdef __12LF1840
  include <p12lf1840.inc>
endif
ifdef __12LF1840T39A
  include <p12lf1840t39a.inc>
endif
ifdef __12LF1840T48A
  include <p12lf1840t48a.inc>
endif
ifdef __16F1454
  include <p16f1454.inc>
endif
ifdef __16F1455
  include <p16f1455.inc>
endif
ifdef __16F1458
  include <p16f1458.inc>
endif
ifdef __16F1459
  include <p16f1459.inc>
endif
ifdef __16F1503
  include <p16f1503.inc>
endif
ifdef __16F1507
  include <p16f1507.inc>
endif
ifdef __16F1508
  include <p16f1508.inc>
endif
ifdef __16F1509
  include <p16f1509.inc>
endif
ifdef __16F1512
  include <p16f1512.inc>
endif
ifdef __16F1513
  include <p16f1513.inc>
endif
ifdef __16F1516
  include <p16f1516.inc>
endif
ifdef __16F1517
  include <p16f1517.inc>
endif
ifdef __16F1518
  include <p16f1518.inc>
endif
ifdef __16F1519
  include <p16f1519.inc>
endif
ifdef __16F1526
  include <p16f1526.inc>
endif
ifdef __16F1527
  include <p16f1527.inc>
endif
ifdef __16F1574
  include <p16f1574.inc>
endif
ifdef __16F1575
  include <p16f1575.inc>
endif
ifdef __16F1578
  include <p16f1578.inc>
endif
ifdef __16F1579
  include <p16f1579.inc>
endif
ifdef __16F1613
  include <p16f1613.inc>
endif
ifdef __16F1614
  include <p16f1614.inc>
endif
ifdef __16F1615
  include <p16f1615.inc>
endif
ifdef __16F1618
  include <p16f1618.inc>
endif
ifdef __16F1619
  include <p16f1619.inc>
endif
ifdef __16F1703
  include <p16f1703.inc>
endif
ifdef __16F1704
  include <p16f1704.inc>
endif
ifdef __16F1705
  include <p16f1705.inc>
endif
ifdef __16F1707
  include <p16f1707.inc>
endif
ifdef __16F1708
  include <p16f1708.inc>
endif
ifdef __16F1709
  include <p16f1709.inc>
endif
ifdef __16F1713
  include <p16f1713.inc>
endif
ifdef __16F1716
  include <p16f1716.inc>
endif
ifdef __16F1717
  include <p16f1717.inc>
endif
ifdef __16F1718
  include <p16f1718.inc>
endif
ifdef __16F1719
  include <p16f1719.inc>
endif
ifdef __16F1764
  include <p16f1764.inc>
endif
ifdef __16F1765
  include <p16f1765.inc>
endif
ifdef __16F1768
  include <p16f1768.inc>
endif
ifdef __16F1769
  include <p16f1769.inc>
endif
ifdef __16F1773
  include <p16f1773.inc>
endif
ifdef __16F1776
  include <p16f1776.inc>
endif
ifdef __16F1777
  include <p16f1777.inc>
endif
ifdef __16F1778
  include <p16f1778.inc>
endif
ifdef __16F1779
  include <p16f1779.inc>
endif
ifdef __16F1782
  include <p16f1782.inc>
endif
ifdef __16F1783
  include <p16f1783.inc>
endif
ifdef __16F1784
  include <p16f1784.inc>
endif
ifdef __16F1786
  include <p16f1786.inc>
endif
ifdef __16F1787
  include <p16f1787.inc>
endif
ifdef __16F1788
  include <p16f1788.inc>
endif
ifdef __16F1789
  include <p16f1789.inc>
endif
ifdef __16F1823
  include <p16f1823.inc>
endif
ifdef __16F1824
  include <p16f1824.inc>
endif
ifdef __16F1825
  include <p16f1825.inc>
endif
ifdef __16F1826
  include <p16f1826.inc>
endif
ifdef __16F1827
  include <p16f1827.inc>
endif
ifdef __16F1828
  include <p16f1828.inc>
endif
ifdef __16F1829
  include <p16f1829.inc>
endif
ifdef __16F1829LIN
  include <p16f1829lin.inc>
endif
ifdef __16F1847
  include <p16f1847.inc>
endif
ifdef __16F1933
  include <p16f1933.inc>
endif
ifdef __16F1934
  include <p16f1934.inc>
endif
ifdef __16F1936
  include <p16f1936.inc>
endif
ifdef __16F1937
  include <p16f1937.inc>
endif
ifdef __16F1938
  include <p16f1938.inc>
endif
ifdef __16F1939
  include <p16f1939.inc>
endif
ifdef __16F1946
  include <p16f1946.inc>
endif
ifdef __16F1947
  include <p16f1947.inc>
endif
ifdef __16F18313
  include <p16f18313.inc>
endif
ifdef __16F18323
  include <p16f18323.inc>
endif
ifdef __16F18324
  include <p16f18324.inc>
endif
ifdef __16F18325
  include <p16f18325.inc>
endif
ifdef __16F18326
  include <p16f18326.inc>
endif
ifdef __16F18344
  include <p16f18344.inc>
endif
ifdef __16F18345
  include <p16f18345.inc>
endif
ifdef __16F18346
  include <p16f18346.inc>
endif
ifdef __16F18854
  include <p16f18854.inc>
endif
ifdef __16F18855
  include <p16f18855.inc>
endif
ifdef __16F18856
  include <p16f18856.inc>
endif
ifdef __16F18857
  include <p16f18857.inc>
endif
ifdef __16F18875
  include <p16f18875.inc>
endif
ifdef __16F18876
  include <p16f18876.inc>
endif
ifdef __16F18877
  include <p16f18877.inc>
endif
ifdef __16F19197
  include <p16f19197.inc>
endif
ifdef __16LF1454
  include <p16lf1454.inc>
endif
ifdef __16LF1455
  include <p16lf1455.inc>
endif
ifdef __16LF1458
  include <p16lf1458.inc>
endif
ifdef __16LF1459
  include <p16lf1459.inc>
endif
ifdef __16LF1503
  include <p16lf1503.inc>
endif
ifdef __16LF1507
  include <p16lf1507.inc>
endif
ifdef __16LF1508
  include <p16lf1508.inc>
endif
ifdef __16LF1509
  include <p16lf1509.inc>
endif
ifdef __16LF1512
  include <p16lf1512.inc>
endif
ifdef __16LF1513
  include <p16lf1513.inc>
endif
ifdef __16LF1516
  include <p16lf1516.inc>
endif
ifdef __16LF1517
  include <p16lf1517.inc>
endif
ifdef __16LF1518
  include <p16lf1518.inc>
endif
ifdef __16LF1519
  include <p16lf1519.inc>
endif
ifdef __16LF1526
  include <p16lf1526.inc>
endif
ifdef __16LF1527
  include <p16lf1527.inc>
endif
ifdef __16LF1554
  include <p16lf1554.inc>
endif
ifdef __16LF1559
  include <p16lf1559.inc>
endif
ifdef __16LF1566
  include <p16lf1566.inc>
endif
ifdef __16LF1567
  include <p16lf1567.inc>
endif
ifdef __16LF1574
  include <p16lf1574.inc>
endif
ifdef __16LF1575
  include <p16lf1575.inc>
endif
ifdef __16LF1578
  include <p16lf1578.inc>
endif
ifdef __16LF1579
  include <p16lf1579.inc>
endif
ifdef __16LF1613
  include <p16lf1613.inc>
endif
ifdef __16LF1614
  include <p16lf1614.inc>
endif
ifdef __16LF1615
  include <p16lf1615.inc>
endif
ifdef __16LF1618
  include <p16lf1618.inc>
endif
ifdef __16LF1619
  include <p16lf1619.inc>
endif
ifdef __16LF1703
  include <p16lf1703.inc>
endif
ifdef __16LF1704
  include <p16lf1704.inc>
endif
ifdef __16LF1705
  include <p16lf1705.inc>
endif
ifdef __16LF1707
  include <p16lf1707.inc>
endif
ifdef __16LF1708
  include <p16lf1708.inc>
endif
ifdef __16LF1709
  include <p16lf1709.inc>
endif
ifdef __16LF1713
  include <p16lf1713.inc>
endif
ifdef __16LF1716
  include <p16lf1716.inc>
endif
ifdef __16LF1717
  include <p16lf1717.inc>
endif
ifdef __16LF1718
  include <p16lf1718.inc>
endif
ifdef __16LF1719
  include <p16lf1719.inc>
endif
ifdef __16LF1764
  include <p16lf1764.inc>
endif
ifdef __16LF1765
  include <p16lf1765.inc>
endif
ifdef __16LF1768
  include <p16lf1768.inc>
endif
ifdef __16LF1769
  include <p16lf1769.inc>
endif
ifdef __16LF1773
  include <p16lf1773.inc>
endif
ifdef __16LF1776
  include <p16lf1776.inc>
endif
ifdef __16LF1777
  include <p16lf1777.inc>
endif
ifdef __16LF1778
  include <p16lf1778.inc>
endif
ifdef __16LF1779
  include <p16lf1779.inc>
endif
ifdef __16LF1782
  include <p16lf1782.inc>
endif
ifdef __16LF1783
  include <p16lf1783.inc>
endif
ifdef __16LF1784
  include <p16lf1784.inc>
endif
ifdef __16LF1786
  include <p16lf1786.inc>
endif
ifdef __16LF1787
  include <p16lf1787.inc>
endif
ifdef __16LF1788
  include <p16lf1788.inc>
endif
ifdef __16LF1789
  include <p16lf1789.inc>
endif
ifdef __16LF1823
  include <p16lf1823.inc>
endif
ifdef __16LF1824
  include <p16lf1824.inc>
endif
ifdef __16LF1824T39A
  include <p16lf1824t39a.inc>
endif
ifdef __16LF1825
  include <p16lf1825.inc>
endif
ifdef __16LF1826
  include <p16lf1826.inc>
endif
ifdef __16LF1827
  include <p16lf1827.inc>
endif
ifdef __16LF1828
  include <p16lf1828.inc>
endif
ifdef __16LF1829
  include <p16lf1829.inc>
endif
ifdef __16LF1847
  include <p16lf1847.inc>
endif
ifdef __16LF1902
  include <p16lf1902.inc>
endif
ifdef __16LF1903
  include <p16lf1903.inc>
endif
ifdef __16LF1904
  include <p16lf1904.inc>
endif
ifdef __16LF1906
  include <p16lf1906.inc>
endif
ifdef __16LF1907
  include <p16lf1907.inc>
endif
ifdef __16LF1933
  include <p16lf1933.inc>
endif
ifdef __16LF1934
  include <p16lf1934.inc>
endif
ifdef __16LF1936
  include <p16lf1936.inc>
endif
ifdef __16LF1937
  include <p16lf1937.inc>
endif
ifdef __16LF1938
  include <p16lf1938.inc>
endif
ifdef __16LF1939
  include <p16lf1939.inc>
endif
ifdef __16LF1946
  include <p16lf1946.inc>
endif
ifdef __16LF1947
  include <p16lf1947.inc>
endif
ifdef __16LF18313
  include <p16lf18313.inc>
endif
ifdef __16LF18323
  include <p16lf18323.inc>
endif
ifdef __16LF18324
  include <p16lf18324.inc>
endif
ifdef __16LF18325
  include <p16lf18325.inc>
endif
ifdef __16LF18326
  include <p16lf18326.inc>
endif
ifdef __16LF18344
  include <p16lf18344.inc>
endif
ifdef __16LF18345
  include <p16lf18345.inc>
endif
ifdef __16LF18346
  include <p16lf18346.inc>
endif
ifdef __16LF18854
  include <p16lf18854.inc>
endif
ifdef __16LF18855
  include <p16lf18855.inc>
endif
ifdef __16LF18856
  include <p16lf18856.inc>
endif
ifdef __16LF18857
  include <p16lf18857.inc>
endif
ifdef __16LF18875
  include <p16lf18875.inc>
endif
ifdef __16LF18876
  include <p16lf18876.inc>
endif
ifdef __16LF18877
  include <p16lf18877.inc>
endif
