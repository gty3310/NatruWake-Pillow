void setup(){
    Serial.begin(115200);

}
void loop(){
    Serial.println("+");
    delay(1000);
    Serial.println("SF,1");
    delay(500);
    Serial.println("SS,C0000000"); //Set device in peripheral mode and set turn on auto advertising
    delay(500);
    Serial.println("SR,00000000");
    delay(500);
    Serial.println("R,1"); //Reboot
    delay(5000);
    //Serial.println("LS"); //Start advertising

    delay(100000);
  }
