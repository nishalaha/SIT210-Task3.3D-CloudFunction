int led = D5; // the pin the LED is connected

void setup() {
    
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handler); // subscribes to particle.publish on Deakin_RIOT_SIT210_Photon_Buddy, then calls function handler
    
}

void handler(const char *event, const char *data) { // calls handler function and publishers event, name & data

    if (strcmp(data, "wave") == 0) { //wave signal, will blink 3 times
        digitalWrite(led, HIGH);
        delay(1000);  
        digitalWrite(led, LOW);
        delay(1000);    
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000); 
   
    }
        
}