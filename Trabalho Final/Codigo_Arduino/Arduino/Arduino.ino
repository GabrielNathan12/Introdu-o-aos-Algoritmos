#include <SD.h>
#include <dht.h>
 
#define dhtpin A1
 
dht DHT;
 
const int CS = 4;  
 
void setup()
{
  Serial.begin(9600);
  
  if (!SD.begin(CS)) 
  {
    Serial.println("Falha ao acessar o cartao SD !");
    Serial.println("Verifique o cartao/conexoes e reinicie o Arduino...");
    return;
  }
  Serial.println("Cartao iniciado corretamente !");
}
 
void loop() 
{
   DHT.read11(dhtpin);
   Serial.print("Temperatura = ");
   Serial.print(DHT.temperature); 
   Serial.println(" Celsius  ");
   Serial.print ("Umidade = ");
   Serial.print (DHT.humidity);
   Serial.println (" % ");
   
    File dataFile = SD.open("arquivo1.txt", FILE_WRITE);
    
    if (dataFile) 
    {
   
      dataFile.print("Temperatura = ");
      dataFile.print(DHT.temperature); 
      dataFile.println(" Celsius  ");
      dataFile.close();
    }  
    else 
    {
     
      Serial.println("Erro ao abrir arquivo1.txt !");
    } 
    delay (5000);
  }
