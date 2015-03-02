void setup(){
    Serial.begin(115200);
    delay(1000);
    Serial.println("SR,20000000"); //Set device in peripheral mode and set turn on auto advertising
    Serial.println("R,1"); //Reboot
    delay(500);
    Serial.println("A"); //Start advertising
}
void loop(){}
