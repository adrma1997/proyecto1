# 1 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino"
//Main
//#include <Arduino.h>
//Se incluye esta librería con el fin de poder trabajar con las funciones propias de Arduino

//Ficheros locales (se usan los header de la librería)
# 7 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino" 2
# 8 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino" 2
# 9 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\proyecto1.ino" 2

int h; //Humedad
int t; //temperatura

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
