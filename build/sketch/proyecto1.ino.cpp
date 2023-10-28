#include <Arduino.h>
#line 1 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino"
//Main
//#include <Arduino.h>
//Se incluye esta librería con el fin de poder trabajar con las funciones propias de Arduino

//Ficheros locales (se usan los header de la librería)
#include "modulo-temperatura.h" //Uso de comillas para este tipo de ficheros
#include "modulo-humedad.h" //Uso de comillas para este tipo de ficheros
#include "modulo-lcd.h" //Uso de comillas para este tipo de ficheros

int h; //Humedad
int t; //temperatura

#line 13 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino"
void setup();
#line 18 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino"
void loop();
#line 13 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino"
void setup()
{

}

void loop()
{
    h = medirHumedad();
    t = medirTemperatura();
    delay(20);

    mostrarPorPantalla(h, t);

    delay(100);
}

/*
void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(5000);                     // wait for a second
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
    delay(5000);                     // wait for a second
}
*/
