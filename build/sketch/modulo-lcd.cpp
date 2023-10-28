#line 1 "C:\\Users\\tonma\\mis_repositorios\\proyecto1\\modulo-lcd.cpp"
//Contiene en detalle el código de las funciones y variables detalladas en header
#include <Arduino.h>
//Se incluye esta librería con el fin de poder trabajar con las funciones propias de Arduino

//Librerias/ficheros que no son locales
#include "LiquidCrystal.h"

int veeLcd = 13;
int rsLcd = 12;
int eLcd = 11;
int d4Lcd = 9;
int d5Lcd = 8;
int d6Lcd = 7;
int d7Lcd = 6;

LiquidCrystal lcd(rsLcd, eLcd, d4Lcd, d5Lcd, d6Lcd, d7Lcd); //Se intancia un objeto de tipo LCD


void mostrarPorPantalla(int hum, int tem) //Declarar los parámetros
{
    lcd.begin(16, 2);
    analogWrite(veeLcd, 50);

    lcd.clear();

    lcd.setCursor(0, 1);
    lcd.print("Humedad: ");
    lcd.print(hum);
    lcd.print("%");

    lcd.setCursor(0, 0);
    lcd.print("Temperatura: ");
    lcd.print(tem);
    lcd.print("C");
}
