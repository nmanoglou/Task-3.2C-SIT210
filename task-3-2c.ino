// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

//Constants
#define DHTPIN 6     // what pin we're connected to
#define DHTTYPE DHT22    

DHT dht(DHTPIN, DHTTYPE);

int led = D7;
double temp_double;

void setup()
{
    pinMode(led, OUTPUT);
    dht.begin();
    Particle.variable("temp", temp_double);

}

void loop() {
    
    delay(2000);
    
    //Read data and store it to variables hum and temp
    temp_double= dht.getTempCelcius();

    delay(30000); 
}