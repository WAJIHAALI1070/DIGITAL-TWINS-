// Lepton-FLiR-Arduino Module Info
// In this example, we enable debug output support. If one uncomments the line below
// inside the main header file (or defines it via custom build flag), debug output
// support will be enabled and the printModuleInfo() method will become available.
// Calling this method will display information about the module itself, including
// initalized states, register values, current settings, etc. Additionally, all
// library calls being made will display internal debug information about the
// structure of the call itself.
//
// In LeptonFLiR.h:
// // Uncomment this define to enable debug output.
// #define LEPFLIR_ENABLE_DEBUG_OUTPUT     1

#include "LeptonFLiR.h"

LeptonFLiR flirController;
#define SDA_PIN 2  // You can change this to your preferred SDA pin
#define SCL_PIN 4  // You can change this to your preferred SCL pin
#define CLK_PIN 5 // pin for the clock
#define MOSI_PIN 23
#define MISO_PIN 18

void setup() {
    Serial.begin(9600);

    Wire.begin(SDA_PIN,SCL_PIN);                       // Wire must be started first
    Wire.setClock(100000);              // Supported baud rates are 100kHz, 400kHz, and 1000kHz
    SPI.begin();                        // SPI must be started first as well
    // Using 40x30 8bpp memory allocation mode and default celsius temperature mode
    flirController.init(LeptonFLiR_ImageStorageMode_40x30_8bpp);
    
}
void loop() {
  flirController.printModuleInfo();
  delay(5000);
}
