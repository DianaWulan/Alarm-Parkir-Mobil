#include <HCSR04.h> //Memasukkan library HCSR04
int Buzzer = 3; //Membuat variabel Buzzer berisi 3
float jarak; //Membuat variabel jarak
HCSR04 hc(5,6); //Mendefinisikan pin D5 sebagai Trig dan D6 sebagai Echo

void setup(){
pinMode (Buzzer, OUTPUT); //Membuat pin Buzzer (Digital 3) sebagai output
Serial.begin(9600);
}

void loop(){
jarak = hc.dist(); //Memasukkan pembacaan sensor ke variabel jarak
if(jarak < 5){ //jika jarak < 5 cm maka

digitalWrite(Buzzer,LOW); //buzzer menyala selama
delay(100); //100 ms
digitalWrite(Buzzer,HIGH); //buzzer mati selama
delay(100); //100ms
}

else if(jarak < 10){ //jika jarak < 10 cm maka
digitalWrite(Buzzer,LOW); //buzzer menyala selama
delay(250); //250 ms
digitalWrite(Buzzer,HIGH); //buzzer mati selama
delay(250); //250 ms
}

else if(jarak < 15){ //jika jarak < 15 cm maka
digitalWrite(Buzzer,LOW); //buzzer menyala selama
delay(500); //500 ms
digitalWrite(Buzzer,HIGH); //buzzer mati selama
delay(500); //500 ms

}
Serial.print("Jarak(cm): ");
Serial.println(jarak);
}
