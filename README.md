# Arduino_GPIO_Driver
Driver to access Arduino GPIO (config, set and get state) through PC-serial

(Arduino Uno D0 and D1 are alloced to TX-RX Serial communication)

Protocol:

PC (serial) to Arduino:

To set pin as OUTPUT:
	outd2\n
	outd3\n
	outdXX\n
	outa3\n

To set pin as INPUT:
	ind2\n
	ind3\n
	indXX\n
	ina3\n

To set pin as INPUT_PULLUP:
	inupd0\n
	inupd1\n
	inupdXX\n
	inupa3\n

To read a digital pin state:
	getdd2\n
	getddXX\n
	getda3\n
(Arduino returns to host)

To read a analog pin state:
	getad2\n
	getadXX\n
	getaa3\n
(Arduino returns to host)

To set pin digital as HIGH or LOW:
	setdd0=1\n
	setdd1=0\n
	setddXX=1\n
	setda3=0\n

To set pin analog:
	setdd0=123\n
	setdd1=234\n
	setddXX=345\n
	setda3=456\n
