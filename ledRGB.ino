void ledRGB(){
  //pin led B
 if (incomingByte == 'b') {
    
    Serial.println("LUCES ON B");
    digitalWrite(VledRGB, HIGH); // 40  r     
    digitalWrite(ledRGB1, LOW);
    digitalWrite(ledRGB2, HIGH);
    digitalWrite(ledRGB3, HIGH);
            
    }

    //pin led R
    if (incomingByte == 'r') {
      Serial.println("LUCES ON R");
      digitalWrite(VledRGB, HIGH);        
      digitalWrite(ledRGB1, HIGH);
      digitalWrite(ledRGB2, LOW);
      digitalWrite(ledRGB3, HIGH);
    }

    // pin led G
    if (incomingByte == 'g') {
       Serial.println("LUCES ON G");
      digitalWrite(VledRGB, HIGH);        
      digitalWrite(ledRGB1, HIGH);
      digitalWrite(ledRGB2, HIGH);
      digitalWrite(ledRGB3, LOW);
    }

    if (incomingByte == 'o') {
      
      digitalWrite(VledRGB, LOW);        
      digitalWrite(ledRGB1, LOW);
      digitalWrite(ledRGB2, LOW);
      digitalWrite(ledRGB3, LOW);
    }
  
}
