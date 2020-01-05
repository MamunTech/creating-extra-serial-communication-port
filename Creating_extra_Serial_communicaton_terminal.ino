#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3); // RX, TX ALSO CAN USE Rx as Pin2 and Tx as Pin3 OR 10-RX, 11-TX OR 52-RX,53-TX 

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  mySerial.begin(9600);

}

void loop() // run over and over
{
  if (mySerial.available())
    Serial.write(mySerial.read());
    
  if (Serial.available())
  { 
    while(Serial.available())
    {
      mySerial.write(Serial.read());
    }
    mySerial.println();
  }
}
