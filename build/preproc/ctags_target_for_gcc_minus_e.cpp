# 1 "C:\\Users\\Lenovo\\mis_repositorios\\project_arduino\\project_arduino.ino"
void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(13, 0x1);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(13, 0x1); // turn the LED on (HIGH is the voltage level)
    delay(1000); // wait for a second
    digitalWrite(13, 0x0); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
}
