# I2C_Connected
creating a simple project using two  Arduino boards--one with a button and the other with an LED.


Here's a step-by-step guide to achieve this:

# Materials Needed:

   1.﻿﻿﻿ Two Arduino boards (e.g., Arduino Uno)
   ﻿﻿﻿2. wires
   ﻿﻿﻿3. Push-button 
﻿﻿﻿   4. LED
   ﻿﻿﻿5. Resistor 
   
# Circuit Connections: 

  ![circle](circle.png)

Arduino 1 (Button) Connections:

﻿﻿Connect one leg of the button to GND.
﻿﻿Connect the other leg of the button to a digital pin (e.g., Pin 2).
﻿﻿Add a pull-up resistor by connecting a resistor (10k ohms) between the digital pin and +5V.
﻿﻿Connect the Arduino's GND to the breadboard's GND and + 5V to the breadboard's +5V.
Arduino 2 (LED) Connections:
﻿﻿Connect the anode (longer leg) of the LED to a current-limiting resistor (220-330 ohms).
﻿﻿Connect the other end of the resistor to a digital pin (e.g., Pin 13).
﻿﻿Connect the cathode (shorter leg) of the LED to GND.

# Arduino Code:

Arduino 1 (Button) Code:

   
    int botton = 7;
    bool bottonValue = LOW;
    char x;
    void setup() {
    pinMode(botton, INPUT_PULLUP);
    Serial.begin(9600);
    }
    void loop() 
    {
     bottonValue = digitalRead(botton);
     switch (bottonValue)
    {
    case HIGH:
     Serial.println("H");
    break;

    case LOW:
      Serial.println("L");
    break;

    default:
    break; 
    }

    }  
    

Arduino 2 (LED) Code:

