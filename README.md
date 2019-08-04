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
<i>
out<b>d2</b>\n<br>
out<b>d3</b>\n<br>
out<b>dXX</b>\n<br>
out<b>a3</b>\n<br>
</i>
<br>
To set pin as INPUT:<br>
<i>
in<b>d2</b>\n<br>
in<b>d3</b>\n<br>
in<b>dXX</b>\n<br>
in<b>a3</b>\n<br>
</i>
<br>
To set pin as INPUT_PULLUP:<br>
<i>
inup<b>d0</b>\n<br>
inup<b>d1</b>\n<br>
inup<b>dXX</b>\n<br>
inup<b>a3</b>\n<br>
</i>
<br>
To read a digital input pin state:<br>
<i>
getd<b>d2</b>\n<br>
getd<b>dXX</b>\n<br>
getd<b>a3</b>\n<br>
</i>
(Arduino returns to host)<br>
<br>
To read a analog input pin state:<br>
<i>
geta<b>d2</b>\n<br>
geta<b>dXX</b>\n<br>
geta<b>a3</b>\n<br>
</i>
(Arduino returns to host)<br>
<br>
To set a value to digital output pin as HIGH or LOW:<br>
<i>
setd<b>d0</b>=1\n<br>
setd<b>d1</b>=0\n<br>
setd<b>dXX</b>=1\n<br>
setd<b>a3</b>=0\n<br>
</i>
<br>
To set a value to analog output pin:<br>
<i>
setd<b>d0</b>=123\n<br>
setd<b>d1</b>=234\n<br>
setd<b>dXX</b>=345\n<br>
setd<b>a3</b>=456\n<br>
</i>
