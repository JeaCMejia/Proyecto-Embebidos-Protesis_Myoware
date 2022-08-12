//Pines para la Comunicación Serial
#define RXp2 16
#define TXp2 17

void setup() {
  //Comunicación Serial
  Serial.begin(9600, SERIAL_8N1, RXp2, TXp2);
}
void loop() {
  Serial.println('0');
  //Nada - Abrir Mano
  delay(1500);
  Serial.println('1');
  //1 - Cerrar Mano
  delay(1500);
  Serial.println('2');
  //2 - Apuntar
  delay(1500);
  Serial.println('3');
  //3 - Paz y Amor
  delay(1500);
  Serial.println('4');
  //4 - OK
  delay(1500);
}
