#include <Servo.h>
 
Servo pulgar;
Servo pulgarDedo;
Servo indice;
Servo medio;
Servo dobles;

//Funciones para Cerrar Dedos
void cerrarPulgar() {
  pulgar.write(0);
  delay(10);
}
void cerrarPulgarDedo() {
  pulgarDedo.write(20);
  delay(10);
}
void cerrarIndice() {
  indice.write(0);
  delay(10);
}
void cerrarMedio() {
  medio.write(120);
  delay(10);
}
void cerrarDobles() {
  dobles.write(120);
  delay(2000);
}

//Funciones para Abrir Dedos
void abrirPulgar() {
  pulgar.write(50);
  delay(10);
}
void abrirPulgarDedo() {
  pulgarDedo.write(130);
  delay(10);
}
void abrirIndice() {
  indice.write(110);
  delay(10);
}
void abrirMedio() {
  medio.write(10);
  delay(10);
}
void abrirDobles() {
  dobles.write(40);
  delay(10);
}

//ABRIR MANO
void abrirMano() {
  abrirPulgar();
  abrirPulgarDedo();
  abrirIndice();
  abrirMedio();
  abrirDobles();
}

//PRIMER MOVIMIENTO
void cerrarMano() {
  cerrarPulgar();
  cerrarPulgarDedo();
  cerrarIndice();
  cerrarMedio();
  cerrarDobles();
}

//SEGUNDO MOVIMIENTO
void apuntar() {
  cerrarPulgar();
  cerrarPulgarDedo();
  abrirIndice();
  cerrarMedio();
  cerrarDobles();
}

//TERCER MOVIMIENTO
void pazYAmor() {
  cerrarPulgar();
  cerrarPulgarDedo();
  abrirIndice();
  abrirMedio();
  cerrarDobles();
}

//CUARTO MOVIMIENTO
void ok() {
  abrirPulgar();
  abrirPulgarDedo();
  cerrarIndice();
  cerrarMedio();
  cerrarDobles();
}

int dato=0;

void setup() {
  Serial.begin(9600);
  
  //Pines de los Servo
  pulgar.attach(11);
  pulgarDedo.attach(10);
  indice.attach(9);
  medio.attach(6);
  dobles.attach(5);
  
  //Mano Abierta
  pulgar.write(50);
  pulgarDedo.write(130);
  indice.write(110);
  medio.write(10);
  dobles.write(40);
}
 
void loop() {
  if (Serial.available()){
    Serial.println("Disponible");
    delay(500);
    dato = Serial.read();
    if (dato == '1'){
      Serial.println("Cerrar Mano");
      cerrarMano();
      delay(2000);  
    }
    else if (dato == '2'){
      Serial.println("Apuntar");
      apuntar();
      delay(2000);  
    }
    else if (dato == '3'){
      Serial.println("Paz y Amor");
      pazYAmor();
      delay(2000);  
    }
    else if (dato == '4'){
      Serial.println("OK");
      ok();
      delay(2000);  
    }
  }
  Serial.println("Abrir Mano");
  abrirMano();
  delay(500);
}
