int motores = 4;
bool encendido;
int estado;
String movimiento;

void setup() {
pinMode(motores, OUTPUT);
Serial.begin(9600);
encendido = true;
}

void loop() {
if(estado == 0){
digitalWrite(motores, LOW);
movimiento = "Apagado!";
encendido = false;
}
else if(estado == 1){
digitalWrite(motores, HIGH);
movimiento = "Encendido!";
encendido = true;
}

}
