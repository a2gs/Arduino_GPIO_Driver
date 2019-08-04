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
&nbsp;out<b>d2</b>\n<br>
&nbsp;out<b>d3</b>\n<br>
&nbsp;out<b>dXX</b>\n<br>
&nbsp;out<b>a3</b>\n<br>
<br>
To set pin as INPUT:<br>
&nbsp;in<b>d2</b>\n<br>
&nbsp;in<b>d3</b>\n<br>
&nbsp;in<b>dXX</b>\n<br>
&nbsp;in<b>a3</b>\n<br>
<br>
To set pin as INPUT_PULLUP:<br>
&nbsp;inup<b>d0</b>\n<br>
&nbsp;inup<b>d1</b>\n<br>
&nbsp;inup<b>dXX</b>\n<br>
&nbsp;inup<b>a3</b>\n<br>
<br>
To read a digital pin state:<br>
&nbsp;getd<b>d2</b>\n<br>
&nbsp;getd<b>dXX</b>\n<br>
&nbsp;getd<b>a3</b>\n<br>
(Arduino returns to host)<br>
<br>
To read a analog pin state:<br>
&nbsp;geta<b>d2</b>\n<br>
&nbsp;geta<b>dXX</b>\n<br>
&nbsp;geta<b>a3</b>\n<br>
(Arduino returns to host)<br>
<br>
To set pin digital as HIGH or LOW:<br>
&nbsp;setd<b>d0</b>=1\n<br>
&nbsp;setd<b>d1</b>=0\n<br>
&nbsp;setd<b>dXX</b>=1\n<br>
&nbsp;setd<b>a3</b>=0\n<br>
<br>
To set pin analog:<br>
&nbsp;setd<b>d0</b>=123\n<br>
&nbsp;setd<b>d1</b>=234\n<br>
&nbsp;setd<b>dXX</b>=345\n<br>
&nbsp;setd<b>a3</b>=456\n<br>
