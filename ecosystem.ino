// Feel free to use and modify but keep authors attribution
// Created by Dennis Rotnov

#include <NoDelay.h>

#define CLOUD_WHITE_1 0  
#define CLOUD_WHITE_2 1  
#define CLOUD_BLUE_1 3  
#define LIGHT_CRAB 4

const int ALGIE_RED = 26;
const int ALGIE_GREEN = 27;
const int ALGIE_BLUE = 28;

// int algie_delay = 1500;     
// int lightning_delay = 200;      

void setup() {
  pinMode(CLOUD_WHITE_1, OUTPUT);
  pinMode(CLOUD_WHITE_2, OUTPUT);
  pinMode(CLOUD_BLUE_1, OUTPUT);
  pinMode(LIGHT_CRAB, OUTPUT);
  pinMode(ALGIE_RED, OUTPUT);
  pinMode(ALGIE_GREEN, OUTPUT);
  pinMode(ALGIE_BLUE, OUTPUT);

  digitalWrite(CLOUD_WHITE_1, 0);        
  digitalWrite(CLOUD_WHITE_2, 0);        
  digitalWrite(CLOUD_BLUE_1, 1);    
  digitalWrite(LIGHT_CRAB, 1);          
}

 void loop() {
  algie_color_effect();
  lightning_color_effect();
}

void algie_color_effect() {
  analogWrite(ALGIE_RED,   0);
  analogWrite(ALGIE_GREEN, 201);
  analogWrite(ALGIE_BLUE,  204);
  delay(1500);
  analogWrite(ALGIE_RED,   52);
  analogWrite(ALGIE_GREEN, 168);
  analogWrite(ALGIE_BLUE,  83);
  delay(1500);
}

void lightning_color_effect() {
  digitalWrite(CLOUD_WHITE_1, 1);
  delay(200);        
  digitalWrite(CLOUD_WHITE_2, 1);     
  delay(200);
  digitalWrite(CLOUD_BLUE_1, 1);       
  digitalWrite(CLOUD_WHITE_1, 0);        
  digitalWrite(CLOUD_WHITE_2, 0); 
  delay(2000); 
}
