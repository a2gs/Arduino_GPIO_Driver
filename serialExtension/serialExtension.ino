/* Andre Augusto Giannotti Scota
 * https://sites.google.com/view/a2gs/
 */

String cmd;
char sep = '\n';

void setup()
{
  Serial.begin(9600);
  cmd = "";
}

int portName(String nport)
{
  if     (nport.equalsIgnoreCase("D0")  == true) return(0 );
  else if(nport.equalsIgnoreCase("D1")  == true) return(1 );
  else if(nport.equalsIgnoreCase("D2")  == true) return(2 );
  else if(nport.equalsIgnoreCase("D3")  == true) return(3 );
  else if(nport.equalsIgnoreCase("D4")  == true) return(4 );
  else if(nport.equalsIgnoreCase("D5")  == true) return(5 );
  else if(nport.equalsIgnoreCase("D6")  == true) return(6 );
  else if(nport.equalsIgnoreCase("D7")  == true) return(7 );
  else if(nport.equalsIgnoreCase("D8")  == true) return(8 );
  else if(nport.equalsIgnoreCase("D9")  == true) return(9 );
  else if(nport.equalsIgnoreCase("D10") == true) return(10);
  else if(nport.equalsIgnoreCase("D11") == true) return(11);
  else if(nport.equalsIgnoreCase("D12") == true) return(12);
  else if(nport.equalsIgnoreCase("D13") == true) return(13);
  else if(nport.equalsIgnoreCase("A0")  == true) return(A0);
  else if(nport.equalsIgnoreCase("A1")  == true) return(A1);
  else if(nport.equalsIgnoreCase("A2")  == true) return(A2);
  else if(nport.equalsIgnoreCase("A3")  == true) return(A3);
  else if(nport.equalsIgnoreCase("A4")  == true) return(A4);
  else if(nport.equalsIgnoreCase("A5")  == true) return(A5);
  else return(-1);
}

int callCmd(String cmdReaded)
{
  int port = 0;

  if(cmdReaded.substring(0, 4).equalsIgnoreCase(String("GETA")) == true){
    Serial.print(analogRead(portName(cmdReaded.substring(4))));
    return(0);
  }else if(cmdReaded.substring(0, 4).equalsIgnoreCase(String("GETD")) == true){
    Serial.print((digitalRead(portName(cmdReaded.substring(4))) == LOW ? "0" : "1"));
    return(0);
  }else if(cmdReaded.substring(0, 4).equalsIgnoreCase(String("SETA")) == true){
    port = portName(cmdReaded.substring(4, cmdReaded.indexOf('=')));
    if(port == -1) return(-1);
 
    analogWrite(port, cmdReaded.substring(cmdReaded.indexOf('=') + 1).toInt());
    return(0);
  }else if(cmdReaded.substring(0, 4).equalsIgnoreCase(String("SETD")) == true){
    port = portName(cmdReaded.substring(4, cmdReaded.indexOf('=')));
    if(port == -1) return(-1);

    digitalWrite(port, (cmdReaded.substring(cmdReaded.indexOf('=') + 1) == "0" ? LOW : HIGH));
    return(0);
  }else if(cmdReaded.substring(0, 4).equalsIgnoreCase(String("INUP")) == true){
    pinMode(portName(cmdReaded.substring(4)), INPUT_PULLUP);
    return(0);
  }else if(cmdReaded.substring(0, 2).equalsIgnoreCase(String("IN")) == true){
    pinMode(portName(cmdReaded.substring(2)), INPUT);
    return(0);
  }else if(cmdReaded.substring(0, 3).equalsIgnoreCase("OUT") == true){
    pinMode(portName(cmdReaded.substring(3)), OUTPUT);
    return(0);
  }
Serial.println("aqui8");
  return(-1);
}

void loop()
{
  char c = 0;
  
  while(Serial.available()) {
    c = (char)Serial.read();

    if(c == sep){
      cmd += '\0';
      Serial.println("cmd: [" + cmd + "]");
      if(callCmd(cmd) == -1) Serial.println("NOK");
      else                   Serial.println("OK");

      cmd = "";
    }else cmd += c;
  }
}
