# Arduino_GPIO_Driver<br>
Driver to access Arduino GPIO (config, set and get state) through PC-serial<br>
<br>
(Arduino Uno D0 and D1 are alloced to TX-RX Serial communication)<br>
<br>
Protocol:<br>
<br>
PC (serial) to Arduino:<br>
<br>
To set pin as OUTPUT:<br>
	outd2\n<br>
	outd3\n<br>
	outdXX\n<br>
	outa3\n<br>
<br>
To set pin as INPUT:<br>
	ind2\n<br>
	ind3\n<br>
	indXX\n<br>
	ina3\n<br>
<br>
To set pin as INPUT_PULLUP:<br>
	inupd0\n<br>
	inupd1\n<br>
	inupdXX\n<br>
	inupa3\n<br>
<br>
To read a digital pin state:<br>
	getdd2\n<br>
	getddXX\n<br>
	getda3\n<br>
(Arduino returns to host)<br>
<br>
To read a analog pin state:<br>
	getad2\n<br>
	getadXX\n<br>
	getaa3\n<br>
(Arduino returns to host)<br>
<br>
To set pin digital as HIGH or LOW:<br>
	setdd0=1\n<br>
	setdd1=0\n<br>
	setddXX=1\n<br>
	setda3=0\n<br>
<br>
To set pin analog:<br>
	setdd0=123\n<br>
	setdd1=234\n<br>
	setddXX=345\n<br>
	setda3=456\n<br>
