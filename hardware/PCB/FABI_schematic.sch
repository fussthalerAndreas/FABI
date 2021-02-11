EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "FABI PCB for 8 jack plugs (ESP32 addon board conn)"
Date "2021-02-11"
Rev ""
Comp "AsTeRICS Foundation"
Comment1 "www.asterics-foundation.org"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
NoConn ~ 3600 3150
NoConn ~ 3600 3050
Wire Wire Line
	1700 3150 1850 3150
$Comp
L power:GND #PWR0102
U 1 1 5D913F91
P 1700 3150
F 0 "#PWR0102" H 1700 2900 50  0001 C CNN
F 1 "GND" V 1705 3022 50  0000 R CNN
F 2 "" H 1700 3150 50  0001 C CNN
F 3 "" H 1700 3150 50  0001 C CNN
	1    1700 3150
	0    1    -1   0   
$EndComp
NoConn ~ 1100 7150
NoConn ~ 1100 7250
NoConn ~ 2350 4750
NoConn ~ 2350 4850
NoConn ~ 2350 5550
NoConn ~ 2350 5650
NoConn ~ 2350 6450
NoConn ~ 2350 6350
NoConn ~ 2350 7150
NoConn ~ 2350 7250
Text GLabel 3600 3950 2    39   Input ~ 0
7
Wire Wire Line
	1850 3250 1850 3150
Text Label 1850 3050 2    39   ~ 0
A_RX
Text Label 1850 2950 2    39   ~ 0
A_TX
$Comp
L Device:R R2
U 1 1 5F3C349E
P 4500 6700
F 0 "R2" H 4570 6746 50  0000 L CNN
F 1 "18k" H 4570 6655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 4430 6700 50  0001 C CNN
F 3 "~" H 4500 6700 50  0001 C CNN
	1    4500 6700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5F3C36EA
P 4500 6300
F 0 "R1" H 4570 6346 50  0000 L CNN
F 1 "10k" H 4570 6255 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 4430 6300 50  0001 C CNN
F 3 "~" H 4500 6300 50  0001 C CNN
	1    4500 6300
	1    0    0    -1  
$EndComp
Text Label 4500 6150 1    39   ~ 0
A_TX
Text Label 4500 6500 0    39   ~ 0
ESP_RX
Wire Wire Line
	4500 6450 4500 6550
$Comp
L power:GND #PWR011
U 1 1 5F3C51FE
P 4500 6850
F 0 "#PWR011" H 4500 6600 50  0001 C CNN
F 1 "GND" V 4505 6722 50  0000 R CNN
F 2 "" H 4500 6850 50  0001 C CNN
F 3 "" H 4500 6850 50  0001 C CNN
	1    4500 6850
	-1   0    0    -1  
$EndComp
$Comp
L power:VCC #PWR013
U 1 1 5F3C6FB2
P 3830 3110
F 0 "#PWR013" H 3830 2960 50  0001 C CNN
F 1 "VCC" H 3845 3283 50  0000 C CNN
F 2 "" H 3830 3110 50  0001 C CNN
F 3 "" H 3830 3110 50  0001 C CNN
	1    3830 3110
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 2850 3600 2950
$Comp
L Device:R R4
U 1 1 5F39FBC8
P 3550 6700
F 0 "R4" H 3620 6746 50  0000 L CNN
F 1 "18k" H 3620 6655 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 3480 6700 50  0001 C CNN
F 3 "~" H 3550 6700 50  0001 C CNN
	1    3550 6700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5F39FBCE
P 3550 6300
F 0 "R3" H 3620 6346 50  0000 L CNN
F 1 "10k" H 3620 6255 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 3480 6300 50  0001 C CNN
F 3 "~" H 3550 6300 50  0001 C CNN
	1    3550 6300
	1    0    0    -1  
$EndComp
Text Label 3550 6150 1    39   ~ 0
A_TX
Text Label 3550 6500 0    39   ~ 0
ESP_RX
Wire Wire Line
	3550 6450 3550 6550
$Comp
L power:GND #PWR014
U 1 1 5F39FBD7
P 3550 6850
F 0 "#PWR014" H 3550 6600 50  0001 C CNN
F 1 "GND" V 3555 6722 50  0000 R CNN
F 2 "" H 3550 6850 50  0001 C CNN
F 3 "" H 3550 6850 50  0001 C CNN
	1    3550 6850
	-1   0    0    -1  
$EndComp
Text Notes 4450 5950 0    39   ~ 0
THT
Text Notes 3500 5950 0    39   ~ 0
SMD
$Comp
L Power_Protection:SP0504BAHT D12
U 1 1 5F3C5FAA
P 4250 4900
F 0 "D12" H 4555 4946 50  0000 L CNN
F 1 "SP0504BAHT" H 4300 4700 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5" H 4550 4850 50  0001 L CNN
F 3 "http://www.littelfuse.com/~/media/files/littelfuse/technical%20resources/documents/data%20sheets/sp05xxba.pdf" H 4375 5025 50  0001 C CNN
	1    4250 4900
	1    0    0    -1  
$EndComp
$Comp
L Power_Protection:SP0504BAHT D11
U 1 1 5F3C6CE7
P 3600 4900
F 0 "D11" H 3905 4946 50  0000 L CNN
F 1 "SP0504BAHT" H 3650 4700 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5" H 3900 4850 50  0001 L CNN
F 3 "http://www.littelfuse.com/~/media/files/littelfuse/technical%20resources/documents/data%20sheets/sp05xxba.pdf" H 3725 5025 50  0001 C CNN
	1    3600 4900
	1    0    0    -1  
$EndComp
Text GLabel 3800 4700 1    39   Input ~ 0
1
Text GLabel 3500 4700 1    39   Input ~ 0
2
Text GLabel 3600 4700 1    39   Input ~ 0
3
Text GLabel 3700 4700 1    39   Input ~ 0
4
Text GLabel 4250 4700 1    39   Input ~ 0
5
Text GLabel 4150 4700 1    39   Input ~ 0
6
Text GLabel 4450 4700 1    39   Input ~ 0
7
Text GLabel 4350 4700 1    39   Input ~ 0
8
$Comp
L power:GND #PWR026
U 1 1 5F3C927A
P 3600 5100
F 0 "#PWR026" H 3600 4850 50  0001 C CNN
F 1 "GND" V 3605 4972 50  0000 R CNN
F 2 "" H 3600 5100 50  0001 C CNN
F 3 "" H 3600 5100 50  0001 C CNN
	1    3600 5100
	-1   0    0    -1  
$EndComp
$Comp
L power:GND #PWR027
U 1 1 5F3C9749
P 4250 5100
F 0 "#PWR027" H 4250 4850 50  0001 C CNN
F 1 "GND" V 4255 4972 50  0000 R CNN
F 2 "" H 4250 5100 50  0001 C CNN
F 3 "" H 4250 5100 50  0001 C CNN
	1    4250 5100
	-1   0    0    -1  
$EndComp
Text Notes 3550 4350 0    39   ~ 0
ESD protection (SMD variant)
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J9
U 1 1 5F49020A
P 7200 5050
F 0 "J9" H 7250 5467 50  0000 C CNN
F 1 "Conn_02x05_Odd_Even" H 7250 5376 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x05_P2.54mm_Vertical" H 7200 5050 50  0001 C CNN
F 3 "~" H 7200 5050 50  0001 C CNN
	1    7200 5050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR010
U 1 1 5F4935A1
P 7500 5050
F 0 "#PWR010" H 7500 4800 50  0001 C CNN
F 1 "GND" V 7505 4922 50  0000 R CNN
F 2 "" H 7500 5050 50  0001 C CNN
F 3 "" H 7500 5050 50  0001 C CNN
	1    7500 5050
	0    -1   1    0   
$EndComp
Text Label 7000 5150 2    39   ~ 0
A_RX
Text Label 7500 5150 0    39   ~ 0
ESP_RX
$Comp
L power:GND #PWR012
U 1 1 5F493918
P 7500 5250
F 0 "#PWR012" H 7500 5000 50  0001 C CNN
F 1 "GND" V 7505 5122 50  0000 R CNN
F 2 "" H 7500 5250 50  0001 C CNN
F 3 "" H 7500 5250 50  0001 C CNN
	1    7500 5250
	0    -1   1    0   
$EndComp
$Comp
L power:VCC #PWR017
U 1 1 5F4DB56F
P 6350 6200
F 0 "#PWR017" H 6350 6050 50  0001 C CNN
F 1 "VCC" H 6365 6373 50  0000 C CNN
F 2 "" H 6350 6200 50  0001 C CNN
F 3 "" H 6350 6200 50  0001 C CNN
	1    6350 6200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR018
U 1 1 5F4DBD2F
P 6350 6800
F 0 "#PWR018" H 6350 6550 50  0001 C CNN
F 1 "GND" V 6355 6672 50  0000 R CNN
F 2 "" H 6350 6800 50  0001 C CNN
F 3 "" H 6350 6800 50  0001 C CNN
	1    6350 6800
	-1   0    0    -1  
$EndComp
Text Label 6750 6500 0    39   ~ 0
MPX
$Comp
L Connector:Conn_01x03_Male J10
U 1 1 5F4DCE7D
P 5450 4950
F 0 "J10" H 5558 5231 50  0000 C CNN
F 1 "Conn_01x03_Male" H 5558 5140 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 5450 4950 50  0001 C CNN
F 3 "~" H 5450 4950 50  0001 C CNN
	1    5450 4950
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR015
U 1 1 5F4DD0FF
P 5650 4850
F 0 "#PWR015" H 5650 4700 50  0001 C CNN
F 1 "VCC" V 5665 4978 50  0000 L CNN
F 2 "" H 5650 4850 50  0001 C CNN
F 3 "" H 5650 4850 50  0001 C CNN
	1    5650 4850
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR016
U 1 1 5F4DD6BE
P 5650 5050
F 0 "#PWR016" H 5650 4800 50  0001 C CNN
F 1 "GND" V 5655 4922 50  0000 R CNN
F 2 "" H 5650 5050 50  0001 C CNN
F 3 "" H 5650 5050 50  0001 C CNN
	1    5650 5050
	-1   0    0    -1  
$EndComp
Text Label 3600 3650 0    39   ~ 0
MPX
Text Notes 1050 4350 0    39   ~ 0
Jack plugs with ESD protection (THT variant)
Wire Notes Line
	600  4400 3100 4400
Wire Notes Line
	3100 4400 3100 7700
Wire Notes Line
	3100 7700 600  7700
Wire Notes Line
	4850 5550 3300 5550
Wire Notes Line
	3300 5550 3300 4400
Wire Notes Line
	3300 5750 4850 5750
Text Notes 3450 5700 0    39   ~ 0
Arduino->ESP voltage divider (SMD & THT)
Wire Notes Line
	3300 5750 3300 7300
Wire Notes Line
	3300 7300 4850 7300
Wire Notes Line
	4850 5750 4850 7300
Text Notes 5450 4350 0    39   ~ 0
Neopixel
Text Notes 5300 5700 0    39   ~ 0
MPX pressure sensor
Wire Notes Line
	5050 4400 5050 5550
Wire Notes Line
	5050 5550 6200 5550
Wire Notes Line
	6200 5550 6200 4400
Wire Notes Line
	6200 4400 5050 4400
Wire Notes Line
	4975 7300 4975 5750
Text Notes 6900 4350 0    39   ~ 0
ESP32 miniBT addon board
Wire Notes Line
	6400 4400 8200 4400
Wire Notes Line
	8200 4400 8200 5550
Wire Notes Line
	8200 5550 6400 5550
Wire Notes Line
	6400 5550 6400 4400
Wire Notes Line
	600  4200 600  2250
Wire Notes Line
	600  2250 4850 2250
Wire Notes Line
	4850 2250 4850 4200
Wire Notes Line
	600  4200 4850 4200
Text Notes 2300 2200 0    39   ~ 0
Arduino Pro Micro
Text Label 3600 3750 0    39   ~ 0
NEOPIXEL
Wire Notes Line
	4850 4400 4850 5550
Wire Notes Line
	3300 4400 4850 4400
Text GLabel 9325 4625 0    39   Input ~ 0
Buzzer_Pin
$Comp
L power:GND #PWR0101
U 1 1 602224F3
P 9000 5250
F 0 "#PWR0101" H 9000 5000 50  0001 C CNN
F 1 "GND" H 9005 5077 50  0000 C CNN
F 2 "" H 9000 5250 50  0001 C CNN
F 3 "" H 9000 5250 50  0001 C CNN
	1    9000 5250
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9325 4625 9425 4625
Wire Notes Line
	10100 4400 10100 5550
Wire Notes Line
	8400 5550 8400 4400
Wire Notes Line
	8400 4400 10100 4400
Wire Notes Line
	8400 5550 10100 5550
$Comp
L CMI-9605IC-0380T:CMI-9605IC-0380T bzr1
U 1 1 60230DDB
P 9525 4825
F 0 "bzr1" H 9654 4825 50  0000 L CNN
F 1 "CMI-9605IC-0380T" H 9654 4780 50  0001 L CNN
F 2 "CMI-9605IC-0380T:CUI_CMI-9605IC-0380T" H 9525 4825 50  0001 L BNN
F 3 "" H 9525 4825 50  0001 L BNN
F 4 "1.0" H 9525 4825 50  0001 L BNN "PARTREV"
F 5 "5.00mm" H 9525 4825 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 6 "Manufacturer Recommendations" H 9525 4825 50  0001 L BNN "STANDARD"
F 7 "CUI Inc." H 9525 4825 50  0001 L BNN "MANUFACTURER"
	1    9525 4825
	1    0    0    -1  
$EndComp
$Comp
L Connector:Cliff_68125 J3
U 1 1 601FBFE8
P 900 6450
F 0 "J3" H 882 6775 50  0000 C CNN
F 1 "Cliff_68125" H 882 6684 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 900 6450 50  0001 C CNN
F 3 "~" H 900 6450 50  0001 C CNN
	1    900  6450
	1    0    0    -1  
$EndComp
$Comp
L Connector:Cliff_68125 J4
U 1 1 601FCE09
P 900 7250
F 0 "J4" H 882 7575 50  0000 C CNN
F 1 "Cliff_68125" H 882 7484 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 900 7250 50  0001 C CNN
F 3 "~" H 900 7250 50  0001 C CNN
	1    900  7250
	1    0    0    -1  
$EndComp
$Comp
L Connector:Cliff_68125 J5
U 1 1 60206E96
P 2150 4850
F 0 "J5" H 2132 5175 50  0000 C CNN
F 1 "Cliff_68125" H 2132 5084 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 2150 4850 50  0001 C CNN
F 3 "~" H 2150 4850 50  0001 C CNN
	1    2150 4850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Cliff_68125 J6
U 1 1 60207C3C
P 2150 5650
F 0 "J6" H 2132 5975 50  0000 C CNN
F 1 "Cliff_68125" H 2132 5884 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 2150 5650 50  0001 C CNN
F 3 "~" H 2150 5650 50  0001 C CNN
	1    2150 5650
	1    0    0    -1  
$EndComp
$Comp
L Connector:Cliff_68125 J8
U 1 1 6020964B
P 2150 7250
F 0 "J8" H 2132 7575 50  0000 C CNN
F 1 "Cliff_68125" H 2132 7484 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 2150 7250 50  0001 C CNN
F 3 "~" H 2150 7250 50  0001 C CNN
	1    2150 7250
	1    0    0    -1  
$EndComp
NoConn ~ 1100 4750
Text GLabel 1475 4850 2    39   Input ~ 0
1
$Comp
L power:GND #PWR01
U 1 1 5F391609
P 1450 5150
F 0 "#PWR01" H 1450 4900 50  0001 C CNN
F 1 "GND" V 1455 5022 50  0000 R CNN
F 2 "" H 1450 5150 50  0001 C CNN
F 3 "" H 1450 5150 50  0001 C CNN
	1    1450 5150
	0    -1   1    0   
$EndComp
NoConn ~ 1100 4850
Wire Wire Line
	1200 4850 1200 5050
Wire Wire Line
	1100 5050 1200 5050
$Comp
L Connector:Cliff_68125 J1
U 1 1 601CBF3E
P 900 4850
F 0 "J1" H 882 5175 50  0000 C CNN
F 1 "Cliff_68125" H 882 5084 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 900 4850 50  0001 C CNN
F 3 "~" H 900 4850 50  0001 C CNN
	1    900  4850
	1    0    0    -1  
$EndComp
Wire Notes Line
	600  7700 600  4400
NoConn ~ 1100 5550
Text GLabel 1475 5650 2    39   Input ~ 0
2
$Comp
L power:GND #PWR02
U 1 1 601F0D16
P 1450 5950
F 0 "#PWR02" H 1450 5700 50  0001 C CNN
F 1 "GND" V 1455 5822 50  0000 R CNN
F 2 "" H 1450 5950 50  0001 C CNN
F 3 "" H 1450 5950 50  0001 C CNN
	1    1450 5950
	0    -1   1    0   
$EndComp
NoConn ~ 1100 5650
Wire Wire Line
	1200 5650 1200 5850
Wire Wire Line
	1100 5850 1200 5850
$Comp
L Connector:Cliff_68125 J2
U 1 1 601F0D2D
P 900 5650
F 0 "J2" H 882 5975 50  0000 C CNN
F 1 "Cliff_68125" H 882 5884 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 900 5650 50  0001 C CNN
F 3 "~" H 900 5650 50  0001 C CNN
	1    900  5650
	1    0    0    -1  
$EndComp
Text GLabel 1475 6450 2    39   Input ~ 0
3
$Comp
L power:GND #PWR03
U 1 1 6019D28D
P 1450 6750
F 0 "#PWR03" H 1450 6500 50  0001 C CNN
F 1 "GND" V 1455 6622 50  0000 R CNN
F 2 "" H 1450 6750 50  0001 C CNN
F 3 "" H 1450 6750 50  0001 C CNN
	1    1450 6750
	0    -1   1    0   
$EndComp
Wire Wire Line
	1200 6450 1300 6450
Connection ~ 1300 6450
Wire Wire Line
	1300 6450 1475 6450
$Comp
L Diode:1.5KExxA D3
U 1 1 6019D298
P 1300 6600
F 0 "D3" V 1254 6680 50  0000 L CNN
F 1 "P6KE6.8A" V 1345 6680 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 1300 6400 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 1250 6600 50  0001 C CNN
F 4 "1703028" V 1300 6600 50  0001 C CNN "Farnell"
F 5 "171-9669" V 1300 6600 50  0001 C CNN "RS-components"
	1    1300 6600
	0    1    1    0   
$EndComp
Wire Wire Line
	1200 6450 1200 6650
Wire Wire Line
	1300 6750 1450 6750
Connection ~ 1300 6750
Wire Wire Line
	1100 6650 1200 6650
Wire Wire Line
	1100 6750 1300 6750
NoConn ~ 1100 6450
NoConn ~ 1100 6350
Text GLabel 1475 7250 2    39   Input ~ 0
4
$Comp
L power:GND #PWR04
U 1 1 601A1BCE
P 1450 7550
F 0 "#PWR04" H 1450 7300 50  0001 C CNN
F 1 "GND" V 1455 7422 50  0000 R CNN
F 2 "" H 1450 7550 50  0001 C CNN
F 3 "" H 1450 7550 50  0001 C CNN
	1    1450 7550
	0    -1   1    0   
$EndComp
Wire Wire Line
	1200 7250 1300 7250
Connection ~ 1300 7250
Wire Wire Line
	1300 7250 1475 7250
$Comp
L Diode:1.5KExxA D4
U 1 1 601A1BD9
P 1300 7400
F 0 "D4" V 1254 7480 50  0000 L CNN
F 1 "P6KE6.8A" V 1345 7480 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 1300 7200 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 1250 7400 50  0001 C CNN
F 4 "1703028" V 1300 7400 50  0001 C CNN "Farnell"
F 5 "171-9669" V 1300 7400 50  0001 C CNN "RS-components"
	1    1300 7400
	0    1    1    0   
$EndComp
Wire Wire Line
	1200 7250 1200 7450
Wire Wire Line
	1300 7550 1450 7550
Wire Wire Line
	1100 7450 1200 7450
Wire Wire Line
	1100 7550 1300 7550
Text GLabel 2725 4850 2    39   Input ~ 0
5
$Comp
L power:GND #PWR05
U 1 1 601A4B3D
P 2700 5150
F 0 "#PWR05" H 2700 4900 50  0001 C CNN
F 1 "GND" V 2705 5022 50  0000 R CNN
F 2 "" H 2700 5150 50  0001 C CNN
F 3 "" H 2700 5150 50  0001 C CNN
	1    2700 5150
	0    -1   1    0   
$EndComp
Wire Wire Line
	2450 4850 2550 4850
Connection ~ 2550 4850
Wire Wire Line
	2550 4850 2725 4850
$Comp
L Diode:1.5KExxA D5
U 1 1 601A4B48
P 2550 5000
F 0 "D5" V 2504 5080 50  0000 L CNN
F 1 "P6KE6.8A" V 2595 5080 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 2550 4800 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 2500 5000 50  0001 C CNN
F 4 "1703028" V 2550 5000 50  0001 C CNN "Farnell"
F 5 "171-9669" V 2550 5000 50  0001 C CNN "RS-components"
	1    2550 5000
	0    1    1    0   
$EndComp
Wire Wire Line
	2450 4850 2450 5050
Wire Wire Line
	2550 5150 2700 5150
Connection ~ 2550 5150
Wire Wire Line
	2350 5050 2450 5050
Wire Wire Line
	2350 5150 2550 5150
Text GLabel 2725 5650 2    39   Input ~ 0
6
$Comp
L power:GND #PWR06
U 1 1 601ABB68
P 2700 5950
F 0 "#PWR06" H 2700 5700 50  0001 C CNN
F 1 "GND" V 2705 5822 50  0000 R CNN
F 2 "" H 2700 5950 50  0001 C CNN
F 3 "" H 2700 5950 50  0001 C CNN
	1    2700 5950
	0    -1   1    0   
$EndComp
Wire Wire Line
	2450 5650 2550 5650
Connection ~ 2550 5650
Wire Wire Line
	2550 5650 2725 5650
$Comp
L Diode:1.5KExxA D6
U 1 1 601ABB73
P 2550 5800
F 0 "D6" V 2504 5880 50  0000 L CNN
F 1 "P6KE6.8A" V 2595 5880 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 2550 5600 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 2500 5800 50  0001 C CNN
F 4 "1703028" V 2550 5800 50  0001 C CNN "Farnell"
F 5 "171-9669" V 2550 5800 50  0001 C CNN "RS-components"
	1    2550 5800
	0    1    1    0   
$EndComp
Wire Wire Line
	2450 5650 2450 5850
Wire Wire Line
	2550 5950 2700 5950
Connection ~ 2550 5950
Wire Wire Line
	2350 5850 2450 5850
Wire Wire Line
	2350 5950 2550 5950
Text GLabel 2725 6450 2    39   Input ~ 0
7
$Comp
L power:GND #PWR07
U 1 1 601AD143
P 2700 6750
F 0 "#PWR07" H 2700 6500 50  0001 C CNN
F 1 "GND" V 2705 6622 50  0000 R CNN
F 2 "" H 2700 6750 50  0001 C CNN
F 3 "" H 2700 6750 50  0001 C CNN
	1    2700 6750
	0    -1   1    0   
$EndComp
$Comp
L Diode:1.5KExxA D7
U 1 1 601AD14E
P 2550 6600
F 0 "D7" V 2504 6680 50  0000 L CNN
F 1 "P6KE6.8A" V 2595 6680 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 2550 6400 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 2500 6600 50  0001 C CNN
F 4 "1703028" V 2550 6600 50  0001 C CNN "Farnell"
F 5 "171-9669" V 2550 6600 50  0001 C CNN "RS-components"
	1    2550 6600
	0    1    1    0   
$EndComp
Wire Wire Line
	2450 6450 2450 6650
Wire Wire Line
	2350 6650 2450 6650
Text GLabel 2725 7250 2    39   Input ~ 0
8
$Comp
L power:GND #PWR08
U 1 1 601AE912
P 2700 7550
F 0 "#PWR08" H 2700 7300 50  0001 C CNN
F 1 "GND" V 2705 7422 50  0000 R CNN
F 2 "" H 2700 7550 50  0001 C CNN
F 3 "" H 2700 7550 50  0001 C CNN
	1    2700 7550
	0    -1   1    0   
$EndComp
$Comp
L Diode:1.5KExxA D8
U 1 1 601AE91D
P 2550 7400
F 0 "D8" V 2504 7480 50  0000 L CNN
F 1 "P6KE6.8A" V 2595 7480 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 2550 7200 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 2500 7400 50  0001 C CNN
F 4 "1703028" V 2550 7400 50  0001 C CNN "Farnell"
F 5 "171-9669" V 2550 7400 50  0001 C CNN "RS-components"
	1    2550 7400
	0    1    1    0   
$EndComp
Wire Wire Line
	2450 7250 2450 7450
Wire Wire Line
	2350 7450 2450 7450
$Comp
L Connector:Cliff_68125 J7
U 1 1 6020893A
P 2150 6450
F 0 "J7" H 2132 6775 50  0000 C CNN
F 1 "Cliff_68125" H 2132 6684 50  0000 C CNN
F 2 "SamacSys_Parts:FC68125" H 2150 6450 50  0001 C CNN
F 3 "~" H 2150 6450 50  0001 C CNN
	1    2150 6450
	1    0    0    -1  
$EndComp
Text Notes 8975 4350 0    39   ~ 0
Buzzer
Connection ~ 1300 7550
$Comp
L Device:R R5
U 1 1 601AB4BF
P 9200 5025
F 0 "R5" V 9407 5025 50  0000 C CNN
F 1 "4.7k" V 9316 5025 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 9130 5025 50  0001 C CNN
F 3 "~" H 9200 5025 50  0001 C CNN
	1    9200 5025
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9000 5025 9050 5025
Wire Wire Line
	9350 5025 9425 5025
$Comp
L Diode:1.5KExxA D2
U 1 1 601F0D22
P 1300 5800
F 0 "D2" V 1254 5880 50  0000 L CNN
F 1 "P6KE6.8A" V 1345 5880 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 1300 5600 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 1250 5800 50  0001 C CNN
F 4 "1703028" V 1300 5800 50  0001 C CNN "Farnell"
F 5 "171-9669" V 1300 5800 50  0001 C CNN "RS-components"
	1    1300 5800
	0    1    1    0   
$EndComp
$Comp
L Diode:1.5KExxA D1
U 1 1 5F3D9B1D
P 1300 5000
F 0 "D1" V 1254 5080 50  0000 L CNN
F 1 "P6KE6.8A" V 1345 5080 50  0000 L CNN
F 2 "Diode_THT:D_DO-201AE_P12.70mm_Horizontal" H 1300 4800 50  0001 C CNN
F 3 "https://www.vishay.com/docs/88301/15ke.pdf" H 1250 5000 50  0001 C CNN
F 4 "1703028" V 1300 5000 50  0001 C CNN "Farnell"
F 5 "171-9669" V 1300 5000 50  0001 C CNN "RS-components"
	1    1300 5000
	0    1    1    0   
$EndComp
Wire Wire Line
	1100 5150 1300 5150
Wire Wire Line
	1200 4850 1300 4850
Connection ~ 1300 4850
Wire Wire Line
	1300 4850 1475 4850
Connection ~ 1300 5150
Wire Wire Line
	1300 5150 1450 5150
Wire Wire Line
	1200 5650 1300 5650
Wire Wire Line
	1100 5950 1300 5950
Connection ~ 1300 5650
Wire Wire Line
	1300 5650 1475 5650
Connection ~ 1300 5950
Wire Wire Line
	1300 5950 1450 5950
Wire Wire Line
	2450 6450 2550 6450
Wire Wire Line
	2350 6750 2550 6750
Connection ~ 2550 6450
Wire Wire Line
	2550 6450 2725 6450
Connection ~ 2550 6750
Wire Wire Line
	2550 6750 2700 6750
Wire Wire Line
	2450 7250 2550 7250
Wire Wire Line
	2350 7550 2550 7550
Connection ~ 2550 7250
Wire Wire Line
	2550 7250 2725 7250
Connection ~ 2550 7550
Wire Wire Line
	2550 7550 2700 7550
$Comp
L Device:C C1
U 1 1 601FACC9
P 5525 6500
F 0 "C1" H 5640 6546 50  0000 L CNN
F 1 "100n" H 5640 6455 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P5.00mm" H 5563 6350 50  0001 C CNN
F 3 "~" H 5525 6500 50  0001 C CNN
	1    5525 6500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5525 6350 5525 6200
Wire Wire Line
	5525 6650 5525 6800
Wire Wire Line
	5125 6350 5125 6200
Connection ~ 5525 6200
$Comp
L Sensor_Pressure:MPXA6115A U1
U 1 1 5F4DAB0A
P 6350 6500
F 0 "U1" H 5920 6546 50  0000 R CNN
F 1 "MPXV7007GP" H 6250 6100 50  0000 R CNN
F 2 "MPXV7007GP:MPXV7007GP" H 5850 6150 50  0001 C CNN
F 3 "http://www.nxp.com/files/sensors/doc/data_sheet/MPXA6115A.pdf" H 6350 7100 50  0001 C CNN
	1    6350 6500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5125 6650 5125 6800
$Comp
L Device:C C2
U 1 1 6021926D
P 5125 6500
F 0 "C2" H 5240 6546 50  0000 L CNN
F 1 "100n" H 5240 6455 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 5163 6350 50  0001 C CNN
F 3 "~" H 5125 6500 50  0001 C CNN
	1    5125 6500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5125 6200 5525 6200
Wire Wire Line
	5125 6800 5525 6800
Connection ~ 5525 6800
Wire Wire Line
	5525 6200 6350 6200
Connection ~ 6350 6200
Wire Wire Line
	5525 6800 6350 6800
Connection ~ 6350 6800
Wire Notes Line
	6850 5750 6850 7300
Wire Notes Line
	4975 5750 6850 5750
Wire Notes Line
	4975 7300 6850 7300
$Comp
L power:VCC #PWR019
U 1 1 6027585C
P 8020 3240
F 0 "#PWR019" H 8020 3090 50  0001 C CNN
F 1 "VCC" V 8035 3413 50  0000 C CNN
F 2 "" H 8020 3240 50  0001 C CNN
F 3 "" H 8020 3240 50  0001 C CNN
	1    8020 3240
	0    -1   -1   0   
$EndComp
Text GLabel 7990 2940 0    39   Input ~ 0
SCL
Text GLabel 7995 2590 0    39   Input ~ 0
SDA
$Comp
L power:GND #PWR020
U 1 1 60275866
P 8020 3340
F 0 "#PWR020" H 8020 3090 50  0001 C CNN
F 1 "GND" V 8025 3212 50  0000 R CNN
F 2 "" H 8020 3340 50  0001 C CNN
F 3 "" H 8020 3340 50  0001 C CNN
	1    8020 3340
	0    1    -1   0   
$EndComp
$Comp
L Device:R R8
U 1 1 6031DA69
P 8370 2740
F 0 "R8" H 8300 2786 50  0000 R CNN
F 1 "4.7k" H 8300 2695 50  0000 R CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 8300 2740 50  0001 C CNN
F 3 "~" H 8370 2740 50  0001 C CNN
	1    8370 2740
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 6031DA63
P 8270 3090
F 0 "R7" H 8200 3136 50  0000 R CNN
F 1 "4.7k" H 8200 3045 50  0000 R CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 8200 3090 50  0001 C CNN
F 3 "~" H 8270 3090 50  0001 C CNN
	1    8270 3090
	1    0    0    -1  
$EndComp
Wire Wire Line
	8020 3240 8270 3240
Connection ~ 8370 2590
Wire Wire Line
	8370 2590 7995 2590
$Comp
L Device:R R9
U 1 1 602F7E46
P 8670 3090
F 0 "R9" H 8600 3136 50  0000 R CNN
F 1 "4.7k" H 8600 3045 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 8600 3090 50  0001 C CNN
F 3 "~" H 8670 3090 50  0001 C CNN
	1    8670 3090
	1    0    0    -1  
$EndComp
$Comp
L Device:R R6
U 1 1 6037812A
P 9200 5175
F 0 "R6" V 9085 5175 50  0000 C CNN
F 1 "4.7k" V 8994 5175 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 9130 5175 50  0001 C CNN
F 3 "~" H 9200 5175 50  0001 C CNN
	1    9200 5175
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9425 5025 9425 5175
Wire Wire Line
	9425 5175 9350 5175
Wire Wire Line
	9050 5175 9000 5175
Wire Wire Line
	9000 5025 9000 5175
Wire Wire Line
	9000 5175 9000 5250
Connection ~ 9000 5175
Connection ~ 9425 5025
Text Notes 9140 5210 0    39   ~ 0
SMD
Text Notes 8700 3150 1    39   ~ 0
SMD
Wire Wire Line
	8770 2590 8370 2590
$Comp
L Device:R R10
U 1 1 602F9FD4
P 8770 2740
F 0 "R10" H 8700 2786 50  0000 R CNN
F 1 "4.7k" H 8700 2695 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 8700 2740 50  0001 C CNN
F 3 "~" H 8770 2740 50  0001 C CNN
	1    8770 2740
	1    0    0    -1  
$EndComp
Text Notes 8805 2800 1    39   ~ 0
SMD
Text Notes 5305 6414 2    39   ~ 0
SMD
Text GLabel 3600 3350 2    39   Input ~ 0
AddOn_Pin1
Text GLabel 3600 3450 2    39   Input ~ 0
AddOn_Pin2
Text GLabel 3600 3850 2    39   Input ~ 0
AddOn_Pin3
Text GLabel 7000 4950 0    39   Input ~ 0
AddOn_Pin3
Text GLabel 7500 4850 2    39   Input ~ 0
AddOn_Pin2
Text GLabel 7000 4850 0    39   Input ~ 0
ESP_AddOn_Pin1
Text GLabel 1850 3350 0    39   Input ~ 0
SDA
Text GLabel 1850 3450 0    39   Input ~ 0
SCL
NoConn ~ 7500 4950
NoConn ~ 7000 5050
Text Label 5650 4950 0    39   ~ 0
NEOPIXEL
Connection ~ 1850 3150
$Comp
L Device:R R14
U 1 1 6021AB8E
P 6110 3340
F 0 "R14" H 6180 3386 50  0000 L CNN
F 1 "18k" H 6180 3295 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6040 3340 50  0001 C CNN
F 3 "~" H 6110 3340 50  0001 C CNN
	1    6110 3340
	1    0    0    -1  
$EndComp
$Comp
L Device:R R13
U 1 1 6021AB94
P 6110 2940
F 0 "R13" H 6180 2986 50  0000 L CNN
F 1 "10k" H 6180 2895 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6040 2940 50  0001 C CNN
F 3 "~" H 6110 2940 50  0001 C CNN
	1    6110 2940
	1    0    0    -1  
$EndComp
Wire Wire Line
	6110 3090 6110 3140
$Comp
L power:GND #PWR022
U 1 1 6021AB9D
P 6110 3490
F 0 "#PWR022" H 6110 3240 50  0001 C CNN
F 1 "GND" V 6115 3362 50  0000 R CNN
F 2 "" H 6110 3490 50  0001 C CNN
F 3 "" H 6110 3490 50  0001 C CNN
	1    6110 3490
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R12
U 1 1 6021ABA3
P 5350 3340
F 0 "R12" H 5420 3386 50  0000 L CNN
F 1 "18k" H 5420 3295 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 5280 3340 50  0001 C CNN
F 3 "~" H 5350 3340 50  0001 C CNN
	1    5350 3340
	1    0    0    -1  
$EndComp
$Comp
L Device:R R11
U 1 1 6021ABA9
P 5350 2940
F 0 "R11" H 5420 2986 50  0000 L CNN
F 1 "10k" H 5420 2895 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 5280 2940 50  0001 C CNN
F 3 "~" H 5350 2940 50  0001 C CNN
	1    5350 2940
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 3090 5350 3140
$Comp
L power:GND #PWR021
U 1 1 6021ABB2
P 5350 3490
F 0 "#PWR021" H 5350 3240 50  0001 C CNN
F 1 "GND" V 5355 3362 50  0000 R CNN
F 2 "" H 5350 3490 50  0001 C CNN
F 3 "" H 5350 3490 50  0001 C CNN
	1    5350 3490
	-1   0    0    -1  
$EndComp
Text Notes 6210 2620 0    39   ~ 0
THT
Text Notes 5320 2620 0    39   ~ 0
SMD
Wire Notes Line
	5120 2420 6670 2420
Text Notes 5270 2370 0    39   ~ 0
Arduino->ESP Connector - Reversed Pin
Wire Notes Line
	5120 2420 5120 3970
Wire Notes Line
	5120 3970 6670 3970
Wire Notes Line
	6670 2420 6670 3970
Text GLabel 5380 2760 2    39   Input ~ 0
AddOn_Pin1
Wire Wire Line
	5380 2760 5350 2760
Wire Wire Line
	5350 2760 5350 2790
Text GLabel 6140 2760 2    39   Input ~ 0
AddOn_Pin1
Wire Wire Line
	6140 2760 6110 2760
Wire Wire Line
	6110 2760 6110 2790
Text GLabel 5370 3140 2    39   Input ~ 0
ESP_AddOn_Pin1
Text GLabel 6130 3140 2    39   Input ~ 0
ESP_AddOn_Pin1
Wire Wire Line
	6130 3140 6110 3140
Connection ~ 6110 3140
Wire Wire Line
	6110 3140 6110 3190
Wire Wire Line
	5370 3140 5350 3140
Connection ~ 5350 3140
Wire Wire Line
	5350 3140 5350 3190
Wire Wire Line
	3600 3250 3830 3250
Wire Wire Line
	3830 3250 3830 3110
$Comp
L power:VDD #PWR09
U 1 1 60226D59
P 3600 2850
F 0 "#PWR09" H 3600 2700 50  0001 C CNN
F 1 "VDD" H 3615 3023 50  0000 C CNN
F 2 "" H 3600 2850 50  0001 C CNN
F 3 "" H 3600 2850 50  0001 C CNN
	1    3600 2850
	1    0    0    -1  
$EndComp
$Comp
L power:VDD #PWR023
U 1 1 60227507
P 7000 5250
F 0 "#PWR023" H 7000 5100 50  0001 C CNN
F 1 "VDD" V 7015 5377 50  0000 L CNN
F 2 "" H 7000 5250 50  0001 C CNN
F 3 "" H 7000 5250 50  0001 C CNN
	1    7000 5250
	0    -1   -1   0   
$EndComp
Text Notes 3230 2430 0    39   ~ 0
RAW:   unregulated voltage input for the Pro Micro\nVCC:   regulated voltage, 5V at 500mA\n
Wire Wire Line
	8770 2590 9090 2590
Connection ~ 8770 2590
Wire Wire Line
	8370 2890 8370 3240
Connection ~ 8370 3240
Wire Wire Line
	8370 3240 8670 3240
Wire Wire Line
	8770 2890 8770 3240
Connection ~ 8770 3240
Connection ~ 8270 3240
Wire Wire Line
	8270 3240 8370 3240
Connection ~ 8670 3240
Wire Wire Line
	8670 3240 8770 3240
Wire Wire Line
	7990 2940 8270 2940
Connection ~ 8270 2940
Wire Wire Line
	8270 2940 8670 2940
Connection ~ 8670 2940
Wire Wire Line
	8670 2940 8870 2940
Wire Wire Line
	8770 3240 8940 3240
Wire Wire Line
	8940 3240 8940 3440
Wire Wire Line
	8870 2940 8870 3540
Wire Wire Line
	9090 2590 9090 3640
Wire Wire Line
	8020 3340 9190 3340
Wire Wire Line
	9090 3640 9190 3640
Text GLabel 1850 3750 0    39   Input ~ 0
4
Text GLabel 1850 3650 0    39   Input ~ 0
5
Text GLabel 1850 3950 0    39   Input ~ 0
2
Text GLabel 1850 4050 0    39   Input ~ 0
1
Text GLabel 1850 3850 0    39   Input ~ 0
3
Text GLabel 1850 3550 0    39   Input ~ 0
Buzzer_Pin
$Comp
L ProMicro:ProMicro U2
U 1 1 601F96F3
P 2700 3500
F 0 "U2" H 2725 4275 50  0000 C CNN
F 1 "ProMicro" H 2725 4184 50  0000 C CNN
F 2 "ProMicro:ProMicro" H 2250 4150 50  0001 C CNN
F 3 "" H 2250 4150 50  0001 C CNN
	1    2700 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	9190 3440 8940 3440
Wire Wire Line
	9190 3540 8870 3540
$Comp
L FABI_customLib:dispaly_connector_91601-304LF J11
U 1 1 603EB941
P 9190 3340
F 0 "J11" H 9590 3605 50  0000 C CNN
F 1 "dispaly_connector_91601-304LF" H 9590 3514 50  0000 C CNN
F 2 "FABI_customLibs:91601304LF" H 10390 3390 50  0001 L CNN
F 3 "http://www.mouser.com/datasheet/2/18/91601-1289404.pdf" H 10390 3290 50  0001 L CNN
F 4 "Dubox 2.54mm, Board to Board Connector, PCB Mounted Receptacle, Vertical , Surface Mount, Dual Entry ,Single row , 4 Positions, 2.54mm (0.100in) Pitch" H 10390 3190 50  0001 L CNN "Description"
F 5 "8" H 10390 3090 50  0001 L CNN "Height"
F 6 "649-91601-304LF" H 10390 2990 50  0001 L CNN "Mouser Part Number"
F 7 "https://www.mouser.com/Search/Refine.aspx?Keyword=649-91601-304LF" H 10390 2890 50  0001 L CNN "Mouser Price/Stock"
F 8 "Amphenol" H 9390 2790 50  0001 L CNN "Manufacturer_Name"
F 9 "91601-304LF" H 9390 2690 50  0001 L CNN "Manufacturer_Part_Number"
	1    9190 3340
	1    0    0    -1  
$EndComp
Text GLabel 3600 4050 2    39   Input ~ 0
8
Text GLabel 3600 3550 2    39   Input ~ 0
6
$EndSCHEMATC
