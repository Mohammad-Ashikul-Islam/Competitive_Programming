    #define ledPin 13
    int state = 0;
    void setup() {
      pinMode(ledPin, OUTPUT);
      digitalWrite(ledPin, HIGH);
      Serial.begin(9600); // Default communication rate of the Bluetooth module
    }
    void loop() {
      if(Serial.available() > 0) // Checks whether data is comming from the serial port
        state = Serial.read(); // Reads the data from the serial port
      else
        state=0;
     
     if (state == 'B') {
      digitalWrite(ledPin, LOW); // Turn LED OFF
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      
      Serial.println("backward"); // Send back, to the phone, the String "LED: ON"
      delay(51);
      
     }
     else if (state == 'F') {
      digitalWrite(ledPin, HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
      Serial.println("Forward");
      delay(51);
      
     } 
     else if (state == 'L') {
      digitalWrite(ledPin, HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
      Serial.println("Left");
      delay(51);
      
     }
     else if (state == 'R') {
      digitalWrite(ledPin, LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      Serial.println("Right");
      delay(51);
      
     }
     else{
      digitalWrite(ledPin, LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
      
     }
    }
